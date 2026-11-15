
bool FUN_021ae428(long param_1,undefined1 *param_2,int param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  *param_2 = 0;
  if (DAT_05574040 == 0) {
    return false;
  }
  puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar3 == 0) {
      return false;
    }
    lVar3 = lVar3 + 0x70;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      return false;
    }
    if ((long *)puVar5[0x26] == (long *)0x0) {
      return false;
    }
    lVar3 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
    if (lVar3 == 0) {
      return false;
    }
  }
  if (*(long **)(lVar3 + 0x1a0b70) == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = (undefined8 *)**(long **)(lVar3 + 0x1a0b70);
    uVar4 = 0;
    if (puVar5 != (undefined8 *)0x0) {
      uVar4 = (**(code **)*puVar5)();
    }
  }
  uVar1 = *(uint *)(*(long *)(lVar3 + 0x1a0b58) + *(long *)(lVar3 + 0x1a0b50));
  if (3 < uVar1) {
    uVar1 = 0;
  }
  bVar2 = uVar1 == 3;
  if ((bVar2) && ((param_3 != 0 || (*(int *)(param_1 + 0x55d08) + 0x14U <= param_4)))) {
    *param_2 = 1;
    if ((uVar4 & 1) == 0) {
      return false;
    }
    if (*(long *)(lVar3 + 0x1a0b70) == 0) {
      return false;
    }
    bVar2 = false;
    puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x1a0b70) + 8);
  }
  else {
    if ((uVar4 & 1) == 0) {
      return bVar2;
    }
    if (*(long *)(lVar3 + 0x1a0b70) == 0) {
      return bVar2;
    }
    puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x1a0b70) + 8);
  }
  if (puVar5 == (undefined8 *)0x0) {
    return bVar2;
  }
  (**(code **)*puVar5)();
  return bVar2;
}

