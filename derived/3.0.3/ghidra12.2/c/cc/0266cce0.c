
bool FUN_0266cce0(uint param_1,byte *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  byte local_28 [4];
  uint local_24;
  
  local_28[0] = *param_2;
  if (((local_28[0] < 8) && (iVar3 = FUN_02582fe0(local_28), iVar3 != -1)) && (DAT_05574040 != 0)) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    local_24 = param_1;
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar5 == 0) {
        return false;
      }
      lVar5 = lVar5 + 0x70;
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
        return false;
      }
      if ((long *)puVar6[0x26] == (long *)0x0) {
        return false;
      }
      lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      if (lVar5 == 0) {
        return false;
      }
    }
    if (local_24 < 8) {
      lVar1 = lVar5 + 0x119228 + (ulong)local_24 * 0xfa08;
      if (7 < local_24) {
        lVar1 = lVar5 + 0x119228;
      }
      if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar6 == (undefined8 *)0x0)) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)*puVar6)();
        uVar4 = uVar4 ^ 1;
      }
      lVar5 = *(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8);
      if (iVar3 == *(char *)(lVar5 + 0x289f8)) {
        bVar2 = true;
      }
      else {
        bVar2 = iVar3 == *(char *)(lVar5 + 0x289f9);
      }
      if ((uVar4 & 1) != 0) {
        return bVar2;
      }
      if (*(long *)(lVar1 + 0x28) == 0) {
        return bVar2;
      }
      puVar6 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8);
      if (puVar6 == (undefined8 *)0x0) {
        return bVar2;
      }
      (**(code **)*puVar6)();
      return bVar2;
    }
  }
  return false;
}

