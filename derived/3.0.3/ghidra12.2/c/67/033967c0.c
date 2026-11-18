
bool FUN_033967c0(byte *param_1)

{
  bool bVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  uint *puVar6;
  undefined1 local_2c [12];
  
  lVar5 = *(long *)PTR_DAT_04bc7368;
  FUN_02507c6c(local_2c,1,1,1,0);
  pbVar3 = (byte *)(lVar5 + 0xc);
  if (*pbVar3 < 8) {
    bVar4 = *param_1;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (*pbVar3 != bVar4) goto LAB_03396820;
LAB_03396898:
    puVar6 = (uint *)(pbVar3 + 4);
  }
  else {
LAB_03396820:
    pbVar3 = (byte *)(lVar5 + 0x14);
    if (*pbVar3 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar3 == bVar4) goto LAB_03396898;
    }
    pbVar3 = (byte *)(lVar5 + 0x1c);
    if (*pbVar3 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar3 == bVar4) goto LAB_03396898;
    }
    pbVar3 = (byte *)(lVar5 + 0x24);
    if (*pbVar3 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar3 == bVar4) goto LAB_03396898;
    }
    puVar6 = (uint *)(lVar5 + 0x30);
  }
  uVar2 = FUN_03394720(param_1);
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (*puVar6 >> 3 & 1) == 0;
  }
  return bVar1;
}

