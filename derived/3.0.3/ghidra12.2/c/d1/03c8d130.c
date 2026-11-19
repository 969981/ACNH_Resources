
undefined4
FUN_03c8d130(undefined4 param_1,long *param_2,long param_3,long param_4,undefined4 param_5,
            long param_6,long param_7,uint *param_8)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  float fVar11;
  
  param_2[0x76] = param_3;
  param_2[0x77] = param_6;
  lVar7 = *(long *)(param_7 + 8);
  *(undefined4 *)(param_2 + 0x7b) = param_5;
  *(undefined2 *)((long)param_2 + 0x3dc) = 0;
  *(undefined4 *)(param_2 + 0x7c) = param_1;
  param_2[0x7a] = (long)param_8;
  param_2[0x79] = lVar7;
  if (param_8 != (uint *)0x0) {
    uVar3 = *param_8;
    if (0 < (int)uVar3) {
      uVar8 = (ulong)uVar3 & 3;
      if (uVar3 < 4) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        do {
          lVar7 = uVar9 * 2;
          uVar9 = uVar9 + 4;
          *(undefined2 *)(*(long *)(param_8 + 2) + lVar7) = 0;
          *(undefined2 *)(*(long *)(param_8 + 2) + lVar7 + 2) = 0;
          *(undefined2 *)(*(long *)(param_8 + 2) + lVar7 + 4) = 0;
          *(undefined2 *)(*(long *)(param_8 + 2) + lVar7 + 6) = 0;
        } while (((ulong)uVar3 & 0xfffffffc) != uVar9);
      }
      if ((uVar3 & 3) != 0) {
        lVar7 = uVar9 << 1;
        do {
          uVar8 = uVar8 - 1;
          *(undefined2 *)(*(long *)(param_8 + 2) + lVar7) = 0;
          lVar7 = lVar7 + 2;
        } while (uVar8 != 0);
      }
    }
  }
  *(undefined4 *)(param_2 + 0x98) = 0;
  *(undefined8 *)((long)param_2 + 0x474) = 0;
  plVar10 = param_2 + 2;
  plVar1 = param_2 + 0x7d;
  *(int *)((long)plVar10 + *(long *)(*plVar10 + -0x18)) =
       *(int *)((long)plVar10 + *(long *)(*plVar10 + -0x18)) + 1;
  plVar6 = param_2 + 4;
  uVar3 = *(int *)((long)plVar10 + *(long *)(*plVar10 + -0x18)) - 1;
  plVar2 = plVar6 + (ulong)uVar3 * 4;
  if (7 < uVar3) {
    plVar2 = plVar6;
  }
  *(undefined4 *)(plVar2 + 1) = 0;
  *plVar2 = param_4;
  plVar2[2] = 0;
  uVar3 = *(int *)((long)plVar10 + *(long *)(*plVar10 + -0x18)) - 1;
  plVar2 = plVar6 + (ulong)uVar3 * 4;
  if (7 < uVar3) {
    plVar2 = plVar6;
  }
  *(int *)(plVar2 + 3) = (int)param_2[0x88];
  uVar3 = *(int *)((long)plVar10 + *(long *)(*plVar10 + -0x18)) - 1;
  plVar2 = plVar6 + (ulong)uVar3 * 4;
  if (7 < uVar3) {
    plVar2 = plVar6;
  }
  *(undefined4 *)((long)plVar2 + 0x1c) = *(undefined4 *)((long)param_2 + 0x444);
  param_2[0x83] = param_2[0x76];
  param_2[0x82] = param_2[0x87];
  iVar4 = (**(code **)(*(long *)param_2[0x87] + 0x20))();
  fVar11 = *(float *)(param_2 + 0x86);
  iVar5 = (**(code **)(*(long *)param_2[0x87] + 0x28))();
  FUN_00350090(fVar11 * (float)iVar4,*(float *)((long)param_2 + 0x434) * (float)iVar5,plVar1);
  param_2[0x80] = 0;
  *(int *)(param_2 + 0x7d) = (int)param_2[0x88];
  *(undefined4 *)((long)param_2 + 0x40c) = *(undefined4 *)((long)param_2 + 0x454);
  *(undefined4 *)((long)param_2 + 0x3ec) = *(undefined4 *)((long)param_2 + 0x444);
  FUN_00350514(plVar1);
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined1 *)((long)param_2 + 0xc) = 0;
  plVar6 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*plVar6 + 0x10))();
  plVar6 = (long *)(**(code **)(*param_2 + 0x10))(param_2);
  (**(code **)(*plVar6 + 0x10))();
  plVar6 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*plVar6 + 0x18))();
  FUN_00350520(plVar1);
  *(int *)((long)plVar10 + *(long *)(*plVar10 + -0x18)) =
       *(int *)((long)plVar10 + *(long *)(*plVar10 + -0x18)) + -1;
  param_2[0x76] = 0;
  param_2[0x77] = 0;
  param_2[0x79] = *(long *)(PTR_PTR_04bb2238 + 8);
  return (int)param_2[1];
}

