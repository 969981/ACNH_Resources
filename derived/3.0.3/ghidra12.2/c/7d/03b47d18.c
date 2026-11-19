
void FUN_03b47d18(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    return;
  }
  if (DAT_05aebc00 == '\0') {
    FUN_03b47300(lVar3 + 8);
  }
  else {
    FUN_03b5fd14(lVar3 + 0x50);
  }
  if ((0 < *(int *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x10) < 3)) {
    if (DAT_05aebc00 == '\0') {
      iVar5 = *(int *)(*(long *)(param_1 + 8) + 0x10);
    }
    else {
      iVar5 = *(int *)(*(long *)(param_1 + 8) + 0x5c);
    }
    if (iVar5 == 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x38);
      if (DAT_05aebc00 != '\0') {
        lVar3 = *(long *)(param_1 + 8) + 0x70;
      }
      if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x11) >> 5 & 1) == 0)) {
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
  }
  if (*(int *)(param_1 + 0x10) != 3) {
    return;
  }
  if (*(int *)(param_1 + 0x14) != 4) {
    return;
  }
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    return;
  }
  puVar1 = *(undefined8 **)(lVar3 + 0x38);
  if (DAT_05aebc00 != '\0') {
    puVar1 = (undefined8 *)(lVar3 + 0x70);
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  if ((*(byte *)((long)puVar1 + 0x11) >> 5 & 1) != 0) {
    return;
  }
  lVar3 = puVar1[1];
  if (lVar3 == 0) {
    bVar2 = true;
    piVar4 = (int *)*puVar1;
    if (piVar4 != (int *)0x0) goto LAB_03b47e48;
LAB_03b47e78:
    iVar5 = 0;
  }
  else {
    bVar2 = (*(byte *)(lVar3 + 0x2c) & 4) == 0;
    piVar4 = (int *)*puVar1;
    if (piVar4 == (int *)0x0) goto LAB_03b47e78;
LAB_03b47e48:
    if ((*piVar4 != 0x56415742) ||
       ((0xfe < (byte)(*(ushort *)(piVar4 + 1) >> 8) && ((*(ushort *)(piVar4 + 1) & 0xff) == 0xfe)))
       ) goto LAB_03b47e78;
    if ((*(short *)((long)piVar4 + 6) == 1) &&
       (*(ushort *)((long)piVar4 + 0x4a) < *(ushort *)(piVar4 + 0x12))) {
      iVar5 = piVar4[(ulong)*(ushort *)((long)piVar4 + 0x4a) * 3 + 0x14];
    }
    else {
      iVar5 = 0;
    }
    if (*(short *)((long)piVar4 + 6) == 1) {
      uVar6 = piVar4[0x13];
      goto LAB_03b47e80;
    }
  }
  uVar6 = 0;
LAB_03b47e80:
  fVar7 = 0.0;
  if ((((((lVar3 != 0) && (piVar4 != (int *)0x0)) && (*(char *)(lVar3 + 0x30) != '\0')) &&
       ((*piVar4 == 0x56415742 &&
        (((char)(*(ushort *)(piVar4 + 1) >> 8) != -1 || ((*(ushort *)(piVar4 + 1) & 0xff) != 0xfe)))
        ))) && (*(short *)((long)piVar4 + 6) == 1)) && (*(short *)((long)piVar4 + 0xe) != 0)) {
    fVar7 = (float)NEON_ucvtf(piVar4[5]);
  }
  fVar7 = *(float *)(param_1 + 0x24) +
          *(float *)(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x10) + 0x1c) * fVar7;
  *(float *)(param_1 + 0x24) = fVar7;
  if ((float)uVar6 <= fVar7) {
    if (bVar2) {
      FUN_03b47b74();
      return;
    }
    do {
      fVar7 = fVar7 - (float)(uVar6 - iVar5);
    } while ((float)uVar6 <= fVar7);
    *(float *)(param_1 + 0x24) = fVar7;
  }
  return;
}

