
undefined4 FUN_03684640(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined **local_70;
  undefined4 *puStack_68;
  undefined4 *local_60;
  undefined4 *puStack_58;
  uint local_38;
  uint uStack_34;
  
  piVar7 = (int *)*param_1;
  local_7c = 0;
  puStack_68 = &local_78;
  iVar2 = *piVar7;
  iVar1 = piVar7[3];
  local_70 = &PTR_FUN_04b43458;
  local_60 = &uStack_74;
  puStack_58 = &local_7c;
  uVar3 = 0;
  if (*piVar7 != 0) {
    uVar3 = (iVar2 * piVar7[2] + -1) / *piVar7;
  }
  if ((int)uVar3 < 0) {
    local_7c = 0;
  }
  else {
    uVar8 = 0;
    local_78 = param_3;
    uStack_74 = param_2;
    do {
      iVar4 = 0;
      if (*piVar7 != 0) {
        iVar4 = (iVar1 * iVar2 + -1) / *piVar7;
      }
      if (-1 < iVar4) {
        uVar9 = 0;
        do {
          lVar6 = *(long *)(piVar7 + 4) + (long)(int)(uVar8 + piVar7[2] * uVar9) * 0x23c;
          if ((uint)piVar7[3] <= uVar9 || (uint)piVar7[2] <= uVar8) {
            lVar6 = 0;
          }
          local_38 = uVar8;
          uStack_34 = uVar9;
          (*(code *)*local_70)(&local_70,lVar6,&local_38);
          uVar9 = uVar9 + 1;
        } while (iVar4 + 1U != uVar9);
      }
      bVar5 = uVar8 != uVar3;
      uVar8 = uVar8 + 1;
    } while (bVar5);
  }
  return local_7c;
}

