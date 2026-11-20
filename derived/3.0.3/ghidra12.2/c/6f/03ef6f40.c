
void FUN_03ef6f40(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  
  puVar2 = PTR_DAT_04bb2698;
  lVar4 = param_1[0x5c];
  if (lVar4 != 0) {
    plVar10 = (long *)(lVar4 + -8);
    if (*plVar10 != 0) {
      lVar11 = *plVar10 * 0x758;
      do {
        FUN_03ef7630(lVar4 + -0x758 + lVar11);
        lVar11 = lVar11 + -0x758;
      } while (lVar11 != 0);
    }
    lVar4 = *(long *)puVar2;
    if (lVar4 == 0) {
      free(plVar10);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar4,plVar10);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,plVar10);
      }
    }
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5b) = 0;
  }
  puVar5 = (undefined8 *)param_1[0x4f];
  if (puVar5 != (undefined8 *)0x0) {
    plVar10 = puVar5 + -1;
    lVar4 = *plVar10;
    if (lVar4 != 0) {
      puVar6 = puVar5 + lVar4 * 5;
      uVar9 = lVar4 * 0x28 - 0x28;
      uVar1 = ((uint)(uVar9 / 0x28) & 0x7ffffff) + 1;
      if ((uVar1 & 7) != 0) {
        lVar4 = ((ulong)uVar1 & 7) * 0x28;
        do {
          lVar4 = lVar4 + -0x28;
          puVar6 = puVar6 + -5;
          *puVar6 = &PTR_LAB_04b67f18;
        } while (lVar4 != 0);
      }
      if (0x117 < uVar9) {
        puVar6 = puVar6 + -0x14;
        do {
          puVar6[0xf] = &PTR_LAB_04b67f18;
          puVar6[10] = &PTR_LAB_04b67f18;
          puVar6[5] = &PTR_LAB_04b67f18;
          *puVar6 = &PTR_LAB_04b67f18;
          puVar6[-5] = &PTR_LAB_04b67f18;
          puVar6[-10] = &PTR_LAB_04b67f18;
          puVar6[-0xf] = &PTR_LAB_04b67f18;
          puVar7 = puVar6 + -0x14;
          *puVar7 = &PTR_LAB_04b67f18;
          puVar6 = puVar6 + -0x28;
        } while (puVar7 != puVar5);
      }
    }
    lVar4 = *(long *)puVar2;
    if (lVar4 == 0) {
      free(plVar10);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar4,plVar10);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,plVar10);
      }
    }
    param_1[0x4f] = 0;
    *(undefined4 *)(param_1 + 0x4e) = 0;
  }
  plVar10 = (long *)param_1[6];
  plVar3 = (long *)param_1[0x4d];
  if (plVar10 != (long *)0x0) {
    if (plVar10 == plVar3) {
      plVar8 = (long *)0x0;
    }
    else {
      do {
        plVar8 = plVar10;
        plVar10 = (long *)plVar8[4];
        if (plVar10 == (long *)0x0) goto LAB_03ef7104;
      } while (plVar10 != plVar3);
    }
    plVar10 = param_1 + 6;
    if (plVar8 != (long *)0x0) {
      plVar10 = plVar8 + 4;
    }
    *plVar10 = plVar3[4];
    if (plVar3[4] == 0) {
      param_1[7] = (long)plVar8;
    }
    plVar3[4] = 0;
    plVar3 = (long *)param_1[0x4d];
  }
LAB_03ef7104:
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x03ef7130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}

