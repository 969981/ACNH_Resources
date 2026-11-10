
void FUN_001c3440(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = param_1 + 1;
  (**(code **)(*plVar6 + 0x10))(plVar6);
  while( true ) {
    lVar7 = *param_1;
    if (*(long *)(lVar7 + 0x30) == 0) break;
    lVar4 = *(long *)(lVar7 + 0x28);
    lVar5 = *(long *)(lVar7 + 8);
    plVar3 = *(long **)(lVar5 + lVar4 * 8);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      lVar7 = *param_1;
      lVar4 = *(long *)(lVar7 + 0x28);
      lVar5 = *(long *)(lVar7 + 8);
    }
    *(undefined8 *)(lVar5 + lVar4 * 8) = 0;
    uVar1 = *(ulong *)(lVar7 + 0x38);
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (lVar4 + 1U) / uVar1;
    }
    *(ulong *)(lVar7 + 0x28) = (lVar4 + 1U) - uVar2 * uVar1;
    *(long *)(lVar7 + 0x30) = *(long *)(lVar7 + 0x30) + -1;
  }
  if (*(long *)(lVar7 + 8) != 0) {
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 8);
    FUN_00187e4c();
  }
  FUN_00185ac4(lVar7);
  *param_1 = 0;
  (**(code **)(param_1[1] + 0x20))(plVar6);
  FUN_0018ac30(plVar6);
  return;
}

