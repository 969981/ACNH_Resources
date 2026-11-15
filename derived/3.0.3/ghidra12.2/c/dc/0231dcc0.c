
float FUN_0231dcc0(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  char cVar10;
  uint *puVar11;
  int *piVar12;
  float fVar13;
  float fVar15;
  float fVar14;
  float fVar16;
  float fVar17;
  
  puVar6 = (uint *)FUN_02374304();
  lVar7 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x210) + 0xf0))(lVar7 + 0x210);
  fVar17 = *pfVar8;
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar9 = FUN_016e946c(0,puVar2 + 0x4f);
  puVar5 = PTR_DAT_04bc2fe8;
  puVar4 = PTR_DAT_04bc2fe0;
  if ((uVar9 & 1) != 0) {
    fVar14 = 0.33;
    goto LAB_0231de60;
  }
  fVar14 = 1.0;
  if (*puVar6 != 0) {
    cVar10 = *PTR_DAT_04bc2fe0;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0xa0) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
        uVar3 = *puVar6;
      }
      else {
        uVar3 = *(uint *)(puVar5 + 8);
        if (-1 < (int)uVar3) {
          fVar14 = 1.0;
          if ((float *)((ulong)uVar3 + (long)puVar6) != (float *)0x0) {
            fVar14 = *(float *)((ulong)uVar3 + (long)puVar6);
          }
          break;
        }
        if (uVar3 != 0xffffffff) goto LAB_0231de38;
        uVar3 = *puVar6;
      }
      if ((uVar3 == 0) || (puVar11 = (uint *)(ulong)uVar3, puVar6 == puVar11)) goto LAB_0231de38;
      lVar7 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar11)) != '\0') {
        lVar7 = 0x1c;
      }
      lVar7 = (long)puVar6 + (lVar7 - (long)puVar11);
      if (lVar7 == 0) goto LAB_0231de38;
      uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar11));
      *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
      if (uVar9 == 0) goto LAB_0231de38;
      piVar12 = (int *)(lVar7 + 4);
      while (piVar12[-1] != 0x38762eaa) {
        piVar12 = piVar12 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_0231de38;
      }
      iVar1 = 0;
      if (*piVar12 != -1) {
        iVar1 = *piVar12;
      }
      *(int *)(puVar5 + 8) = iVar1;
      if (*puVar6 == 0) goto LAB_0231de38;
    } while( true );
  }
LAB_0231de3c:
  fVar16 = *(float *)(param_1 + 0x1bec);
  fVar13 = 1.0;
  if (fVar16 <= 1.0) {
    fVar13 = fVar16;
  }
  fVar15 = 0.1;
  if (0.1 <= fVar16) {
    fVar15 = fVar13;
  }
  fVar14 = fVar14 * fVar15;
LAB_0231de60:
  return fVar17 * fVar14;
LAB_0231de38:
  fVar14 = 1.0;
  goto LAB_0231de3c;
}

