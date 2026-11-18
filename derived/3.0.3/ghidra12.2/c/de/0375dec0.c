
void FUN_0375dec0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  uint uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  uint local_14;
  
  lVar6 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) && ((*(byte *)(lVar6 + 0x1a71) >> 2 & 1) == 0))
     || ((*(long *)PTR_DAT_04bc1530 == 0 ||
         (lVar14 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar14 == 0)))) {
LAB_0375df78:
    uVar13 = (uint)*(ushort *)(lVar6 + 2);
  }
  else {
    if ((*(long **)(lVar14 + 0x1790) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar14 + 0x1790), puVar4 == (undefined8 *)0x0)) {
      lVar6 = *(long *)(lVar14 + 0x1778) + *(long *)(lVar14 + 6000);
      goto LAB_0375df78;
    }
    uVar5 = (**(code **)*puVar4)();
    uVar13 = (uint)*(ushort *)(*(long *)(lVar14 + 0x1778) + *(long *)(lVar14 + 6000) + 2);
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar14 + 0x1790) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar14 + 0x1790) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  puVar3 = PTR_DAT_04bcad00;
  puVar1 = PTR_DAT_04bcacf8;
  if ((DAT_05abc358 <= uVar13 - DAT_05abc378) ||
     (puVar7 = *(uint **)(DAT_05abc360 + (long)(int)(uVar13 - DAT_05abc378) * 8),
     puVar7 == (uint *)0x0)) {
    iVar8 = 0;
    local_14 = 0;
    goto LAB_0375e0c4;
  }
  uVar13 = *puVar7;
  if (uVar13 == 0 || puVar7 == (uint *)(ulong)uVar13) {
LAB_0375dfc0:
    local_14 = 0;
  }
  else {
    puVar11 = (uint *)((long)puVar7 - (long)(ulong)uVar13);
    local_14 = 0;
    if (*puVar11 != 0) {
      uVar13 = puVar11[1];
      if ((uVar13 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
        lVar6 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar11 + lVar6 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar6 != 0) {
          uVar10 = 0;
          if ((ulong)uVar13 != 0) {
            uVar10 = (uint)((ulong)((long)puVar7 - lVar6) / (ulong)uVar13);
          }
          if (*puVar11 <= uVar10) {
            uVar10 = 0xffffffff;
          }
          if ((uVar10 < *(uint *)PTR_DAT_04bcad08) &&
             (local_14 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bcad08 + 8) + (long)(int)uVar10 * 2),
             local_14 < 3)) goto LAB_0375dfc4;
        }
      }
      goto LAB_0375dfc0;
    }
  }
LAB_0375dfc4:
  uVar13 = *puVar7;
  if (uVar13 != 0) {
    cVar9 = *PTR_DAT_04bcacf8;
    do {
      puVar11 = (uint *)(ulong)uVar13;
      if (cVar9 != '\0') {
        uVar13 = *(uint *)(puVar3 + 0x10);
        if ((int)uVar13 < 0) {
          if (uVar13 == 0xffffffff) {
            iVar8 = 0;
            if (puVar11 != (uint *)0x0) goto LAB_0375e050;
          }
          else {
LAB_0375e1ec:
            iVar8 = 0;
          }
        }
        else {
          iVar8 = 0;
          if ((short *)((ulong)uVar13 + (long)puVar7) != (short *)0x0) {
            iVar8 = (int)*(short *)((ulong)uVar13 + (long)puVar7);
          }
        }
LAB_0375e200:
        uVar13 = *puVar7;
        if (uVar13 == 0) goto LAB_0375e0c4;
        uVar10 = *(uint *)(puVar3 + 0x14);
        goto LAB_0375e220;
      }
      cVar9 = '\x01';
      *(undefined8 *)puVar3 = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *puVar1 = 1;
      *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
      puVar11 = (uint *)(ulong)*puVar7;
      iVar8 = 0;
      if (puVar11 == (uint *)0x0) goto LAB_0375e200;
LAB_0375e050:
      iVar8 = 0;
      if (puVar7 == puVar11) goto LAB_0375e200;
      lVar6 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
        lVar6 = 0x1c;
      }
      lVar6 = (long)puVar7 + (lVar6 - (long)puVar11);
      if (lVar6 == 0) goto LAB_0375e1ec;
      uVar5 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
      *(undefined4 *)(puVar3 + 0x10) = 0xfffffffe;
      iVar8 = 0;
      if (uVar5 == 0) goto LAB_0375e200;
      piVar12 = (int *)(lVar6 + 4);
      while (piVar12[-1] != -0xf1748ef) {
        piVar12 = piVar12 + 2;
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) {
          iVar8 = 0;
          goto LAB_0375e200;
        }
      }
      iVar8 = 0;
      if (*piVar12 != -1) {
        iVar8 = *piVar12;
      }
      *(int *)(puVar3 + 0x10) = iVar8;
      uVar13 = *puVar7;
    } while (uVar13 != 0);
  }
  iVar8 = 0;
LAB_0375e0c4:
  fVar16 = 2.5;
LAB_0375e0c8:
  fVar15 = (float)iVar8 * 10.0 + 2.5;
  if (2 < local_14) {
    local_14 = 0;
  }
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  *param_1 = (long)(PTR_DAT_04bbc1a0 + 0x10);
  param_1[1] = (long)puVar1;
  iVar8 = (&DAT_05abff28)[(long)(int)local_14 * 4];
  iVar2 = (&DAT_05abff2c)[(long)(int)local_14 * 4];
  param_1[3] = (long)puVar1;
  iVar8 = (iVar8 - (uint)(fVar15 < 0.0)) + (int)((float)(int)fVar15 / 5.0);
  iVar2 = (iVar2 - (uint)(fVar16 < 0.0)) + (int)((float)(int)fVar16 / 5.0);
  *(int *)(param_1 + 2) = iVar8;
  *(int *)((long)param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 4) = iVar8 + 3;
  *(int *)((long)param_1 + 0x24) = iVar2 + 3;
  return;
LAB_0375e220:
  if (-1 < (int)uVar10) {
    if ((short *)((long)puVar7 + (ulong)uVar10) != (short *)0x0) {
      fVar16 = (float)(int)*(short *)((long)puVar7 + (ulong)uVar10) * 10.0 + 2.5;
      goto LAB_0375e0c8;
    }
    goto LAB_0375e0c4;
  }
  if ((uVar10 != 0xffffffff) || (lVar6 = (long)puVar7 - (ulong)uVar13, lVar6 == 0))
  goto LAB_0375e0c4;
  lVar14 = 0xc;
  if (*(char *)(lVar6 + 10) != '\0') {
    lVar14 = 0x1c;
  }
  if (lVar14 + lVar6 == 0) goto LAB_0375e0c4;
  uVar5 = (ulong)*(ushort *)(lVar6 + 8);
  *(undefined4 *)(puVar3 + 0x14) = 0xfffffffe;
  if (uVar5 == 0) goto LAB_0375e0c4;
  puVar11 = (uint *)(lVar14 + lVar6 + 4);
  while (puVar11[-1] != 0x8a28e471) {
    puVar11 = puVar11 + 2;
    uVar5 = uVar5 - 1;
    if (uVar5 == 0) goto LAB_0375e0c4;
  }
  uVar10 = 0;
  if (*puVar11 != 0xffffffff) {
    uVar10 = *puVar11;
  }
  *(uint *)(puVar3 + 0x14) = uVar10;
  uVar13 = *puVar7;
  if (uVar13 == 0) goto LAB_0375e0c4;
  goto LAB_0375e220;
}

