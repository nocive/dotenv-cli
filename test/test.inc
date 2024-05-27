# vim: set ft=bash:

function red() {
	local str="$1"

    local red="\e[31m"
    local endcolor="\e[0m"

	echo -e "$red$str$endcolor"
}

function green() {
	local str="$1"

    local green="\e[32m"
    local endcolor="\e[0m"

	echo -e "$green$str$endcolor"
}
