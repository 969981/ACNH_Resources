
undefined8 FUN_033945e0(byte *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  uint *puVar6;
  undefined1 local_3c [12];
  
  lVar5 = *(long *)PTR_DAT_04bc7368;
  FUN_02507c6c(local_3c,1,1,1,0);
  pbVar3 = (byte *)(lVar5 + 0xc);
  if (*pbVar3 < 8) {
    bVar4 = *param_1;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (*pbVar3 != bVar4) goto LAB_03394648;
LAB_033946c0:
    puVar6 = (uint *)(pbVar3 + 4);
  }
  else {
LAB_03394648:
    pbVar3 = (byte *)(lVar5 + 0x14);
    if (*pbVar3 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar3 == bVar4) goto LAB_033946c0;
    }
    pbVar3 = (byte *)(lVar5 + 0x1c);
    if (*pbVar3 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar3 == bVar4) goto LAB_033946c0;
    }
    pbVar3 = (byte *)(lVar5 + 0x24);
    if (*pbVar3 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar3 == bVar4) goto LAB_033946c0;
    }
    puVar6 = (uint *)(lVar5 + 0x30);
  }
  uVar1 = FUN_03394720(param_1);
  if (((uVar1 & 1) == 0) || (((param_2 & 1) == 0 && ((*puVar6 >> 3 & 1) != 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

