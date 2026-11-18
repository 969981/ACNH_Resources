
byte * FUN_03398a5c(long param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 auStack_2c [12];
  
  FUN_02507c6c(auStack_2c,1,1,1,0);
  pbVar1 = (byte *)(param_1 + 0xc);
  if (*pbVar1 < 8) {
    bVar2 = *param_2;
    if (7 < bVar2) {
      bVar2 = 0xff;
    }
    if (*pbVar1 != bVar2) goto LAB_03398ab4;
LAB_03398b2c:
    pbVar1 = pbVar1 + 4;
  }
  else {
LAB_03398ab4:
    pbVar1 = (byte *)(param_1 + 0x14);
    if (*pbVar1 < 8) {
      bVar2 = *param_2;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      if (*pbVar1 == bVar2) goto LAB_03398b2c;
    }
    pbVar1 = (byte *)(param_1 + 0x1c);
    if (*pbVar1 < 8) {
      bVar2 = *param_2;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      if (*pbVar1 == bVar2) goto LAB_03398b2c;
    }
    pbVar1 = (byte *)(param_1 + 0x24);
    if (*pbVar1 < 8) {
      bVar2 = *param_2;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      if (*pbVar1 == bVar2) goto LAB_03398b2c;
    }
    pbVar1 = (byte *)(param_1 + 0x30);
  }
  return pbVar1;
}

