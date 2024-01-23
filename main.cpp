#include <testcaser/integrator>

using testcaser::integrator::VirtualJudge;

int main() {
  const std::string root = "./";
  VirtualJudge()
      .set_binary(root + "main2")
      .set_input_file(root + "input.txt")
      .set_output_file(root + "output2.txt")
      .set_time_limit(5)
      .set_memory_limit(1024*25)
      .execute()
      .print_result();
  return 0;
}
