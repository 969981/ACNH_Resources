
bool FUN_037827e0(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  int iVar8;
  char cVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  int *piVar13;
  float fVar14;
  float fVar15;
  
  puVar6 = PTR_DAT_04bcad00;
  puVar5 = PTR_DAT_04bcacf8;
  if (param_1 != 0) {
    uVar2 = (param_2 & 0xffff) - (uint)DAT_05abc378;
    if (((uVar2 < DAT_05abc358) &&
        (puVar7 = *(uint **)(DAT_05abc360 + (long)(int)uVar2 * 8), puVar7 != (uint *)0x0)) &&
       (uVar2 = *puVar7, uVar2 != 0)) {
      cVar9 = *PTR_DAT_04bcacf8;
      do {
        puVar12 = (uint *)(ulong)uVar2;
        if (cVar9 != '\0') {
          uVar2 = *(uint *)(puVar6 + 0x10);
          if ((int)uVar2 < 0) {
            if (uVar2 == 0xffffffff) {
              iVar8 = 0;
              if (puVar12 != (uint *)0x0) goto LAB_037828a4;
            }
            else {
LAB_03782974:
              iVar8 = 0;
            }
          }
          else {
            iVar8 = 0;
            if ((short *)((ulong)uVar2 + (long)puVar7) != (short *)0x0) {
              iVar8 = (int)*(short *)((ulong)uVar2 + (long)puVar7);
            }
          }
LAB_03782988:
          uVar2 = *puVar7;
          if (uVar2 == 0) goto LAB_0378290c;
          uVar11 = *(uint *)(puVar6 + 0x14);
          goto LAB_037829a8;
        }
        cVar9 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
        puVar12 = (uint *)(ulong)*puVar7;
        iVar8 = 0;
        if (puVar12 == (uint *)0x0) goto LAB_03782988;
LAB_037828a4:
        iVar8 = 0;
        if (puVar7 == puVar12) goto LAB_03782988;
        lVar4 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar12)) != '\0') {
          lVar4 = 0x1c;
        }
        lVar4 = (long)puVar7 + (lVar4 - (long)puVar12);
        if (lVar4 == 0) goto LAB_03782974;
        uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar12));
        *(undefined4 *)(puVar6 + 0x10) = 0xfffffffe;
        iVar8 = 0;
        if (uVar10 == 0) goto LAB_03782988;
        piVar13 = (int *)(lVar4 + 4);
        while (piVar13[-1] != -0xf1748ef) {
          piVar13 = piVar13 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            iVar8 = 0;
            goto LAB_03782988;
          }
        }
        iVar8 = 0;
        if (*piVar13 != -1) {
          iVar8 = *piVar13;
        }
        *(int *)(puVar6 + 0x10) = iVar8;
        uVar2 = *puVar7;
      } while (uVar2 != 0);
    }
    iVar8 = 0;
LAB_0378290c:
    fVar15 = 2.5;
LAB_03782910:
    fVar14 = (float)iVar8 * 10.0 + 2.5;
    iVar8 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
    iVar3 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
    *(int *)(param_1 + 0x10) = iVar8;
    *(int *)(param_1 + 0x14) = iVar3;
    *(int *)(param_1 + 0x20) = iVar8 + 0x1b;
    *(int *)(param_1 + 0x24) = iVar3 + 0x13;
  }
  return param_1 != 0;
LAB_037829a8:
  if (-1 < (int)uVar11) {
    if ((short *)((long)puVar7 + (ulong)uVar11) != (short *)0x0) {
      fVar15 = (float)(int)*(short *)((long)puVar7 + (ulong)uVar11) * 10.0 + 2.5;
      goto LAB_03782910;
    }
    goto LAB_0378290c;
  }
  if ((uVar11 != 0xffffffff) || (lVar4 = (long)puVar7 - (ulong)uVar2, lVar4 == 0))
  goto LAB_0378290c;
  lVar1 = 0xc;
  if (*(char *)(lVar4 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  if (lVar1 + lVar4 == 0) goto LAB_0378290c;
  uVar10 = (ulong)*(ushort *)(lVar4 + 8);
  *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
  if (uVar10 == 0) goto LAB_0378290c;
  puVar12 = (uint *)(lVar1 + lVar4 + 4);
  while (puVar12[-1] != 0x8a28e471) {
    puVar12 = puVar12 + 2;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) goto LAB_0378290c;
  }
  uVar11 = 0;
  if (*puVar12 != 0xffffffff) {
    uVar11 = *puVar12;
  }
  *(uint *)(puVar6 + 0x14) = uVar11;
  uVar2 = *puVar7;
  if (uVar2 == 0) goto LAB_0378290c;
  goto LAB_037829a8;
}

