
void FUN_001b7f58(long *param_1,long param_2)

{
  int iVar1;
  undefined1 local_a0 [128];
  
  local_a0[0] = 0;
  if (*(char *)(param_2 + 0x68) == '\0') {
    FUN_001b8590(param_2);
    iVar1 = FUN_001e1884(*(undefined8 *)(param_2 + 8));
  }
  else {
    iVar1 = FUN_001e1884(*(undefined8 *)(param_2 + 8));
  }
  if (iVar1 != 0) {
    FUN_001e188c(*(undefined8 *)(param_2 + 8),local_a0,0x80);
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = (long)(PTR_DAT_04bc0ec8 + 0x10);
  param_1[3] = (long)(param_1 + 1);
  param_1[4] = 0x10;
  FUN_0018b070(param_1,local_a0,0xffffffffffffffff);
  return;
}

