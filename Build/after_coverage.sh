#!/bin/bash

./Build/external/Coveralls/coveralls.rb --extension m 	\
	--exclude-folder Tests 				\
	--exclude-folder Use Cases 			\
	—-exclude-folder Legacy

