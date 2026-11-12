
undefined8 FUN_008d9aa8(long param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  byte bVar3;
  byte *pbVar4;
  long lVar5;
  
  FUN_008c3440(param_1,*(undefined4 *)(param_1 + 0x410));
  if (*(int *)(DAT_04cd19d8 + 0x15c) == 0) {
    uVar2 = 0xb;
    goto LAB_008d9bc8;
  }
  pbVar4 = PTR_DAT_04bb32e0;
  if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
    pbVar4 = (byte *)(DAT_04cd19d8 + 0x158);
  }
  if ((*pbVar4 < 8) ||
     (((*(int *)(DAT_04cd19d8 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
      (pbVar4 = (byte *)(DAT_054f5738 + 0x11a5), *pbVar4 < 8)))) {
LAB_008d9b8c:
    bVar3 = *pbVar4;
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
  }
  else {
    if (DAT_0537d558 == (long *)0x0) {
LAB_008d9b84:
      pbVar4 = &DAT_0548e168;
      goto LAB_008d9b8c;
    }
    lVar5 = *DAT_0537d558;
    bVar3 = *(byte *)(lVar5 + 0x473);
    pbVar4 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar1 = (uint *)(lVar5 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar4 = (byte *)(lVar5 + 0x471);
      }
    }
    bVar3 = *pbVar4;
    if (7 < bVar3) goto LAB_008d9b84;
  }
  uVar2 = 8;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  *(byte *)(param_1 + 0x309b8) = bVar3;
  *(undefined4 *)(param_1 + 0x307e4) = *(undefined4 *)(param_1 + 0x307e8);
  *(undefined4 *)(param_1 + 0x307ec) = 0x17;
LAB_008d9bc8:
  FUN_03ebb160(param_1 + 0x408,uVar2);
  return 1;
}

