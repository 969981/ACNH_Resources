
void FUN_01afa900(long param_1,ulong param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  char cVar15;
  long lVar16;
  
  puVar7 = PTR_DAT_04bb43c0;
  if ((param_2 & 1) != 0) {
    lVar16 = *(long *)PTR_DAT_04bb43c0;
    uVar9 = FUN_0277d6c4(param_1 + 8);
    if (*(long *)puVar7 == 0) {
      return;
    }
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if (*(uint *)(lVar16 + 0x1d8) <= uVar9) {
      return;
    }
    if (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) == 0) {
      return;
    }
    uVar10 = FUN_01ae59b0(param_1);
    if ((uVar10 & 1) != 0) {
      return;
    }
  }
  lVar16 = DAT_0532a778;
  puVar8 = PTR_DAT_04bbfeb8;
  puVar7 = PTR_DAT_04bbfeb0;
  puVar12 = *(uint **)(param_1 + 0x10);
  if (puVar12 == (uint *)0x0) {
    uVar9 = 0xbc;
  }
  else {
    uVar9 = *puVar12;
    if (uVar9 != 0 && puVar12 != (uint *)(ulong)uVar9) {
      puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar9);
      if (((*puVar13 != 0) && (uVar9 = puVar13[1], uVar9 != 0)) && ((ulong)(ushort)puVar13[2] != 0))
      {
        lVar2 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar13 + lVar2 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar2 != 0) {
          uVar4 = 0;
          if ((ulong)uVar9 != 0) {
            uVar4 = (uint)((ulong)((long)puVar12 - lVar2) / (ulong)uVar9);
          }
          if (*puVar13 <= uVar4) {
            uVar4 = 0xffffffff;
          }
          if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
             uVar9 = (uint)uVar6, uVar6 < 0xbd)) goto LAB_01afaa10;
        }
      }
    }
    uVar9 = 0;
  }
LAB_01afaa10:
  uVar4 = *(uint *)(DAT_0532a778 + 0x1c0);
  if ((int)uVar4 < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) == 0) ||
         (puVar12 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar12 == (uint *)0x0)) ||
        ((uVar9 < *(uint *)(DAT_0532a778 + 200) &&
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar9) == '\0')))) ||
       (((*puVar12 <= uVar9 || (puVar12[1] == 0)) || ((ushort)puVar12[2] == 0)))) goto LAB_01afaba4;
    iVar14 = 0xc;
    if (*(char *)((long)puVar12 + 10) != '\0') {
      iVar14 = 0x1c;
    }
    puVar12 = (uint *)((ulong)(puVar12[1] * uVar9 + (uint)(ushort)puVar12[2] * 8 + iVar14) +
                      (long)puVar12);
  }
  else {
    if (uVar4 <= uVar9) goto LAB_01afaba4;
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar9) {
      uVar9 = 0;
    }
    puVar12 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar9 * 8);
  }
  if ((puVar12 != (uint *)0x0) && (*puVar12 != 0)) {
    cVar15 = *PTR_DAT_04bbfeb0;
    do {
      if (cVar15 == '\0') {
        cVar15 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        *puVar7 = 1;
        *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
        *(undefined4 *)(puVar8 + 0x78) = 0xffffffff;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
      }
      else {
        uVar9 = *(uint *)(puVar8 + 0x2c);
        uVar10 = (ulong)uVar9;
        if (-1 < (int)uVar9) {
          if (((char *)(uVar10 + (long)puVar12) != (char *)0x0) &&
             (*(char *)(uVar10 + (long)puVar12) != '\0')) {
            puVar12 = *(uint **)(param_1 + 0x10);
            if (puVar12 == (uint *)0x0) {
              uVar9 = 0xbc;
            }
            else {
              uVar5 = *puVar12;
              uVar9 = 0;
              if ((uVar5 != 0) && (puVar12 != (uint *)(ulong)uVar5)) {
                puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar5);
                uVar9 = 0;
                if (*puVar13 != 0) {
                  uVar9 = puVar13[1];
                  if ((uVar9 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                    lVar2 = 0xc;
                    if (*(char *)((long)puVar13 + 10) != '\0') {
                      lVar2 = 0x1c;
                    }
                    lVar2 = (long)puVar13 + lVar2 + (ulong)(ushort)puVar13[2] * 8;
                    if (lVar2 != 0) {
                      uVar5 = 0;
                      if ((ulong)uVar9 != 0) {
                        uVar5 = (uint)((ulong)((long)puVar12 - lVar2) / (ulong)uVar9);
                      }
                      if (*puVar13 <= uVar5) {
                        uVar5 = 0xffffffff;
                      }
                      if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                         (uVar9 = (uint)*(ushort *)
                                         (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2),
                         uVar9 < 0xbd)) goto LAB_01afac90;
                    }
                  }
                  uVar9 = 0;
                }
              }
            }
LAB_01afac90:
            if ((int)uVar4 < 1) {
              if ((((*(long *)(lVar16 + 0xb0) == 0) ||
                   (puVar12 = *(uint **)(*(long *)(lVar16 + 0xb0) + 8), puVar12 == (uint *)0x0)) ||
                  ((uVar9 < *(uint *)(lVar16 + 200) &&
                   (*(char *)(*(long *)(lVar16 + 0xd0) + (long)(int)uVar9) == '\0')))) ||
                 (((*puVar12 <= uVar9 || (puVar12[1] == 0)) || ((ushort)puVar12[2] == 0))))
              goto LAB_01afabb0;
              iVar14 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                iVar14 = 0x1c;
              }
              puVar12 = (uint *)((ulong)(puVar12[1] * uVar9 + (uint)(ushort)puVar12[2] * 8 + iVar14)
                                + (long)puVar12);
            }
            else {
              if (uVar4 <= uVar9) goto LAB_01afabb0;
              if (*(uint *)(lVar16 + 0x1b0) <= uVar9) {
                uVar9 = 0;
              }
              puVar12 = *(uint **)(*(long *)(lVar16 + 0x1b8) + (ulong)uVar9 * 8);
            }
            if (puVar12 == (uint *)0x0) goto LAB_01afabb0;
            uVar9 = *puVar12;
            goto joined_r0x01afacc4;
          }
          break;
        }
        if (uVar9 != 0xffffffff) break;
      }
      lVar2 = (long)puVar12 - (ulong)*puVar12;
      if ((*puVar12 == 0) || (lVar2 == 0)) break;
      lVar3 = 0xc;
      if (*(char *)(lVar2 + 10) != '\0') {
        lVar3 = 0x1c;
      }
      if (lVar3 + lVar2 == 0) break;
      uVar10 = (ulong)*(ushort *)(lVar2 + 8);
      *(undefined4 *)(puVar8 + 0x2c) = 0xfffffffe;
      if (uVar10 == 0) break;
      piVar11 = (int *)(lVar3 + lVar2 + 4);
      while (piVar11[-1] != -0x6f43f7ab) {
        piVar11 = piVar11 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_01afaba4;
      }
      iVar14 = 0;
      if (*piVar11 != -1) {
        iVar14 = *piVar11;
      }
      *(int *)(puVar8 + 0x2c) = iVar14;
      if (*puVar12 == 0) break;
    } while( true );
  }
LAB_01afaba4:
  FUN_01afa2dc(param_1,0);
LAB_01afabb0:
  bVar1 = 4;
  if ((param_2 & 1) == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb | bVar1;
  return;
joined_r0x01afacc4:
  if (uVar9 == 0) goto LAB_01afabb0;
  if (-1 < (int)uVar10) {
    if (((char *)((long)puVar12 + uVar10) != (char *)0x0) &&
       (*(char *)((long)puVar12 + uVar10) != '\0')) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    }
    goto LAB_01afabb0;
  }
  if ((int)uVar10 != -1) goto LAB_01afabb0;
  lVar16 = (long)puVar12 - (ulong)*puVar12;
  if ((*puVar12 == 0) || (lVar16 == 0)) goto LAB_01afabb0;
  lVar2 = 0xc;
  if (*(char *)(lVar16 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar16 == 0) goto LAB_01afabb0;
  uVar10 = (ulong)*(ushort *)(lVar16 + 8);
  *(undefined4 *)(puVar8 + 0x2c) = 0xfffffffe;
  if (uVar10 == 0) goto LAB_01afabb0;
  puVar13 = (uint *)(lVar2 + lVar16 + 4);
  while (puVar13[-1] != 0x90bc0855) {
    puVar13 = puVar13 + 2;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) goto LAB_01afabb0;
  }
  uVar9 = 0;
  if (*puVar13 != 0xffffffff) {
    uVar9 = *puVar13;
  }
  uVar10 = (ulong)uVar9;
  *(uint *)(puVar8 + 0x2c) = uVar9;
  uVar9 = *puVar12;
  goto joined_r0x01afacc4;
}

