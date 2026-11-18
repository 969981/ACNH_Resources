
bool FUN_03395420(byte *param_1)

{
  bool bVar1;
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
    if (*pbVar2 != bVar4) goto LAB_03395480;
LAB_033954f8:
    puVar3 = (uint *)(pbVar2 + 4);
  }
  else {
LAB_03395480:
    pbVar2 = (byte *)(lVar5 + 0x14);
    if (*pbVar2 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar2 == bVar4) goto LAB_033954f8;
    }
    pbVar2 = (byte *)(lVar5 + 0x1c);
    if (*pbVar2 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar2 == bVar4) goto LAB_033954f8;
    }
    pbVar2 = (byte *)(lVar5 + 0x24);
    if (*pbVar2 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar2 == bVar4) goto LAB_033954f8;
    }
    puVar3 = (uint *)(lVar5 + 0x30);
  }
  bVar4 = *(byte *)(lVar5 + 8);
  if (((bVar4 & 1) == 0) || ((bVar4 >> 1 & 1) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if ((bVar4 >> 2 & 1) == 0) {
      if ((*puVar3 & 1) == 0) {
        bVar1 = (*puVar3 >> 1 & 1) == 0;
      }
    }
  }
  return bVar1;
}

