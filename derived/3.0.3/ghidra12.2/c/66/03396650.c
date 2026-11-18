
undefined8 FUN_03396650(byte *param_1)

{
  undefined8 uVar1;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  long lVar5;
  undefined4 local_2c [3];
  
  if (DAT_05ab5ea8 == 0) {
    return 0;
  }
  if (*(int *)(DAT_05ab5ea8 + 0x14) != 2) {
    return 0;
  }
  if (*DAT_055cdb40 != '\0') {
    return 0;
  }
  lVar5 = *(long *)PTR_DAT_04bc7368;
  FUN_02507c6c(local_2c,1,1,1,0);
  pbVar2 = (byte *)(lVar5 + 0xc);
  if (*pbVar2 < 8) {
    bVar4 = *param_1;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (*pbVar2 != bVar4) goto LAB_033966e0;
LAB_03396758:
    puVar3 = (uint *)(pbVar2 + 4);
  }
  else {
LAB_033966e0:
    pbVar2 = (byte *)(lVar5 + 0x14);
    if (*pbVar2 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar2 == bVar4) goto LAB_03396758;
    }
    pbVar2 = (byte *)(lVar5 + 0x1c);
    if (*pbVar2 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar2 == bVar4) goto LAB_03396758;
    }
    pbVar2 = (byte *)(lVar5 + 0x24);
    if (*pbVar2 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar2 == bVar4) goto LAB_03396758;
    }
    puVar3 = (uint *)(lVar5 + 0x30);
  }
  local_2c[0] = 0xc;
  if (((*puVar3 >> 0xc & 1) == 0) && ((DAT_05ab8198 == (ushort *)0x0 || ((*DAT_05ab8198 & 1) == 0)))
     ) {
    uVar1 = FUN_03394720(param_1);
    return uVar1;
  }
  return 0;
}

