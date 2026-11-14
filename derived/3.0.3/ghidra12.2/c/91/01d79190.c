
undefined8 FUN_01d79190(long param_1,short param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  void *__src;
  short sVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  char cVar14;
  long lVar15;
  ulong uVar16;
  uint *puVar17;
  void *pvVar18;
  void *__dest;
  
  **(undefined1 **)(param_1 + 8) = 0;
  puVar7 = PTR_DAT_04bb40b8;
  puVar6 = PTR_DAT_04bb40b0;
  puVar5 = PTR_DAT_04bb40a8;
  puVar4 = PTR_DAT_04bb40a0;
  if ((param_3 & 1) == 0) {
    lVar15 = *(long *)PTR_DAT_04bb4138;
    if (lVar15 != 0) {
      uVar2 = *(uint *)(lVar15 + 0x1c0);
      uVar13 = uVar2;
      if ((0 < (int)uVar2) ||
         (((*(long *)(lVar15 + 0xb0) != 0 &&
           (puVar17 = *(uint **)(*(long *)(lVar15 + 0xb0) + 8), puVar17 != (uint *)0x0)) &&
          (uVar13 = *puVar17, 0 < (int)uVar13)))) {
        uVar16 = 0;
        cVar14 = *PTR_DAT_04bb40b0;
        do {
          if ((int)uVar2 < 1) {
            if (((((*(long *)(lVar15 + 0xb0) != 0) &&
                  (puVar17 = *(uint **)(*(long *)(lVar15 + 0xb0) + 8), puVar17 != (uint *)0x0)) &&
                 ((*(uint *)(lVar15 + 200) <= uVar16 ||
                  (*(char *)(*(long *)(lVar15 + 0xd0) + uVar16) != '\0')))) &&
                ((uVar16 < *puVar17 && (puVar17[1] != 0)))) && ((ushort)puVar17[2] != 0)) {
              iVar8 = 0xc;
              if (*(char *)((long)puVar17 + 10) != '\0') {
                iVar8 = 0x1c;
              }
              puVar17 = (uint *)((ulong)(puVar17[1] * (int)uVar16 + (uint)(ushort)puVar17[2] * 8 +
                                        iVar8) + (long)puVar17);
              goto joined_r0x01d795c0;
            }
          }
          else if (uVar16 < uVar2) {
            uVar11 = uVar16 & 0xffffffff;
            if (*(uint *)(lVar15 + 0x1b0) <= uVar16) {
              uVar11 = 0;
            }
            puVar17 = *(uint **)(*(long *)(lVar15 + 0x1b8) + uVar11 * 8);
joined_r0x01d795c0:
            if (puVar17 != (uint *)0x0) {
              sVar9 = 0;
              if (*puVar17 != 0) {
                do {
                  if (cVar14 != '\0') {
                    uVar3 = *(uint *)(puVar7 + 0x58);
                    if ((int)uVar3 < 0) {
                      if (uVar3 == 0xffffffff) {
                        uVar3 = *puVar17;
                        if (uVar3 != 0) goto LAB_01d794ec;
                        sVar9 = 0;
                      }
                      else {
LAB_01d79438:
                        sVar9 = 0;
                      }
                    }
                    else {
                      sVar9 = 0;
                      if ((short *)((ulong)uVar3 + (long)puVar17) != (short *)0x0) {
                        sVar9 = *(short *)((ulong)uVar3 + (long)puVar17);
                      }
                    }
                    goto LAB_01d79440;
                  }
                  cVar14 = '\x01';
                  *(undefined8 *)puVar7 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                  *puVar6 = 1;
                  *(undefined4 *)(puVar7 + 0xa0) = 0xffffffff;
                  *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x80) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x88) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x90) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x98) = 0xffffffffffffffff;
                  uVar3 = *puVar17;
                  sVar9 = 0;
                  if (uVar3 == 0) goto LAB_01d79440;
LAB_01d794ec:
                  puVar10 = (uint *)(ulong)uVar3;
                  if (puVar17 == puVar10) goto LAB_01d79438;
                  lVar1 = 0xc;
                  if (*(char *)((long)puVar17 + (10 - (long)puVar10)) != '\0') {
                    lVar1 = 0x1c;
                  }
                  lVar1 = (long)puVar17 + (lVar1 - (long)puVar10);
                  if (lVar1 == 0) goto LAB_01d79438;
                  uVar11 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar10));
                  *(undefined4 *)(puVar7 + 0x58) = 0xfffffffe;
                  sVar9 = 0;
                  if (uVar11 == 0) goto LAB_01d79440;
                  piVar12 = (int *)(lVar1 + 4);
                  while (piVar12[-1] != 0x54706054) {
                    piVar12 = piVar12 + 2;
                    uVar11 = uVar11 - 1;
                    if (uVar11 == 0) {
                      sVar9 = 0;
                      goto LAB_01d79440;
                    }
                  }
                  iVar8 = 0;
                  if (*piVar12 != -1) {
                    iVar8 = *piVar12;
                  }
                  *(int *)(puVar7 + 0x58) = iVar8;
                } while (*puVar17 != 0);
                sVar9 = 0;
              }
LAB_01d79440:
              if (sVar9 == param_2) {
                uVar2 = *puVar17;
                goto joined_r0x01d79710;
              }
            }
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar13);
      }
    }
  }
  else {
    lVar15 = *(long *)PTR_DAT_04bb4130;
    if (lVar15 != 0) {
      uVar2 = *(uint *)(lVar15 + 0x1c0);
      uVar13 = uVar2;
      if ((0 < (int)uVar2) ||
         (((*(long *)(lVar15 + 0xb0) != 0 &&
           (puVar17 = *(uint **)(*(long *)(lVar15 + 0xb0) + 8), puVar17 != (uint *)0x0)) &&
          (uVar13 = *puVar17, 0 < (int)uVar13)))) {
        uVar16 = 0;
        cVar14 = *PTR_DAT_04bb40a0;
        do {
          if ((int)uVar2 < 1) {
            if ((((*(long *)(lVar15 + 0xb0) != 0) &&
                 (puVar17 = *(uint **)(*(long *)(lVar15 + 0xb0) + 8), puVar17 != (uint *)0x0)) &&
                ((*(uint *)(lVar15 + 200) <= uVar16 ||
                 (*(char *)(*(long *)(lVar15 + 0xd0) + uVar16) != '\0')))) &&
               (((uVar16 < *puVar17 && (puVar17[1] != 0)) && ((ushort)puVar17[2] != 0)))) {
              iVar8 = 0xc;
              if (*(char *)((long)puVar17 + 10) != '\0') {
                iVar8 = 0x1c;
              }
              puVar17 = (uint *)((ulong)(puVar17[1] * (int)uVar16 + (uint)(ushort)puVar17[2] * 8 +
                                        iVar8) + (long)puVar17);
              goto joined_r0x01d79420;
            }
          }
          else if (uVar16 < uVar2) {
            uVar11 = uVar16 & 0xffffffff;
            if (*(uint *)(lVar15 + 0x1b0) <= uVar16) {
              uVar11 = 0;
            }
            puVar17 = *(uint **)(*(long *)(lVar15 + 0x1b8) + uVar11 * 8);
joined_r0x01d79420:
            if (puVar17 != (uint *)0x0) {
              sVar9 = 0;
              if (*puVar17 != 0) {
                do {
                  if (cVar14 != '\0') {
                    uVar3 = *(uint *)(puVar5 + 0x40);
                    if ((int)uVar3 < 0) {
                      if (uVar3 == 0xffffffff) {
                        uVar3 = *puVar17;
                        if (uVar3 != 0) goto LAB_01d79354;
                        sVar9 = 0;
                      }
                      else {
LAB_01d792a8:
                        sVar9 = 0;
                      }
                    }
                    else {
                      sVar9 = 0;
                      if ((short *)((ulong)uVar3 + (long)puVar17) != (short *)0x0) {
                        sVar9 = *(short *)((ulong)uVar3 + (long)puVar17);
                      }
                    }
                    goto LAB_01d792b0;
                  }
                  cVar14 = '\x01';
                  *(undefined8 *)puVar5 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                  *puVar4 = 1;
                  *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
                  *(undefined4 *)(puVar5 + 0x78) = 0xffffffff;
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
                  uVar3 = *puVar17;
                  sVar9 = 0;
                  if (uVar3 == 0) goto LAB_01d792b0;
LAB_01d79354:
                  puVar10 = (uint *)(ulong)uVar3;
                  if (puVar17 == puVar10) goto LAB_01d792a8;
                  lVar1 = 0xc;
                  if (*(char *)((long)puVar17 + (10 - (long)puVar10)) != '\0') {
                    lVar1 = 0x1c;
                  }
                  lVar1 = (long)puVar17 + (lVar1 - (long)puVar10);
                  if (lVar1 == 0) goto LAB_01d792a8;
                  uVar11 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar10));
                  *(undefined4 *)(puVar5 + 0x40) = 0xfffffffe;
                  sVar9 = 0;
                  if (uVar11 == 0) goto LAB_01d792b0;
                  piVar12 = (int *)(lVar1 + 4);
                  while (piVar12[-1] != 0x54706054) {
                    piVar12 = piVar12 + 2;
                    uVar11 = uVar11 - 1;
                    if (uVar11 == 0) {
                      sVar9 = 0;
                      goto LAB_01d792b0;
                    }
                  }
                  iVar8 = 0;
                  if (*piVar12 != -1) {
                    iVar8 = *piVar12;
                  }
                  *(int *)(puVar5 + 0x40) = iVar8;
                } while (*puVar17 != 0);
                sVar9 = 0;
              }
LAB_01d792b0:
              if (sVar9 == param_2) {
                uVar2 = *puVar17;
                goto joined_r0x01d795dc;
              }
            }
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar13);
      }
    }
  }
  return 0;
joined_r0x01d79710:
  if (uVar2 == 0) goto LAB_01d797e4;
  if (cVar14 == '\0') {
    cVar14 = '\x01';
    *(undefined8 *)puVar7 = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
    *puVar6 = 1;
    *(undefined4 *)(puVar7 + 0xa0) = 0xffffffff;
    *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x80) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x88) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x90) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x98) = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(uint *)(puVar7 + 0x80);
    if (-1 < (int)uVar2) {
      pvVar18 = (void *)((ulong)uVar2 + (long)puVar17);
      goto LAB_01d797e8;
    }
    if (uVar2 != 0xffffffff) goto LAB_01d797e4;
  }
  puVar10 = (uint *)(ulong)*puVar17;
  pvVar18 = (void *)0x0;
  if ((*puVar17 == 0) || (puVar17 == puVar10)) goto LAB_01d797e8;
  lVar15 = 0xc;
  if (*(char *)((long)puVar17 + (10 - (long)puVar10)) != '\0') {
    lVar15 = 0x1c;
  }
  lVar15 = (long)puVar17 + (lVar15 - (long)puVar10);
  if (lVar15 == 0) goto LAB_01d797e4;
  uVar16 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar10));
  *(undefined4 *)(puVar7 + 0x80) = 0xfffffffe;
  pvVar18 = (void *)0x0;
  if (uVar16 == 0) goto LAB_01d797e8;
  piVar12 = (int *)(lVar15 + 4);
  while (piVar12[-1] != 0x2f1b930d) {
    piVar12 = piVar12 + 2;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) {
      pvVar18 = (void *)0x0;
      goto LAB_01d797e8;
    }
  }
  iVar8 = 0;
  if (*piVar12 != -1) {
    iVar8 = *piVar12;
  }
  *(int *)(puVar7 + 0x80) = iVar8;
  uVar2 = *puVar17;
  goto joined_r0x01d79710;
LAB_01d797e4:
  pvVar18 = (void *)0x0;
LAB_01d797e8:
  __dest = *(void **)(param_1 + 8);
  __src = *(void **)PTR_PTR_04bc1178;
  if (pvVar18 != (void *)0x0) {
    __src = pvVar18;
  }
  if (__dest == __src) {
    return 1;
  }
  lVar15 = 0;
  do {
    if (*(char *)((long)__src + lVar15) == '\0') goto LAB_01d79850;
    if (*(char *)((long)__src + lVar15 + 1) == '\0') goto LAB_01d79844;
    if (*(char *)((long)__src + lVar15 + 2) == '\0') goto LAB_01d7984c;
    lVar15 = lVar15 + 3;
  } while (lVar15 != 0x80001);
  goto LAB_01d7983c;
joined_r0x01d795dc:
  if (uVar2 == 0) goto LAB_01d796a8;
  if (cVar14 == '\0') {
    cVar14 = '\x01';
    *(undefined8 *)puVar5 = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    *puVar4 = 1;
    *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
    *(undefined4 *)(puVar5 + 0x78) = 0xffffffff;
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
  }
  else {
    uVar2 = *(uint *)(puVar5 + 0x50);
    if (-1 < (int)uVar2) {
      pvVar18 = (void *)((ulong)uVar2 + (long)puVar17);
      goto LAB_01d796ac;
    }
    if (uVar2 != 0xffffffff) goto LAB_01d796a8;
  }
  puVar10 = (uint *)(ulong)*puVar17;
  pvVar18 = (void *)0x0;
  if ((*puVar17 == 0) || (puVar17 == puVar10)) goto LAB_01d796ac;
  lVar15 = 0xc;
  if (*(char *)((long)puVar17 + (10 - (long)puVar10)) != '\0') {
    lVar15 = 0x1c;
  }
  lVar15 = (long)puVar17 + (lVar15 - (long)puVar10);
  if (lVar15 == 0) goto LAB_01d796a8;
  uVar16 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar10));
  *(undefined4 *)(puVar5 + 0x50) = 0xfffffffe;
  pvVar18 = (void *)0x0;
  if (uVar16 == 0) goto LAB_01d796ac;
  piVar12 = (int *)(lVar15 + 4);
  while (piVar12[-1] != 0x2f1b930d) {
    piVar12 = piVar12 + 2;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) {
      pvVar18 = (void *)0x0;
      goto LAB_01d796ac;
    }
  }
  iVar8 = 0;
  if (*piVar12 != -1) {
    iVar8 = *piVar12;
  }
  *(int *)(puVar5 + 0x50) = iVar8;
  uVar2 = *puVar17;
  goto joined_r0x01d795dc;
LAB_01d79844:
  lVar15 = lVar15 + 1;
  goto LAB_01d79850;
LAB_01d7984c:
  lVar15 = lVar15 + 2;
  goto LAB_01d79850;
LAB_01d796a8:
  pvVar18 = (void *)0x0;
LAB_01d796ac:
  __dest = *(void **)(param_1 + 8);
  __src = *(void **)PTR_PTR_04bc0550;
  if (pvVar18 != (void *)0x0) {
    __src = pvVar18;
  }
  if (__dest == __src) {
    return 1;
  }
  lVar15 = 0;
  do {
    if (*(char *)((long)__src + lVar15) == '\0') goto LAB_01d79850;
    if (*(char *)((long)__src + lVar15 + 1) == '\0') goto LAB_01d79844;
    if (*(char *)((long)__src + lVar15 + 2) == '\0') goto LAB_01d7984c;
    lVar15 = lVar15 + 3;
  } while (lVar15 != 0x80001);
LAB_01d7983c:
  lVar15 = 0;
LAB_01d79850:
  iVar8 = (int)lVar15;
  if (*(int *)(param_1 + 0x10) <= (int)lVar15) {
    iVar8 = *(int *)(param_1 + 0x10) + -1;
  }
  memcpy(__dest,__src,(long)iVar8);
  *(undefined1 *)((long)__dest + (long)iVar8) = 0;
  return 1;
}

