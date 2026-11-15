
undefined8 FUN_02204b90(void)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  long lVar6;
  undefined **local_30;
  char *pcStack_28;
  byte local_8 [4];
  byte local_4 [4];
  
  if (DAT_04cd19d8 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_02204c00:
    if (*pbVar5 < 8) goto LAB_02204c78;
LAB_02204c0c:
    if (DAT_0537d558 == (long *)0x0) {
LAB_02204c70:
      pbVar5 = &DAT_0548e168;
      goto LAB_02204c78;
    }
    lVar6 = *DAT_0537d558;
    bVar2 = *(byte *)(lVar6 + 0x473);
    pbVar5 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar6 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar5 = (byte *)(lVar6 + 0x471);
      }
    }
    local_8[0] = *pbVar5;
    if (7 < local_8[0]) goto LAB_02204c70;
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar5 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar5 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02204c00;
      }
      goto LAB_02204c0c;
    }
LAB_02204c78:
    local_8[0] = *pbVar5;
    if (7 < local_8[0]) {
      return 0;
    }
  }
  if (DAT_04cd19d8 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_02204cf8:
    if (*pbVar5 < 8) goto LAB_02204d70;
LAB_02204d04:
    if (DAT_0537d558 == (long *)0x0) {
LAB_02204d68:
      pbVar5 = &DAT_0548e168;
      goto LAB_02204d70;
    }
    lVar6 = *DAT_0537d558;
    bVar2 = *(byte *)(lVar6 + 0x473);
    pbVar5 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar6 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar5 = (byte *)(lVar6 + 0x471);
      }
    }
    local_4[0] = *pbVar5;
    if (7 < local_4[0]) goto LAB_02204d68;
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar5 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar5 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02204cf8;
      }
      goto LAB_02204d04;
    }
LAB_02204d70:
    local_4[0] = *pbVar5;
    if (7 < local_4[0]) {
      local_4[0] = 0xff;
      goto LAB_02204db4;
    }
  }
  local_30 = &PTR_LAB_048f9770;
  pcStack_28 = "AlwJuneBrideRemakeOpenFlag";
  iVar3 = FUN_0274bce0(local_4,&local_30);
  if (iVar3 != 0) {
    return 7;
  }
LAB_02204db4:
  local_30 = &PTR_LAB_048f9770;
  pcStack_28 = "AlwJuneBrideDayAlreadyCount";
  uVar4 = FUN_0274bce0(local_8,&local_30);
  return uVar4;
}

