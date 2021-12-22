# chance

Step-by-step tutorial in installing MySQL Server and Connector/C++ 8.0.11 for C++ application development on Visual Studio Community 2017. This tutorial also shows the end result of running a simple C++ Windows Console Application that connects to the MySQL Server and displays table data.

System specs for this tutorial
⦁ Windows 10 Professional
⦁ 64 Bit machine
⦁ Visual Studio Community 2017 (with Microsoft .NET Framework version 4.7.03056)
⦁ MySQL Community Server 8.0.11
⦁ MySQL Connector/C++ version 8.0.11
(Boost Libraries NOT REQUIRED)

Tutorial Steps
1. Download and install MySQL Installer (https://dev.mysql.com/downloads/windo...)
2. Using MySQL Installer install:
 a. MySQL Community Server 8.0.11
 b. MySQL Connector/C++ version 8.0.11
3. Update the relevant include and lib directories in Visual Studio Community 2017
 a. C:\Program Files\MySQL\Connector C++ 1.1\include
 b. C:\Program Files\MySQL\MySQL Server 8.0\include
 c. C:\Program Files\MySQL\Connector C++ 1.1\lib\opt
 d. C:\Program Files\MySQL\MySQL Server 8.0\lib
 e. mysqlcppconn.lib
 f. libmysql.lib
4. Code, build, run
 a. Copy libmysql.dll from C:\Program Files\MySQL\MySQL Server 8.0\lib 
  to the executable directory
 b. Copy libeay32.dll and ssleay32.dll from 
  C:\Program Files\MySQL\MySQL Server 8.0\bin to the executable directory

SQL Statements to create linc database, table and data:
CREATE DATABASE lincdb;
USE lincdb;
CREATE TABLE linc (id int, name varchar(32), score int);
INSERT INTO linc (id, name, score) VALUES (1, "Marianne", 89);
INSERT INTO linc (id, name, score) VALUES (2, "Jimmy", 62);
INSERT INTO linc (id, name, score) VALUES (3, "Ling", 78);
SELECT * FROM linc;
