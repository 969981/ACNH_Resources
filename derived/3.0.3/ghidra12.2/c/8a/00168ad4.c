
int FUN_00168ad4(long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00168b44(param_1,param_3);
  if (iVar1 == 0) {
    memset((void *)(param_1 + 0x40),0,0x400);
    if (param_2 < 0x1000) {
      *(ulong *)(param_1 + 0x30) = param_2;
    }
    *(bool *)(param_1 + 0x450) = param_2 < 0x1000;
    *(ulong *)(param_1 + 0x440) = param_2;
    *(undefined8 *)(param_1 + 0x448) = 0xffffffff;
  }
  return iVar1;
}

