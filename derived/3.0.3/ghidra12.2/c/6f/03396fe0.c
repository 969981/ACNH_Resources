
undefined8 FUN_03396fe0(byte *param_1)

{
  undefined8 uVar1;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  long lVar5;
  undefined4 local_2c [3];
  
  lVar5 = *(long *)PTR_DAT_04bc7368;
  FUN_02507c6c(local_2c,1,1,1,0);
  pbVar2 = (byte *)(lVar5 + 0xc);
  if (*pbVar2 < 8) {
    bVar4 = *param_1;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (*pbVar2 != bVar4) goto LAB_03397040;
LAB_033970b8:
    puVar3 = (uint *)(pbVar2 + 4);
  }
  else {
LAB_03397040:
    pbVar2 = (byte *)(lVar5 + 0x14);
    if (*pbVar2 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar2 == bVar4) goto LAB_033970b8;
    }
    pbVar2 = (byte *)(lVar5 + 0x1c);
    if (*pbVar2 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar2 == bVar4) goto LAB_033970b8;
    }
    pbVar2 = (byte *)(lVar5 + 0x24);
    if (*pbVar2 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar2 == bVar4) goto LAB_033970b8;
    }
    puVar3 = (uint *)(lVar5 + 0x30);
  }
  if ((*puVar3 >> 0xb & 1) != 0) {
    local_2c[0] = 8;
    if ((*puVar3 >> 8 & 1) == 0) {
      uVar1 = FUN_03394720(param_1);
      return uVar1;
    }
  }
  return 0;
}

