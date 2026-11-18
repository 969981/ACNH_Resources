
undefined8 FUN_03396eb0(byte *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  uint *puVar6;
  undefined4 local_2c [3];
  
  lVar5 = *(long *)PTR_DAT_04bc7368;
  FUN_02507c6c(local_2c,1,1,1,0);
  pbVar3 = (byte *)(lVar5 + 0xc);
  if (*pbVar3 < 8) {
    bVar4 = *param_1;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (*pbVar3 != bVar4) goto LAB_03396f10;
LAB_03396f88:
    puVar6 = (uint *)(pbVar3 + 4);
  }
  else {
LAB_03396f10:
    pbVar3 = (byte *)(lVar5 + 0x14);
    if (*pbVar3 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar3 == bVar4) goto LAB_03396f88;
    }
    pbVar3 = (byte *)(lVar5 + 0x1c);
    if (*pbVar3 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar3 == bVar4) goto LAB_03396f88;
    }
    pbVar3 = (byte *)(lVar5 + 0x24);
    if (*pbVar3 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar3 == bVar4) goto LAB_03396f88;
    }
    puVar6 = (uint *)(lVar5 + 0x30);
  }
  uVar1 = FUN_03394720(param_1);
  if ((uVar1 & 1) != 0) {
    local_2c[0] = 1;
    if ((*puVar6 >> 1 & 1) == 0) {
      uVar2 = FUN_033fb130();
      return uVar2;
    }
  }
  return 0;
}

