
void FUN_01ae18f0(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined2 uVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  uint *puVar14;
  char cVar15;
  long lVar16;
  undefined2 uVar17;
  
  puVar7 = PTR_DAT_04bbff90;
  puVar6 = PTR_DAT_04bbff88;
  puVar10 = *(uint **)(param_1 + 0x10);
  uVar9 = 0;
  if (puVar10 != (uint *)0x0) {
    uVar9 = *puVar10;
    if (uVar9 != 0 && puVar10 != (uint *)(ulong)uVar9) {
      puVar14 = (uint *)((long)puVar10 - (long)(ulong)uVar9);
      if (((*puVar14 != 0) && (uVar9 = puVar14[1], uVar9 != 0)) && ((ulong)(ushort)puVar14[2] != 0))
      {
        lVar16 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar14 + lVar16 + (ulong)(ushort)puVar14[2] * 8;
        if (lVar16 != 0) {
          uVar2 = 0;
          if ((ulong)uVar9 != 0) {
            uVar2 = (uint)((ulong)((long)puVar10 - lVar16) / (ulong)uVar9);
          }
          if (*puVar14 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc0020) &&
             (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar2 * 2),
             uVar9 = (uint)uVar3, uVar3 < 0x5b6)) goto LAB_01ae19a4;
        }
      }
    }
    uVar9 = 0;
  }
LAB_01ae19a4:
  if ((int)*(uint *)(DAT_0532a7e8 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a7e8 + 0xb0) != 0) &&
         (puVar10 = *(uint **)(*(long *)(DAT_0532a7e8 + 0xb0) + 8), puVar10 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a7e8 + 200) <= uVar9 ||
         (*(char *)(*(long *)(DAT_0532a7e8 + 0xd0) + (long)(int)uVar9) != '\0')))) &&
       (((uVar9 < *puVar10 && (puVar10[1] != 0)) && ((ushort)puVar10[2] != 0)))) {
      iVar13 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        iVar13 = 0x1c;
      }
      puVar10 = (uint *)((ulong)(puVar10[1] * uVar9 + (uint)(ushort)puVar10[2] * 8 + iVar13) +
                        (long)puVar10);
      goto joined_r0x01ae1b34;
    }
  }
  else if (uVar9 < *(uint *)(DAT_0532a7e8 + 0x1c0)) {
    if (*(uint *)(DAT_0532a7e8 + 0x1b0) <= uVar9) {
      uVar9 = 0;
    }
    puVar10 = *(uint **)(*(long *)(DAT_0532a7e8 + 0x1b8) + (ulong)uVar9 * 8);
joined_r0x01ae1b34:
    if ((puVar10 != (uint *)0x0) && (*puVar10 != 0)) {
      cVar15 = *PTR_DAT_04bbff88;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
          *(undefined4 *)(puVar7 + 0x48) = 0xffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar9 = *(uint *)(puVar7 + 0xc);
          if (-1 < (int)uVar9) {
            if ((undefined2 *)((ulong)uVar9 + (long)puVar10) != (undefined2 *)0x0) {
              uVar17 = *(undefined2 *)((ulong)uVar9 + (long)puVar10);
              puVar10 = *(uint **)(param_1 + 0x10);
              pcVar4 = PTR_DAT_04bbfeb0;
              puVar5 = (undefined8 *)PTR_DAT_04bbfeb8;
              goto joined_r0x01ae1be4;
            }
            break;
          }
          if (uVar9 != 0xffffffff) break;
        }
        puVar14 = (uint *)(ulong)*puVar10;
        if ((*puVar10 == 0) || (puVar10 == puVar14)) break;
        lVar16 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar14)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar10 + (lVar16 - (long)puVar14);
        if (lVar16 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar14));
        *(undefined4 *)(puVar7 + 0xc) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar12 = (int *)(lVar16 + 4);
        while (piVar12[-1] != 0x54706054) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_01ae1b3c;
        }
        iVar13 = 0;
        if (*piVar12 != -1) {
          iVar13 = *piVar12;
        }
        *(int *)(puVar7 + 0xc) = iVar13;
        if (*puVar10 == 0) break;
      } while( true );
    }
  }
LAB_01ae1b3c:
  uVar17 = 0;
  puVar10 = *(uint **)(param_1 + 0x10);
  pcVar4 = PTR_DAT_04bbfeb0;
  puVar5 = (undefined8 *)PTR_DAT_04bbfeb8;
joined_r0x01ae1be4:
  if (puVar10 == (uint *)0x0) {
    uVar9 = 0xbc;
  }
  else {
    uVar2 = *puVar10;
    uVar9 = 0;
    if ((uVar2 != 0) && (puVar10 != (uint *)(ulong)uVar2)) {
      puVar14 = (uint *)((long)puVar10 - (long)(ulong)uVar2);
      uVar9 = 0;
      if (*puVar14 != 0) {
        uVar9 = puVar14[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
          lVar16 = 0xc;
          if (*(char *)((long)puVar14 + 10) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar14 + lVar16 + (ulong)(ushort)puVar14[2] * 8;
          if (lVar16 != 0) {
            uVar2 = 0;
            if ((ulong)uVar9 != 0) {
              uVar2 = (uint)((ulong)((long)puVar10 - lVar16) / (ulong)uVar9);
            }
            if (*puVar14 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar9 = (uint)*(ushort *)
                               (*(long *)((long)PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
               uVar9 < 0xbd)) goto LAB_01ae1bec;
          }
        }
        uVar9 = 0;
      }
    }
  }
LAB_01ae1bec:
  PTR_DAT_04bbfeb0 = pcVar4;
  PTR_DAT_04bbfeb8 = (undefined *)puVar5;
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) != 0) &&
         (puVar14 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar14 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a778 + 200) <= uVar9 ||
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar9) != '\0')))) &&
       (((uVar9 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))) {
      iVar13 = 0xc;
      if (*(char *)((long)puVar14 + 10) != '\0') {
        iVar13 = 0x1c;
      }
      puVar14 = (uint *)((ulong)(puVar14[1] * uVar9 + (uint)(ushort)puVar14[2] * 8 + iVar13) +
                        (long)puVar14);
      goto joined_r0x01ae1da4;
    }
  }
  else if (uVar9 < *(uint *)(DAT_0532a778 + 0x1c0)) {
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar9) {
      uVar9 = 0;
    }
    puVar14 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar9 * 8);
joined_r0x01ae1da4:
    if (puVar14 != (uint *)0x0) {
      if (*puVar14 != 0) {
        cVar15 = *pcVar4;
        do {
          if (cVar15 == '\0') {
            cVar15 = '\x01';
            *puVar5 = 0xffffffffffffffff;
            puVar5[1] = 0xffffffffffffffff;
            *pcVar4 = '\x01';
            puVar5[0xe] = 0xffffffffffffffff;
            *(undefined4 *)(puVar5 + 0xf) = 0xffffffff;
            puVar5[2] = 0xffffffffffffffff;
            puVar5[3] = 0xffffffffffffffff;
            puVar5[4] = 0xffffffffffffffff;
            puVar5[5] = 0xffffffffffffffff;
            puVar5[6] = 0xffffffffffffffff;
            puVar5[7] = 0xffffffffffffffff;
            puVar5[8] = 0xffffffffffffffff;
            puVar5[9] = 0xffffffffffffffff;
            puVar5[10] = 0xffffffffffffffff;
            puVar5[0xb] = 0xffffffffffffffff;
            puVar5[0xc] = 0xffffffffffffffff;
            puVar5[0xd] = 0xffffffffffffffff;
          }
          else {
            uVar9 = *(uint *)(puVar5 + 0xe);
            if (-1 < (int)uVar9) {
              lVar16 = (ulong)uVar9 + (long)puVar14;
              goto LAB_01ae1d18;
            }
            if (uVar9 != 0xffffffff) break;
          }
          puVar10 = (uint *)(ulong)*puVar14;
          lVar16 = 0;
          if ((*puVar14 == 0) || (puVar14 == puVar10)) goto LAB_01ae1d18;
          lVar16 = 0xc;
          if (*(char *)((long)puVar14 + (10 - (long)puVar10)) != '\0') {
            lVar16 = 0x1c;
          }
          lVar1 = (long)puVar14 + (lVar16 - (long)puVar10);
          if (lVar1 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar10));
          *(undefined4 *)(puVar5 + 0xe) = 0xfffffffe;
          lVar16 = 0;
          if (uVar11 == 0) goto LAB_01ae1d18;
          piVar12 = (int *)(lVar1 + 4);
          while (piVar12[-1] != -0x7840ff18) {
            piVar12 = piVar12 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) {
              lVar16 = 0;
              goto LAB_01ae1d18;
            }
          }
          iVar13 = 0;
          if (*piVar12 != -1) {
            iVar13 = *piVar12;
          }
          *(int *)(puVar5 + 0xe) = iVar13;
        } while (*puVar14 != 0);
      }
      lVar16 = 0;
LAB_01ae1d18:
      puVar10 = *(uint **)(param_1 + 0x10);
      lVar1 = *(long *)PTR_PTR_04bbfea8;
      puVar6 = PTR_DAT_04bbfe90;
      if (lVar16 != 0) {
        lVar1 = lVar16;
      }
      goto joined_r0x01ae1db4;
    }
  }
  lVar1 = *(long *)(PTR_PTR_04bb2238 + 8);
  puVar6 = PTR_DAT_04bbfe90;
joined_r0x01ae1db4:
  PTR_DAT_04bbfe90 = puVar6;
  if (puVar10 == (uint *)0x0) {
    uVar8 = 0xfffe;
  }
  else {
    if (*puVar10 != 0) {
      cVar15 = *PTR_DAT_04bbfe88;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *PTR_DAT_04bbfe88 = 1;
          memset(puVar6,0xff,0x1ac);
        }
        else {
          uVar9 = *(uint *)(puVar6 + 0x128);
          if (-1 < (int)uVar9) {
            if ((undefined2 *)((ulong)uVar9 + (long)puVar10) == (undefined2 *)0x0) break;
            uVar8 = *(undefined2 *)((ulong)uVar9 + (long)puVar10);
            goto LAB_01ae1eb4;
          }
          if (uVar9 != 0xffffffff) break;
        }
        puVar14 = (uint *)(ulong)*puVar10;
        uVar8 = 0;
        if ((*puVar10 == 0) || (puVar10 == puVar14)) goto LAB_01ae1eb4;
        lVar16 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar14)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar10 + (lVar16 - (long)puVar14);
        if (lVar16 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar14));
        *(undefined4 *)(puVar6 + 0x128) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar12 = (int *)(lVar16 + 4);
        while (piVar12[-1] != 0x54706054) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_01ae1eb0;
        }
        uVar8 = 0;
        iVar13 = 0;
        if (*piVar12 != -1) {
          iVar13 = *piVar12;
        }
        *(int *)(puVar6 + 0x128) = iVar13;
        if (*puVar10 == 0) goto LAB_01ae1eb4;
      } while( true );
    }
LAB_01ae1eb0:
    uVar8 = 0;
  }
LAB_01ae1eb4:
  FUN_038d1270(param_2,"%03d_%s_%05d",uVar17,lVar1,uVar8);
  return;
}

