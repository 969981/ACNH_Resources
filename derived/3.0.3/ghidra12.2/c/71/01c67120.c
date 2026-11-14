
void FUN_01c67120(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  
  lVar7 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar7 * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_01c670e8(param_1);
  }
  lVar6 = param_1[2] - *param_1 >> 3;
  uVar8 = lVar6 * -0x6666666666666666;
  if (uVar8 <= uVar1) {
    uVar8 = uVar1;
  }
  if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
    uVar8 = 0x666666666666666;
  }
  lVar6 = FUN_00187df4(uVar8 * 0x28);
  plVar9 = (long *)(lVar6 + lVar7 * 8);
  *(undefined1 *)(plVar9 + 1) = 0;
  puVar3 = PTR_DAT_04bc0ec8;
  *plVar9 = (long)(PTR_DAT_04bc0ec8 + 0x10);
  plVar9[3] = (long)(plVar9 + 1);
  plVar9[4] = 0x10;
  if (plVar9 != param_2) {
    FUN_01c672e0(plVar9,param_2);
  }
  plVar10 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  lVar6 = lVar6 + uVar8 * 0x28;
  if (plVar2 == plVar10) {
    *param_1 = (long)plVar9;
    param_1[1] = (long)(plVar9 + 5);
    param_1[2] = lVar6;
  }
  else {
    lVar7 = 0;
    do {
      plVar4 = (long *)((long)plVar9 + lVar7 + -0x28);
      *plVar4 = (long)(puVar3 + 0x10);
      puVar5 = (undefined1 *)((long)plVar9 + lVar7 + -0x20);
      *puVar5 = 0;
      *(undefined1 **)((long)plVar9 + lVar7 + -0x10) = puVar5;
      *(undefined8 *)((long)plVar9 + lVar7 + -8) = 0x10;
      if (plVar9 != plVar2) {
        FUN_01c672e0(plVar4,(long)plVar2 + lVar7 + -0x28);
      }
      lVar7 = lVar7 + -0x28;
    } while ((long *)((long)plVar2 + lVar7) != plVar10);
    plVar2 = (long *)*param_1;
    plVar10 = (long *)param_1[1];
    *param_1 = (long)plVar9 + lVar7;
    param_1[1] = (long)(plVar9 + 5);
    param_1[2] = lVar6;
    while (plVar10 != plVar2) {
      plVar10 = plVar10 + -5;
      (**(code **)*plVar10)(plVar10);
    }
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
  FUN_00187e4c(plVar2);
  return;
}

