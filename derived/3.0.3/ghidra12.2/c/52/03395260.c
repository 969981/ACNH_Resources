
bool FUN_03395260(byte *param_1)

{
  short sVar1;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  long lVar5;
  undefined4 local_2c [3];
  
  sVar1 = *(short *)PTR_DAT_04bb6298;
  if (sVar1 != -1) {
    local_2c[0] = 5;
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar1 * 8);
    if (0xff < (uint)(int)sVar1) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 5 & 1) != 0) {
      return false;
    }
  }
  lVar5 = *(long *)PTR_DAT_04bc7368;
  FUN_02507c6c(local_2c,1,1,1,0);
  pbVar2 = (byte *)(lVar5 + 0xc);
  if (*pbVar2 < 8) {
    bVar4 = *param_1;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (*pbVar2 != bVar4) goto LAB_03395310;
LAB_03395388:
    puVar3 = (uint *)(pbVar2 + 4);
  }
  else {
LAB_03395310:
    pbVar2 = (byte *)(lVar5 + 0x14);
    if (*pbVar2 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar2 == bVar4) goto LAB_03395388;
    }
    pbVar2 = (byte *)(lVar5 + 0x1c);
    if (*pbVar2 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar2 == bVar4) goto LAB_03395388;
    }
    pbVar2 = (byte *)(lVar5 + 0x24);
    if (*pbVar2 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar2 == bVar4) goto LAB_03395388;
    }
    puVar3 = (uint *)(lVar5 + 0x30);
  }
  bVar4 = *(byte *)(lVar5 + 8);
  if ((((bVar4 & 1) == 0) || ((bVar4 >> 1 & 1) != 0)) || ((bVar4 >> 2 & 1) != 0)) {
    return false;
  }
  if ((*puVar3 >> 2 & 1) == 0) {
    return (*puVar3 >> 1 & 1) == 0;
  }
  return true;
}

