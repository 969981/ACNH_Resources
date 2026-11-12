
int FUN_0097aa70(float *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined *local_40;
  int local_38;
  int iStack_34;
  
  local_40 = PTR_DAT_04bb2010 + 0x10;
  local_38 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  iStack_34 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  uVar2 = FUN_01385040(&local_40);
  iVar4 = 0x34;
  if ((uVar2 & 1) == 0) {
    iVar4 = 7;
  }
  if (((DAT_05292338 != 0) && (DAT_05aed670 != 0)) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar3 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar1 = FUN_006bd550(*puVar3,0);
    if (((iVar1 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
       ((*(long *)(DAT_05aed670 + 0x330) != 0 &&
        (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) != 0)))) {
      if (((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) ||
         (*(char *)(DAT_04cfae30 + 0x11c8) != '\0')) {
        iVar1 = 7;
      }
      else {
        iVar1 = FUN_0093b18c(DAT_04cfae30 + 0x28,param_1);
      }
      if (iVar1 != 7) {
        iVar4 = iVar1;
      }
    }
  }
  return iVar4;
}

