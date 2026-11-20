
void FUN_03f08080(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  void *__ptr;
  long *plVar13;
  
  puVar6 = PTR_DAT_04bb2698;
  *param_1 = (long)&PTR_LAB_04ba79e0;
  puVar5 = PTR_DAT_04bd1068;
  puVar4 = PTR_DAT_04bbd578;
  lVar8 = param_1[5];
  if (lVar8 != 0) {
    plVar13 = (long *)(lVar8 + -8);
    if (*plVar13 != 0) {
      lVar9 = *plVar13 * 0x228;
      puVar2 = PTR_DAT_04bbd578 + 0x10;
      puVar3 = PTR_DAT_04bd1068 + 0x10;
      do {
        plVar7 = (long *)(lVar8 + -0x228 + lVar9);
        lVar9 = lVar9 + -0x228;
        plVar7[0x40] = (long)puVar2;
        plVar7[0x3c] = (long)puVar2;
        plVar7[0x32] = (long)puVar2;
        plVar7[0x2e] = (long)puVar2;
        plVar7[0x2a] = (long)puVar2;
        plVar7[0x25] = (long)puVar2;
        plVar7[0x21] = (long)puVar2;
        plVar7[0x1d] = (long)puVar2;
        plVar7[0x19] = (long)puVar2;
        plVar7[0x15] = (long)puVar2;
        plVar7[0xb] = (long)puVar2;
        plVar7[6] = (long)puVar2;
        *plVar7 = (long)puVar3;
      } while (lVar9 != 0);
    }
    if (*(long *)puVar6 == 0) {
      free(plVar13);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar6,plVar13);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,plVar13);
      }
    }
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  puVar2 = PTR_DAT_04bd1070;
  plVar13 = (long *)param_1[7];
  if (plVar13 != (long *)0x0) {
    plVar7 = plVar13 + -1;
    lVar8 = *plVar7;
    if (lVar8 != 0) {
      plVar10 = plVar13 + lVar8 * 0x3b;
      uVar12 = lVar8 * 0x1d8 - 0x1d8;
      uVar1 = ((uint)(uVar12 / 0x1d8) & 0xffffff) + 1;
      if ((uVar1 & 3) != 0) {
        lVar8 = ((ulong)uVar1 & 3) * 0x1d8;
        puVar3 = PTR_DAT_04bd1070 + 0x10;
        do {
          plVar10 = plVar10 + -0x3b;
          lVar8 = lVar8 + -0x1d8;
          *plVar10 = (long)puVar3;
        } while (lVar8 != 0);
      }
      if (0x587 < uVar12) {
        puVar3 = puVar2 + 0x10;
        do {
          plVar11 = plVar10 + -0xec;
          plVar10[-0x3b] = (long)puVar3;
          plVar10[-0x76] = (long)puVar3;
          plVar10[-0xb1] = (long)puVar3;
          *plVar11 = (long)puVar3;
          plVar10 = plVar11;
        } while (plVar11 != plVar13);
      }
    }
    if (*(long *)puVar6 == 0) {
      free(plVar7);
    }
    else {
      plVar13 = (long *)FUN_038cb610(*(long *)puVar6,plVar7);
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x38))(plVar13,plVar7);
      }
    }
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
  }
  puVar2 = puVar2 + 0x10;
  puVar4 = puVar4 + 0x10;
  param_1[0x407] = (long)puVar2;
  puVar5 = puVar5 + 0x10;
  param_1[0x3cc] = (long)puVar2;
  param_1[0x391] = (long)puVar2;
  param_1[0x356] = (long)puVar2;
  param_1[0x31b] = (long)puVar2;
  param_1[0x2e0] = (long)puVar2;
  param_1[0x2a5] = (long)puVar2;
  param_1[0x26a] = (long)puVar2;
  param_1[0x265] = (long)puVar4;
  param_1[0x261] = (long)puVar4;
  param_1[599] = (long)puVar4;
  param_1[0x253] = (long)puVar4;
  param_1[0x24f] = (long)puVar4;
  param_1[0x24a] = (long)puVar4;
  param_1[0x246] = (long)puVar4;
  param_1[0x242] = (long)puVar4;
  param_1[0x23e] = (long)puVar4;
  param_1[0x23a] = (long)puVar4;
  param_1[0x230] = (long)puVar4;
  param_1[0x22b] = (long)puVar4;
  param_1[0x225] = (long)puVar5;
  param_1[0x220] = (long)puVar4;
  param_1[0x21c] = (long)puVar4;
  param_1[0x212] = (long)puVar4;
  param_1[0x20e] = (long)puVar4;
  param_1[0x20a] = (long)puVar4;
  param_1[0x205] = (long)puVar4;
  param_1[0x201] = (long)puVar4;
  param_1[0x1fd] = (long)puVar4;
  param_1[0x1f9] = (long)puVar4;
  param_1[0x1f5] = (long)puVar4;
  param_1[0x1eb] = (long)puVar4;
  param_1[0x1e6] = (long)puVar4;
  param_1[0x1e0] = (long)puVar5;
  param_1[0x1db] = (long)puVar4;
  param_1[0x1d7] = (long)puVar4;
  param_1[0x1cd] = (long)puVar4;
  param_1[0x1c9] = (long)puVar4;
  param_1[0x1c5] = (long)puVar4;
  param_1[0x1c0] = (long)puVar4;
  param_1[0x1bc] = (long)puVar4;
  param_1[0x1b8] = (long)puVar4;
  param_1[0x1b4] = (long)puVar4;
  param_1[0x1b0] = (long)puVar4;
  param_1[0x1a6] = (long)puVar4;
  param_1[0x1a1] = (long)puVar4;
  param_1[0x19b] = (long)puVar5;
  param_1[0x196] = (long)puVar4;
  param_1[0x192] = (long)puVar4;
  param_1[0x188] = (long)puVar4;
  param_1[0x184] = (long)puVar4;
  param_1[0x180] = (long)puVar4;
  param_1[0x17b] = (long)puVar4;
  param_1[0x177] = (long)puVar4;
  param_1[0x173] = (long)puVar4;
  param_1[0x16f] = (long)puVar4;
  param_1[0x16b] = (long)puVar4;
  param_1[0x161] = (long)puVar4;
  param_1[0x15c] = (long)puVar4;
  param_1[0x156] = (long)puVar5;
  param_1[0x151] = (long)puVar4;
  param_1[0x14d] = (long)puVar4;
  param_1[0x143] = (long)puVar4;
  param_1[0x13f] = (long)puVar4;
  param_1[0x13b] = (long)puVar4;
  param_1[0x136] = (long)puVar4;
  param_1[0x132] = (long)puVar4;
  param_1[0x12e] = (long)puVar4;
  param_1[0x12a] = (long)puVar4;
  param_1[0x126] = (long)puVar4;
  param_1[0x11c] = (long)puVar4;
  param_1[0x117] = (long)puVar4;
  param_1[0x111] = (long)puVar5;
  param_1[0x10c] = (long)puVar4;
  param_1[0x108] = (long)puVar4;
  param_1[0xfe] = (long)puVar4;
  param_1[0xfa] = (long)puVar4;
  param_1[0xf6] = (long)puVar4;
  param_1[0xf1] = (long)puVar4;
  param_1[0xed] = (long)puVar4;
  param_1[0xe9] = (long)puVar4;
  param_1[0xe5] = (long)puVar4;
  param_1[0xe1] = (long)puVar4;
  param_1[0xd7] = (long)puVar4;
  param_1[0xd2] = (long)puVar4;
  param_1[0xcc] = (long)puVar5;
  param_1[199] = (long)puVar4;
  param_1[0xc3] = (long)puVar4;
  param_1[0xb9] = (long)puVar4;
  param_1[0xb5] = (long)puVar4;
  param_1[0xb1] = (long)puVar4;
  param_1[0xac] = (long)puVar4;
  param_1[0xa8] = (long)puVar4;
  param_1[0xa4] = (long)puVar4;
  param_1[0xa0] = (long)puVar4;
  param_1[0x9c] = (long)puVar4;
  param_1[0x92] = (long)puVar4;
  param_1[0x8d] = (long)puVar4;
  param_1[0x87] = (long)puVar5;
  param_1[0x82] = (long)puVar4;
  param_1[0x7e] = (long)puVar4;
  param_1[0x74] = (long)puVar4;
  param_1[0x70] = (long)puVar4;
  param_1[0x6c] = (long)puVar4;
  param_1[0x67] = (long)puVar4;
  param_1[99] = (long)puVar4;
  param_1[0x5f] = (long)puVar4;
  param_1[0x5b] = (long)puVar4;
  param_1[0x57] = (long)puVar4;
  param_1[0x4d] = (long)puVar4;
  param_1[0x48] = (long)puVar4;
  param_1[0x42] = (long)puVar5;
  param_1[8] = (long)puVar2;
  *param_1 = (long)(PTR_DAT_04bd0de0 + 0x10);
  if (((*(byte *)(param_1 + 3) & 1) != 0) && (__ptr = (void *)param_1[1], __ptr != (void *)0x0)) {
    if (*(long *)puVar6 == 0) {
      free(__ptr);
      return;
    }
    plVar13 = (long *)FUN_038cb610(*(long *)puVar6,__ptr);
    if (plVar13 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03f08454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar13 + 0x38))(plVar13,__ptr);
      return;
    }
  }
  return;
}

