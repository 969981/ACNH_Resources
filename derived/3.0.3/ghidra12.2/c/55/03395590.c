
bool FUN_03395590(byte *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  uint *puVar5;
  undefined1 local_2c [12];
  
  uVar1 = FUN_022040b0();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  lVar4 = *(long *)PTR_DAT_04bc7368;
  FUN_02507c6c(local_2c,1,1,1,0);
  pbVar2 = (byte *)(lVar4 + 0xc);
  if (*pbVar2 < 8) {
    bVar3 = *param_1;
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    if (*pbVar2 != bVar3) goto LAB_033955f8;
LAB_03395670:
    puVar5 = (uint *)(pbVar2 + 4);
  }
  else {
LAB_033955f8:
    pbVar2 = (byte *)(lVar4 + 0x14);
    if (*pbVar2 < 8) {
      bVar3 = *param_1;
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      if (*pbVar2 == bVar3) goto LAB_03395670;
    }
    pbVar2 = (byte *)(lVar4 + 0x1c);
    if (*pbVar2 < 8) {
      bVar3 = *param_1;
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      if (*pbVar2 == bVar3) goto LAB_03395670;
    }
    pbVar2 = (byte *)(lVar4 + 0x24);
    if (*pbVar2 < 8) {
      bVar3 = *param_1;
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      if (*pbVar2 == bVar3) goto LAB_03395670;
    }
    puVar5 = (uint *)(lVar4 + 0x30);
  }
  uVar1 = FUN_03394720(param_1);
  if ((uVar1 & 1) == 0) {
    return false;
  }
  return (*puVar5 >> 3 & 1) == 0;
}

