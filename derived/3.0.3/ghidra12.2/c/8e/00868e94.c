
void FUN_00868e94(void)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  undefined *local_30;
  char *pcStack_28;
  byte local_8 [4];
  byte local_4 [4];
  
  FUN_008690d8();
  FUN_00e48a70(2);
  FUN_02cae70c(*(undefined8 *)PTR_DAT_04bc5c78,3);
  puVar3 = PTR_DAT_04bb39b0;
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  pbVar5 = PTR_DAT_04bb32e0;
  if (lVar6 == 0) {
LAB_00868f24:
    if (*pbVar5 < 8) goto LAB_00868f9c;
LAB_00868f30:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_00868f94:
      pbVar5 = PTR_DAT_04bb5038;
      goto LAB_00868f9c;
    }
    lVar6 = **(long **)PTR_DAT_04bb27d0;
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
    if (7 < local_4[0]) goto LAB_00868f94;
  }
  else {
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(lVar6 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar5 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_00868f24;
      }
      goto LAB_00868f30;
    }
LAB_00868f9c:
    local_4[0] = *pbVar5;
    if (7 < local_4[0]) {
      local_4[0] = 0xff;
    }
  }
  uVar4 = FUN_02669430(local_4);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar6 = *(long *)puVar3;
  pbVar5 = PTR_DAT_04bb32e0;
  if (lVar6 == 0) {
LAB_00869014:
    if (7 < *pbVar5) {
LAB_00869020:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar6 = **(long **)PTR_DAT_04bb27d0;
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
        if (local_8[0] < 8) goto LAB_008690a0;
      }
      pbVar5 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(lVar6 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar5 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_00869014;
      }
      goto LAB_00869020;
    }
  }
  local_8[0] = *pbVar5;
  if (7 < local_8[0]) {
    local_8[0] = 0xff;
  }
LAB_008690a0:
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "CatchtFesBox_Valid";
  FUN_0274bfe8(local_8,&local_30,0);
  return;
}

