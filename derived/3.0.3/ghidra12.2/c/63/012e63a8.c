
undefined2 FUN_012e63a8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  puVar11 = (undefined8 *)(param_1 + 0x1d8);
  uVar8 = (**(code **)(*(long *)(param_1 + 0x1d8) + 0x10))(puVar11);
  if (((uVar8 & 1) != 0) && (lVar9 = (**(code **)*puVar11)(puVar11), lVar9 != 0)) {
    iVar1 = *(int *)(param_2 + 0xc);
    puVar12 = (undefined8 *)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 0x14);
    uVar4 = *(int *)(param_2 + 8) - *(int *)(param_1 + 0x10);
    plVar10 = (long *)(**(code **)*puVar12)(puVar12);
    uVar5 = (**(code **)(*plVar10 + 0x18))();
    if (uVar4 < uVar5) {
      uVar5 = iVar1 - iVar2;
      plVar10 = (long *)(**(code **)*puVar12)(puVar12);
      uVar6 = (**(code **)(*plVar10 + 0x20))();
      if (uVar5 < uVar6) {
        if (((*(long *)(param_1 + 0x1b8) != 0) && (uVar4 < *(uint *)(param_1 + 0x1c8))) &&
           (uVar5 < *(uint *)(param_1 + 0x1cc))) {
          iVar1 = *(int *)(param_1 + 0x1c4);
          uVar6 = uVar4 + *(uint *)(param_1 + 0x1c8) * uVar5;
          *(int *)(param_1 + 0x1c4) = iVar1 + 1;
          if (((int)uVar6 < 0) || (*(int *)(param_1 + 0x1c0) <= (int)uVar6)) {
            *(int *)(param_1 + 0x1c4) = iVar1;
          }
          else {
            uVar7 = *(uint *)(*(long *)(param_1 + 0x1b8) + (ulong)(uVar6 >> 5) * 4);
            *(int *)(param_1 + 0x1c4) = iVar1;
            if ((uVar7 >> (ulong)(uVar6 & 0x1f) & 1) != 0) {
              return DAT_05585410;
            }
          }
        }
        plVar10 = (long *)(**(code **)*puVar11)(puVar11);
        uVar6 = (**(code **)(*plVar10 + 0x18))();
        uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10);
        if (uVar6 <= uVar4) {
          uVar4 = 0;
        }
        if (uVar7 <= uVar5) {
          uVar5 = 0;
        }
        if (((long *)plVar10[5] == (long *)0x0) ||
           (puVar11 = *(undefined8 **)plVar10[5], puVar11 == (undefined8 *)0x0)) {
          uVar6 = 1;
        }
        else {
          uVar6 = (**(code **)*puVar11)();
          uVar6 = uVar6 ^ 1;
        }
        lVar9 = (**(code **)(*plVar10 + 0x28))(plVar10,uVar4,uVar5);
        uVar3 = *(undefined2 *)(lVar9 + plVar10[1]);
        if ((uVar6 & 1) != 0) {
          return uVar3;
        }
        if (plVar10[5] == 0) {
          return uVar3;
        }
        puVar11 = *(undefined8 **)(plVar10[5] + 8);
        if (puVar11 == (undefined8 *)0x0) {
          return uVar3;
        }
        (**(code **)*puVar11)();
        return uVar3;
      }
    }
  }
  return DAT_05585410;
}

