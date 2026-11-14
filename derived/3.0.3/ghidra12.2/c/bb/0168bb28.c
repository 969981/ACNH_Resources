
bool FUN_0168bb28(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined *local_70;
  int local_68;
  int iStack_64;
  
  puVar3 = PTR_DAT_04bb27c8;
  puVar2 = PTR_DAT_04bb2018;
  iVar5 = *(int *)(param_1 + 0xc);
  puVar1 = PTR_DAT_04bb2018 + 0x10;
  fVar8 = (float)*(int *)(param_1 + 8) * 0.5;
  fVar10 = (float)iVar5 * 0.5;
  iVar6 = (int)fVar8;
  fVar9 = (float)(int)fVar8;
  uVar7 = 0;
  if (fVar8 != fVar9) {
    uVar7 = (uint)(fVar8 < 0.0);
  }
  local_68 = iVar6 - uVar7;
  uVar7 = 0;
  if (fVar10 != (float)(int)fVar10) {
    uVar7 = (uint)(fVar10 < 0.0);
  }
  iStack_64 = (int)fVar10 - uVar7;
  lVar4 = *(long *)PTR_DAT_04bb27c8;
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x90) == 0)) {
    fVar10 = -500.0;
  }
  else {
    local_70 = puVar1;
    fVar10 = (float)FUN_0094bce0(lVar4 + 0x28,&local_70);
    iVar5 = *(int *)(param_1 + 0xc);
    lVar4 = *(long *)puVar3;
    fVar8 = (float)*(int *)(param_1 + 8) * 0.5;
    iVar6 = (int)fVar8;
    fVar9 = (float)(int)fVar8;
  }
  *(int *)(param_1 + 0xc) = iVar5 + 2;
  uVar7 = 0;
  if (fVar8 != fVar9) {
    uVar7 = (uint)(fVar8 < 0.0);
  }
  local_68 = iVar6 - uVar7;
  fVar8 = (float)(iVar5 + 2) * 0.5;
  uVar7 = 0;
  if (fVar8 != (float)(int)fVar8) {
    uVar7 = (uint)(fVar8 < 0.0);
  }
  iStack_64 = (int)fVar8 - uVar7;
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x90) == 0)) {
    fVar8 = -500.0;
  }
  else {
    local_70 = puVar1;
    fVar8 = (float)FUN_0094bce0(lVar4 + 0x28,&local_70);
  }
  if (fVar8 - fVar10 < 15.0) {
    local_70 = puVar2 + 0x10;
    iVar5 = *(int *)(param_1 + 0xc) + 2;
    *(int *)(param_1 + 0xc) = iVar5;
    fVar9 = (float)*(int *)(param_1 + 8) * 0.5;
    uVar7 = 0;
    if (fVar9 != (float)(int)fVar9) {
      uVar7 = (uint)(fVar9 < 0.0);
    }
    local_68 = (int)fVar9 - uVar7;
    fVar9 = (float)iVar5 * 0.5;
    uVar7 = 0;
    if (fVar9 != (float)(int)fVar9) {
      uVar7 = (uint)(fVar9 < 0.0);
    }
    iStack_64 = (int)fVar9 - uVar7;
    lVar4 = *(long *)puVar3;
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x90) == 0)) {
      fVar9 = -500.0;
    }
    else {
      fVar9 = (float)FUN_0094bce0(lVar4 + 0x28,&local_70);
    }
    if ((fVar9 - fVar8 < 15.0) || (fVar9 - fVar8 < 20.0)) {
      local_70 = puVar2 + 0x10;
      iVar5 = *(int *)(param_1 + 0xc) + 2;
      *(int *)(param_1 + 0xc) = iVar5;
      fVar8 = (float)*(int *)(param_1 + 8) * 0.5;
      uVar7 = 0;
      if (fVar8 != (float)(int)fVar8) {
        uVar7 = (uint)(fVar8 < 0.0);
      }
      local_68 = (int)fVar8 - uVar7;
      fVar8 = (float)iVar5 * 0.5;
      uVar7 = 0;
      if (fVar8 != (float)(int)fVar8) {
        uVar7 = (uint)(fVar8 < 0.0);
      }
      iStack_64 = (int)fVar8 - uVar7;
      lVar4 = *(long *)puVar3;
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0x90) == 0)) {
        fVar8 = -500.0;
      }
      else {
        fVar8 = (float)FUN_0094bce0(lVar4 + 0x28,&local_70);
      }
      fVar9 = fVar8 - fVar9;
      if (((fVar9 < 30.0) || (fVar9 < 15.0)) || (fVar9 < 20.0)) {
        local_70 = puVar2 + 0x10;
        iVar5 = *(int *)(param_1 + 0xc) + 2;
        *(int *)(param_1 + 0xc) = iVar5;
        fVar9 = (float)*(int *)(param_1 + 8) * 0.5;
        uVar7 = 0;
        if (fVar9 != (float)(int)fVar9) {
          uVar7 = (uint)(fVar9 < 0.0);
        }
        local_68 = (int)fVar9 - uVar7;
        fVar9 = (float)iVar5 * 0.5;
        uVar7 = 0;
        if (fVar9 != (float)(int)fVar9) {
          uVar7 = (uint)(fVar9 < 0.0);
        }
        iStack_64 = (int)fVar9 - uVar7;
        lVar4 = *(long *)puVar3;
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x90) == 0)) {
          fVar9 = -500.0;
        }
        else {
          fVar9 = (float)FUN_0094bce0(lVar4 + 0x28,&local_70);
        }
        fVar9 = fVar9 - fVar8;
        return 30.0 <= fVar9 && (20.0 <= fVar9 && 15.0 <= fVar9);
      }
    }
  }
  return true;
}

