
void FUN_01772a20(long param_1)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  void *pvVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  void *pvVar13;
  float fVar14;
  
  puVar3 = PTR_DAT_04bb5ce0;
  fVar14 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x170));
  fVar14 = fVar14 * 8.381903e-08;
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (45.0 <= fVar14) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar14)) {
      bVar5 = fVar14 < 315.0;
      bVar6 = fVar14 == 315.0;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    bVar5 = false;
    if ((45.0 <= fVar14) && (bVar5 = false, !NAN(fVar14))) {
      bVar5 = fVar14 < 135.0;
    }
    if (bVar5) {
      uVar10 = 3;
      if (*(char *)(param_1 + 0x6e8) != '\0') {
        uVar10 = 1;
      }
      uVar11 = (ulong)uVar10;
      goto LAB_01772adc;
    }
    uVar10 = (uint)(fVar14 < 135.0);
    if (225.0 <= fVar14) {
      uVar10 = 1;
    }
    uVar11 = (ulong)uVar10;
    cVar2 = *(char *)(param_1 + 0x6e8);
  }
  else {
    uVar11 = 2;
    cVar2 = *(char *)(param_1 + 0x6e8);
  }
  if (cVar2 != '\0') {
    uVar11 = (ulong)*(uint *)(&DAT_04130c24 + uVar11 * 4);
  }
LAB_01772adc:
  pvVar9 = (void *)FUN_017f1b20(*(long *)PTR_DAT_04bb5ce0 + 0xda0,uVar11);
  if ((pvVar9 != (void *)0x0) && (pvVar13 = *(void **)(param_1 + 0xbe8), pvVar13 != pvVar9)) {
    lVar12 = 0;
    do {
      if (*(char *)((long)pvVar9 + lVar12) == '\0') goto LAB_01772b5c;
      if (*(char *)((long)pvVar9 + lVar12 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_01772b5c;
      }
      if (*(char *)((long)pvVar9 + lVar12 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_01772b5c;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_01772b5c:
    iVar1 = (int)lVar12;
    if (*(int *)(param_1 + 0xbf0) <= (int)lVar12) {
      iVar1 = *(int *)(param_1 + 0xbf0) + -1;
    }
    memcpy(pvVar13,pvVar9,(long)iVar1);
    *(undefined1 *)((long)pvVar13 + (long)iVar1) = 0;
  }
  pvVar9 = (void *)FUN_017f1810(*(long *)puVar3 + 0xda0);
  if ((pvVar9 != (void *)0x0) && (pvVar13 = *(void **)(param_1 + 0xc80), pvVar13 != pvVar9)) {
    lVar12 = 0;
    do {
      if (*(char *)((long)pvVar9 + lVar12) == '\0') goto LAB_01772bec;
      if (*(char *)((long)pvVar9 + lVar12 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_01772bec;
      }
      if (*(char *)((long)pvVar9 + lVar12 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_01772bec;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_01772bec:
    iVar1 = (int)lVar12;
    if (*(int *)(param_1 + 0xc88) <= (int)lVar12) {
      iVar1 = *(int *)(param_1 + 0xc88) + -1;
    }
    memcpy(pvVar13,pvVar9,(long)iVar1);
    *(undefined1 *)((long)pvVar13 + (long)iVar1) = 0;
  }
  uVar8 = FUN_017f95cc(*(long *)puVar3 + 0xda0,uVar11);
  lVar12 = *(long *)puVar3;
  *(undefined4 *)(param_1 + 0xd10) = uVar8;
  uVar4 = DAT_05293a70;
  uVar8 = FUN_017f1348(lVar12 + 0xda0,uVar11);
  uVar8 = FUN_017c1d70(uVar4,uVar8,1);
  lVar12 = *(long *)puVar3;
  *(undefined4 *)(param_1 + 0xd14) = uVar8;
  *(undefined4 *)(param_1 + 0xa38) = *(undefined4 *)(lVar12 + 0xf90);
  return;
}

