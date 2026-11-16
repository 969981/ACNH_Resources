
uint FUN_02580be0(undefined8 param_1,short *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  short local_2c [4];
  byte local_24 [4];
  
  FUN_02580320(local_24);
  if ((DAT_04cd19d8 != 0) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) {
    pbVar1 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar1 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    bVar3 = *pbVar1;
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    if (bVar3 != local_24[0]) {
      FUN_0252d8f0(local_2c,local_24);
      if (local_2c[0] == -2) {
        uVar2 = FUN_02580450(param_1,param_2,1);
        if (*param_2 != -2) goto LAB_02580c98;
      }
    }
  }
  uVar2 = FUN_02580450(param_1,param_2,1);
LAB_02580c98:
  return uVar2 & 1;
}

