
void FUN_00422460(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  
  (**(code **)(*DAT_04c6f378 + 0x20))(DAT_04c6f378,4,param_1,param_4,param_2,param_3);
  (**(code **)(*DAT_04c6f258 + 0x20))(DAT_04c6f258,4,param_1,param_4,param_2,param_3);
  FUN_00445340();
  FUN_004224e0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x4224dc);
  (*pcVar1)();
}

