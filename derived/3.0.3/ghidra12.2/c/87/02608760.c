
void FUN_02608760(long param_1)

{
  long lVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  uint local_28;
  uint local_24;
  
  if (0 < *(int *)(param_1 + 8)) {
    lVar5 = 0;
    puVar6 = *(undefined8 **)(param_1 + 0x18);
    do {
      puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x10) + lVar5 * 8);
      lVar5 = lVar5 + 1;
      *puVar9 = puVar6;
      *(undefined8 **)(param_1 + 0x18) = puVar9;
      puVar6 = puVar9;
    } while (lVar5 < *(int *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  local_28 = 0;
  uVar4 = FUN_02b67a30(&local_28);
  if (((uVar4 & 1) != 0) && (local_24 = local_28, DAT_05574040 != 0)) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar5 == 0) {
        return;
      }
      lVar5 = lVar5 + 0x70;
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar6[0x26] == (long *)0x0) {
        return;
      }
      lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      if (lVar5 == 0) {
        return;
      }
    }
    if (local_24 < 10) {
      lVar1 = lVar5 + 0x1962d8 + (ulong)local_24 * 0x10d8;
      if (9 < local_24) {
        lVar1 = lVar5 + 0x1962d8;
      }
      if ((*(long **)(lVar1 + 0x878) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar1 + 0x878), puVar6 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar6)();
        uVar3 = uVar3 ^ 1;
      }
      lVar7 = *(long *)(lVar1 + 0x858);
      lVar5 = 4;
      lVar8 = *(long *)(lVar1 + 0x860);
      do {
        if (*(short *)(lVar8 + lVar7 + lVar5) == -2) break;
        FUN_0260a240(param_1);
        lVar5 = lVar5 + 0xc;
      } while (lVar5 != 0xb14);
      sVar2 = DAT_05585410;
      lVar7 = *(long *)(lVar1 + 0x858);
      lVar5 = 0;
      lVar8 = *(long *)(lVar1 + 0x860);
      iVar10 = *(int *)(param_1 + 0x94);
      do {
        if (*(short *)(lVar8 + lVar7 + 0xb14 + lVar5) != sVar2) {
          iVar10 = iVar10 + 1;
          *(int *)(param_1 + 0x94) = iVar10;
        }
        lVar5 = lVar5 + 6;
      } while (lVar5 != 0x588);
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar1 + 0x878) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar1 + 0x878) + 8), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
    }
  }
  return;
}

