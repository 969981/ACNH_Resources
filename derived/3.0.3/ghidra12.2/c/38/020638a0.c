
void FUN_020638a0(long param_1,long *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined8 *puVar11;
  char cVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  
  puVar6 = PTR_DAT_04bc1578;
  uVar18 = 0;
  uVar19 = 0;
  param_1 = param_1 + 0x178;
  do {
    if (DAT_053e0208 == 0) {
LAB_020639c0:
      puVar10 = &DAT_053dce00;
    }
    else {
      if ((int)*(uint *)(DAT_053e0208 + 0x16ca0) < 1) {
        if ((((*(long *)(DAT_053e0208 + 0x16b90) != 0) &&
             (puVar10 = *(uint **)(*(long *)(DAT_053e0208 + 0x16b90) + 8), puVar10 != (uint *)0x0))
            && ((*(uint *)(DAT_053e0208 + 0x16ba8) <= uVar18 ||
                (*(char *)(*(long *)(DAT_053e0208 + 0x16bb0) + (long)(int)uVar18) != '\0')))) &&
           (((uVar18 < *puVar10 && (puVar10[1] != 0)) && ((ushort)puVar10[2] != 0)))) {
          iVar13 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            iVar13 = 0x1c;
          }
          puVar10 = (uint *)((ulong)(puVar10[1] * uVar18 + (uint)(ushort)puVar10[2] * 8 + iVar13) +
                            (long)puVar10);
          if (puVar10 != (uint *)0x0) goto LAB_020639c8;
        }
        goto LAB_020639c0;
      }
      if (*(uint *)(DAT_053e0208 + 0x16ca0) <= uVar18) goto LAB_020639c0;
      uVar2 = uVar18;
      if (*(uint *)(DAT_053e0208 + 0x16c90) <= uVar18) {
        uVar2 = 0;
      }
      puVar10 = *(uint **)(*(long *)(DAT_053e0208 + 0x16c98) + (ulong)uVar2 * 8);
      if (puVar10 == (uint *)0x0) goto LAB_020639c0;
    }
LAB_020639c8:
    lVar20 = (long)(int)uVar19;
    piVar1 = (int *)(param_1 + ((long)((ulong)uVar19 << 0x20) >> 0x1b));
    if (*puVar10 != 0) {
      cVar12 = DAT_0538d24c;
      do {
        lVar15 = DAT_05ae7600;
        puVar5 = PTR_DAT_04bc1570;
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
          *(undefined4 *)(puVar6 + 0x68) = 0xffffffff;
          *puVar5 = 1;
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
        }
        else {
          uVar2 = *(uint *)(puVar6 + 0x2c);
          if (-1 < (int)uVar2) {
            if (((char *)((ulong)uVar2 + (long)puVar10) != (char *)0x0) &&
               (*(char *)((ulong)uVar2 + (long)puVar10) == '\x02')) {
              if (DAT_05ae7600 == 0) {
                puVar9 = malloc(0x438);
              }
              else {
                plVar8 = param_2;
                if (param_2 == (long *)0x0) {
                  lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                  plVar8 = (long *)(lVar15 + 8);
                  if (lVar7 != 0) {
                    plVar8 = (long *)(lVar7 + 0xa8);
                  }
                  plVar8 = (long *)*plVar8;
                  if (plVar8 == (long *)0x0) goto LAB_02063bd0;
                }
                puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x438,8);
              }
              if (puVar9 == (undefined8 *)0x0) goto LAB_02063bd0;
              *(undefined8 **)(param_1 + lVar20 * 0x20 + 0x10) = puVar9;
              puVar9[0x1c] = puVar9 + 0x20;
              puVar9[0x18] = puVar9 + 0x1c;
              lVar15 = 0x360;
              puVar9[0x14] = puVar9 + 0x18;
              puVar9[0x10] = puVar9 + 0x14;
              puVar9[0xc] = puVar9 + 0x10;
              puVar9[8] = puVar9 + 0xc;
              puVar9[4] = puVar9 + 8;
              puVar9[0x20] = puVar9 + 0x24;
              puVar9[0x24] = puVar9 + 0x28;
              puVar9[0x28] = puVar9 + 0x2c;
              puVar9[0x2c] = puVar9 + 0x30;
              puVar9[0x30] = puVar9 + 0x34;
              puVar9[0x34] = puVar9 + 0x38;
              puVar9[0x38] = puVar9 + 0x3c;
              puVar9[0x3c] = puVar9 + 0x40;
              puVar9[0x40] = puVar9 + 0x44;
              puVar9[0x44] = puVar9 + 0x48;
              puVar9[0x48] = puVar9 + 0x4c;
              puVar9[0x4c] = puVar9 + 0x50;
              puVar9[0x50] = puVar9 + 0x54;
              puVar9[0x54] = puVar9 + 0x58;
              puVar9[0x58] = puVar9 + 0x5c;
              puVar9[0x5c] = puVar9 + 0x60;
              puVar9[0x60] = puVar9 + 100;
              puVar11 = puVar9 + 0x68;
              *puVar9 = puVar9 + 4;
              iVar13 = 0x1b;
              puVar9[100] = puVar11;
              goto LAB_02063bb4;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
        }
        lVar15 = (long)puVar10 - (ulong)*puVar10;
        if ((*puVar10 == 0) || (lVar15 == 0)) break;
        lVar7 = 0xc;
        if (*(char *)(lVar15 + 10) != '\0') {
          lVar7 = 0x1c;
        }
        if (lVar7 + lVar15 == 0) break;
        uVar14 = (ulong)*(ushort *)(lVar15 + 8);
        *(undefined4 *)(puVar6 + 0x2c) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar16 = (int *)(lVar7 + lVar15 + 4);
        while (piVar16[-1] != -0x2947dcfb) {
          piVar16 = piVar16 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_02063b24;
        }
        iVar13 = 0;
        if (*piVar16 != -1) {
          iVar13 = *piVar16;
        }
        *(int *)(puVar6 + 0x2c) = iVar13;
        if (*puVar10 == 0) break;
      } while( true );
    }
LAB_02063b24:
    lVar15 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      puVar9 = malloc(0x28);
joined_r0x02063b9c:
      if (puVar9 != (undefined8 *)0x0) {
        iVar13 = 1;
        *(undefined8 **)(param_1 + lVar20 * 0x20 + 0x10) = puVar9;
        lVar15 = 0x20;
        puVar11 = puVar9;
LAB_02063bb4:
        *puVar11 = 0;
        *(undefined8 **)(param_1 + lVar20 * 0x20 + 0x18) = puVar9;
        if (lVar15 + (long)puVar9 != 0) {
          *(long *)(piVar1 + 2) = lVar15 + (long)puVar9;
          *piVar1 = 0;
          piVar1[1] = iVar13;
        }
      }
    }
    else {
      plVar8 = param_2;
      if (param_2 != (long *)0x0) {
LAB_02063b6c:
        puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x28,8);
        goto joined_r0x02063b9c;
      }
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar15 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 != (long *)0x0) goto LAB_02063b6c;
    }
LAB_02063bd0:
    uVar2 = piVar1[1];
    if (0 < (int)uVar2) {
      iVar13 = *piVar1;
      uVar17 = 0;
      puVar9 = (undefined8 *)(param_1 + lVar20 * 0x20 + 0x10);
      do {
        uVar4 = uVar17 - 10;
        if (uVar2 < 10) {
          uVar4 = 0xffffffff;
          uVar3 = uVar17;
        }
        else {
          uVar3 = 0xffffffff;
        }
        if (uVar2 == 1) {
          uVar3 = 0xffffffff;
        }
        if (iVar13 < piVar1[1]) {
          puVar10 = (uint *)*puVar9;
          if (puVar10 != (uint *)0x0) {
            *puVar9 = *(undefined8 *)puVar10;
          }
          puVar10[2] = uVar4;
          puVar10[3] = 0;
          puVar10[4] = 0;
          *(undefined8 *)((long)puVar10 + 0x12) = 0;
          *(undefined4 *)((long)puVar10 + 0x1a) = 0x101;
          *(undefined1 *)((long)puVar10 + 0x1e) = 0;
          *puVar10 = uVar18;
          puVar10[1] = uVar3;
          iVar13 = *piVar1;
          if (iVar13 < piVar1[1]) {
            *(uint **)(*(long *)(piVar1 + 2) + (long)iVar13 * 8) = puVar10;
            iVar13 = *piVar1 + 1;
            *piVar1 = iVar13;
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar2);
    }
    uVar18 = uVar18 + 1;
    uVar19 = uVar19 + 1;
    if (uVar18 == 0x15) {
      return;
    }
  } while( true );
}

