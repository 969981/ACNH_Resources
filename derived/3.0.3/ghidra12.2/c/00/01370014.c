
bool FUN_01370014(int *param_1,long param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 **ppuVar8;
  undefined8 *local_70;
  int local_68 [2];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  ppuVar8 = &local_70;
  iVar1 = *(int *)(param_3 + 0x10);
  iVar2 = *(int *)(param_5 + 8);
  if (iVar2 < iVar1 || *(int *)(param_3 + 0x20) < iVar2) {
    iVar5 = *(int *)(param_5 + 0xc);
    iVar6 = *(int *)(param_3 + 0x14);
LAB_0137009c:
    iVar3 = iVar2;
    if (iVar2 <= iVar1) {
      iVar3 = iVar1;
    }
    iVar7 = iVar5;
    if (iVar5 <= iVar6) {
      iVar7 = iVar6;
    }
    if (iVar3 != *(int *)(param_2 + 8)) {
      return false;
    }
    if (iVar7 != *(int *)(param_2 + 0xc)) {
      return false;
    }
  }
  else {
    iVar6 = *(int *)(param_3 + 0x14);
    iVar5 = *(int *)(param_5 + 0xc);
    if ((iVar5 < iVar6) || (*(int *)(param_3 + 0x24) < iVar5)) goto LAB_0137009c;
    if (iVar2 != *(int *)(param_2 + 8)) {
      return false;
    }
    iVar7 = iVar5;
    if (iVar5 != *(int *)(param_2 + 0xc)) {
      return false;
    }
  }
  iVar3 = *param_1;
  if (iVar3 == 2) {
    if (*(char *)((long)param_1 + 0x36) != '\0') {
LAB_013700f0:
      if (((iVar1 <= iVar2 && iVar2 <= *(int *)(param_3 + 0x20)) && (iVar6 <= iVar5)) &&
         (iVar5 <= *(int *)(param_3 + 0x24))) {
        return false;
      }
      uVar4 = FUN_01376f10(iVar3,param_5);
      if ((uVar4 & 1) == 0) {
        return false;
      }
      return (bool)*(char *)((long)param_1 + 0x37) == (iVar7 == *(int *)(param_3 + 0x14));
    }
  }
  else {
    if ((iVar3 == 3) && (*(char *)((long)param_1 + 0x36) != '\0')) goto LAB_013700f0;
    if (iVar3 != 3) {
      local_68[0] = *(undefined4 *)(param_4 + 0x10);
      local_68[1] = *(undefined4 *)(param_4 + 0x14);
      local_58 = *(undefined4 *)(param_4 + 0x20);
      uStack_44 = *(undefined4 *)(param_4 + 0x24);
      local_70 = &DAT_048f9750;
      local_60 = &DAT_048f9750;
      local_50 = &DAT_048f9750;
      local_40 = &DAT_048f9750;
      uStack_54 = local_68[1];
      local_48 = local_68[0];
      local_38 = local_58;
      local_34 = uStack_44;
      uVar4 = FUN_01376f10(iVar3,&local_70);
      if ((uVar4 & 1) == 0) {
        ppuVar8 = &local_60;
        uVar4 = FUN_01376f10(*param_1,ppuVar8);
        if ((uVar4 & 1) == 0) {
          ppuVar8 = &local_50;
          uVar4 = FUN_01376f10(*param_1,ppuVar8);
          if ((uVar4 & 1) == 0) {
            ppuVar8 = &local_40;
            uVar4 = FUN_01376f10(*param_1,ppuVar8);
            if ((uVar4 & 1) == 0) {
              return false;
            }
          }
        }
      }
      if (*(int *)(ppuVar8 + 1) < *(int *)(param_3 + 0x10)) {
        return false;
      }
      if (*(int *)(param_3 + 0x20) < *(int *)(ppuVar8 + 1)) {
        return false;
      }
      if (*(int *)((long)ppuVar8 + 0xc) < *(int *)(param_3 + 0x14)) {
        return false;
      }
      if (*(int *)(param_3 + 0x24) < *(int *)((long)ppuVar8 + 0xc)) {
        return false;
      }
      return true;
    }
  }
  uVar4 = FUN_01376f10(iVar3,param_5);
  if ((uVar4 & 1) == 0) {
    return false;
  }
  return true;
}

