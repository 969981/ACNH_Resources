
undefined8 FUN_033964d0(byte *param_1)

{
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  uint *puVar6;
  undefined *local_30;
  char *pcStack_28;
  
  lVar5 = *(long *)PTR_DAT_04bc7368;
  FUN_02507c6c(&local_30,1,1,1,0);
  pbVar3 = (byte *)(lVar5 + 0xc);
  if (*pbVar3 < 8) {
    bVar4 = *param_1;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (*pbVar3 != bVar4) goto LAB_03396530;
LAB_033965a8:
    puVar6 = (uint *)(pbVar3 + 4);
  }
  else {
LAB_03396530:
    pbVar3 = (byte *)(lVar5 + 0x14);
    if (*pbVar3 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar3 == bVar4) goto LAB_033965a8;
    }
    pbVar3 = (byte *)(lVar5 + 0x1c);
    if (*pbVar3 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar3 == bVar4) goto LAB_033965a8;
    }
    pbVar3 = (byte *)(lVar5 + 0x24);
    if (*pbVar3 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar3 == bVar4) goto LAB_033965a8;
    }
    puVar6 = (uint *)(lVar5 + 0x30);
  }
  uVar2 = FUN_03394720(param_1);
  if (((((uVar2 & 1) == 0) || ((*puVar6 >> 1 & 1) != 0)) ||
      (local_30 = (undefined *)CONCAT44(local_30._4_4_,0xc), (*puVar6 >> 0xc & 1) != 0)) ||
     (uVar2 = FUN_033fac10(), (uVar2 & 1) == 0)) {
    return 0;
  }
  uVar2 = FUN_033faa90();
  if ((uVar2 & 1) != 0) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "SeqHousePhotoTutorialDone";
    iVar1 = FUN_02758850(&local_30);
    if ((iVar1 == 0) && (uVar2 = FUN_033fad40(), (uVar2 & 1) == 0)) {
      return 0;
    }
  }
  return 1;
}

