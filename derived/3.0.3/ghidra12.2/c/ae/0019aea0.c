
undefined8 FUN_0019aea0(long param_1)

{
  long local_18;
  
  if (*(int *)(param_1 + 0x28) != 2) {
                    /* WARNING: Subroutine does not return */
    FUN_0018786c("C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/Chrono.cpp",0x2f,0xe000000e,0)
    ;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 2;
  if (DAT_04be21f1 == '\0') {
    FUN_0018cb8c(&local_18);
  }
  else {
    FUN_0018c9b0(&local_18,0);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  DAT_04c589a0 = local_18;
  *(long *)(param_1 + 0x18) = local_18 - *(long *)(param_1 + 0x10);
  return 1;
}

