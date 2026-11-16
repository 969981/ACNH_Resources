
int FUN_0262f630(undefined4 *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  
  lVar5 = **(long **)PTR_DAT_04bb27d0;
  bVar2 = *(byte *)(lVar5 + 0x473);
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar5 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
    if (7 < bVar2) {
      pbVar1 = (byte *)(lVar5 + 0x48);
    }
    if ((*pbVar1 >> 3 & 1) != 0) {
      if (*(byte *)(lVar5 + 0x472) != bVar2) {
        return 0;
      }
      if (*(byte *)(lVar5 + 0x472) != bVar2) {
        return 0;
      }
    }
  }
  if ((DAT_05574040 == 0) || (lVar5 = FUN_026eec4c(DAT_05574040,*param_1), lVar5 == 0)) {
    return 0;
  }
  lVar6 = lVar5 + 0x194b0;
  if (*(long *)(lVar5 + 0x194b8) == 0) {
    lVar6 = *(long *)(DAT_05574040 + 0x20);
  }
  if ((*(long **)(lVar6 + 0x86b0) == (long *)0x0) ||
     (puVar4 = (undefined8 *)**(long **)(lVar6 + 0x86b0), puVar4 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)*puVar4)();
    uVar3 = uVar3 ^ 1;
  }
  uVar7 = 0;
  iVar8 = 0;
  do {
    if ((*(byte *)(param_2 + (ulong)(uVar7 >> 3)) >> (ulong)(uVar7 & 7) & 1) != 0) {
      iVar8 = iVar8 + (*(byte *)(*(long *)(lVar6 + 0x8698) + *(long *)(lVar6 + 0x8690) +
                                (ulong)(uVar7 >> 3)) >> (ulong)(uVar7 & 7) & 1);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0x800);
  if ((uVar3 & 1) != 0) {
    return iVar8;
  }
  if (*(long *)(lVar6 + 0x86b0) == 0) {
    return iVar8;
  }
  puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x86b0) + 8);
  if (puVar4 == (undefined8 *)0x0) {
    return iVar8;
  }
  (**(code **)*puVar4)();
  return iVar8;
}

