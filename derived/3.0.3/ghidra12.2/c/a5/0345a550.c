
/* WARNING: Removing unreachable block (ram,0x0345a6ac) */

void FUN_0345a550(void)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte *pbVar5;
  long lVar6;
  
  if (DAT_05aed670 == 0) {
    return;
  }
  if (*(long *)(DAT_05aed670 + 0x330) == 0) {
    return;
  }
  puVar3 = (undefined8 *)
           (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
  iVar2 = FUN_006bd550(*puVar3,0);
  if (iVar2 != 0x758f7eaf) {
    return;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_0345a60c:
    if (7 < *pbVar5) {
LAB_0345a618:
      if (DAT_0537d558 != (long *)0x0) {
        lVar6 = *DAT_0537d558;
        bVar4 = *(byte *)(lVar6 + 0x473);
        pbVar5 = PTR_DAT_04bb5038;
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar5 = (byte *)(lVar6 + 0x471);
          }
        }
        bVar4 = *pbVar5;
        if (bVar4 < 8) goto LAB_0345a688;
      }
      pbVar5 = &DAT_0548e168;
    }
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar5 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar5 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0345a60c;
      }
      goto LAB_0345a618;
    }
  }
  bVar4 = *pbVar5;
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
LAB_0345a688:
  lVar6 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0xc0);
  if (lVar6 != 0) {
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    *(byte *)(lVar6 + 0x1f8) = bVar4;
    *(undefined1 *)(lVar6 + 0x165) = 1;
    if ((6 < *(uint *)(lVar6 + 0xa8) || (1 << (ulong)(*(uint *)(lVar6 + 0xa8) & 0x1f) & 0x58U) == 0)
       && (*(long *)(lVar6 + 0x98) != 0)) {
      FUN_0386b090();
      return;
    }
  }
  return;
}

