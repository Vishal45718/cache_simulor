int search_label(std::string label, struct store_label label_line[]);
std::string remove_starting_zeros(std::string s);
unsigned int binary_to_decimal(std::string s);
std::string decimal_to_hex(unsigned int decimal);
std::string decimal_to_hex_no(unsigned long long decimal, int no_digits);
std::string signed_decimal_to_hex_no(long long decimal, int no_digits);
int hex_to_deci(std::string s);
std::string hex_to_bi(std::string s);
std::string bi_to_signed_decimal(const std::string& s);
long long int hex_to_deci_64(const std::string& s);
unsigned long long int hex_to_deci_64_unsigned(const std::string& s);
std::string deci_to_bi(int x, int no_of_bits);
std::string register_to_bi(std::string s, int line_counter);
