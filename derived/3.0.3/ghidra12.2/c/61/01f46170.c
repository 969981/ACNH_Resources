
bool FUN_01f46170(uint *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  char cVar8;
  byte bVar9;
  ulong uVar10;
  uint *puVar11;
  int *piVar12;
  uint *puVar13;
  
  lVar6 = *(long *)PTR_DAT_04bb3968;
  if (lVar6 != 0) {
    uVar5 = *param_1;
    if ((int)*(uint *)(lVar6 + 0x16ac8) < 1) {
      if ((((*(long *)(lVar6 + 0x169b8) != 0) &&
           (puVar13 = *(uint **)(*(long *)(lVar6 + 0x169b8) + 8), puVar13 != (uint *)0x0)) &&
          ((*(uint *)(lVar6 + 0x169d0) <= uVar5 ||
           (*(char *)(*(long *)(lVar6 + 0x169d8) + (long)(int)uVar5) != '\0')))) &&
         (((uVar5 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
        iVar7 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          iVar7 = 0x1c;
        }
        puVar13 = (uint *)((ulong)(puVar13[1] * uVar5 + (uint)(ushort)puVar13[2] * 8 + iVar7) +
                          (long)puVar13);
        goto joined_r0x01f4623c;
      }
    }
    else if (uVar5 < *(uint *)(lVar6 + 0x16ac8)) {
      if (*(uint *)(lVar6 + 0x16ab8) <= uVar5) {
        uVar5 = 0;
      }
      puVar13 = *(uint **)(*(long *)(lVar6 + 0x16ac0) + (ulong)uVar5 * 8);
joined_r0x01f4623c:
      if (puVar13 != (uint *)0x0) goto LAB_01f46248;
    }
  }
  puVar13 = (uint *)PTR_DAT_04bc2828;
LAB_01f46248:
  if (((0 < *param_2) &&
      (uVar5 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0), (uVar5 & 0xfffffffe) == 4)) &&
     (*param_3 != 3)) {
    return true;
  }
  puVar4 = PTR_DAT_04bc1568;
  puVar3 = PTR_DAT_04bc1560;
  if (*puVar13 == 0) {
LAB_01f4638c:
    bVar9 = 2;
LAB_01f46390:
    iVar7 = *param_2;
    if (iVar7 == 0) {
      uVar5 = 0x32;
    }
    else {
      if (iVar7 == 2) {
        if (1 < bVar9) {
          bVar9 = 2;
        }
        if (bVar9 != 0) {
          return true;
        }
      }
      else {
        if (iVar7 != 1) {
          return false;
        }
        if (1 < bVar9) {
          return true;
        }
      }
      uVar5 = 0x46;
    }
    puVar13 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar1 = *puVar13 ^ *puVar13 << 0xb;
    uVar2 = puVar13[3];
    *puVar13 = puVar13[1];
    puVar13[1] = puVar13[2];
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    puVar13[2] = uVar2;
    puVar13[3] = uVar1;
    return (uint)((ulong)uVar1 * 100 >> 0x20) < uVar5;
  }
  cVar8 = *PTR_DAT_04bc1560;
  do {
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      *(undefined8 *)puVar4 = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
      *puVar3 = 1;
      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
    }
    else {
      uVar5 = *(uint *)(puVar4 + 0x4c);
      if (-1 < (int)uVar5) {
        if ((byte *)((ulong)uVar5 + (long)puVar13) != (byte *)0x0) {
          bVar9 = *(byte *)((ulong)uVar5 + (long)puVar13);
          goto LAB_01f46390;
        }
        goto LAB_01f4638c;
      }
      if (uVar5 != 0xffffffff) goto LAB_01f4638c;
    }
    puVar11 = (uint *)(ulong)*puVar13;
    bVar9 = 2;
    if ((*puVar13 == 0) || (puVar13 == puVar11)) goto LAB_01f46390;
    lVar6 = 0xc;
    if (*(char *)((long)puVar13 + (10 - (long)puVar11)) != '\0') {
      lVar6 = 0x1c;
    }
    lVar6 = (long)puVar13 + (lVar6 - (long)puVar11);
    if (lVar6 == 0) goto LAB_01f4638c;
    uVar10 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar11));
    *(undefined4 *)(puVar4 + 0x4c) = 0xfffffffe;
    if (uVar10 == 0) goto LAB_01f4638c;
    piVar12 = (int *)(lVar6 + 4);
    while (piVar12[-1] != -0x5621fc7c) {
      piVar12 = piVar12 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_01f4638c;
    }
    iVar7 = 0;
    if (*piVar12 != -1) {
      iVar7 = *piVar12;
    }
    *(int *)(puVar4 + 0x4c) = iVar7;
    if (*puVar13 == 0) goto LAB_01f4638c;
  } while( true );
}

