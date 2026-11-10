
void FUN_003186a0(long *param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  
  lVar8 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar8 * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_01c670e8(param_1);
  }
  lVar7 = param_1[2] - *param_1 >> 3;
  uVar9 = lVar7 * -0x6666666666666666;
  if (uVar9 <= uVar1) {
    uVar9 = uVar1;
  }
  if (0x333333333333332 < (ulong)(lVar7 * -0x3333333333333333)) {
    uVar9 = 0x666666666666666;
  }
  lVar4 = FUN_00187df4(uVar9 * 0x28);
  lVar7 = lVar4 + uVar9 * 0x28;
  plVar10 = (long *)(lVar4 + lVar8 * 8);
  puVar2 = PTR_DAT_04bc0ec8 + 0x10;
  *plVar10 = (long)puVar2;
  *(undefined1 *)(plVar10 + 1) = 0;
  plVar10[3] = (long)(plVar10 + 1);
  plVar10[4] = 0x10;
  FUN_0018b070(plVar10,*(undefined8 *)(param_2 + 0x18),0xffffffffffffffff);
  plVar11 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  if (plVar3 == plVar11) {
    *param_1 = (long)plVar10;
    param_1[1] = (long)(plVar10 + 5);
    param_1[2] = lVar7;
  }
  else {
    lVar8 = 0;
    do {
      plVar5 = (long *)((long)plVar10 + lVar8 + -0x28);
      *plVar5 = (long)puVar2;
      puVar6 = (undefined1 *)((long)plVar10 + lVar8 + -0x20);
      *puVar6 = 0;
      *(undefined1 **)((long)plVar10 + lVar8 + -0x10) = puVar6;
      *(undefined8 *)((long)plVar10 + lVar8 + -8) = 0x10;
      if (plVar10 != plVar3) {
        FUN_01c672e0(plVar5,(long)plVar3 + lVar8 + -0x28);
      }
      lVar8 = lVar8 + -0x28;
    } while ((long *)((long)plVar3 + lVar8) != plVar11);
    plVar3 = (long *)*param_1;
    plVar11 = (long *)param_1[1];
    *param_1 = (long)plVar10 + lVar8;
    param_1[1] = (long)(plVar10 + 5);
    param_1[2] = lVar7;
    while (plVar11 != plVar3) {
      plVar11 = plVar11 + -5;
      (**(code **)*plVar11)(plVar11);
    }
  }
  if (plVar3 == (long *)0x0) {
    return;
  }
  FUN_00187e4c(plVar3);
  return;
}

