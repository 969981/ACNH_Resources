
void FUN_00190440(undefined8 param_1)

{
  code *pcVar1;
  
  std::__libcpp_verbose_abort
            ("out_of_range was thrown in -fno-exceptions mode with message \"%s\"",param_1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x190454);
  (*pcVar1)();
}

