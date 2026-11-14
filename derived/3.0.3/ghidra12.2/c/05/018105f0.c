
bool FUN_018105f0(float *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *local_38;
  int local_30;
  int iStack_2c;
  undefined8 local_28;
  undefined8 local_8;
  
  puVar1 = PTR_DAT_04bb5ce0;
  local_38 = PTR_DAT_04bb2010 + 0x10;
  local_30 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  iStack_2c = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  if (*(long *)PTR_DAT_04bb5ce0 != 0) {
    local_8 = 0;
    local_28 = 0;
    lVar3 = *(long *)PTR_DAT_04bb27c8;
    if (((lVar3 != 0) && (*(long *)(lVar3 + 0xa8) != 0)) &&
       (uVar2 = FUN_00948e68(lVar3 + 0x28,&local_38,(long)&local_8 + 4,&local_8,(long)&local_28 + 4,
                             &local_28), (uVar2 & 1) != 0)) {
      return (((*(long *)puVar1 != 0 && local_8._4_4_ == 7) && (int)local_8 == 7) &&
             local_28._4_4_ == 7) && (int)local_28 == 7;
    }
  }
  return true;
}

