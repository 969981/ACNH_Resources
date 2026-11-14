
void FUN_01af3780(undefined4 *param_1,short *param_2,uint param_3)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  uint *puVar11;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  char cVar16;
  long lVar17;
  undefined **local_68;
  short local_60;
  short sStack_5e;
  undefined4 local_5c;
  uint *local_58;
  
  puVar6 = PTR_DAT_04bb43c0;
  local_68 = &PTR_FUN_04a36b50;
  sVar5 = *param_2;
  sStack_5e = param_2[1];
  local_58 = (uint *)0x0;
  local_5c = *(undefined4 *)(param_2 + 2);
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  local_60 = sVar5;
  uVar8 = FUN_0277d6c4(&local_60);
  lVar1 = DAT_0532a768;
  if (*(long *)puVar6 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      uVar8 = FUN_0277d6c4(param_2);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar1 + 0x1d8)) &&
         (puVar13 = *(uint **)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar8 * 8),
         puVar13 != (uint *)0x0)) {
        local_58 = puVar13;
      }
    }
  }
  if (((0xff < param_3) || (sVar5 == -2)) || (uVar10 = FUN_01af0020(&local_68), (uVar10 & 1) == 0))
  goto LAB_01af3d10;
  iVar9 = FUN_01af02d0(&local_68);
  lVar1 = DAT_0532a778;
  puVar7 = PTR_DAT_04bbfeb8;
  puVar6 = PTR_DAT_04bbfeb0;
  if (local_58 == (uint *)0x0) {
    uVar8 = 0xbc;
  }
  else {
    uVar3 = *local_58;
    uVar8 = 0;
    if ((uVar3 != 0) && (local_58 != (uint *)(ulong)uVar3)) {
      puVar13 = (uint *)((long)local_58 - (long)(ulong)uVar3);
      uVar8 = 0;
      if (*puVar13 != 0) {
        uVar8 = puVar13[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar17 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar13 + lVar17 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar17 != 0) {
            uVar3 = 0;
            if ((ulong)uVar8 != 0) {
              uVar3 = (uint)((ulong)((long)local_58 - lVar17) / (ulong)uVar8);
            }
            if (*puVar13 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar8 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
               uVar8 < 0xbd)) goto LAB_01af3920;
          }
        }
        uVar8 = 0;
      }
    }
  }
LAB_01af3920:
  uVar3 = *(uint *)(DAT_0532a778 + 0x1c0);
  if ((int)uVar3 < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) != 0) &&
         (puVar13 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar13 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a778 + 200) <= uVar8 ||
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar8) != '\0')))) &&
       (((uVar8 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
      iVar15 = 0xc;
      if (*(char *)((long)puVar13 + 10) != '\0') {
        iVar15 = 0x1c;
      }
      puVar13 = (uint *)((ulong)(puVar13[1] * uVar8 + (uint)(ushort)puVar13[2] * 8 + iVar15) +
                        (long)puVar13);
      if (puVar13 != (uint *)0x0) goto LAB_01af395c;
    }
LAB_01af3ab8:
    uVar8 = 0;
  }
  else {
    if (uVar3 <= uVar8) goto LAB_01af3ab8;
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar8) {
      uVar8 = 0;
    }
    puVar13 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar8 * 8);
    if (puVar13 == (uint *)0x0) goto LAB_01af3ab8;
LAB_01af395c:
    uVar8 = 0;
    if (*puVar13 != 0) {
      cVar16 = *PTR_DAT_04bbfeb0;
      do {
        if (cVar16 == '\0') {
          cVar16 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
          *(undefined4 *)(puVar7 + 0x78) = 0xffffffff;
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
        }
        else {
          uVar14 = *(uint *)(puVar7 + 0x18);
          if (-1 < (int)uVar14) {
            uVar8 = 0;
            if ((ushort *)((ulong)uVar14 + (long)puVar13) != (ushort *)0x0) {
              uVar8 = (uint)*(ushort *)((ulong)uVar14 + (long)puVar13);
            }
            break;
          }
          if (uVar14 != 0xffffffff) goto LAB_01af3ab8;
        }
        puVar11 = (uint *)(ulong)*puVar13;
        uVar8 = 0;
        if ((*puVar13 == 0) || (puVar13 == puVar11)) break;
        lVar17 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar11)) != '\0') {
          lVar17 = 0x1c;
        }
        lVar17 = (long)puVar13 + (lVar17 - (long)puVar11);
        if (lVar17 == 0) goto LAB_01af3ab8;
        uVar10 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar11));
        *(undefined4 *)(puVar7 + 0x18) = 0xfffffffe;
        uVar8 = 0;
        if (uVar10 == 0) break;
        piVar12 = (int *)(lVar17 + 4);
        while (piVar12[-1] != 0x4c9ba961) {
          piVar12 = piVar12 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            uVar8 = 0;
            goto LAB_01af3abc;
          }
        }
        uVar8 = 0;
        iVar15 = 0;
        if (*piVar12 != -1) {
          iVar15 = *piVar12;
        }
        *(int *)(puVar7 + 0x18) = iVar15;
        if (*puVar13 == 0) break;
      } while( true );
    }
  }
LAB_01af3abc:
  puVar7 = PTR_DAT_04bbfeb8;
  puVar6 = PTR_DAT_04bbfeb0;
  if (local_58 == (uint *)0x0) {
    uVar14 = 0xbc;
  }
  else {
    uVar4 = *local_58;
    uVar14 = 0;
    if ((uVar4 != 0) && (local_58 != (uint *)(ulong)uVar4)) {
      puVar13 = (uint *)((long)local_58 - (long)(ulong)uVar4);
      uVar14 = 0;
      if (*puVar13 != 0) {
        uVar14 = puVar13[1];
        if ((uVar14 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar17 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar13 + lVar17 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar17 != 0) {
            uVar4 = 0;
            if ((ulong)uVar14 != 0) {
              uVar4 = (uint)((ulong)((long)local_58 - lVar17) / (ulong)uVar14);
            }
            if (*puVar13 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar14 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
               uVar14 < 0xbd)) goto LAB_01af3b54;
          }
        }
        uVar14 = 0;
      }
    }
  }
LAB_01af3b54:
  if ((int)uVar3 < 1) {
    if ((((*(long *)(lVar1 + 0xb0) != 0) &&
         (puVar13 = *(uint **)(*(long *)(lVar1 + 0xb0) + 8), puVar13 != (uint *)0x0)) &&
        ((*(uint *)(lVar1 + 200) <= uVar14 ||
         (*(char *)(*(long *)(lVar1 + 0xd0) + (long)(int)uVar14) != '\0')))) &&
       (((uVar14 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
      iVar15 = 0xc;
      if (*(char *)((long)puVar13 + 10) != '\0') {
        iVar15 = 0x1c;
      }
      puVar13 = (uint *)((ulong)(puVar13[1] * uVar14 + (uint)(ushort)puVar13[2] * 8 + iVar15) +
                        (long)puVar13);
      goto joined_r0x01af3ce4;
    }
  }
  else if (uVar14 < uVar3) {
    if (*(uint *)(lVar1 + 0x1b0) <= uVar14) {
      uVar14 = 0;
    }
    puVar13 = *(uint **)(*(long *)(lVar1 + 0x1b8) + (ulong)uVar14 * 8);
joined_r0x01af3ce4:
    if ((puVar13 != (uint *)0x0) && (*puVar13 != 0)) {
      cVar16 = *PTR_DAT_04bbfeb0;
      do {
        if (cVar16 == '\0') {
          cVar16 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
          *(undefined4 *)(puVar7 + 0x78) = 0xffffffff;
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
        }
        else {
          uVar3 = *(uint *)(puVar7 + 0x18);
          if (-1 < (int)uVar3) {
            if ((short *)((ulong)uVar3 + (long)puVar13) != (short *)0x0) {
              if (*(short *)((ulong)uVar3 + (long)puVar13) < iVar9) goto LAB_01af3d10;
              goto LAB_01af3cf4;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar11 = (uint *)(ulong)*puVar13;
        if ((*puVar13 == 0) || (puVar13 == puVar11)) break;
        lVar1 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar11)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar13 + (lVar1 - (long)puVar11);
        if (lVar1 == 0) break;
        uVar10 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar11));
        *(undefined4 *)(puVar7 + 0x18) = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar12 = (int *)(lVar1 + 4);
        while (piVar12[-1] != 0x4c9ba961) {
          piVar12 = piVar12 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_01af3cec;
        }
        iVar15 = 0;
        if (*piVar12 != -1) {
          iVar15 = *piVar12;
        }
        *(int *)(puVar7 + 0x18) = iVar15;
        if (*puVar13 == 0) break;
      } while( true );
    }
  }
LAB_01af3cec:
  if (iVar9 < 1) {
LAB_01af3cf4:
    if ((iVar9 + param_3 & 0xff) <= (uVar8 & 0xff)) {
      uVar8 = iVar9 + param_3;
    }
    FUN_01af2bc0(&local_68,uVar8);
    param_2 = &local_60;
  }
LAB_01af3d10:
  uVar2 = *(undefined4 *)(param_2 + 2);
  *param_1 = *(undefined4 *)param_2;
  param_1[1] = uVar2;
  return;
}

