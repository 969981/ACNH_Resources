
void FUN_00169eac(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0x100040 >> (ulong)((param_3 & 3) << 3);
  if (2 < param_3) {
    uVar1 = 0;
  }
  iVar2 = FUN_0016b628(param_1,uVar1);
  if ((iVar2 == 0) && (iVar2 = FUN_0016af68(param_1,*param_2,param_2[2]), iVar2 == 0)) {
    FUN_0016af68(param_1,param_2[1],param_2[3]);
    return;
  }
  return;
}

