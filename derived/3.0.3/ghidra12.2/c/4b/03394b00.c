
bool FUN_03394b00(byte *param_1)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  byte *pbVar4;
  byte bVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  undefined1 local_3c [12];
  
  puVar1 = PTR_DAT_04bc7368;
  lVar6 = *(long *)PTR_DAT_04bc7368;
  FUN_02507c6c(local_3c,1,1,1,0);
  pbVar4 = (byte *)(lVar6 + 0xc);
  if (*pbVar4 < 8) {
    bVar5 = *param_1;
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if (*pbVar4 != bVar5) goto LAB_03394b64;
LAB_03394bdc:
    puVar7 = (uint *)(pbVar4 + 4);
  }
  else {
LAB_03394b64:
    pbVar4 = (byte *)(lVar6 + 0x14);
    if (*pbVar4 < 8) {
      bVar5 = *param_1;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (*pbVar4 == bVar5) goto LAB_03394bdc;
    }
    pbVar4 = (byte *)(lVar6 + 0x1c);
    if (*pbVar4 < 8) {
      bVar5 = *param_1;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (*pbVar4 == bVar5) goto LAB_03394bdc;
    }
    pbVar4 = (byte *)(lVar6 + 0x24);
    if (*pbVar4 < 8) {
      bVar5 = *param_1;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (*pbVar4 == bVar5) goto LAB_03394bdc;
    }
    puVar7 = (uint *)(lVar6 + 0x30);
  }
  lVar6 = *(long *)puVar1;
  FUN_02507c6c(local_3c,1,1,1,0);
  pbVar4 = (byte *)(lVar6 + 0xc);
  if (*pbVar4 < 8) {
    bVar5 = *param_1;
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if (*pbVar4 != bVar5) goto LAB_03394c2c;
LAB_03394ca4:
    puVar8 = (uint *)(pbVar4 + 4);
  }
  else {
LAB_03394c2c:
    pbVar4 = (byte *)(lVar6 + 0x14);
    if (*pbVar4 < 8) {
      bVar5 = *param_1;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (*pbVar4 == bVar5) goto LAB_03394ca4;
    }
    pbVar4 = (byte *)(lVar6 + 0x1c);
    if (*pbVar4 < 8) {
      bVar5 = *param_1;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (*pbVar4 == bVar5) goto LAB_03394ca4;
    }
    pbVar4 = (byte *)(lVar6 + 0x24);
    if (*pbVar4 < 8) {
      bVar5 = *param_1;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (*pbVar4 == bVar5) goto LAB_03394ca4;
    }
    puVar8 = (uint *)(lVar6 + 0x30);
  }
  uVar3 = FUN_03394720(param_1);
  if (((uVar3 & 1) == 0) || ((*puVar8 >> 3 & 1) != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = (*puVar7 >> 0xc & 1) == 0;
  }
  return bVar2;
}

