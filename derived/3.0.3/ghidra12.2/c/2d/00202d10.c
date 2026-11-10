
void FUN_00202d10(long param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 auStack_a0 [112];
  
  if (param_2[2] != 0) {
    lVar4 = *param_2;
    plVar2 = (long *)param_2[1];
    lVar5 = *plVar2;
    *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar4 + 8);
    **(long **)(lVar4 + 8) = lVar5;
    param_2[2] = 0;
    while (plVar2 != param_2) {
      plVar6 = (long *)plVar2[1];
      (**(code **)plVar2[2])();
      FUN_00187e4c(plVar2);
      plVar2 = plVar6;
    }
  }
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x18);
  if (3 < (ulong)(lVar3 - lVar5)) {
    uVar1 = *(uint *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 0x28) + lVar5);
    uVar7 = (ulong)uVar1;
    *(long *)(param_1 + 0x18) = lVar5 + 4;
    if (uVar7 <= (ulong)(lVar3 - (lVar5 + 4)) && uVar1 >> 0x10 == 0) {
      while (uVar1 != 0) {
        FUN_001b8014(auStack_a0);
        FUN_001f7734(param_1,auStack_a0);
        plVar2 = (long *)FUN_00187df4(0x80);
        *plVar2 = 0;
        FUN_001b8358(plVar2 + 2,auStack_a0);
        plVar2[1] = (long)param_2;
        lVar4 = *param_2;
        *plVar2 = lVar4;
        *(long **)(lVar4 + 8) = plVar2;
        *param_2 = (long)plVar2;
        param_2[2] = param_2[2] + 1;
        FUN_001b8504(auStack_a0);
        uVar1 = (int)uVar7 - 1;
        uVar7 = (ulong)uVar1;
      }
      return;
    }
  }
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

