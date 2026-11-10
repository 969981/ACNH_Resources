
int FUN_0026aa40(long param_1)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  
  bVar3 = *(byte *)(param_1 + 0x9c);
  lVar1 = 0xb4;
  if (bVar3 != *(byte *)(param_1 + 0x9b) || 0x1f < bVar3) {
    lVar1 = 0xb8;
  }
  uVar2 = *(uint *)(param_1 + lVar1);
  if (bVar3 == 0) {
    iVar4 = (uVar2 >> 1 & 1) + 1;
LAB_0026ac64:
    iVar4 = iVar4 + (uVar2 >> 2 & 1);
LAB_0026ac6c:
    iVar4 = iVar4 + (uVar2 >> 3 & 1);
LAB_0026ac74:
    iVar4 = iVar4 + (uVar2 >> 4 & 1);
LAB_0026ac7c:
    iVar4 = iVar4 + (uVar2 >> 5 & 1);
LAB_0026ac84:
    iVar4 = iVar4 + (uVar2 >> 6 & 1);
LAB_0026ac8c:
    iVar4 = iVar4 + (uVar2 >> 7 & 1);
LAB_0026ac94:
    iVar4 = iVar4 + (uVar2 >> 8 & 1);
LAB_0026ac9c:
    iVar4 = iVar4 + (uVar2 >> 9 & 1);
LAB_0026aca4:
    iVar4 = iVar4 + (uVar2 >> 10 & 1);
LAB_0026acac:
    iVar4 = iVar4 + (uVar2 >> 0xb & 1);
LAB_0026acb4:
    iVar4 = iVar4 + (uVar2 >> 0xc & 1);
LAB_0026acbc:
    iVar4 = iVar4 + (uVar2 >> 0xd & 1);
LAB_0026acc4:
    iVar4 = iVar4 + (uVar2 >> 0xe & 1);
LAB_0026accc:
    iVar4 = iVar4 + ((uVar2 & 0x8000) >> 0xf);
LAB_0026acd4:
    iVar4 = iVar4 + (uVar2 >> 0x10 & 1);
LAB_0026acdc:
    iVar4 = iVar4 + (uVar2 >> 0x11 & 1);
LAB_0026ace4:
    iVar4 = iVar4 + (uVar2 >> 0x12 & 1);
LAB_0026acec:
    iVar4 = iVar4 + (uVar2 >> 0x13 & 1);
LAB_0026acf4:
    iVar4 = iVar4 + (uVar2 >> 0x14 & 1);
LAB_0026acfc:
    iVar4 = iVar4 + (uVar2 >> 0x15 & 1);
LAB_0026ad04:
    iVar4 = iVar4 + (uVar2 >> 0x16 & 1);
LAB_0026ad0c:
    iVar4 = iVar4 + (uVar2 >> 0x17 & 1);
LAB_0026ad14:
    iVar4 = iVar4 + (uVar2 >> 0x18 & 1);
LAB_0026ad1c:
    iVar4 = iVar4 + (uVar2 >> 0x19 & 1);
LAB_0026ad24:
    iVar4 = iVar4 + (uVar2 >> 0x1a & 1);
LAB_0026ad2c:
    iVar4 = iVar4 + (uVar2 >> 0x1b & 1);
LAB_0026ad34:
    iVar4 = iVar4 + (uVar2 >> 0x1c & 1);
LAB_0026ad3c:
    iVar4 = iVar4 + (uVar2 >> 0x1d & 1);
  }
  else {
    iVar4 = (uVar2 & 1) + 1;
    if (bVar3 == 1) goto LAB_0026ac64;
    iVar4 = iVar4 + (uVar2 >> 1 & 1);
    if (bVar3 == 2) goto LAB_0026ac6c;
    iVar4 = iVar4 + (uVar2 >> 2 & 1);
    if (bVar3 == 3) goto LAB_0026ac74;
    iVar4 = iVar4 + (uVar2 >> 3 & 1);
    if (bVar3 == 4) goto LAB_0026ac7c;
    iVar4 = iVar4 + (uVar2 >> 4 & 1);
    if (bVar3 == 5) goto LAB_0026ac84;
    iVar4 = iVar4 + (uVar2 >> 5 & 1);
    if (bVar3 == 6) goto LAB_0026ac8c;
    iVar4 = iVar4 + (uVar2 >> 6 & 1);
    if (bVar3 == 7) goto LAB_0026ac94;
    iVar4 = iVar4 + (uVar2 >> 7 & 1);
    if (bVar3 == 8) goto LAB_0026ac9c;
    iVar4 = iVar4 + (uVar2 >> 8 & 1);
    if (bVar3 == 9) goto LAB_0026aca4;
    iVar4 = iVar4 + (uVar2 >> 9 & 1);
    if (bVar3 == 10) goto LAB_0026acac;
    iVar4 = iVar4 + (uVar2 >> 10 & 1);
    if (bVar3 == 0xb) goto LAB_0026acb4;
    iVar4 = iVar4 + (uVar2 >> 0xb & 1);
    if (bVar3 == 0xc) goto LAB_0026acbc;
    iVar4 = iVar4 + (uVar2 >> 0xc & 1);
    if (bVar3 == 0xd) goto LAB_0026acc4;
    iVar4 = iVar4 + (uVar2 >> 0xd & 1);
    if (bVar3 == 0xe) goto LAB_0026accc;
    iVar4 = iVar4 + (uVar2 >> 0xe & 1);
    if (bVar3 == 0xf) goto LAB_0026acd4;
    iVar4 = iVar4 + ((uVar2 & 0x8000) >> 0xf);
    if (bVar3 == 0x10) goto LAB_0026acdc;
    iVar4 = iVar4 + (uVar2 >> 0x10 & 1);
    if (bVar3 == 0x11) goto LAB_0026ace4;
    iVar4 = iVar4 + (uVar2 >> 0x11 & 1);
    if (bVar3 == 0x12) goto LAB_0026acec;
    iVar4 = iVar4 + (uVar2 >> 0x12 & 1);
    if (bVar3 == 0x13) goto LAB_0026acf4;
    iVar4 = iVar4 + (uVar2 >> 0x13 & 1);
    if (bVar3 == 0x14) goto LAB_0026acfc;
    iVar4 = iVar4 + (uVar2 >> 0x14 & 1);
    if (bVar3 == 0x15) goto LAB_0026ad04;
    iVar4 = iVar4 + (uVar2 >> 0x15 & 1);
    if (bVar3 == 0x16) goto LAB_0026ad0c;
    iVar4 = iVar4 + (uVar2 >> 0x16 & 1);
    if (bVar3 == 0x17) goto LAB_0026ad14;
    iVar4 = iVar4 + (uVar2 >> 0x17 & 1);
    if (bVar3 == 0x18) goto LAB_0026ad1c;
    iVar4 = iVar4 + (uVar2 >> 0x18 & 1);
    if (bVar3 == 0x19) goto LAB_0026ad24;
    iVar4 = iVar4 + (uVar2 >> 0x19 & 1);
    if (bVar3 == 0x1a) goto LAB_0026ad2c;
    iVar4 = iVar4 + (uVar2 >> 0x1a & 1);
    if (bVar3 == 0x1b) goto LAB_0026ad34;
    iVar4 = iVar4 + (uVar2 >> 0x1b & 1);
    if (bVar3 == 0x1c) goto LAB_0026ad3c;
    iVar4 = iVar4 + (uVar2 >> 0x1c & 1);
    if (bVar3 != 0x1d) {
      iVar4 = iVar4 + (uVar2 >> 0x1d & 1);
      if ((bVar3 != 0x1e) && (iVar4 = iVar4 + (uVar2 >> 0x1e & 1), bVar3 == 0x1f)) {
        return iVar4;
      }
      goto LAB_0026ad4c;
    }
  }
  iVar4 = iVar4 + (uVar2 >> 0x1e & 1);
LAB_0026ad4c:
  return iVar4 - ((int)uVar2 >> 0x1f);
}

