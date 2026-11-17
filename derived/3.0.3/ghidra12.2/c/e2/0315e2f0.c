
void FUN_0315e2f0(undefined4 *param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  
  puVar2 = PTR_DAT_04bb37e0;
  uVar9 = *(uint *)(param_2 + 0x1c1f0);
  uVar8 = 0xffffffff;
  if (((int)uVar9 < 0) || (*(int *)(param_2 + 0x1c1d8) <= (int)uVar9)) {
LAB_0315e3ac:
    plVar10 = *(long **)(param_2 + 0x1c2e8);
    if (plVar10 == (long *)0x0) goto LAB_0315e3ec;
    if ((uVar8 & 0xfffffffe) == 8) {
      if (param_3 == 0) {
        uVar6 = 4;
        goto LAB_0315e488;
      }
      piVar3 = (int *)(**(code **)(*plVar10 + 0x18))(plVar10);
      if (*piVar3 != 0) {
        lVar7 = *plVar10;
        param_3 = param_3 - 1;
        goto LAB_0315e420;
      }
LAB_0315e438:
      puVar5 = (undefined4 *)PTR_DAT_04bb37e0;
    }
    else {
      piVar3 = (int *)(**(code **)(*plVar10 + 0x18))(plVar10);
      if (*piVar3 == 0) goto LAB_0315e438;
      lVar7 = *plVar10;
LAB_0315e420:
      piVar3 = (int *)(**(code **)(lVar7 + 0x18))(plVar10);
      if (*piVar3 - 1U < param_3) goto LAB_0315e438;
      lVar7 = (**(code **)(*plVar10 + 0x18))(plVar10);
      puVar5 = *(undefined4 **)(*(long *)(lVar7 + 8) + (long)(int)param_3 * 8);
    }
    uVar6 = *puVar5;
    uVar4 = puVar5[1];
    *param_1 = 1;
  }
  else {
    lVar7 = param_2 + 0x1c1c8;
    uVar8 = uVar9 + 1 & 3;
    if (2 < uVar9) {
      uVar9 = uVar9 + 1 & 0xfffffffc;
      do {
        uVar9 = uVar9 - 4;
        lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 8) + 8) + 8) + 8);
      } while (uVar9 != 0);
    }
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      lVar7 = *(long *)(lVar7 + 8);
    }
    uVar8 = 0xffffffff;
    if (((lVar7 == 0) || (lVar7 = lVar7 - *(int *)(param_2 + 0x1c1dc), lVar7 == 0)) ||
       (uVar8 = *(uint *)(lVar7 + 0x270), uVar8 != 0x6f)) goto LAB_0315e3ac;
    if ((*(uint **)(param_2 + 0x1c308) != (uint *)0x0) && (param_3 < **(uint **)(param_2 + 0x1c308))
       ) {
      uVar6 = 2;
LAB_0315e488:
      uVar1 = *(undefined4 *)PTR_DAT_04bb37e0;
      uVar4 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      *param_1 = uVar6;
      param_1[1] = uVar1;
      goto LAB_0315e46c;
    }
LAB_0315e3ec:
    *param_1 = 0;
    uVar6 = *(undefined4 *)puVar2;
    uVar4 = *(undefined4 *)(puVar2 + 4);
  }
  param_1[1] = uVar6;
LAB_0315e46c:
  param_1[2] = uVar4;
  return;
}

