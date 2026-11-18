
bool FUN_033948b0(byte *param_1)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  byte *pbVar4;
  byte bVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  undefined1 local_3c [12];
  
  puVar1 = PTR_DAT_04bc7368;
  lVar6 = *(long *)PTR_DAT_04bc7368;
  FUN_02507c6c(local_3c,1,1,1,0);
  pbVar4 = (byte *)(lVar6 + 0xc);
  if (*pbVar4 < 8) {
    bVar5 = *param_1;
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if (*pbVar4 != bVar5) goto LAB_03394914;
LAB_0339498c:
    puVar7 = (uint *)(pbVar4 + 4);
  }
  else {
LAB_03394914:
    pbVar4 = (byte *)(lVar6 + 0x14);
    if (*pbVar4 < 8) {
      bVar5 = *param_1;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (*pbVar4 == bVar5) goto LAB_0339498c;
    }
    pbVar4 = (byte *)(lVar6 + 0x1c);
    if (*pbVar4 < 8) {
      bVar5 = *param_1;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (*pbVar4 == bVar5) goto LAB_0339498c;
    }
    pbVar4 = (byte *)(lVar6 + 0x24);
    if (*pbVar4 < 8) {
      bVar5 = *param_1;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (*pbVar4 == bVar5) goto LAB_0339498c;
    }
    puVar7 = (uint *)(lVar6 + 0x30);
  }
  lVar6 = *(long *)puVar1;
  FUN_02507c6c(local_3c,1,1,1,0);
  pbVar4 = (byte *)(lVar6 + 0xc);
  if (*pbVar4 < 8) {
    bVar5 = *param_1;
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if (*pbVar4 != bVar5) goto LAB_033949dc;
LAB_03394a54:
    puVar8 = (uint *)(pbVar4 + 4);
  }
  else {
LAB_033949dc:
    pbVar4 = (byte *)(lVar6 + 0x14);
    if (*pbVar4 < 8) {
      bVar5 = *param_1;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (*pbVar4 == bVar5) goto LAB_03394a54;
    }
    pbVar4 = (byte *)(lVar6 + 0x1c);
    if (*pbVar4 < 8) {
      bVar5 = *param_1;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (*pbVar4 == bVar5) goto LAB_03394a54;
    }
    pbVar4 = (byte *)(lVar6 + 0x24);
    if (*pbVar4 < 8) {
      bVar5 = *param_1;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (*pbVar4 == bVar5) goto LAB_03394a54;
    }
    puVar8 = (uint *)(lVar6 + 0x30);
  }
  uVar3 = FUN_03394720(param_1);
  if (((((uVar3 & 1) == 0) || ((*puVar8 >> 3 & 1) != 0)) ||
      ((DAT_0537d558 != 0 &&
       ((*(long *)(DAT_0537d558 + 0x28) != 0 && (*(int *)(DAT_0537d558 + 0x80) == 1)))))) ||
     ((*puVar7 >> 0xc & 1) != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(PTR_DAT_04bc3a80 + 0x38) != -0xbb9f562;
  }
  return bVar2;
}

