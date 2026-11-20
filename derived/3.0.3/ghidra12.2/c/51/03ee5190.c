
void FUN_03ee5190(long *param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  
  puVar3 = (undefined8 *)param_1[0x4b];
  if (puVar3 != (undefined8 *)0x0) {
    plVar9 = puVar3 + -1;
    lVar4 = *plVar9;
    if (lVar4 != 0) {
      puVar5 = puVar3 + lVar4 * 5;
      uVar8 = lVar4 * 0x28 - 0x28;
      uVar1 = ((uint)(uVar8 / 0x28) & 0x7ffffff) + 1;
      if ((uVar1 & 7) != 0) {
        lVar4 = ((ulong)uVar1 & 7) * 0x28;
        do {
          lVar4 = lVar4 + -0x28;
          puVar5 = puVar5 + -5;
          *puVar5 = &PTR_LAB_04b67f18;
        } while (lVar4 != 0);
      }
      if (0x117 < uVar8) {
        puVar5 = puVar5 + -0x14;
        do {
          puVar5[0xf] = &PTR_LAB_04b67f18;
          puVar5[10] = &PTR_LAB_04b67f18;
          puVar5[5] = &PTR_LAB_04b67f18;
          *puVar5 = &PTR_LAB_04b67f18;
          puVar5[-5] = &PTR_LAB_04b67f18;
          puVar5[-10] = &PTR_LAB_04b67f18;
          puVar5[-0xf] = &PTR_LAB_04b67f18;
          puVar6 = puVar5 + -0x14;
          *puVar6 = &PTR_LAB_04b67f18;
          puVar5 = puVar5 + -0x28;
        } while (puVar6 != puVar3);
      }
    }
    if (DAT_05ae7600 == 0) {
      free(plVar9);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,plVar9);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,plVar9);
      }
    }
    param_1[0x4b] = 0;
    *(undefined4 *)(param_1 + 0x4a) = 0;
  }
  plVar9 = (long *)param_1[6];
  plVar2 = (long *)param_1[0x49];
  if (plVar9 != (long *)0x0) {
    if (plVar9 == plVar2) {
      plVar7 = (long *)0x0;
    }
    else {
      do {
        plVar7 = plVar9;
        plVar9 = (long *)plVar7[4];
        if (plVar9 == (long *)0x0) goto LAB_03ee52e4;
      } while (plVar9 != plVar2);
    }
    plVar9 = param_1 + 6;
    if (plVar7 != (long *)0x0) {
      plVar9 = plVar7 + 4;
    }
    *plVar9 = plVar2[4];
    if (plVar2[4] == 0) {
      param_1[7] = (long)plVar7;
    }
    plVar2[4] = 0;
    plVar2 = (long *)param_1[0x49];
  }
LAB_03ee52e4:
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x03ee5308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}

