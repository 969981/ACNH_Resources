
uint FUN_022af310(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  undefined *local_70;
  int local_68;
  int iStack_64;
  undefined *local_60;
  int local_58;
  int iStack_54;
  
  iVar1 = *(int *)(param_1 + 0x24) + 1;
  iVar7 = *(int *)(param_1 + 0x14);
  if (iVar1 == iVar7) {
    uVar5 = 1;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x10);
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    puVar3 = PTR_DAT_04bb2018 + 0x10;
    iVar8 = iVar4;
    do {
      local_60 = puVar2;
      local_58 = iVar8;
      iStack_54 = iVar7;
      uVar6 = FUN_0097b460(&local_60);
      if ((uVar6 & 1) != 0) {
        uVar5 = 0;
        break;
      }
      fVar9 = (float)local_58 * 0.5;
      uVar5 = 0;
      if (fVar9 != (float)(int)fVar9) {
        uVar5 = (uint)(fVar9 < 0.0);
      }
      local_68 = (int)fVar9 - uVar5;
      fVar9 = (float)iStack_54 * 0.5;
      uVar5 = 0;
      if (fVar9 != (float)(int)fVar9) {
        uVar5 = (uint)(fVar9 < 0.0);
      }
      iStack_64 = (int)fVar9 - uVar5;
      local_70 = puVar3;
      uVar5 = FUN_00977130(&local_70);
      if ((uVar5 & 1) == 0) break;
      if (iVar8 < *(int *)(param_1 + 0x20)) {
        iVar8 = iVar8 + 1;
      }
      else {
        iVar7 = iVar7 + 1;
        iVar8 = *(int *)(param_1 + 0x10);
      }
    } while ((iVar4 != iVar8) || (iVar1 != iVar7));
  }
  return uVar5 & 1;
}

