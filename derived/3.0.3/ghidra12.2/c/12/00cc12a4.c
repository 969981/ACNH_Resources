
void FUN_00cc12a4(void)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  undefined *local_58 [4];
  int local_34;
  undefined *local_30;
  char *pcStack_28;
  byte local_4 [4];
  
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  pbVar5 = PTR_DAT_04bb32e0;
  if (lVar6 == 0) {
LAB_00cc1314:
    if (*pbVar5 < 8) goto LAB_00cc138c;
LAB_00cc1320:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_00cc1384:
      pbVar5 = PTR_DAT_04bb5038;
      goto LAB_00cc138c;
    }
    lVar6 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar6 + 0x473);
    pbVar5 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar2 = (uint *)(lVar6 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar5 = (byte *)(lVar6 + 0x471);
      }
    }
    local_4[0] = *pbVar5;
    if (7 < local_4[0]) goto LAB_00cc1384;
  }
  else {
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(lVar6 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar5 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_00cc1314;
      }
      goto LAB_00cc1320;
    }
LAB_00cc138c:
    local_4[0] = *pbVar5;
    if (7 < local_4[0]) {
      local_4[0] = 0xff;
    }
  }
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "seq_end_tutorial";
  FUN_025ffac8(local_58,&local_30,local_4);
  puVar1 = PTR_DAT_04bc3408 + 0x10;
  local_58[0] = puVar1;
  FUN_025d5d34(local_58,&local_30);
  local_58[0] = puVar1;
  iVar4 = FUN_02589ca4(local_58);
  if (iVar4 != -1) {
    iVar4 = (**(code **)(local_58[0] + 0x20))(local_58);
    local_30 = (undefined *)CONCAT44(local_30._4_4_,iVar4);
    if (iVar4 < 0xd) goto LAB_00cc1428;
  }
  if (local_34 == 0) {
    local_34 = 1;
  }
LAB_00cc1428:
  FUN_02601530(local_58);
  return;
}

