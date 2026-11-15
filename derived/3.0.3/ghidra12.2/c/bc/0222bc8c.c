
bool FUN_0222bc8c(long param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  byte *pbVar11;
  long lVar12;
  undefined *local_50;
  char *pcStack_48;
  byte local_24 [4];
  
  uVar9 = FUN_0222b9a4();
  puVar6 = PTR_DAT_04bb39b0;
  puVar5 = PTR_DAT_04bb2020;
  if ((uVar9 & 1) == 0) {
    return false;
  }
  lVar12 = *(long *)PTR_DAT_04bb39b0;
  pbVar11 = PTR_DAT_04bb32e0;
  if (lVar12 == 0) {
LAB_0222bd18:
    if (*pbVar11 < 8) goto LAB_0222bd90;
LAB_0222bd24:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0222bd88:
      pbVar11 = PTR_DAT_04bb5038;
      goto LAB_0222bd90;
    }
    lVar12 = **(long **)PTR_DAT_04bb27d0;
    bVar4 = *(byte *)(lVar12 + 0x473);
    pbVar11 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar10 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar10 = (uint *)(lVar12 + 0x48);
      }
      if ((*puVar10 & 8) != 0) {
        pbVar11 = (byte *)(lVar12 + 0x471);
      }
    }
    local_24[0] = *pbVar11;
    if (7 < local_24[0]) goto LAB_0222bd88;
  }
  else {
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar12 + 0x158);
    }
    if (7 < *pbVar11) {
      if ((*(int *)(lVar12 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar11 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0222bd18;
      }
      goto LAB_0222bd24;
    }
LAB_0222bd90:
    local_24[0] = *pbVar11;
    if (7 < local_24[0]) {
      return true;
    }
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "ShootDownEasterRecipeBalloon";
  iVar7 = FUN_0274bce0(local_24,&local_50);
  if (iVar7 == 0) {
    return true;
  }
  iVar7 = *(int *)(param_1 + 0x2a0);
  lVar12 = *(long *)puVar6;
  pbVar11 = PTR_DAT_04bb32e0;
  if (lVar12 == 0) {
LAB_0222be34:
    if (*pbVar11 < 8) goto LAB_0222beac;
LAB_0222be40:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0222bea4:
      pbVar11 = PTR_DAT_04bb5038;
      goto LAB_0222beac;
    }
    lVar12 = **(long **)PTR_DAT_04bb27d0;
    bVar4 = *(byte *)(lVar12 + 0x473);
    pbVar11 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar10 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar10 = (uint *)(lVar12 + 0x48);
      }
      if ((*puVar10 & 8) != 0) {
        pbVar11 = (byte *)(lVar12 + 0x471);
      }
    }
    local_24[0] = *pbVar11;
    if (7 < local_24[0]) goto LAB_0222bea4;
  }
  else {
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar12 + 0x158);
    }
    if (7 < *pbVar11) {
      if ((*(int *)(lVar12 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar11 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0222be34;
      }
      goto LAB_0222be40;
    }
LAB_0222beac:
    local_24[0] = *pbVar11;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
      iVar8 = 0;
      goto LAB_0222bee4;
    }
  }
  local_50 = puVar5 + 0x10;
  pcStack_48 = "ShootDownEasterRecipeBalloon";
  iVar8 = FUN_0274bce0(local_24,&local_50);
LAB_0222bee4:
  if (iVar7 <= iVar8) {
    *(undefined4 *)(param_1 + 0x2ac) = 100;
  }
  puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar2 = *puVar10 ^ *puVar10 << 0xb;
  uVar3 = puVar10[3];
  *puVar10 = puVar10[1];
  puVar10[1] = puVar10[2];
  uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
  puVar10[2] = uVar3;
  puVar10[3] = uVar2;
  iVar7 = *(int *)(param_1 + 0x2ac);
  bVar1 = (int)((ulong)uVar2 * 100 >> 0x20) <= iVar7;
  if (bVar1) {
    iVar7 = 0x1e;
  }
  else {
    iVar7 = iVar7 + 0x23;
  }
  *(int *)(param_1 + 0x2ac) = iVar7;
  return bVar1;
}

