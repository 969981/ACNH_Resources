
byte FUN_02663fa0(undefined4 *param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint local_28;
  uint local_24;
  
  local_28 = 0;
  uVar3 = FUN_02b67a30(&local_28,*param_1);
  if (((uVar3 & 1) != 0) && (local_24 = local_28, DAT_05574040 != 0)) {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar4 == 0) {
        return 0;
      }
      lVar4 = lVar4 + 0x70;
    }
    else {
      if (puVar5 == (undefined8 *)0x0) {
        return 0;
      }
      if ((long *)puVar5[0x26] == (long *)0x0) {
        return 0;
      }
      lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      if (lVar4 == 0) {
        return 0;
      }
    }
    if (local_24 < 10) {
      lVar2 = lVar4 + 0x1962d8 + (ulong)local_24 * 0x10d8;
      if (9 < local_24) {
        lVar2 = lVar4 + 0x1962d8;
      }
      if ((*(long **)(lVar2 + 0x878) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar2 + 0x878), puVar5 == (undefined8 *)0x0)) {
        return *(byte *)(*(long *)(lVar2 + 0x860) + *(long *)(lVar2 + 0x858)) & 1;
      }
      uVar3 = (**(code **)*puVar5)();
      bVar1 = *(byte *)(*(long *)(lVar2 + 0x860) + *(long *)(lVar2 + 0x858)) & 1;
      if ((uVar3 & 1) == 0) {
        return bVar1;
      }
      if (*(long *)(lVar2 + 0x878) == 0) {
        return bVar1;
      }
      puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x878) + 8);
      if (puVar5 == (undefined8 *)0x0) {
        return bVar1;
      }
      (**(code **)*puVar5)();
      return bVar1;
    }
  }
  return 0;
}

