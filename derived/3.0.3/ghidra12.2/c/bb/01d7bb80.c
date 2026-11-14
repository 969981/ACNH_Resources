
undefined8 FUN_01d7bb80(long param_1,int param_2,uint param_3)

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
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  char cVar14;
  long lVar15;
  uint *puVar16;
  ulong uVar17;
  void *pvVar18;
  void *__dest;
  
  puVar7 = PTR_DAT_04bb40b8;
  puVar6 = PTR_DAT_04bb40b0;
  puVar5 = PTR_DAT_04bb40a8;
  puVar4 = PTR_DAT_04bb40a0;
  if (param_2 == 1) {
    lVar15 = *(long *)PTR_DAT_04bb4138;
    if (lVar15 != 0) {
      uVar2 = *(uint *)(lVar15 + 0x1c0);
      uVar13 = uVar2;
      if ((0 < (int)uVar2) ||
         (((*(long *)(lVar15 + 0xb0) != 0 &&
           (puVar16 = *(uint **)(*(long *)(lVar15 + 0xb0) + 8), puVar16 != (uint *)0x0)) &&
          (uVar13 = *puVar16, 0 < (int)uVar13)))) {
        uVar17 = 0;
        cVar14 = *PTR_DAT_04bb40b0;
        do {
          if ((int)uVar2 < 1) {
            if ((((*(long *)(lVar15 + 0xb0) != 0) &&
                 (puVar16 = *(uint **)(*(long *)(lVar15 + 0xb0) + 8), puVar16 != (uint *)0x0)) &&
                ((*(uint *)(lVar15 + 200) <= uVar17 ||
                 (*(char *)(*(long *)(lVar15 + 0xd0) + uVar17) != '\0')))) &&
               (((uVar17 < *puVar16 && (puVar16[1] != 0)) && ((ushort)puVar16[2] != 0)))) {
              iVar8 = 0xc;
              if (*(char *)((long)puVar16 + 10) != '\0') {
                iVar8 = 0x1c;
              }
              puVar16 = (uint *)((ulong)(puVar16[1] * (int)uVar17 + (uint)(ushort)puVar16[2] * 8 +
                                        iVar8) + (long)puVar16);
              goto joined_r0x01d7be10;
            }
          }
          else if (uVar17 < uVar2) {
            uVar11 = uVar17 & 0xffffffff;
            if (*(uint *)(lVar15 + 0x1b0) <= uVar17) {
              uVar11 = 0;
            }
            puVar16 = *(uint **)(*(long *)(lVar15 + 0x1b8) + uVar11 * 8);
joined_r0x01d7be10:
            if (puVar16 != (uint *)0x0) {
              uVar9 = 0;
              if (*puVar16 != 0) {
                do {
                  if (cVar14 != '\0') {
                    uVar3 = *(uint *)(puVar7 + 0x58);
                    if ((int)uVar3 < 0) {
                      if (uVar3 == 0xffffffff) {
                        uVar3 = *puVar16;
                        if (uVar3 != 0) goto LAB_01d7bd3c;
                        uVar9 = 0;
                      }
                      else {
LAB_01d7bc90:
                        uVar9 = 0;
                      }
                    }
                    else {
                      uVar9 = 0;
                      if ((ushort *)((ulong)uVar3 + (long)puVar16) != (ushort *)0x0) {
                        uVar9 = (uint)*(ushort *)((ulong)uVar3 + (long)puVar16);
                      }
                    }
                    goto LAB_01d7bc94;
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
                  uVar3 = *puVar16;
                  uVar9 = 0;
                  if (uVar3 == 0) goto LAB_01d7bc94;
LAB_01d7bd3c:
                  puVar10 = (uint *)(ulong)uVar3;
                  if (puVar16 == puVar10) goto LAB_01d7bc90;
                  lVar1 = 0xc;
                  if (*(char *)((long)puVar16 + (10 - (long)puVar10)) != '\0') {
                    lVar1 = 0x1c;
                  }
                  lVar1 = (long)puVar16 + (lVar1 - (long)puVar10);
                  if (lVar1 == 0) goto LAB_01d7bc90;
                  uVar11 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar10));
                  *(undefined4 *)(puVar7 + 0x58) = 0xfffffffe;
                  uVar9 = 0;
                  if (uVar11 == 0) goto LAB_01d7bc94;
                  piVar12 = (int *)(lVar1 + 4);
                  while (piVar12[-1] != 0x54706054) {
                    piVar12 = piVar12 + 2;
                    uVar11 = uVar11 - 1;
                    if (uVar11 == 0) {
                      uVar9 = 0;
                      goto LAB_01d7bc94;
                    }
                  }
                  iVar8 = 0;
                  if (*piVar12 != -1) {
                    iVar8 = *piVar12;
                  }
                  *(int *)(puVar7 + 0x58) = iVar8;
                } while (*puVar16 != 0);
                uVar9 = 0;
              }
LAB_01d7bc94:
              if (uVar9 == param_3) {
                uVar2 = *puVar16;
                goto joined_r0x01d7bfbc;
              }
            }
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar13);
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
           (puVar16 = *(uint **)(*(long *)(lVar15 + 0xb0) + 8), puVar16 != (uint *)0x0)) &&
          (uVar13 = *puVar16, 0 < (int)uVar13)))) {
        uVar17 = 0;
        cVar14 = *PTR_DAT_04bb40a0;
        do {
          if ((int)uVar2 < 1) {
            if (((((*(long *)(lVar15 + 0xb0) != 0) &&
                  (puVar16 = *(uint **)(*(long *)(lVar15 + 0xb0) + 8), puVar16 != (uint *)0x0)) &&
                 ((*(uint *)(lVar15 + 200) <= uVar17 ||
                  (*(char *)(*(long *)(lVar15 + 0xd0) + uVar17) != '\0')))) &&
                ((uVar17 < *puVar16 && (puVar16[1] != 0)))) && ((ushort)puVar16[2] != 0)) {
              iVar8 = 0xc;
              if (*(char *)((long)puVar16 + 10) != '\0') {
                iVar8 = 0x1c;
              }
              puVar16 = (uint *)((ulong)(puVar16[1] * (int)uVar17 + (uint)(ushort)puVar16[2] * 8 +
                                        iVar8) + (long)puVar16);
              goto joined_r0x01d7bfa0;
            }
          }
          else if (uVar17 < uVar2) {
            uVar11 = uVar17 & 0xffffffff;
            if (*(uint *)(lVar15 + 0x1b0) <= uVar17) {
              uVar11 = 0;
            }
            puVar16 = *(uint **)(*(long *)(lVar15 + 0x1b8) + uVar11 * 8);
joined_r0x01d7bfa0:
            if (puVar16 != (uint *)0x0) {
              uVar9 = 0;
              if (*puVar16 != 0) {
                do {
                  if (cVar14 != '\0') {
                    uVar3 = *(uint *)(puVar5 + 0x40);
                    if ((int)uVar3 < 0) {
                      if (uVar3 == 0xffffffff) {
                        uVar3 = *puVar16;
                        if (uVar3 != 0) goto LAB_01d7bed4;
                        uVar9 = 0;
                      }
                      else {
LAB_01d7be28:
                        uVar9 = 0;
                      }
                    }
                    else {
                      uVar9 = 0;
                      if ((ushort *)((ulong)uVar3 + (long)puVar16) != (ushort *)0x0) {
                        uVar9 = (uint)*(ushort *)((ulong)uVar3 + (long)puVar16);
                      }
                    }
                    goto LAB_01d7be30;
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
                  uVar3 = *puVar16;
                  uVar9 = 0;
                  if (uVar3 == 0) goto LAB_01d7be30;
LAB_01d7bed4:
                  puVar10 = (uint *)(ulong)uVar3;
                  if (puVar16 == puVar10) goto LAB_01d7be28;
                  lVar1 = 0xc;
                  if (*(char *)((long)puVar16 + (10 - (long)puVar10)) != '\0') {
                    lVar1 = 0x1c;
                  }
                  lVar1 = (long)puVar16 + (lVar1 - (long)puVar10);
                  if (lVar1 == 0) goto LAB_01d7be28;
                  uVar11 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar10));
                  *(undefined4 *)(puVar5 + 0x40) = 0xfffffffe;
                  uVar9 = 0;
                  if (uVar11 == 0) goto LAB_01d7be30;
                  piVar12 = (int *)(lVar1 + 4);
                  while (piVar12[-1] != 0x54706054) {
                    piVar12 = piVar12 + 2;
                    uVar11 = uVar11 - 1;
                    if (uVar11 == 0) {
                      uVar9 = 0;
                      goto LAB_01d7be30;
                    }
                  }
                  iVar8 = 0;
                  if (*piVar12 != -1) {
                    iVar8 = *piVar12;
                  }
                  *(int *)(puVar5 + 0x40) = iVar8;
                } while (*puVar16 != 0);
                uVar9 = 0;
              }
LAB_01d7be30:
              if (uVar9 == param_3) {
                uVar2 = *puVar16;
                goto joined_r0x01d7c0f4;
              }
            }
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar13);
      }
    }
  }
  return 0;
joined_r0x01d7c0f4:
  if (uVar2 == 0) goto LAB_01d7c1c4;
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
      pvVar18 = (void *)((ulong)uVar2 + (long)puVar16);
      goto LAB_01d7c1c8;
    }
    if (uVar2 != 0xffffffff) goto LAB_01d7c1c4;
  }
  puVar10 = (uint *)(ulong)*puVar16;
  pvVar18 = (void *)0x0;
  if ((*puVar16 == 0) || (puVar16 == puVar10)) goto LAB_01d7c1c8;
  lVar15 = 0xc;
  if (*(char *)((long)puVar16 + (10 - (long)puVar10)) != '\0') {
    lVar15 = 0x1c;
  }
  lVar15 = (long)puVar16 + (lVar15 - (long)puVar10);
  if (lVar15 == 0) goto LAB_01d7c1c4;
  uVar17 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar10));
  *(undefined4 *)(puVar5 + 0x50) = 0xfffffffe;
  pvVar18 = (void *)0x0;
  if (uVar17 == 0) goto LAB_01d7c1c8;
  piVar12 = (int *)(lVar15 + 4);
  while (piVar12[-1] != 0x2f1b930d) {
    piVar12 = piVar12 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) {
      pvVar18 = (void *)0x0;
      goto LAB_01d7c1c8;
    }
  }
  iVar8 = 0;
  if (*piVar12 != -1) {
    iVar8 = *piVar12;
  }
  *(int *)(puVar5 + 0x50) = iVar8;
  uVar2 = *puVar16;
  goto joined_r0x01d7c0f4;
LAB_01d7c1c4:
  pvVar18 = (void *)0x0;
LAB_01d7c1c8:
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
    if (*(char *)((long)__src + lVar15) == '\0') goto LAB_01d7c230;
    if (*(char *)((long)__src + lVar15 + 1) == '\0') goto LAB_01d7c224;
    if (*(char *)((long)__src + lVar15 + 2) == '\0') goto LAB_01d7c22c;
    lVar15 = lVar15 + 3;
  } while (lVar15 != 0x80001);
  goto LAB_01d7c21c;
joined_r0x01d7bfbc:
  if (uVar2 == 0) goto LAB_01d7c094;
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
      pvVar18 = (void *)((ulong)uVar2 + (long)puVar16);
      goto LAB_01d7c098;
    }
    if (uVar2 != 0xffffffff) goto LAB_01d7c094;
  }
  puVar10 = (uint *)(ulong)*puVar16;
  pvVar18 = (void *)0x0;
  if ((*puVar16 == 0) || (puVar16 == puVar10)) goto LAB_01d7c098;
  lVar15 = 0xc;
  if (*(char *)((long)puVar16 + (10 - (long)puVar10)) != '\0') {
    lVar15 = 0x1c;
  }
  lVar15 = (long)puVar16 + (lVar15 - (long)puVar10);
  if (lVar15 == 0) goto LAB_01d7c094;
  uVar17 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar10));
  *(undefined4 *)(puVar7 + 0x80) = 0xfffffffe;
  pvVar18 = (void *)0x0;
  if (uVar17 == 0) goto LAB_01d7c098;
  piVar12 = (int *)(lVar15 + 4);
  while (piVar12[-1] != 0x2f1b930d) {
    piVar12 = piVar12 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) {
      pvVar18 = (void *)0x0;
      goto LAB_01d7c098;
    }
  }
  iVar8 = 0;
  if (*piVar12 != -1) {
    iVar8 = *piVar12;
  }
  *(int *)(puVar7 + 0x80) = iVar8;
  uVar2 = *puVar16;
  goto joined_r0x01d7bfbc;
LAB_01d7c224:
  lVar15 = lVar15 + 1;
  goto LAB_01d7c230;
LAB_01d7c22c:
  lVar15 = lVar15 + 2;
  goto LAB_01d7c230;
LAB_01d7c094:
  pvVar18 = (void *)0x0;
LAB_01d7c098:
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
    if (*(char *)((long)__src + lVar15) == '\0') goto LAB_01d7c230;
    if (*(char *)((long)__src + lVar15 + 1) == '\0') goto LAB_01d7c224;
    if (*(char *)((long)__src + lVar15 + 2) == '\0') goto LAB_01d7c22c;
    lVar15 = lVar15 + 3;
  } while (lVar15 != 0x80001);
LAB_01d7c21c:
  lVar15 = 0;
LAB_01d7c230:
  iVar8 = (int)lVar15;
  if (*(int *)(param_1 + 0x10) <= (int)lVar15) {
    iVar8 = *(int *)(param_1 + 0x10) + -1;
  }
  memcpy(__dest,__src,(long)iVar8);
  *(undefined1 *)((long)__dest + (long)iVar8) = 0;
  return 1;
}

