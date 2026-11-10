
bool FUN_001c3870(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  
  plVar7 = (long *)(param_1 + 0x90);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  lVar10 = *(long *)(param_1 + 0x38);
  if (lVar10 != 0) {
    puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x30) * 8);
    FUN_00196f20(*puVar11,param_2);
    FUN_001e15a8(param_3,puVar11 + 1);
    lVar4 = *(long *)(param_1 + 0x38);
    uVar1 = *(long *)(param_1 + 0x30) + 1;
    *(undefined8 *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x30) * 8) = 0;
    uVar3 = *(ulong *)(param_1 + 0x40);
    plVar8 = (long *)*puVar11;
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar1 / uVar3;
    }
    *(ulong *)(param_1 + 0x30) = uVar1 - uVar2 * uVar3;
    *(long *)(param_1 + 0x38) = lVar4 + -1;
    if (plVar8 != (long *)0x0) {
      plVar12 = *(long **)(param_1 + 0xe0);
      if (plVar12 == (long *)0x0) {
        pcVar5 = *(code **)(*plVar8 + 8);
      }
      else {
        plVar9 = plVar12 + 1;
        (**(code **)(*plVar9 + 0x10))(plVar9);
        lVar4 = *plVar12;
        lVar6 = *(long *)(lVar4 + 0x20);
        *(long **)(*(long *)(lVar4 + 8) + lVar6 * 8) = plVar8;
        uVar2 = *(ulong *)(lVar4 + 0x38);
        uVar1 = lVar6 + 1;
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar1 / uVar2;
        }
        *(ulong *)(lVar4 + 0x20) = uVar1 - uVar3 * uVar2;
        *(long *)(lVar4 + 0x30) = *(long *)(lVar4 + 0x30) + 1;
        pcVar5 = *(code **)(*plVar9 + 0x20);
        plVar8 = plVar9;
      }
      (*pcVar5)(plVar8);
    }
    lVar4 = *(long *)(param_1 + 0x68);
    *(undefined8 **)(*(long *)(param_1 + 0x50) + lVar4 * 8) = puVar11;
    uVar1 = lVar4 + 1;
    uVar2 = *(ulong *)(param_1 + 0x80);
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    *(ulong *)(param_1 + 0x68) = uVar1 - uVar3 * uVar2;
    *(bool *)param_1 = *(long *)(param_1 + 0x38) == 0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return lVar10 != 0;
}

