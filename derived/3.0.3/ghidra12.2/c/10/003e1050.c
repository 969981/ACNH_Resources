
long * FUN_003e1050(long param_1,int param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  
  plVar8 = *(long **)(param_1 + 0x30);
  uVar9 = param_3 + param_2 & (param_3 + param_2 >> 0x1f ^ 0xffffffffU);
  plVar3 = (long *)(param_1 + 0x28);
  plVar7 = (long *)(param_1 + 0x18);
  if (0x7e < (int)uVar9) {
    uVar9 = 0x7f;
  }
  while (plVar8 == plVar3) {
    plVar8 = *(long **)(param_1 + 0x20);
    if (plVar8 == plVar7) {
      return (long *)0x0;
    }
    uVar4 = *(int *)((long)plVar8 + -0x194) + (uint)*(byte *)(plVar8 + -0x23);
    uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
    if (0x7e < (int)uVar4) {
      uVar4 = 0x7f;
    }
    if (uVar9 < uVar4) {
      return (long *)0x0;
    }
    FUN_003e04f0(2);
    FUN_003e04b0();
    FUN_003ceb1c(plVar8 + -0x42,0);
    plVar8 = *(long **)(param_1 + 0x30);
  }
  plVar1 = (long *)plVar8[1];
  plVar6 = plVar8 + -0x42;
  lVar5 = *plVar1;
  *(long **)(*plVar8 + 8) = plVar1;
  *plVar1 = *plVar8;
  *(long **)(lVar5 + 8) = plVar8;
  *plVar8 = lVar5;
  uVar2 = (**(code **)(*plVar6 + 0x18))(plVar6,param_4);
  if ((uVar2 & 1) == 0) {
    lVar5 = *plVar8;
    plVar6 = (long *)0x0;
    *plVar8 = *plVar3;
    *(long **)(lVar5 + 8) = plVar3;
    *(long **)(*plVar3 + 8) = plVar8;
    *plVar3 = lVar5;
  }
  else {
    FUN_003ce95c(plVar6,param_2,param_3);
    for (plVar3 = *(long **)(param_1 + 0x20); plVar3 != plVar7; plVar3 = (long *)plVar3[1]) {
      uVar4 = *(int *)((long)plVar3 + -0x194) + (uint)*(byte *)(plVar3 + -0x23);
      uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
      if (0x7e < (int)uVar4) {
        uVar4 = 0x7f;
      }
      if (uVar9 < uVar4) {
        plVar7 = plVar3;
        break;
      }
    }
    lVar5 = *plVar8;
    *plVar8 = *plVar7;
    *(long **)(lVar5 + 8) = plVar7;
    *(long **)(*plVar7 + 8) = plVar8;
    *plVar7 = lVar5;
  }
  return plVar6;
}

