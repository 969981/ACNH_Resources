
undefined8 FUN_0228e858(long param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *local_40;
  int local_38;
  int iStack_34;
  
  if (*(char *)(param_1 + 0xb30) != '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0xb31) != '\0') {
    local_40 = (undefined8 *)(PTR_DAT_04bb2010 + 0x10);
    local_38 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
    iStack_34 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
    uVar5 = FUN_02a7c2e0(param_1 + 0x3f0,&local_40);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
  }
  if (*(char *)(param_1 + 0xb32) != '\0') {
    iVar1 = *(int *)(param_1 + 0xb28);
    iVar2 = *(int *)(param_1 + 0xb1c);
    iVar3 = *(int *)(param_1 + 0xb2c);
    local_38 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
    iStack_34 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
    iVar4 = *(int *)(param_1 + 0xb18);
    if (((iVar4 <= local_38 && local_38 <= iVar1) && iVar2 <= iStack_34) && iStack_34 == iVar3 ||
        (((iVar4 <= local_38 && local_38 <= iVar1) && iVar2 <= iStack_34) && iStack_34 - iVar3 < 0)
        != (((iVar4 <= local_38 && local_38 <= iVar1) && iVar2 <= iStack_34) &&
           SBORROW4(iStack_34,iVar3))) {
      if (*(char *)(param_1 + 0xb33) != '\0') {
        local_40 = &DAT_048f9750;
        uVar5 = FUN_01376f10(*(undefined4 *)(*(long *)PTR_DAT_04bb27a8 + 0x4b00),&local_40);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

