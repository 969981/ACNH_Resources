
bool FUN_026c45e0(void)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  undefined *local_28;
  char *pcStack_20;
  byte local_14 [4];
  
  uVar3 = FUN_0252cf54();
  if ((uVar3 & 1) == 0) {
    return false;
  }
  lVar7 = *(long *)PTR_DAT_04bb39b0;
  pbVar4 = PTR_DAT_04bb32e0;
  if (lVar7 == 0) {
    bVar5 = *PTR_DAT_04bb32e0;
joined_r0x026c4664:
    if (7 < bVar5) {
LAB_026c4668:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar7 = **(long **)PTR_DAT_04bb27d0;
        bVar5 = *(byte *)(lVar7 + 0x473);
        pbVar4 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar1 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar4 = (byte *)(lVar7 + 0x471);
          }
        }
        local_14[0] = *pbVar4;
        if (local_14[0] < 8) goto LAB_026c46e8;
      }
      pbVar4 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar4 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar4) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar4 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        bVar5 = *pbVar4;
        goto joined_r0x026c4664;
      }
      goto LAB_026c4668;
    }
  }
  local_14[0] = *pbVar4;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
LAB_026c46e8:
  bVar6 = *PTR_DAT_04bb32e0;
  bVar5 = local_14[0];
  if (7 < local_14[0]) {
    bVar5 = 0xff;
  }
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  if (bVar5 == bVar6) {
    return false;
  }
  local_28 = PTR_DAT_04bb2020 + 0x10;
  pcStack_20 = "ValidatePlayerSaveFlag";
  iVar2 = FUN_0274bce0(local_14,&local_28);
  return 0 < iVar2;
}

