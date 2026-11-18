
/* WARNING: Removing unreachable block (ram,0x0345a394) */

void FUN_0345a290(void)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  
  if (DAT_04cd19d8 == 0) {
    pbVar3 = &DAT_0548e140;
LAB_0345a2f4:
    if (7 < *pbVar3) {
LAB_0345a300:
      if (DAT_0537d558 != (long *)0x0) {
        lVar4 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar4 + 0x473);
        pbVar3 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar4 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar3 = (byte *)(lVar4 + 0x471);
          }
        }
        bVar2 = *pbVar3;
        if (bVar2 < 8) goto LAB_0345a370;
      }
      pbVar3 = &DAT_0548e168;
    }
  }
  else {
    pbVar3 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar3 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar3) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar3 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0345a2f4;
      }
      goto LAB_0345a300;
    }
  }
  bVar2 = *pbVar3;
  if (7 < bVar2) {
    bVar2 = 0xff;
  }
LAB_0345a370:
  lVar4 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x60);
  if (lVar4 != 0) {
    if (7 < bVar2) {
      bVar2 = 0xff;
    }
    *(byte *)(lVar4 + 0x1f8) = bVar2;
    *(undefined1 *)(lVar4 + 0x165) = 1;
    if ((6 < *(uint *)(lVar4 + 0xa8) || (1 << (ulong)(*(uint *)(lVar4 + 0xa8) & 0x1f) & 0x58U) == 0)
       && (*(long *)(lVar4 + 0x98) != 0)) {
      FUN_0386b090();
      return;
    }
  }
  return;
}

