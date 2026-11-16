
uint FUN_0266c940(byte *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint local_28;
  byte local_24 [4];
  
  local_24[0] = *param_1;
  if ((local_24[0] < 8) && (iVar3 = FUN_02582fe0(local_24), iVar3 != -1)) {
    local_28 = 0;
    uVar4 = FUN_02b5e950(&local_28,iVar3);
    uVar2 = local_28;
    if (((uVar4 & 1) != 0) && (DAT_05574040 != 0)) {
      puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
        if (lVar5 == 0) {
          return 0;
        }
        lVar5 = lVar5 + 0x70;
      }
      else {
        if (puVar6 == (undefined8 *)0x0) {
          return 0;
        }
        if ((long *)puVar6[0x26] == (long *)0x0) {
          return 0;
        }
        lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
        if (lVar5 == 0) {
          return 0;
        }
      }
      if (uVar2 < 8) {
        lVar1 = lVar5 + 0x119228 + (ulong)uVar2 * 0xfa08;
        if (7 < uVar2) {
          lVar1 = lVar5 + 0x119228;
        }
        if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
           (puVar6 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar6 == (undefined8 *)0x0)) {
          uVar2 = *(uint *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8));
          if (8 < uVar2) {
            uVar2 = 0;
          }
          return uVar2;
        }
        uVar4 = (**(code **)*puVar6)();
        uVar2 = *(uint *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8));
        if (8 < uVar2) {
          uVar2 = 0;
        }
        if ((uVar4 & 1) == 0) {
          return uVar2;
        }
        if (*(long *)(lVar1 + 0x28) == 0) {
          return uVar2;
        }
        puVar6 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8);
        if (puVar6 == (undefined8 *)0x0) {
          return uVar2;
        }
        (**(code **)*puVar6)();
        return uVar2;
      }
    }
  }
  return 0;
}

