
void FUN_0189fb50(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  puVar4 = PTR_DAT_04bbc1a0;
  puVar3 = PTR_DAT_04bb2698;
  plVar5 = (long *)param_1[0xef];
  if (plVar5 != (long *)0x0) {
    plVar10 = plVar5 + -1;
    lVar6 = *plVar10;
    if (lVar6 != 0) {
      plVar8 = plVar5 + lVar6 * 7;
      uVar9 = lVar6 * 0x38 - 0x38;
      uVar1 = (int)(uVar9 / 0x38) + 1;
      if ((uVar1 & 7) != 0) {
        lVar6 = ((ulong)uVar1 & 7) * 0x38;
        puVar2 = PTR_DAT_04bbc1a0 + 0x10;
        do {
          lVar6 = lVar6 + -0x38;
          plVar8 = plVar8 + -7;
          *plVar8 = (long)puVar2;
        } while (lVar6 != 0);
      }
      if (0x187 < uVar9) {
        puVar2 = puVar4 + 0x10;
        plVar8 = plVar8 + -0x1c;
        do {
          plVar8[0x15] = (long)puVar2;
          plVar8[0xe] = (long)puVar2;
          plVar8[7] = (long)puVar2;
          *plVar8 = (long)puVar2;
          plVar8[-7] = (long)puVar2;
          plVar8[-0xe] = (long)puVar2;
          plVar8[-0x15] = (long)puVar2;
          plVar7 = plVar8 + -0x1c;
          *plVar7 = (long)puVar2;
          plVar8 = plVar8 + -0x38;
        } while (plVar7 != plVar5);
      }
    }
    lVar6 = *(long *)puVar3;
    if (lVar6 == 0) {
      free(plVar10);
    }
    else {
      plVar5 = (long *)FUN_038cb610(lVar6,plVar10);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar10);
      }
    }
    param_1[0xef] = 0;
    *(undefined4 *)(param_1 + 0xee) = 0;
  }
  plVar5 = (long *)param_1[0xf1];
  if (plVar5 != (long *)0x0) {
    plVar10 = plVar5 + -1;
    lVar6 = *plVar10;
    if (lVar6 != 0) {
      plVar8 = plVar5 + lVar6 * 7;
      uVar9 = lVar6 * 0x38 - 0x38;
      uVar1 = (int)(uVar9 / 0x38) + 1;
      if ((uVar1 & 7) != 0) {
        lVar6 = ((ulong)uVar1 & 7) * 0x38;
        do {
          lVar6 = lVar6 + -0x38;
          plVar8 = plVar8 + -7;
          *plVar8 = (long)(puVar4 + 0x10);
        } while (lVar6 != 0);
      }
      if (0x187 < uVar9) {
        puVar2 = puVar4 + 0x10;
        plVar8 = plVar8 + -0x1c;
        do {
          plVar8[0x15] = (long)puVar2;
          plVar8[0xe] = (long)puVar2;
          plVar8[7] = (long)puVar2;
          *plVar8 = (long)puVar2;
          plVar8[-7] = (long)puVar2;
          plVar8[-0xe] = (long)puVar2;
          plVar8[-0x15] = (long)puVar2;
          plVar7 = plVar8 + -0x1c;
          *plVar7 = (long)puVar2;
          plVar8 = plVar8 + -0x38;
        } while (plVar7 != plVar5);
      }
    }
    lVar6 = *(long *)puVar3;
    if (lVar6 == 0) {
      free(plVar10);
    }
    else {
      plVar5 = (long *)FUN_038cb610(lVar6,plVar10);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar10);
      }
    }
    param_1[0xf1] = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  puVar3 = PTR_DAT_04bb5de8;
  param_1[0xf5] = (long)(puVar4 + 0x10);
  *param_1 = (long)(puVar3 + 0x10);
  return;
}

