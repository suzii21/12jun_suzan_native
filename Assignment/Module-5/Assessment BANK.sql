-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Generation Time: Oct 04, 2023 at 01:15 PM
-- Server version: 10.4.28-MariaDB
-- PHP Version: 8.2.4

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `BANK`
--

-- --------------------------------------------------------

--
-- Table structure for table `account`
--

CREATE TABLE `account` (
  `acnumber` varchar(6) NOT NULL,
  `custid` varchar(6) DEFAULT NULL,
  `bid` varchar(6) DEFAULT NULL,
  `opening_balance` int(7) DEFAULT NULL,
  `aod` date DEFAULT NULL,
  `atype` varchar(10) DEFAULT NULL,
  `astatus` varchar(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `account`
--

INSERT INTO `account` (`acnumber`, `custid`, `bid`, `opening_balance`, `aod`, `atype`, `astatus`) VALUES
('A00001', 'C00001', 'B00001', 1000, '2012-12-15', 'Saving', 'Active'),
('A00002', 'C00002', 'B00001', 1000, '2012-06-12', 'Saving', 'Active'),
('A00003', 'C00003', 'B00002', 1000, '2012-05-17', 'Saving', 'Active'),
('A00004', 'C00002', 'B00005', 1000, '2013-01-27', 'Saving', 'Active');

-- --------------------------------------------------------

--
-- Table structure for table `Bank`
--

CREATE TABLE `Bank` (
  `branch_id` int(11) NOT NULL,
  `branch_name` varchar(50) DEFAULT NULL,
  `branch_city` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `branch`
--

CREATE TABLE `branch` (
  `bid` varchar(6) NOT NULL,
  `bname` varchar(30) DEFAULT NULL,
  `bcity` varchar(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `branch`
--

INSERT INTO `branch` (`bid`, `bname`, `bcity`) VALUES
('B00001', 'Asaf ali road', 'Delhi'),
('B00002', 'New delhi main branch', 'Delhi'),
('B00003', 'Delhi cantt', 'Delhi'),
('B00004', 'Jasola', 'Delhi'),
('B00005', 'Mahim', 'Mumbai');

-- --------------------------------------------------------

--
-- Table structure for table `customer`
--

CREATE TABLE `customer` (
  `custid` varchar(6) NOT NULL,
  `fname` varchar(30) DEFAULT NULL,
  `mname` varchar(30) DEFAULT NULL,
  `ltname` varchar(30) DEFAULT NULL,
  `city` varchar(15) DEFAULT NULL,
  `mobileno` varchar(10) DEFAULT NULL,
  `occupation` varchar(10) DEFAULT NULL,
  `dob` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `customer`
--

INSERT INTO `customer` (`custid`, `fname`, `mname`, `ltname`, `city`, `mobileno`, `occupation`, `dob`) VALUES
('C00001', 'sweta', 'Chandra', 'panjvani', 'Delhi', '9543198345', 'Service', '1976-12-06'),
('C00002', 'piya', 'amir', 'mir', 'Delhi', '9876532109', 'Service', '1974-10-16'),
('C00003', 'ramesh', NULL, 'sharma', 'Delhi', '9765178901', 'Student', '1981-09-26'),
('C00004', 'diya', NULL, 'bhatt', 'Delhi', '9876532109', 'Housewife', '1976-11-03'),
('C00005', 'riya', 'rakesh', 'ahir', 'Mumbai', '8976523190', 'Service', '1976-09-19');

-- --------------------------------------------------------

--
-- Table structure for table `loan`
--

CREATE TABLE `loan` (
  `custid` varchar(6) NOT NULL,
  `bid` varchar(6) NOT NULL,
  `loan_amount` int(7) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `account`
--
ALTER TABLE `account`
  ADD PRIMARY KEY (`acnumber`),
  ADD KEY `account_custid_fk` (`custid`),
  ADD KEY `account_bid_fk` (`bid`);

--
-- Indexes for table `Bank`
--
ALTER TABLE `Bank`
  ADD PRIMARY KEY (`branch_id`);

--
-- Indexes for table `branch`
--
ALTER TABLE `branch`
  ADD PRIMARY KEY (`bid`);

--
-- Indexes for table `customer`
--
ALTER TABLE `customer`
  ADD PRIMARY KEY (`custid`);

--
-- Indexes for table `loan`
--
ALTER TABLE `loan`
  ADD PRIMARY KEY (`custid`,`bid`),
  ADD KEY `loan_bid_fk` (`bid`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `account`
--
ALTER TABLE `account`
  ADD CONSTRAINT `account_bid_fk` FOREIGN KEY (`bid`) REFERENCES `branch` (`bid`),
  ADD CONSTRAINT `account_custid_fk` FOREIGN KEY (`custid`) REFERENCES `customer` (`custid`);

--
-- Constraints for table `loan`
--
ALTER TABLE `loan`
  ADD CONSTRAINT `loan_bid_fk` FOREIGN KEY (`bid`) REFERENCES `branch` (`bid`),
  ADD CONSTRAINT `loan_custid_fk` FOREIGN KEY (`custid`) REFERENCES `customer` (`custid`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
