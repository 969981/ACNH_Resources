
void FUN_01dbd1dc(long param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  byte local_58 [24];
  byte local_24 [4];
  
  puVar3 = PTR_DAT_04bb49f0;
  puVar2 = PTR_DAT_04bb39b0;
  pbVar10 = PTR_DAT_04bb32e0;
  lVar9 = *(long *)PTR_DAT_04bb49f0;
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  pbVar5 = PTR_DAT_04bb32e0;
  if (lVar8 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_01dbd278;
LAB_01dbd2e0:
    local_58[0] = *pbVar5;
    if (7 < local_58[0]) {
      local_58[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar8 + 0x158);
    }
    if ((*pbVar5 < 8) ||
       (((*(int *)(lVar8 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar5 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar5 < 8)))) goto LAB_01dbd2e0;
LAB_01dbd278:
    if (DAT_0537d558 == (long *)0x0) {
LAB_01dbd2d8:
      pbVar5 = PTR_DAT_04bb5038;
      goto LAB_01dbd2e0;
    }
    lVar8 = *DAT_0537d558;
    bVar7 = *(byte *)(lVar8 + 0x473);
    pbVar5 = PTR_DAT_04bb5038;
    if ((long)(char)bVar7 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
      if (7 < bVar7) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar5 = (byte *)(lVar8 + 0x471);
      }
    }
    local_58[0] = *pbVar5;
    if (7 < local_58[0]) goto LAB_01dbd2d8;
  }
  *(undefined1 *)(lVar9 + 0xb0) = 0;
  uVar4 = FUN_01d7c528(lVar9,local_58);
  if ((uVar4 & 1) == 0) {
    bVar7 = local_58[0];
    if (7 < local_58[0]) {
      bVar7 = 0xff;
    }
    *(byte *)(lVar9 + 0xb1) = bVar7;
    *(undefined1 *)(lVar9 + 0xb0) = 1;
  }
  FUN_01d7cd70(*(undefined8 *)puVar3);
  *(undefined1 *)(*(long *)PTR_DAT_04bc1038 + 0x50) = 1;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_01dbd4e8;
  lVar8 = *(long *)puVar2;
  if (lVar8 == 0) {
LAB_01dbd38c:
    if (*pbVar10 < 8) goto LAB_01dbd400;
LAB_01dbd398:
    if (DAT_0537d558 == (long *)0x0) {
LAB_01dbd3f8:
      pbVar10 = PTR_DAT_04bb5038;
      goto LAB_01dbd400;
    }
    lVar8 = *DAT_0537d558;
    bVar7 = *(byte *)(lVar8 + 0x473);
    pbVar5 = PTR_DAT_04bb5038;
    if ((long)(char)bVar7 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
      if (7 < bVar7) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar5 = (byte *)(lVar8 + 0x471);
      }
    }
    local_24[0] = *pbVar5;
    if (7 < local_24[0]) goto LAB_01dbd3f8;
  }
  else {
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar8 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(lVar8 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar10 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01dbd38c;
      }
      goto LAB_01dbd398;
    }
LAB_01dbd400:
    local_24[0] = *pbVar10;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
  }
  FUN_02645730(local_58,local_24);
  uVar4 = FUN_02658470(local_24);
  if ((((uVar4 & 1) != 0) && (uVar4 = FUN_02645980(local_58), (uVar4 & 1) != 0)) &&
     (lVar8 = *(long *)(param_1 + 0x20), *(char *)(lVar8 + 0x40) == '\0')) {
    lVar9 = *(long *)puVar3;
    *(undefined1 *)(lVar9 + 0xb0) = 0;
    uVar4 = FUN_01d7c528(lVar9,local_24);
    if ((uVar4 & 1) == 0) {
      bVar7 = local_24[0];
      if (7 < local_24[0]) {
        bVar7 = 0xff;
      }
      *(byte *)(lVar9 + 0xb1) = bVar7;
      *(undefined1 *)(lVar9 + 0xb0) = 1;
    }
    lVar9 = *(long *)PTR_DAT_04bb49e8;
    uVar4 = nn::pctl::CheckFreeCommunicationPermission(false);
    if ((uVar4 & 1) != 0) {
      lVar6 = *(long *)(lVar9 + 0x38);
      *(undefined4 *)(lVar6 + 0x80) = 0;
      *(undefined1 *)(lVar6 + 0xa9) = 0;
      *(undefined1 *)(*(long *)(lVar9 + 0x38) + 0xa8) = 1;
    }
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x38) = 0;
    puVar2 = PTR_LAB_04bc1470;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    *(long *)(lVar8 + 8) = lVar8;
    *(undefined **)(lVar8 + 0x10) = puVar2;
    puVar2 = PTR_LAB_04bc1468;
    *(byte *)(lVar8 + 0x50) = local_24[0];
    *(undefined1 *)(lVar8 + 0x60) = 0;
    *(undefined1 *)(lVar8 + 0x40) = 1;
    *(long *)(lVar8 + 0x28) = lVar8;
    *(undefined **)(lVar8 + 0x30) = puVar2;
  }
LAB_01dbd4e8:
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 != 0) {
    *(undefined1 *)(lVar8 + 0x8505) = 1;
    *(undefined1 *)(lVar8 + 0x8502) = 0;
    *(undefined2 *)(lVar8 + 0x84fc) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x1c) = 0;
  }
  return;
}

