
void FUN_01dde060(long param_1)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  undefined *local_30;
  char *pcStack_28;
  byte local_4 [4];
  
  FUN_01de1ccc();
  if ((*(char *)(param_1 + 0x88) == '\0') || (uVar5 = FUN_02640eb0(), (uVar5 & 1) == 0))
  goto LAB_01dde19c;
  lVar7 = *(long *)PTR_DAT_04bb39b0;
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar7 == 0) {
LAB_01dde0e8:
    if (*pbVar6 < 8) goto LAB_01dde160;
LAB_01dde0f4:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01dde158:
      pbVar6 = PTR_DAT_04bb5038;
      goto LAB_01dde160;
    }
    lVar7 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar7 + 0x473);
    pbVar6 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar1 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar6 = (byte *)(lVar7 + 0x471);
      }
    }
    local_4[0] = *pbVar6;
    if (7 < local_4[0]) goto LAB_01dde158;
  }
  else {
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01dde0e8;
      }
      goto LAB_01dde0f4;
    }
LAB_01dde160:
    local_4[0] = *pbVar6;
    if (7 < local_4[0]) {
      local_4[0] = 0xff;
    }
  }
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "IllegalReportCount";
  FUN_0274ca70(local_4,&local_30,1);
LAB_01dde19c:
  puVar4 = PTR_DAT_04bb36f0;
  *(undefined **)(param_1 + 0x68) = PTR_DAT_04bb2d80 + 0x10;
  lVar7 = *(long *)puVar4;
  local_30 = (undefined *)CONCAT44(local_30._4_4_,7);
  puVar4 = local_30;
  local_30._0_4_ = 7;
  if (*(uint *)(lVar7 + 0x20) < 8) {
    local_30._0_4_ = 0;
  }
  *(undefined1 *)(*(long *)(lVar7 + 0x28) + (long)(int)local_30 * 0x38 + 0x2c) = 0;
  iVar2 = 7;
  if (*(uint *)(lVar7 + 0x20) < 8) {
    iVar2 = 0;
  }
  *(undefined1 *)(*(long *)(lVar7 + 0x28) + (long)iVar2 * 0x38 + 0x2d) = 0;
  local_30._0_4_ = 7;
  if (*(uint *)(lVar7 + 0x20) < 8) {
    local_30._0_4_ = 0;
  }
  *(undefined4 *)(*(long *)(lVar7 + 0x28) + (long)(int)local_30 * 0x38) = 0;
  iVar2 = 7;
  if (*(uint *)(lVar7 + 0x20) < 8) {
    iVar2 = 0;
  }
  *(undefined1 *)(*(long *)(lVar7 + 0x28) + (long)iVar2 * 0x38 + 0x2f) = 0;
  local_30 = puVar4;
  FUN_03ebb160(param_1 + 0x10,0);
  return;
}

