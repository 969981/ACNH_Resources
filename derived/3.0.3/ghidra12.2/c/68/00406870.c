
void FUN_00406870(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar18;
  long *plVar17;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *puVar22;
  
  lVar13 = param_1[1] - *param_1 >> 3;
  plVar16 = (long *)(lVar13 * -0x5555555555555555);
  uVar1 = (long)plVar16 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
    FUN_00406858(param_1);
LAB_00406ad0:
    FUN_00405918(plVar16);
                    /* WARNING: Does not return */
    pcVar5 = (code *)UndefinedInstructionException(0,0x406ad8);
    (*pcVar5)();
  }
  lVar12 = param_1[2] - *param_1 >> 3;
  uVar14 = lVar12 * 0x5555555555555556;
  if (uVar14 <= uVar1) {
    uVar14 = uVar1;
  }
  if (0x555555555555554 < (ulong)(lVar12 * -0x5555555555555555)) {
    uVar14 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar14 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = FUN_00187df4(uVar14 * 0x18);
  }
  plVar16 = (long *)(lVar12 + lVar13 * 8);
  plVar16[2] = 0;
  *plVar16 = 0;
  plVar16[1] = 0;
  lVar13 = *param_2;
  lVar15 = param_2[1];
  lVar9 = lVar15 - lVar13;
  if (lVar9 != 0) {
    lVar9 = lVar9 >> 3;
    if (0x492492492492492 < (ulong)(lVar9 * 0x6db6db6db6db6db7)) goto LAB_00406ad0;
    lVar7 = FUN_00187df4();
    puVar6 = PTR_DAT_04bd26e0;
    *plVar16 = lVar7;
    lVar10 = 0;
    plVar16[2] = lVar7 + lVar9 * 8;
    puVar2 = PTR_DAT_04bd28a0 + 0x10;
    do {
      lVar9 = lVar13 + lVar10;
      plVar21 = (long *)(lVar7 + lVar10);
      uVar4 = *(undefined2 *)(lVar9 + 8);
      lVar10 = lVar10 + 0x38;
      plVar21[2] = (long)(puVar6 + 0x10);
      *plVar21 = (long)puVar2;
      *(undefined2 *)(plVar21 + 1) = uVar4;
      *(undefined1 *)(plVar21 + 3) = *(undefined1 *)(lVar9 + 0x18);
      plVar21[4] = *(long *)(lVar9 + 0x20);
      uVar3 = *(undefined4 *)(lVar9 + 0x28);
      plVar21[6] = *(long *)(lVar9 + 0x30);
      *(undefined4 *)(plVar21 + 5) = uVar3;
    } while (lVar13 + lVar10 != lVar15);
    plVar16[1] = lVar7 + lVar10;
  }
  lVar12 = lVar12 + uVar14 * 0x18;
  plVar21 = (long *)*param_1;
  plVar20 = (long *)param_1[1];
  plVar17 = plVar16;
  if (plVar20 == plVar21) {
    *param_1 = (long)plVar16;
    param_1[1] = (long)(plVar16 + 3);
    param_1[2] = lVar12;
  }
  else {
    do {
      plVar18 = plVar17 + -3;
      *plVar18 = 0;
      plVar19 = plVar20 + -3;
      lVar13 = *plVar19;
      plVar17[-2] = 0;
      lVar15 = plVar20[-2];
      plVar17[-1] = 0;
      *plVar18 = lVar13;
      plVar17[-2] = lVar15;
      plVar17[-1] = plVar20[-1];
      plVar20[-2] = 0;
      plVar20[-1] = 0;
      *plVar19 = 0;
      plVar17 = plVar18;
      plVar20 = plVar19;
    } while (plVar19 != plVar21);
    plVar20 = (long *)*param_1;
    plVar21 = (long *)param_1[1];
    param_1[2] = lVar12;
    *param_1 = (long)plVar18;
    param_1[1] = (long)(plVar16 + 3);
    if (plVar21 != plVar20) {
      do {
        plVar16 = plVar21 + -3;
        puVar22 = (undefined8 *)*plVar16;
        if (puVar22 != (undefined8 *)0x0) {
          puVar11 = (undefined8 *)plVar21[-2];
          puVar8 = puVar22;
          if (puVar11 != puVar22) {
            do {
              puVar11 = puVar11 + -7;
              (**(code **)*puVar11)(puVar11);
            } while (puVar11 != puVar22);
            puVar8 = (undefined8 *)*plVar16;
          }
          plVar21[-2] = (long)puVar22;
          FUN_00187e4c(puVar8);
        }
        plVar21 = plVar16;
      } while (plVar16 != plVar20);
    }
  }
  if (plVar20 == (long *)0x0) {
    return;
  }
  FUN_00187e4c(plVar20);
  return;
}

