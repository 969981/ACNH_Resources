
void FUN_01c67100(undefined8 param_1)

{
  code *pcVar1;
  
  std::__libcpp_verbose_abort
            ("length_error was thrown in -fno-exceptions mode with message \"%s\"",param_1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x1c67118);
  (*pcVar1)();
}

