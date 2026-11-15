
undefined8 FUN_022ebc9c(undefined8 param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  float local_50 [3];
  float local_44 [3];
  undefined **local_38;
  int local_30;
  int iStack_2c;
  
  local_30 = (int)((float)(int)*param_2 / 10.0) - (uint)(*param_2 < 0.0);
  iStack_2c = (int)((float)(int)param_2[2] / 10.0) - (uint)(param_2[2] < 0.0);
  local_44[0] = (float)local_30 * 10.0 + 5.0;
  local_44[2] = (float)iStack_2c * 10.0 + 5.0;
  local_44[1] = 0.0;
  local_50[1] = 0.0;
  local_50[0] = (float)(int)((int)((float)(int)param_2[3] / 10.0) - (uint)(param_2[3] < 0.0)) * 10.0
                + 5.0;
  local_38 = &PTR_FUN_048f9730;
  local_50[2] = (float)(int)((int)((float)(int)param_2[5] / 10.0) - (uint)(param_2[5] < 0.0)) * 10.0
                + 5.0;
  uVar4 = FUN_013852c0(&local_38,*(undefined1 *)(param_2 + 10));
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  iVar3 = FUN_01318f40(local_44,local_50);
  if (iVar3 == 0) {
    if (*(char *)(param_2 + 10) == '\0') {
      if ((((((*(long *)PTR_DAT_04bb27c8 != 0) &&
             (lVar6 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar6 != 0)) &&
            (uVar1 = (int)((float)(int)param_2[3] / 5.0) - (uint)(param_2[3] < 0.0), -1 < (int)uVar1
            )) && ((uVar2 = (int)((float)(int)param_2[5] / 5.0) - (uint)(param_2[5] < 0.0),
                   -1 < (int)uVar2 && (uVar1 < *(uint *)(lVar6 + 0x38))))) &&
          ((uVar2 < *(uint *)(lVar6 + 0x3c) &&
           ((uVar1 = uVar1 + *(uint *)(lVar6 + 0x38) * uVar2, uVar1 < *(uint *)(lVar6 + 0x68) &&
            (*(long *)(lVar6 + 0x70) != 0)))))) &&
         ((*(uint *)(*(long *)(lVar6 + 0x70) + (long)(int)uVar1 * 4) >> 3 & 1) != 0))
      goto LAB_022ebdac;
    }
    uVar5 = 1;
  }
  else {
LAB_022ebdac:
    uVar5 = 0;
  }
  return uVar5;
}

