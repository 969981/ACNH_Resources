
void FUN_029fc91c(undefined8 param_1,undefined1 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 local_14 [4];
  
  lVar5 = **(long **)PTR_DAT_04bb27d0;
  bVar2 = *(byte *)(lVar5 + 0x473);
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar5 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
    if (7 < bVar2) {
      pbVar1 = (byte *)(lVar5 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar5 + 0x472) != bVar2)) {
      return;
    }
  }
  lVar6 = *(long *)PTR_DAT_04bb29d0;
  lVar4 = (long)(lVar6 * (*(long *)(*(long *)PTR_DAT_04bd1e70 + 8) +
                         (ulong)*(uint *)(*(long *)PTR_DAT_04bd1e70 + 4)) * 5) / 1000;
  lVar7 = *(long *)PTR_DAT_04bb47c8;
  lVar5 = *(long *)(lVar7 + 0x188);
  if (*(char *)(lVar7 + 0x1a0) == '\0') {
    lVar5 = -1;
  }
  if (-1 < lVar5) {
    lVar8 = *(long *)(lVar7 + 0x198);
    if (*(char *)(lVar7 + 0x1a0) == '\0') {
      lVar8 = -1;
    }
    lVar8 = lVar4 - lVar8;
    lVar7 = 0;
    if (lVar6 != 0) {
      lVar7 = lVar8 / lVar6;
    }
    lVar3 = 0;
    if (lVar6 != 0) {
      lVar3 = (lVar8 * 1000) / lVar6;
    }
    lVar6 = lVar7 * 1000;
    if (lVar8 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
      lVar6 = lVar3;
    }
    lVar5 = lVar6 + lVar5;
  }
  local_14[0] = *param_2;
  FUN_029fca50(param_1,local_14,lVar4,lVar5);
  return;
}

