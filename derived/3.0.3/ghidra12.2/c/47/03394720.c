
bool FUN_03394720(byte *param_1)

{
  uint uVar1;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  long lVar5;
  undefined1 local_2c [12];
  
  lVar5 = *(long *)PTR_DAT_04bc7368;
  FUN_02507c6c(local_2c,1,1,1,0);
  pbVar2 = (byte *)(lVar5 + 0xc);
  if (*pbVar2 < 8) {
    bVar4 = *param_1;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (*pbVar2 != bVar4) goto LAB_03394780;
LAB_033947f8:
    puVar3 = (uint *)(pbVar2 + 4);
  }
  else {
LAB_03394780:
    pbVar2 = (byte *)(lVar5 + 0x14);
    if (*pbVar2 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar2 == bVar4) goto LAB_033947f8;
    }
    pbVar2 = (byte *)(lVar5 + 0x1c);
    if (*pbVar2 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar2 == bVar4) goto LAB_033947f8;
    }
    pbVar2 = (byte *)(lVar5 + 0x24);
    if (*pbVar2 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar2 == bVar4) goto LAB_033947f8;
    }
    puVar3 = (uint *)(lVar5 + 0x30);
  }
  bVar4 = *(byte *)(lVar5 + 8);
  if (((bVar4 & 1) != 0) && ((bVar4 >> 1 & 1) == 0)) {
    if ((bVar4 >> 2 & 1) != 0) {
      return false;
    }
    uVar1 = *puVar3;
    if ((uVar1 & 1) != 0) {
      return false;
    }
    if (((uVar1 >> 1 & 1) == 0) && ((uVar1 >> 6 & 1) == 0)) {
      return (uVar1 >> 5 & 1) == 0;
    }
  }
  return false;
}

