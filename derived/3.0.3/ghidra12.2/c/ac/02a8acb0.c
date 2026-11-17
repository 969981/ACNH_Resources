
uint FUN_02a8acb0(long param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb39b0;
  bVar2 = DAT_0548e140;
  if (lVar5 == 0) {
joined_r0x02a8ad30:
    uVar3 = (uint)bVar2;
    if (7 < bVar2) {
LAB_02a8ad34:
      if (DAT_0537d558 != (long *)0x0) {
        lVar5 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar5 + 0x473);
        pbVar4 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar5 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar4 = (byte *)(lVar5 + 0x471);
          }
        }
        uVar3 = (uint)*pbVar4;
        if (*pbVar4 < 8) goto LAB_02a8ada0;
      }
      uVar3 = (uint)DAT_0548e168;
      if (7 < DAT_0548e168) {
        *(undefined4 *)(param_1 + 0x1b4) = 0xffffffff;
        goto LAB_02a8ada8;
      }
    }
  }
  else {
    pbVar4 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar5 + 0x15c) != 0) {
      pbVar4 = (byte *)(lVar5 + 0x158);
    }
    uVar3 = (uint)*pbVar4;
    if (7 < *pbVar4) {
      if ((*(int *)(lVar5 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        bVar2 = *(byte *)(DAT_054f5738 + 0x11a5);
        goto joined_r0x02a8ad30;
      }
      goto LAB_02a8ad34;
    }
  }
LAB_02a8ada0:
  *(uint *)(param_1 + 0x1b4) = uVar3;
  *(char *)(param_1 + 0x1b8) = (char)uVar3;
LAB_02a8ada8:
  *(undefined1 *)(param_1 + 0x1b9) = 1;
  uVar3 = FUN_023030a0(param_1 + 0x1a8);
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 3;
  }
  return uVar3 & 1;
}

