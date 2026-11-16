
void FUN_02560374(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  byte bVar7;
  long lVar8;
  undefined *local_70 [4];
  int local_4c;
  undefined8 local_48;
  undefined *puStack_40;
  undefined8 local_38;
  undefined *local_30;
  char *pcStack_28;
  byte local_4 [4];
  
  bVar2 = *param_3;
  if (8 < (byte)(bVar2 + 1)) {
    bVar2 = 0xff;
  }
  lVar5 = *(long *)PTR_DAT_04bb39b0;
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar5 == 0) {
LAB_025603fc:
    if (*pbVar6 < 8) goto LAB_02560468;
LAB_02560408:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02560460:
      pbVar6 = PTR_DAT_04bb5038;
      goto LAB_02560468;
    }
    lVar8 = **(long **)PTR_DAT_04bb27d0;
    bVar7 = *(byte *)(lVar8 + 0x473);
    pbVar6 = PTR_DAT_04bb5038;
    if ((long)(char)bVar7 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
      if (7 < bVar7) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar6 = (byte *)(lVar8 + 0x471);
      }
    }
    bVar7 = *pbVar6;
    if (7 < bVar7) goto LAB_02560460;
  }
  else {
    if (*(int *)(lVar5 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar5 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar5 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_025603fc;
      }
      goto LAB_02560408;
    }
LAB_02560468:
    bVar7 = *pbVar6;
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
  }
  if ((bVar2 & 0xf8) != 0) {
    bVar2 = 0xff;
  }
  if ((bVar7 & 0xf8) != 0) {
    bVar7 = 0xff;
  }
  if (bVar2 != bVar7) goto LAB_0256065c;
  uVar3 = *(ushort *)(param_3 + 3);
  if ((((1 < uVar3 - 0x145) && (uVar3 != 0x82)) && (uVar3 != 0x26)) ||
     ((*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) == 0 ||
      (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) != 0)))) goto LAB_0256065c;
  puStack_40 = PTR_DAT_04bb2020 + 0x10;
  local_38 = *(undefined8 *)(PTR_DAT_04bc31a0 + (ulong)uVar3 * 8 + 0x1470);
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar5 == 0) {
LAB_02560544:
    if (*pbVar6 < 8) goto LAB_025605bc;
LAB_02560550:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_025605b4:
      pbVar6 = PTR_DAT_04bb5038;
      goto LAB_025605bc;
    }
    lVar5 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar5 + 0x473);
    pbVar6 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar5 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar6 = (byte *)(lVar5 + 0x471);
      }
    }
    local_4[0] = *pbVar6;
    if (7 < local_4[0]) goto LAB_025605b4;
  }
  else {
    if (*(int *)(lVar5 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar5 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar5 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02560544;
      }
      goto LAB_02560550;
    }
LAB_025605bc:
    local_4[0] = *pbVar6;
    if (7 < local_4[0]) {
      local_4[0] = 0xff;
    }
  }
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "net_multiplay_dct_any";
  local_48 = param_2;
  FUN_025ffac8(local_70,&local_30,local_4);
  local_70[0] = PTR_DAT_04bc3338 + 0x10;
  FUN_025b66c0(local_70,&local_48);
  iVar4 = (**(code **)(local_70[0] + 0x20))(local_70);
  if (iVar4 == -1) {
LAB_02560644:
    if (local_4c == 0) {
      local_4c = 1;
    }
  }
  else {
    iVar4 = (**(code **)(local_70[0] + 0x20))(local_70);
    local_30 = (undefined *)CONCAT44(local_30._4_4_,iVar4);
    if (0xc < iVar4) goto LAB_02560644;
  }
  FUN_02601530(local_70);
LAB_0256065c:
  FUN_02559600(param_3);
  return;
}

