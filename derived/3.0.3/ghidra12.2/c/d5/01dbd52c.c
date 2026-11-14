
void FUN_01dbd52c(long param_1)

{
  uint *puVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_40 [28];
  byte local_24 [4];
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  if (lVar6 == 0) {
    pbVar3 = &DAT_0548e140;
LAB_01dbd5a8:
    if (7 < *pbVar3) {
LAB_01dbd5b4:
      if (DAT_0537d558 != (long *)0x0) {
        lVar6 = *DAT_0537d558;
        bVar5 = *(byte *)(lVar6 + 0x473);
        pbVar3 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar3 = (byte *)(lVar6 + 0x471);
          }
        }
        local_24[0] = *pbVar3;
        if (local_24[0] < 8) goto LAB_01dbd630;
      }
      pbVar3 = &DAT_0548e168;
    }
  }
  else {
    pbVar3 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar3 = (byte *)(lVar6 + 0x158);
    }
    if (7 < *pbVar3) {
      if ((*(int *)(lVar6 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar3 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01dbd5a8;
      }
      goto LAB_01dbd5b4;
    }
  }
  local_24[0] = *pbVar3;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
LAB_01dbd630:
  FUN_02645730(auStack_40,local_24);
  uVar2 = FUN_02658470(local_24);
  if ((((uVar2 & 1) != 0) && (uVar2 = FUN_02645980(auStack_40), (uVar2 & 1) != 0)) &&
     (lVar6 = *(long *)(param_1 + 0x20), *(char *)(lVar6 + 0x40) == '\0')) {
    lVar7 = *(long *)PTR_DAT_04bb49f0;
    *(undefined1 *)(lVar7 + 0xb0) = 0;
    uVar2 = FUN_01d7c528(lVar7,local_24);
    if ((uVar2 & 1) == 0) {
      bVar5 = local_24[0];
      if (7 < local_24[0]) {
        bVar5 = 0xff;
      }
      *(byte *)(lVar7 + 0xb1) = bVar5;
      *(undefined1 *)(lVar7 + 0xb0) = 1;
    }
    lVar7 = *(long *)PTR_DAT_04bb49e8;
    uVar2 = nn::pctl::CheckFreeCommunicationPermission(false);
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(lVar7 + 0x38);
      *(undefined4 *)(lVar4 + 0x80) = 0;
      *(undefined1 *)(lVar4 + 0xa9) = 0;
      *(undefined1 *)(*(long *)(lVar7 + 0x38) + 0xa8) = 1;
    }
    *(undefined8 *)(lVar6 + 0x18) = 0;
    *(undefined8 *)(lVar6 + 0x38) = 0;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    *(long *)(lVar6 + 8) = lVar6;
    *(undefined1 **)(lVar6 + 0x10) = &LAB_01da1c78;
    *(byte *)(lVar6 + 0x50) = local_24[0];
    *(undefined1 *)(lVar6 + 0x60) = 0;
    *(undefined1 *)(lVar6 + 0x40) = 1;
    *(long *)(lVar6 + 0x28) = lVar6;
    *(undefined1 **)(lVar6 + 0x30) = &LAB_01da1bec;
  }
  return;
}

