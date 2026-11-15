
undefined8 FUN_0222b9a4(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  byte *pbVar8;
  long lVar9;
  undefined *local_38;
  char *pcStack_30;
  byte local_24 [4];
  
  puVar1 = PTR_DAT_04bb39b0;
  iVar6 = *(int *)(param_1 + 0x2a0);
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  pbVar8 = PTR_DAT_04bb32e0;
  if (lVar9 == 0) {
LAB_0222ba18:
    if (*pbVar8 < 8) goto LAB_0222ba90;
LAB_0222ba24:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0222ba88:
      pbVar8 = PTR_DAT_04bb5038;
      goto LAB_0222ba90;
    }
    lVar9 = **(long **)PTR_DAT_04bb27d0;
    bVar4 = *(byte *)(lVar9 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar7 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar7 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar7 & 8) != 0) {
        pbVar8 = (byte *)(lVar9 + 0x471);
      }
    }
    local_24[0] = *pbVar8;
    if (7 < local_24[0]) goto LAB_0222ba88;
LAB_0222baac:
    local_38 = PTR_DAT_04bb2020 + 0x10;
    pcStack_30 = "ShootDownEasterRecipeBalloon";
    iVar5 = FUN_0274bce0(local_24,&local_38);
    if (iVar5 < iVar6) {
      return 1;
    }
  }
  else {
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar8 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0222ba18;
      }
      goto LAB_0222ba24;
    }
LAB_0222ba90:
    local_24[0] = *pbVar8;
    if (local_24[0] < 8) goto LAB_0222baac;
    if (0 < iVar6) {
      return 1;
    }
  }
  lVar9 = *(long *)puVar1;
  pbVar8 = PTR_DAT_04bb32e0;
  if (lVar9 == 0) {
LAB_0222bb40:
    if (7 < *pbVar8) {
LAB_0222bb4c:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar9 = **(long **)PTR_DAT_04bb27d0;
        bVar4 = *(byte *)(lVar9 + 0x473);
        pbVar8 = PTR_DAT_04bb5038;
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          puVar7 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar7 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar7 & 8) != 0) {
            pbVar8 = (byte *)(lVar9 + 0x471);
          }
        }
        local_24[0] = *pbVar8;
        if (local_24[0] < 8) goto LAB_0222bbd4;
      }
      pbVar8 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar8 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0222bb40;
      }
      goto LAB_0222bb4c;
    }
  }
  local_24[0] = *pbVar8;
  if (7 < local_24[0]) {
    return 0;
  }
LAB_0222bbd4:
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_30 = "ShootDownEasterOverCountRecipeBalloon";
  local_38 = puVar1;
  FUN_0274ca70(local_24,&local_38,1);
  pcStack_30 = "ShootDownEasterOverCountRecipeBalloon";
  local_38 = puVar1;
  iVar6 = FUN_0274bce0(local_24,&local_38);
  if (iVar6 != 7) {
    puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar2 = *puVar7 ^ *puVar7 << 0xb;
    uVar3 = puVar7[3];
    *puVar7 = puVar7[1];
    puVar7[1] = puVar7[2];
    uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
    puVar7[2] = uVar3;
    puVar7[3] = uVar2;
    if (4 < (uint)((ulong)uVar2 * 100 >> 0x20)) {
      return 0;
    }
  }
  pcStack_30 = "ShootDownEasterOverCountRecipeBalloon";
  local_38 = puVar1;
  FUN_0274bfe8(local_24,&local_38,0);
  return 1;
}

