
void FUN_03ee91c0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  undefined8 *puVar18;
  
  puVar3 = PTR_DAT_04bbd578;
  puVar9 = PTR_DAT_04bb2698;
  uVar5 = *(uint *)(param_1 + 0x2f);
  if (0 < (int)uVar5) {
    uVar16 = 0;
    puVar1 = PTR_DAT_04bbd578 + 0x10;
    do {
      uVar4 = uVar16;
      if (*(uint *)(param_1 + 0x2f) <= uVar16) {
        uVar4 = 0;
      }
      lVar17 = param_1[0x30] + (ulong)uVar4 * 0xa0;
      puVar18 = (undefined8 *)(lVar17 + 0x98);
      plVar11 = (long *)*puVar18;
      if (plVar11 != (long *)0x0) {
        plVar10 = plVar11 + -1;
        lVar12 = *plVar10;
        if (lVar12 != 0) {
          plVar14 = plVar11 + lVar12 * 5;
          uVar15 = lVar12 * 0x28 - 0x28;
          uVar4 = ((uint)(uVar15 / 0x28) & 0x7ffffff) + 1;
          if ((uVar4 & 7) != 0) {
            lVar12 = ((ulong)uVar4 & 7) * 0x28;
            do {
              lVar12 = lVar12 + -0x28;
              plVar14 = plVar14 + -5;
              *plVar14 = (long)(puVar3 + 0x10);
            } while (lVar12 != 0);
          }
          if (0x117 < uVar15) {
            plVar14 = plVar14 + -0x14;
            do {
              plVar14[0xf] = (long)puVar1;
              plVar14[10] = (long)puVar1;
              plVar14[5] = (long)puVar1;
              *plVar14 = (long)puVar1;
              plVar14[-5] = (long)puVar1;
              plVar14[-10] = (long)puVar1;
              plVar14[-0xf] = (long)puVar1;
              plVar13 = plVar14 + -0x14;
              *plVar13 = (long)puVar1;
              plVar14 = plVar14 + -0x28;
            } while (plVar13 != plVar11);
          }
        }
        if (*(long *)puVar9 == 0) {
          free(plVar10);
        }
        else {
          plVar11 = (long *)FUN_038cb610(*(long *)puVar9,plVar10);
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x38))(plVar11,plVar10);
          }
        }
        *puVar18 = 0;
        *(undefined4 *)(lVar17 + 0x90) = 0;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar5);
  }
  puVar1 = PTR_DAT_04bd1068;
  plVar11 = (long *)param_1[0x21];
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + -1;
    lVar17 = *plVar10;
    if (lVar17 != 0) {
      plVar14 = plVar11 + lVar17 * 0xb;
      uVar15 = lVar17 * 0x58 - 0x58;
      uVar5 = ((uint)(uVar15 / 0x58) & 0xfffffff) + 1;
      if ((uVar5 & 3) != 0) {
        lVar17 = ((ulong)uVar5 & 3) * 0x58;
        puVar2 = PTR_DAT_04bd1068 + 0x10;
        plVar13 = plVar14;
        do {
          plVar14 = plVar13 + -0xb;
          *plVar14 = (long)puVar2;
          lVar17 = lVar17 + -0x58;
          plVar13[-5] = (long)(puVar3 + 0x10);
          plVar13 = plVar14;
        } while (lVar17 != 0);
      }
      if (0x107 < uVar15) {
        puVar2 = puVar3 + 0x10;
        puVar1 = puVar1 + 0x10;
        plVar14 = plVar14 + -0x16;
        do {
          plVar14[0x11] = (long)puVar2;
          plVar14[0xb] = (long)puVar1;
          plVar14[6] = (long)puVar2;
          *plVar14 = (long)puVar1;
          plVar14[-5] = (long)puVar2;
          plVar14[-0xb] = (long)puVar1;
          plVar14[-0x10] = (long)puVar2;
          plVar13 = plVar14 + -0x16;
          *plVar13 = (long)puVar1;
          plVar14 = plVar14 + -0x2c;
        } while (plVar13 != plVar11);
      }
    }
    if (*(long *)puVar9 == 0) {
      free(plVar10);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)puVar9,plVar10);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,plVar10);
      }
    }
    param_1[0x21] = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  plVar11 = (long *)param_1[0x30];
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + -1;
    lVar17 = *plVar10;
    if (lVar17 != 0) {
      plVar14 = plVar11 + lVar17 * 0x14;
      uVar15 = lVar17 * 0xa0 - 0xa0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar15;
      plVar13 = plVar14;
      if ((SUB164(auVar6 * ZEXT816(0xcccccccccccccccd),8) >> 7 & 1) == 0) {
        plVar13 = plVar14 + -0x14;
        *plVar13 = (long)(PTR_DAT_04bd1068 + 0x10);
        puVar1 = puVar3 + 0x10;
        plVar14[-6] = (long)puVar1;
        plVar14[-10] = (long)puVar1;
        plVar14[-0xe] = (long)puVar1;
      }
      if (0x9f < uVar15) {
        puVar1 = puVar3 + 0x10;
        puVar2 = PTR_DAT_04bd1068 + 0x10;
        plVar14 = plVar13 + -0x14;
        do {
          plVar14[0xe] = (long)puVar1;
          plVar14[10] = (long)puVar1;
          plVar14[6] = (long)puVar1;
          *plVar14 = (long)puVar2;
          plVar14[-6] = (long)puVar1;
          plVar14[-10] = (long)puVar1;
          plVar14[-0xe] = (long)puVar1;
          plVar13 = plVar14 + -0x14;
          *plVar13 = (long)puVar2;
          plVar14 = plVar14 + -0x28;
        } while (plVar13 != plVar11);
      }
    }
    if (*(long *)puVar9 == 0) {
      free(plVar10);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)puVar9,plVar10);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,plVar10);
      }
    }
    param_1[0x30] = 0;
    *(undefined4 *)(param_1 + 0x2f) = 0;
  }
  plVar11 = (long *)param_1[0x3f];
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + -1;
    lVar17 = *plVar10;
    if (lVar17 != 0) {
      plVar14 = plVar11 + lVar17 * 0x16;
      uVar15 = lVar17 * 0xb0 - 0xb0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      plVar13 = plVar14;
      if ((SUB164(auVar7 * ZEXT816(0x2e8ba2e8ba2e8ba3),8) >> 5 & 1) == 0) {
        plVar13 = plVar14 + -0x16;
        *plVar13 = (long)(PTR_DAT_04bd1068 + 0x10);
        puVar1 = puVar3 + 0x10;
        plVar14[-4] = (long)puVar1;
        plVar14[-8] = (long)puVar1;
        plVar14[-0xc] = (long)puVar1;
        plVar14[-0x10] = (long)puVar1;
      }
      if (0xaf < uVar15) {
        puVar1 = puVar3 + 0x10;
        puVar2 = PTR_DAT_04bd1068 + 0x10;
        plVar14 = plVar13 + -0x16;
        do {
          plVar14[0x12] = (long)puVar1;
          plVar14[0xe] = (long)puVar1;
          plVar14[10] = (long)puVar1;
          plVar14[6] = (long)puVar1;
          *plVar14 = (long)puVar2;
          plVar14[-4] = (long)puVar1;
          plVar14[-8] = (long)puVar1;
          plVar14[-0xc] = (long)puVar1;
          plVar14[-0x10] = (long)puVar1;
          plVar13 = plVar14 + -0x16;
          *plVar13 = (long)puVar2;
          plVar14 = plVar14 + -0x2c;
        } while (plVar13 != plVar11);
      }
    }
    if (*(long *)puVar9 == 0) {
      free(plVar10);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)puVar9,plVar10);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,plVar10);
      }
    }
    param_1[0x3f] = 0;
    *(undefined4 *)(param_1 + 0x3e) = 0;
  }
  lVar17 = param_1[0x4e];
  if (lVar17 != 0) {
    plVar11 = (long *)(lVar17 + -8);
    if (*plVar11 != 0) {
      lVar12 = *plVar11 * 0x130;
      puVar1 = puVar3 + 0x10;
      puVar2 = PTR_DAT_04bd1068 + 0x10;
      do {
        plVar10 = (long *)(lVar17 + -0x90 + lVar12);
        lVar12 = lVar12 + -0x130;
        plVar10[10] = (long)puVar1;
        plVar10[5] = (long)puVar1;
        *plVar10 = (long)puVar1;
        plVar10[-5] = (long)puVar1;
        plVar10[-10] = (long)puVar1;
        plVar10[-0xe] = (long)puVar1;
        plVar10[-0x14] = (long)puVar2;
      } while (lVar12 != 0);
    }
    if (*(long *)puVar9 == 0) {
      free(plVar11);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*(long *)puVar9,plVar11);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,plVar11);
      }
    }
    param_1[0x4e] = 0;
    *(undefined4 *)(param_1 + 0x4d) = 0;
  }
  plVar11 = (long *)param_1[0x5d];
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + -1;
    lVar17 = *plVar10;
    if (lVar17 != 0) {
      plVar14 = plVar11 + lVar17 * 0x1a;
      uVar15 = lVar17 * 0xd0 - 0xd0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar15;
      plVar13 = plVar14;
      if ((SUB164(auVar8 * ZEXT816(0x4ec4ec4ec4ec4ec5),8) >> 6 & 1) == 0) {
        plVar13 = plVar14 + -0x1a;
        *plVar13 = (long)(PTR_DAT_04bd1068 + 0x10);
        puVar1 = puVar3 + 0x10;
        plVar14[-4] = (long)puVar1;
        plVar14[-8] = (long)puVar1;
        plVar14[-0xc] = (long)puVar1;
        plVar14[-0x10] = (long)puVar1;
        plVar14[-0x14] = (long)puVar1;
      }
      if (0xcf < uVar15) {
        puVar1 = puVar3 + 0x10;
        puVar2 = PTR_DAT_04bd1068 + 0x10;
        plVar14 = plVar13 + -0x1a;
        do {
          plVar14[0x16] = (long)puVar1;
          plVar14[0x12] = (long)puVar1;
          plVar14[0xe] = (long)puVar1;
          plVar14[10] = (long)puVar1;
          plVar14[6] = (long)puVar1;
          *plVar14 = (long)puVar2;
          plVar14[-4] = (long)puVar1;
          plVar14[-8] = (long)puVar1;
          plVar14[-0xc] = (long)puVar1;
          plVar14[-0x10] = (long)puVar1;
          plVar14[-0x14] = (long)puVar1;
          plVar13 = plVar14 + -0x1a;
          *plVar13 = (long)puVar2;
          plVar14 = plVar14 + -0x34;
        } while (plVar13 != plVar11);
      }
    }
    if (*(long *)puVar9 == 0) {
      free(plVar10);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)puVar9,plVar10);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,plVar10);
      }
    }
    param_1[0x5d] = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  lVar17 = param_1[0x6c];
  if (lVar17 != 0) {
    plVar11 = (long *)(lVar17 + -8);
    if (*plVar11 != 0) {
      lVar12 = *plVar11 * 0x290;
      puVar3 = puVar3 + 0x10;
      puVar1 = PTR_DAT_04bd1068 + 0x10;
      do {
        plVar10 = (long *)(lVar17 + -0x290 + lVar12);
        lVar12 = lVar12 + -0x290;
        plVar10[0x4a] = (long)puVar3;
        plVar10[0x46] = (long)puVar3;
        plVar10[0x42] = (long)puVar3;
        plVar10[0x3e] = (long)puVar3;
        plVar10[0x3a] = (long)puVar3;
        plVar10[0x36] = (long)puVar3;
        plVar10[0x32] = (long)puVar3;
        plVar10[0x2e] = (long)puVar3;
        plVar10[0x2a] = (long)puVar3;
        plVar10[0x26] = (long)puVar3;
        plVar10[0x22] = (long)puVar3;
        plVar10[0x1e] = (long)puVar3;
        plVar10[0x1a] = (long)puVar3;
        plVar10[0x15] = (long)puVar3;
        plVar10[0x10] = (long)puVar3;
        plVar10[0xb] = (long)puVar3;
        plVar10[6] = (long)puVar3;
        *plVar10 = (long)puVar1;
      } while (lVar12 != 0);
    }
    if (*(long *)puVar9 == 0) {
      free(plVar11);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*(long *)puVar9,plVar11);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,plVar11);
      }
    }
    param_1[0x6c] = 0;
    *(undefined4 *)(param_1 + 0x6b) = 0;
  }
  plVar11 = (long *)param_1[0x7b];
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + -1;
    lVar17 = *plVar10;
    if (lVar17 != 0) {
      plVar14 = plVar11 + lVar17 * 6;
      uVar15 = lVar17 * 0x30 - 0x30;
      uVar5 = ((uint)(uVar15 / 0x30) & 0x7ffffff) + 1;
      if ((uVar5 & 7) != 0) {
        lVar17 = ((ulong)uVar5 & 7) * 0x30;
        puVar3 = PTR_DAT_04bd1068 + 0x10;
        do {
          lVar17 = lVar17 + -0x30;
          plVar14 = plVar14 + -6;
          *plVar14 = (long)puVar3;
        } while (lVar17 != 0);
      }
      if (0x14f < uVar15) {
        puVar3 = PTR_DAT_04bd1068 + 0x10;
        plVar14 = plVar14 + -0x18;
        do {
          plVar14[0x12] = (long)puVar3;
          plVar14[0xc] = (long)puVar3;
          plVar14[6] = (long)puVar3;
          *plVar14 = (long)puVar3;
          plVar14[-6] = (long)puVar3;
          plVar14[-0xc] = (long)puVar3;
          plVar14[-0x12] = (long)puVar3;
          plVar13 = plVar14 + -0x18;
          *plVar13 = (long)puVar3;
          plVar14 = plVar14 + -0x30;
        } while (plVar13 != plVar11);
      }
    }
    if (*(long *)puVar9 == 0) {
      free(plVar10);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)puVar9,plVar10);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,plVar10);
      }
    }
    param_1[0x7b] = 0;
    *(undefined4 *)(param_1 + 0x7a) = 0;
  }
  plVar11 = (long *)param_1[0x8a];
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + -1;
    lVar17 = *plVar10;
    if (lVar17 != 0) {
      plVar14 = plVar11 + lVar17 * 6;
      uVar15 = lVar17 * 0x30 - 0x30;
      uVar5 = ((uint)(uVar15 / 0x30) & 0x7ffffff) + 1;
      if ((uVar5 & 7) != 0) {
        lVar17 = ((ulong)uVar5 & 7) * 0x30;
        puVar3 = PTR_DAT_04bd1068 + 0x10;
        do {
          lVar17 = lVar17 + -0x30;
          plVar14 = plVar14 + -6;
          *plVar14 = (long)puVar3;
        } while (lVar17 != 0);
      }
      if (0x14f < uVar15) {
        puVar3 = PTR_DAT_04bd1068 + 0x10;
        plVar14 = plVar14 + -0x18;
        do {
          plVar14[0x12] = (long)puVar3;
          plVar14[0xc] = (long)puVar3;
          plVar14[6] = (long)puVar3;
          *plVar14 = (long)puVar3;
          plVar14[-6] = (long)puVar3;
          plVar14[-0xc] = (long)puVar3;
          plVar14[-0x12] = (long)puVar3;
          plVar13 = plVar14 + -0x18;
          *plVar13 = (long)puVar3;
          plVar14 = plVar14 + -0x30;
        } while (plVar13 != plVar11);
      }
    }
    if (*(long *)puVar9 == 0) {
      free(plVar10);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)puVar9,plVar10);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,plVar10);
      }
    }
    param_1[0x8a] = 0;
    *(undefined4 *)(param_1 + 0x89) = 0;
  }
  plVar11 = (long *)param_1[0x99];
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + -1;
    lVar17 = *plVar10;
    if (lVar17 != 0) {
      plVar14 = plVar11 + lVar17 * 6;
      uVar15 = lVar17 * 0x30 - 0x30;
      uVar5 = ((uint)(uVar15 / 0x30) & 0x7ffffff) + 1;
      if ((uVar5 & 7) != 0) {
        lVar17 = ((ulong)uVar5 & 7) * 0x30;
        puVar3 = PTR_DAT_04bd1068 + 0x10;
        do {
          lVar17 = lVar17 + -0x30;
          plVar14 = plVar14 + -6;
          *plVar14 = (long)puVar3;
        } while (lVar17 != 0);
      }
      if (0x14f < uVar15) {
        puVar3 = PTR_DAT_04bd1068 + 0x10;
        plVar14 = plVar14 + -0x18;
        do {
          plVar14[0x12] = (long)puVar3;
          plVar14[0xc] = (long)puVar3;
          plVar14[6] = (long)puVar3;
          *plVar14 = (long)puVar3;
          plVar14[-6] = (long)puVar3;
          plVar14[-0xc] = (long)puVar3;
          plVar14[-0x12] = (long)puVar3;
          plVar13 = plVar14 + -0x18;
          *plVar13 = (long)puVar3;
          plVar14 = plVar14 + -0x30;
        } while (plVar13 != plVar11);
      }
    }
    if (*(long *)puVar9 == 0) {
      free(plVar10);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)puVar9,plVar10);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,plVar10);
      }
    }
    param_1[0x99] = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x03ee9ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}

