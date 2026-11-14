
void FUN_01ddd784(long param_1)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long lVar8;
  undefined *local_30;
  char *pcStack_28;
  byte local_4 [4];
  
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar6 = 3;
    goto LAB_01ddd990;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar6 = 4;
    goto LAB_01ddd990;
  }
  *(undefined1 *)(param_1 + 0x88) = 0;
  FUN_01de1ccc(param_1);
  if ((*(char *)(param_1 + 0x88) != '\0') && (uVar5 = FUN_02640eb0(), (uVar5 & 1) != 0)) {
    lVar8 = *(long *)PTR_DAT_04bb39b0;
    pbVar7 = PTR_DAT_04bb32e0;
    if (lVar8 == 0) {
LAB_01ddd83c:
      if (*pbVar7 < 8) goto LAB_01ddd8b4;
LAB_01ddd848:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01ddd8ac:
        pbVar7 = PTR_DAT_04bb5038;
        goto LAB_01ddd8b4;
      }
      lVar8 = **(long **)PTR_DAT_04bb27d0;
      bVar3 = *(byte *)(lVar8 + 0x473);
      pbVar7 = PTR_DAT_04bb5038;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar1 = (uint *)(lVar8 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar7 = (byte *)(lVar8 + 0x471);
        }
      }
      local_4[0] = *pbVar7;
      if (7 < local_4[0]) goto LAB_01ddd8ac;
    }
    else {
      if (*(int *)(lVar8 + 0x15c) != 0) {
        pbVar7 = (byte *)(lVar8 + 0x158);
      }
      if (7 < *pbVar7) {
        if ((*(int *)(lVar8 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar7 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_01ddd83c;
        }
        goto LAB_01ddd848;
      }
LAB_01ddd8b4:
      local_4[0] = *pbVar7;
      if (7 < local_4[0]) {
        local_4[0] = 0xff;
      }
    }
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "IllegalReportCount";
    FUN_0274ca70(local_4,&local_30,1);
  }
  puVar4 = PTR_DAT_04bb36f0;
  uVar6 = 0;
  *(undefined **)(param_1 + 0x68) = PTR_DAT_04bb2d80 + 0x10;
  lVar8 = *(long *)puVar4;
  local_30 = (undefined *)CONCAT44(local_30._4_4_,7);
  puVar4 = local_30;
  local_30._0_4_ = 7;
  if (*(uint *)(lVar8 + 0x20) < 8) {
    local_30._0_4_ = 0;
  }
  *(undefined1 *)(*(long *)(lVar8 + 0x28) + (long)(int)local_30 * 0x38 + 0x2c) = 0;
  iVar2 = 7;
  if (*(uint *)(lVar8 + 0x20) < 8) {
    iVar2 = 0;
  }
  *(undefined1 *)(*(long *)(lVar8 + 0x28) + (long)iVar2 * 0x38 + 0x2d) = 0;
  local_30._0_4_ = 7;
  if (*(uint *)(lVar8 + 0x20) < 8) {
    local_30._0_4_ = 0;
  }
  *(undefined4 *)(*(long *)(lVar8 + 0x28) + (long)(int)local_30 * 0x38) = 0;
  iVar2 = 7;
  if (*(uint *)(lVar8 + 0x20) < 8) {
    iVar2 = 0;
  }
  *(undefined1 *)(*(long *)(lVar8 + 0x28) + (long)iVar2 * 0x38 + 0x2f) = 0;
  local_30 = puVar4;
LAB_01ddd990:
  FUN_03ebb160(param_1 + 0x10,uVar6);
  *(undefined1 *)(param_1 + 0x89) = 0;
  return;
}

