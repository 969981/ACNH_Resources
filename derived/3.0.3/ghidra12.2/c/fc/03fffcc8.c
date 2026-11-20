
void FUN_03fffcc8(long param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 local_28;
  
  *(int *)(param_1 + 0x98) = param_2;
  if (*(long *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x18);
    uVar9 = *(ulong *)(param_1 + 8);
    uVar7 = (uVar5 - *(long *)(param_1 + 0x48)) + *(long *)(param_1 + 0x50);
    uVar6 = 0;
    if (uVar5 <= uVar7) {
      uVar6 = uVar5;
    }
    uVar7 = uVar7 - uVar6;
    if (uVar5 - 1 < uVar7 + uVar9) {
      if (uVar7 < uVar9) {
        FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
      }
      else {
        uVar7 = *(long *)(param_1 + 0x48) + uVar9;
        uVar6 = 0;
        if (uVar5 <= uVar7) {
          uVar6 = uVar5;
        }
        *(ulong *)(param_1 + 0x48) = uVar7 - uVar6;
      }
      if (*(long *)(param_1 + 0x90) == *(long *)(param_1 + 0x88)) {
        FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
      }
      else {
        uVar7 = *(long *)(param_1 + 0x88) + 1;
        uVar6 = 0;
        if (*(ulong *)(param_1 + 0x58) <= uVar7) {
          uVar6 = *(ulong *)(param_1 + 0x58);
        }
        *(ulong *)(param_1 + 0x88) = uVar7 - uVar6;
      }
    }
    uVar5 = *(ulong *)(param_1 + 0x58);
    uVar7 = (uVar5 - *(long *)(param_1 + 0x88)) + *(long *)(param_1 + 0x90);
    uVar6 = 0;
    if (uVar5 <= uVar7) {
      uVar6 = uVar5;
    }
    if (uVar7 != uVar6) {
      uVar6 = *(long *)(param_1 + 0x90) - 1;
      uVar7 = uVar5 + uVar6;
      if (!CARRY8(uVar5,uVar6)) {
        uVar7 = uVar6;
      }
      if (*(int *)(*(long *)(param_1 + 0x70) + uVar7 * 0x20) != param_2 + -1) {
        FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
      }
    }
    uVar7 = *(ulong *)(param_1 + 0x48);
    uVar6 = *(ulong *)(param_1 + 0x50);
    if (uVar6 < uVar7) {
      uVar5 = ~uVar6;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x18);
      uVar7 = -uVar6 - (ulong)(uVar7 == 0);
    }
    uVar8 = *(ulong *)(param_1 + 0x88);
    uVar3 = *(ulong *)(param_1 + 0x90);
    lVar1 = 0;
    if (uVar9 <= uVar7 + uVar5) {
      lVar1 = *(long *)(param_1 + 0x30) + uVar6;
    }
    if (uVar3 < uVar8) {
      uVar7 = ~uVar3;
    }
    else {
      uVar7 = *(ulong *)(param_1 + 0x58);
      uVar8 = -uVar3 - (ulong)(uVar8 == 0);
    }
    piVar2 = (int *)0x0;
    if (uVar8 + uVar7 != 0) {
      piVar2 = (int *)(*(long *)(param_1 + 0x70) + uVar3 * 0x20);
    }
    local_28 = 0xffffffffffffffff;
    plVar4 = *(long **)(*(long *)(param_1 + 200) + 0x10);
    (**(code **)(*plVar4 + 0x50))(plVar4,lVar1,uVar9,&local_28);
    *piVar2 = param_2;
    *(long *)(piVar2 + 2) = lVar1;
    piVar2[4] = (int)local_28;
    piVar2[5] = 0;
    uVar9 = *(long *)(param_1 + 0x50) + uVar9;
    uVar7 = 0;
    if (*(ulong *)(param_1 + 0x18) <= uVar9) {
      uVar7 = *(ulong *)(param_1 + 0x18);
    }
    *(ulong *)(param_1 + 0x50) = uVar9 - uVar7;
    uVar7 = *(long *)(param_1 + 0x90) + 1;
    uVar9 = 0;
    if (*(ulong *)(param_1 + 0x58) <= uVar7) {
      uVar9 = *(ulong *)(param_1 + 0x58);
    }
    *(ulong *)(param_1 + 0x90) = uVar7 - uVar9;
  }
  return;
}

