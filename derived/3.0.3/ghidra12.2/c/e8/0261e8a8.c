
byte FUN_0261e8a8(uint param_1,undefined4 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  
  lVar4 = **(long **)PTR_DAT_04bb27d0;
  bVar6 = *(byte *)(lVar4 + 0x473);
  if ((long)(char)bVar6 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar4 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x80;
    if (7 < bVar6) {
      pbVar1 = (byte *)(lVar4 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar4 + 0x472) != bVar6)) {
      return 0;
    }
  }
  if ((DAT_05574040 == 0) || (lVar4 = FUN_026eec4c(DAT_05574040,*param_2), lVar4 == 0)) {
    return 0;
  }
  lVar5 = lVar4 + 0x194b0;
  if (*(long *)(lVar4 + 0x194b8) == 0) {
    lVar5 = *(long *)(DAT_05574040 + 0x20);
  }
  if ((*(long **)(lVar5 + 0x86b0) == (long *)0x0) ||
     (puVar3 = (undefined8 *)**(long **)(lVar5 + 0x86b0), puVar3 == (undefined8 *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)*puVar3)();
    uVar2 = uVar2 ^ 1;
  }
  if ((param_1 & 0xffff) < 0x800) {
    bVar6 = *(byte *)(*(long *)(lVar5 + 0x8698) + *(long *)(lVar5 + 0x8690) +
                     ((ulong)(param_1 >> 3) & 0x1fff)) >> (ulong)(param_1 & 7) & 1;
  }
  else {
    bVar6 = 0;
  }
  if ((uVar2 & 1) != 0) {
    return bVar6;
  }
  if (*(long *)(lVar5 + 0x86b0) == 0) {
    return bVar6;
  }
  puVar3 = *(undefined8 **)(*(long *)(lVar5 + 0x86b0) + 8);
  if (puVar3 == (undefined8 *)0x0) {
    return bVar6;
  }
  (**(code **)*puVar3)();
  return bVar6;
}

