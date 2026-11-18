
undefined8 FUN_03394d10(byte *param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte *pbVar3;
  uint *puVar4;
  byte bVar5;
  undefined4 local_3c [3];
  
  lVar1 = DAT_05742720;
  local_3c[0] = 3;
  if ((*(byte *)(DAT_05742720 + 8) >> 3 & 1) != 0) {
    return 0;
  }
  FUN_02507c6c(local_3c,1,1,1,0);
  pbVar3 = (byte *)(lVar1 + 0xc);
  if (*pbVar3 < 8) {
    bVar5 = *param_1;
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if (*pbVar3 != bVar5) goto LAB_03394da8;
LAB_03394e20:
    puVar4 = (uint *)(pbVar3 + 4);
  }
  else {
LAB_03394da8:
    pbVar3 = (byte *)(lVar1 + 0x14);
    if (*pbVar3 < 8) {
      bVar5 = *param_1;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (*pbVar3 == bVar5) goto LAB_03394e20;
    }
    pbVar3 = (byte *)(lVar1 + 0x1c);
    if (*pbVar3 < 8) {
      bVar5 = *param_1;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (*pbVar3 == bVar5) goto LAB_03394e20;
    }
    pbVar3 = (byte *)(lVar1 + 0x24);
    if (*pbVar3 < 8) {
      bVar5 = *param_1;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (*pbVar3 == bVar5) goto LAB_03394e20;
    }
    puVar4 = (uint *)(lVar1 + 0x30);
  }
  if (((*puVar4 >> 0xb & 1) == 0) || (local_3c[0] = 8, (*puVar4 >> 8 & 1) != 0)) {
    return 0;
  }
  uVar2 = FUN_03394720(param_1);
  return uVar2;
}

