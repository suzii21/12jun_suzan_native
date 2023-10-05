-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Generation Time: Oct 05, 2023 at 02:01 PM
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
-- Database: `empl-incen`
--

-- --------------------------------------------------------

--
-- Table structure for table `employe`
--

CREATE TABLE `employe` (
  `emp_id` int(11) NOT NULL,
  `first name` varchar(30) NOT NULL,
  `last name` varchar(30) NOT NULL,
  `salary` int(11) NOT NULL,
  `joineing_date` date NOT NULL,
  `department` varchar(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employe`
--

INSERT INTO `employe` (`emp_id`, `first name`, `last name`, `salary`, `joineing_date`, `department`) VALUES
(1, 'john', 'abraham', 1000000, '2013-01-01', 'banking'),
(2, 'michael', 'clarke', 800000, '2013-01-01', 'insurence'),
(3, 'roy', 'thomas', 700000, '2013-01-01', 'banking'),
(4, 'tom', 'jose', 600000, '2013-02-01', 'insurance'),
(5, 'jery', 'pinto', 650000, '2013-02-01', 'insurence'),
(6, 'philip', 'mathew', 750000, '2013-01-01', 'service');

-- --------------------------------------------------------

--
-- Table structure for table `Incentive`
--

CREATE TABLE `Incentive` (
  `emp_ref_id` int(11) NOT NULL,
  `incentive_date` date NOT NULL,
  `incentive_amount` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `Incentive`
--

INSERT INTO `Incentive` (`emp_ref_id`, `incentive_date`, `incentive_amount`) VALUES
(1, '2013-02-01', 5000),
(2, '2013-02-01', 3000),
(3, '2013-02-01', 4000),
(4, '2013-01-01', 4500),
(5, '2013-01-01', 3500);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
