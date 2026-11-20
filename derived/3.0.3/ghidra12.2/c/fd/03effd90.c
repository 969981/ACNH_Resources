
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03effd90(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar3) {
    uVar7 = 0;
    do {
      uVar1 = uVar7;
      if (*(uint *)(param_1 + 0x10) <= uVar7) {
        uVar1 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 0x48 + 0x20) = 0;
      uVar1 = uVar7;
      if (*(uint *)(param_1 + 0x10) <= uVar7) {
        uVar1 = 0;
      }
      lVar6 = *(long *)(param_1 + 0x18) + (ulong)uVar1 * 0x48;
      *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) & 0xfffffffd;
      uVar1 = uVar7;
      if (*(uint *)(param_1 + 0x10) <= uVar7) {
        uVar1 = 0;
      }
      lVar6 = *(long *)(param_1 + 0x18) + (ulong)uVar1 * 0x48;
      *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) | 4;
      uVar1 = uVar7;
      if (*(uint *)(param_1 + 0x10) <= uVar7) {
        uVar1 = 0;
      }
      uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 0x48 + 8);
      if (0 < (int)uVar1) {
        uVar8 = 0;
        do {
          uVar2 = uVar7;
          if (*(uint *)(param_1 + 0x10) <= uVar7) {
            uVar2 = 0;
          }
          lVar6 = *(long *)(param_1 + 0x18) + (ulong)uVar2 * 0x48;
          uVar2 = uVar8;
          if (*(uint *)(lVar6 + 8) <= uVar8) {
            uVar2 = 0;
          }
          FUN_0054e750(*(undefined8 *)(*(long *)(lVar6 + 0x10) + (ulong)uVar2 * 0x20 + 8));
          uVar8 = uVar8 + 1;
        } while (uVar1 != uVar8);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar3);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar4 = _DAT_04102200;
  if ((*(long *)(param_1 + 0x50) == 0) ||
     (lVar6 = *(long *)(*(long *)(param_1 + 0x50) + 0x28), lVar6 == 0)) {
    *(undefined8 *)(param_1 + 0x70) = _UNK_04102208;
    *(undefined8 *)(param_1 + 0x68) = uVar4;
    uVar4 = _DAT_04102880;
    *(undefined8 *)(param_1 + 0x80) = _UNK_04102888;
    *(undefined8 *)(param_1 + 0x78) = uVar4;
    uVar4 = _DAT_041023d0;
    *(undefined8 *)(param_1 + 0x90) = _UNK_041023d8;
    *(undefined8 *)(param_1 + 0x88) = uVar4;
  }
  else {
    plVar5 = *(long **)**(undefined8 **)(lVar6 + 0x38);
    (**(code **)(*plVar5 + 0x70))(plVar5,param_1 + 0x68,0);
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}

