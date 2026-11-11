
void FUN_00409c60(long *param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  
  puVar10 = (undefined8 *)param_1[1];
  if ((ulong)((param_1[2] - (long)puVar10 >> 3) * -0x3333333333333333) < param_2) {
    lVar9 = (long)puVar10 - *param_1 >> 3;
    uVar2 = lVar9 * -0x3333333333333333 + param_2;
    if (0x666666666666666 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_01c670e8(param_1);
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar6 * -0x6666666666666666;
    if (uVar8 <= uVar2) {
      uVar8 = uVar2;
    }
    if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
      uVar8 = 0x666666666666666;
    }
    if (uVar8 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_00187df4(uVar8 * 0x28);
    }
    puVar4 = PTR_DAT_04bc0ec8;
    plVar14 = (long *)(lVar6 + lVar9 * 8);
    plVar13 = plVar14 + param_2 * 5;
    puVar1 = PTR_DAT_04bc0ec8 + 0x10;
    plVar12 = plVar14;
    do {
      *plVar12 = (long)puVar1;
      *(undefined1 *)(plVar12 + 1) = 0;
      plVar12[3] = (long)(plVar12 + 1);
      plVar12[4] = 0x10;
      FUN_0018b070(plVar12,*(undefined8 *)(param_3 + 0x18),0xffffffffffffffff);
      plVar12 = plVar12 + 5;
    } while (plVar12 != plVar13);
    lVar6 = lVar6 + uVar8 * 0x28;
    plVar12 = (long *)*param_1;
    plVar3 = (long *)param_1[1];
    if (plVar3 == plVar12) {
      *param_1 = (long)plVar14;
      param_1[1] = (long)plVar13;
      param_1[2] = lVar6;
    }
    else {
      lVar9 = 0;
      do {
        plVar5 = (long *)((long)plVar14 + lVar9 + -0x28);
        *plVar5 = (long)(puVar4 + 0x10);
        puVar7 = (undefined1 *)((long)plVar14 + lVar9 + -0x20);
        *puVar7 = 0;
        *(undefined1 **)((long)plVar14 + lVar9 + -0x10) = puVar7;
        *(undefined8 *)((long)plVar14 + lVar9 + -8) = 0x10;
        if (plVar14 != plVar3) {
          FUN_01c672e0(plVar5,(long)plVar3 + lVar9 + -0x28);
        }
        lVar9 = lVar9 + -0x28;
      } while ((long *)((long)plVar3 + lVar9) != plVar12);
      plVar3 = (long *)*param_1;
      plVar12 = (long *)param_1[1];
      *param_1 = (long)plVar14 + lVar9;
      param_1[1] = (long)plVar13;
      param_1[2] = lVar6;
      while (plVar12 != plVar3) {
        plVar12 = plVar12 + -5;
        (**(code **)*plVar12)(plVar12);
      }
    }
    if (plVar3 != (long *)0x0) {
      FUN_00187e4c(plVar3);
      return;
    }
  }
  else {
    puVar11 = puVar10;
    if (param_2 != 0) {
      puVar11 = puVar10 + param_2 * 5;
      do {
        *puVar10 = &PTR_LAB_04a426b8;
        *(undefined1 *)(puVar10 + 1) = 0;
        puVar10[3] = puVar10 + 1;
        puVar10[4] = 0x10;
        FUN_0018b070(puVar10,*(undefined8 *)(param_3 + 0x18),0xffffffffffffffff);
        puVar10 = puVar10 + 5;
      } while (puVar10 != puVar11);
    }
    param_1[1] = (long)puVar11;
  }
  return;
}

