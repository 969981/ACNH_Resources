
void FUN_0215e3b0(undefined8 *param_1,long param_2,short param_3)

{
  ushort *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  char cVar9;
  int *piVar10;
  ushort uVar11;
  int iVar12;
  ulong uVar13;
  short sVar14;
  uint *puVar15;
  uint *puVar16;
  uint local_58;
  undefined4 local_54;
  
  lVar5 = *(long *)(param_2 + 8);
  if ((lVar5 != 0) &&
     ((uVar4 = *(uint *)(lVar5 + 0x1c0), uVar6 = uVar4, 0 < (int)uVar4 ||
      (((*(long *)(lVar5 + 0xb0) != 0 &&
        (puVar16 = *(uint **)(*(long *)(lVar5 + 0xb0) + 8), puVar16 != (uint *)0x0)) &&
       (uVar6 = *puVar16, uVar6 != 0)))))) {
    uVar7 = 0;
    cVar9 = DAT_053f6410;
    do {
      if ((int)uVar4 < 1) {
        if (((((*(long *)(lVar5 + 0xb0) != 0) &&
              (puVar16 = *(uint **)(*(long *)(lVar5 + 0xb0) + 8), puVar16 != (uint *)0x0)) &&
             ((*(uint *)(lVar5 + 200) <= uVar7 ||
              (*(char *)(*(long *)(lVar5 + 0xd0) + (long)(int)uVar7) != '\0')))) &&
            ((uVar7 < *puVar16 && (puVar16[1] != 0)))) && ((ushort)puVar16[2] != 0)) {
          iVar12 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            iVar12 = 0x1c;
          }
          puVar16 = (uint *)((ulong)(puVar16[1] * uVar7 + (uint)(ushort)puVar16[2] * 8 + iVar12) +
                            (long)puVar16);
          goto joined_r0x0215e610;
        }
      }
      else if (uVar7 < uVar4) {
        uVar2 = uVar7;
        if (*(uint *)(lVar5 + 0x1b0) <= uVar7) {
          uVar2 = 0;
        }
        puVar16 = *(uint **)(*(long *)(lVar5 + 0x1b8) + (ulong)uVar2 * 8);
joined_r0x0215e610:
        if (puVar16 != (uint *)0x0) {
          sVar14 = 0;
          if (*puVar16 != 0) {
            do {
              if (cVar9 != '\0') {
                if ((long)DAT_053f642c < 0) {
                  if (DAT_053f642c._4_4_ == 0xffffffff) {
                    uVar2 = *puVar16;
                    if (uVar2 != 0) goto LAB_0215e540;
                    sVar14 = 0;
                  }
                  else {
LAB_0215e4b8:
                    sVar14 = 0;
                  }
                }
                else {
                  sVar14 = 0;
                  if ((short *)((ulong)DAT_053f642c._4_4_ + (long)puVar16) != (short *)0x0) {
                    sVar14 = *(short *)((ulong)DAT_053f642c._4_4_ + (long)puVar16);
                  }
                }
                goto LAB_0215e4c0;
              }
              cVar9 = '\x01';
              DAT_053f6414 = 0xffffffffffffffff;
              DAT_053f641c = 0xffffffffffffffff;
              DAT_053f6410 = '\x01';
              DAT_053f6434 = 0xffffffffffffffff;
              DAT_053f6424 = -1;
              DAT_053f642c = 0xffffffffffffffff;
              uVar2 = *puVar16;
              sVar14 = 0;
              if (uVar2 == 0) goto LAB_0215e4c0;
LAB_0215e540:
              puVar15 = (uint *)(ulong)uVar2;
              if (puVar16 == puVar15) goto LAB_0215e4b8;
              lVar3 = 0xc;
              if (*(char *)((long)puVar16 + (10 - (long)puVar15)) != '\0') {
                lVar3 = 0x1c;
              }
              lVar3 = (long)puVar16 + (lVar3 - (long)puVar15);
              if (lVar3 == 0) goto LAB_0215e4b8;
              uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar15));
              DAT_053f642c = CONCAT44(0xfffffffe,(int)DAT_053f642c);
              sVar14 = 0;
              if (uVar13 == 0) goto LAB_0215e4c0;
              piVar10 = (int *)(lVar3 + 4);
              while (piVar10[-1] != 0x54706054) {
                piVar10 = piVar10 + 2;
                uVar13 = uVar13 - 1;
                if (uVar13 == 0) {
                  sVar14 = 0;
                  goto LAB_0215e4c0;
                }
              }
              iVar12 = 0;
              if (*piVar10 != -1) {
                iVar12 = *piVar10;
              }
              DAT_053f642c = CONCAT44(iVar12,(int)DAT_053f642c);
            } while (*puVar16 != 0);
            sVar14 = 0;
          }
LAB_0215e4c0:
          if (sVar14 == param_3) {
            *(undefined8 *)((long)param_1 + 4) = 0xfffe;
            *(undefined2 *)param_1 = 0xffff;
            FUN_0277d4ac();
            *(undefined8 *)((long)param_1 + 0xc) = 0xfffe;
            FUN_0277d4ac();
            *(undefined8 *)((long)param_1 + 0x14) = 0xfffe;
            FUN_0277d4ac();
            *(undefined8 *)((long)param_1 + 0x1c) = 0xfffe;
            FUN_0277d4ac();
            *(undefined8 *)((long)param_1 + 0x24) = 0xfffe;
            FUN_0277d4ac();
            *(undefined8 *)((long)param_1 + 0x2c) = 0xfffe;
            FUN_0277d4ac();
            if (*puVar16 == 0) goto LAB_0215e748;
            cVar9 = DAT_053f6410;
            goto LAB_0215e694;
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar6);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)param_1 = 0xffff;
  *(undefined2 *)((long)param_1 + 4) = 0xfffe;
  *(undefined1 *)((long)param_1 + 7) = 0;
  FUN_0277d4ac();
  *(undefined8 *)((long)param_1 + 0xc) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)((long)param_1 + 0x14) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)((long)param_1 + 0x1c) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)((long)param_1 + 0x24) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)((long)param_1 + 0x2c) = 0xfffe;
  FUN_0277d4ac((undefined8 *)((long)param_1 + 0x2c));
  return;
  while( true ) {
    puVar15 = (uint *)(ulong)*puVar16;
    uVar8 = 0;
    if ((*puVar16 == 0) || (puVar16 == puVar15)) goto LAB_0215e74c;
    lVar5 = 0xc;
    if (*(char *)((long)puVar16 + (10 - (long)puVar15)) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar16 + (lVar5 - (long)puVar15);
    if (lVar5 == 0) goto LAB_0215e748;
    uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar15));
    DAT_053f642c = CONCAT44(0xfffffffe,(int)DAT_053f642c);
    uVar8 = 0;
    if (uVar13 == 0) goto LAB_0215e74c;
    piVar10 = (int *)(lVar5 + 4);
    while (piVar10[-1] != 0x54706054) {
      piVar10 = piVar10 + 2;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) {
        uVar8 = 0;
        goto LAB_0215e74c;
      }
    }
    iVar12 = 0;
    if (*piVar10 != -1) {
      iVar12 = *piVar10;
    }
    DAT_053f642c = CONCAT44(iVar12,(int)DAT_053f642c);
    if (*puVar16 == 0) break;
LAB_0215e694:
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      DAT_053f6414 = 0xffffffffffffffff;
      DAT_053f641c = 0xffffffffffffffff;
      DAT_053f6410 = '\x01';
      DAT_053f6434 = 0xffffffffffffffff;
      DAT_053f6424 = -1;
      DAT_053f642c = 0xffffffffffffffff;
    }
    else {
      if (-1 < (long)DAT_053f642c) {
        if ((undefined2 *)((ulong)DAT_053f642c._4_4_ + (long)puVar16) == (undefined2 *)0x0) {
LAB_0215e748:
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined2 *)((ulong)DAT_053f642c._4_4_ + (long)puVar16);
        }
        goto LAB_0215e74c;
      }
      if (DAT_053f642c._4_4_ != 0xffffffff) goto LAB_0215e748;
    }
  }
  uVar8 = 0;
LAB_0215e74c:
  *(undefined2 *)param_1 = uVar8;
  if (*puVar16 != 0) {
    cVar9 = DAT_053f6410;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        DAT_053f6414 = 0xffffffffffffffff;
        DAT_053f641c = 0xffffffffffffffff;
        DAT_053f6410 = '\x01';
        DAT_053f6434 = 0xffffffffffffffff;
        DAT_053f6424 = -1;
        DAT_053f642c = 0xffffffffffffffff;
      }
      else {
        if (-1 < (int)DAT_053f641c) {
          puVar1 = (ushort *)((DAT_053f641c & 0xffffffff) + (long)puVar16);
          if (puVar1 != (ushort *)0x0) {
            uVar11 = *puVar1;
            goto LAB_0215e82c;
          }
          break;
        }
        if ((int)DAT_053f641c != -1) break;
      }
      puVar15 = (uint *)(ulong)*puVar16;
      uVar11 = 0xfffe;
      if ((*puVar16 == 0) || (puVar16 == puVar15)) goto LAB_0215e82c;
      lVar5 = 0xc;
      if (*(char *)((long)puVar16 + (10 - (long)puVar15)) != '\0') {
        lVar5 = 0x1c;
      }
      lVar5 = (long)puVar16 + (lVar5 - (long)puVar15);
      if (lVar5 == 0) break;
      uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar15));
      DAT_053f641c = CONCAT44(DAT_053f641c._4_4_,0xfffffffe);
      if (uVar13 == 0) break;
      piVar10 = (int *)(lVar5 + 4);
      while (piVar10[-1] != 0x291a1b04) {
        piVar10 = piVar10 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) goto LAB_0215e828;
      }
      iVar12 = 0;
      if (*piVar10 != -1) {
        iVar12 = *piVar10;
      }
      DAT_053f641c = CONCAT44(DAT_053f641c._4_4_,iVar12);
      if (*puVar16 == 0) break;
    } while( true );
  }
LAB_0215e828:
  uVar11 = 0xfffe;
LAB_0215e82c:
  local_58 = (uint)uVar11;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  *(uint *)((long)param_1 + 4) = local_58;
  *(undefined4 *)(param_1 + 1) = local_54;
  uVar4 = *puVar16;
  if (uVar4 != 0) {
    cVar9 = DAT_053f6410;
    do {
      if (cVar9 == '\0') {
        DAT_053f6414 = 0xffffffffffffffff;
        DAT_053f641c = 0xffffffffffffffff;
        cVar9 = '\x01';
        DAT_053f6434 = 0xffffffffffffffff;
        DAT_053f6410 = '\x01';
        DAT_053f6424 = -1;
        DAT_053f642c = 0xffffffffffffffff;
        uVar4 = *puVar16;
      }
      else {
        if (-1 < (int)DAT_053f6414) {
          puVar1 = (ushort *)((DAT_053f6414 & 0xffffffff) + (long)puVar16);
          if (puVar1 != (ushort *)0x0) {
            uVar11 = *puVar1;
            goto LAB_0215e92c;
          }
          break;
        }
        if ((int)DAT_053f6414 != -1) break;
      }
      puVar15 = (uint *)(ulong)uVar4;
      uVar11 = 0xfffe;
      if ((puVar15 == (uint *)0x0) || (uVar11 = 0xfffe, puVar16 == puVar15)) goto LAB_0215e92c;
      lVar5 = 0xc;
      if (*(char *)((long)puVar16 + (10 - (long)puVar15)) != '\0') {
        lVar5 = 0x1c;
      }
      lVar5 = (long)puVar16 + (lVar5 - (long)puVar15);
      if (lVar5 == 0) break;
      uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar15));
      DAT_053f6414._4_4_ = (uint)(DAT_053f6414 >> 0x20);
      DAT_053f6414 = CONCAT44(DAT_053f6414._4_4_,0xfffffffe);
      if (uVar13 == 0) break;
      piVar10 = (int *)(lVar5 + 4);
      while (piVar10[-1] != 0x2b57b24a) {
        piVar10 = piVar10 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) goto LAB_0215e928;
      }
      iVar12 = 0;
      if (*piVar10 != -1) {
        iVar12 = *piVar10;
      }
      DAT_053f6414 = CONCAT44(DAT_053f6414._4_4_,iVar12);
      uVar4 = *puVar16;
      if (uVar4 == 0) break;
    } while( true );
  }
LAB_0215e928:
  uVar11 = 0xfffe;
LAB_0215e92c:
  local_58 = (uint)uVar11;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  *(uint *)((long)param_1 + 0xc) = local_58;
  *(undefined4 *)(param_1 + 2) = local_54;
  if (*puVar16 != 0) {
    cVar9 = DAT_053f6410;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        DAT_053f6414 = 0xffffffffffffffff;
        DAT_053f641c = 0xffffffffffffffff;
        DAT_053f6410 = '\x01';
        DAT_053f6434 = 0xffffffffffffffff;
        DAT_053f6424 = -1;
        DAT_053f642c = 0xffffffffffffffff;
      }
      else {
        if (-1 < (int)DAT_053f642c) {
          puVar1 = (ushort *)((DAT_053f642c & 0xffffffff) + (long)puVar16);
          if (puVar1 != (ushort *)0x0) {
            uVar11 = *puVar1;
            goto LAB_0215ea20;
          }
          break;
        }
        if ((int)DAT_053f642c != -1) break;
      }
      puVar15 = (uint *)(ulong)*puVar16;
      uVar11 = 0xfffe;
      if ((*puVar16 == 0) || (puVar16 == puVar15)) goto LAB_0215ea20;
      lVar5 = 0xc;
      if (*(char *)((long)puVar16 + (10 - (long)puVar15)) != '\0') {
        lVar5 = 0x1c;
      }
      lVar5 = (long)puVar16 + (lVar5 - (long)puVar15);
      if (lVar5 == 0) break;
      uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar15));
      DAT_053f642c = CONCAT44(DAT_053f642c._4_4_,0xfffffffe);
      if (uVar13 == 0) break;
      piVar10 = (int *)(lVar5 + 4);
      while (piVar10[-1] != -0x78f0e1d7) {
        piVar10 = piVar10 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) goto LAB_0215ea1c;
      }
      iVar12 = 0;
      if (*piVar10 != -1) {
        iVar12 = *piVar10;
      }
      DAT_053f642c = CONCAT44(DAT_053f642c._4_4_,iVar12);
      if (*puVar16 == 0) break;
    } while( true );
  }
LAB_0215ea1c:
  uVar11 = 0xfffe;
LAB_0215ea20:
  local_58 = (uint)uVar11;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  *(uint *)((long)param_1 + 0x14) = local_58;
  *(undefined4 *)(param_1 + 3) = local_54;
  if (*puVar16 != 0) {
    cVar9 = DAT_053f6410;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        DAT_053f6414 = 0xffffffffffffffff;
        DAT_053f641c = 0xffffffffffffffff;
        DAT_053f6410 = '\x01';
        DAT_053f6434 = 0xffffffffffffffff;
        DAT_053f6424 = -1;
        DAT_053f642c = 0xffffffffffffffff;
      }
      else {
        if (-1 < (long)DAT_053f6414) {
          if ((ushort *)((ulong)DAT_053f6414._4_4_ + (long)puVar16) != (ushort *)0x0) {
            uVar11 = *(ushort *)((ulong)DAT_053f6414._4_4_ + (long)puVar16);
            goto LAB_0215eb1c;
          }
          break;
        }
        if (DAT_053f6414._4_4_ != 0xffffffff) break;
      }
      puVar15 = (uint *)(ulong)*puVar16;
      uVar11 = 0xfffe;
      if ((*puVar16 == 0) || (puVar16 == puVar15)) goto LAB_0215eb1c;
      lVar5 = 0xc;
      if (*(char *)((long)puVar16 + (10 - (long)puVar15)) != '\0') {
        lVar5 = 0x1c;
      }
      lVar5 = (long)puVar16 + (lVar5 - (long)puVar15);
      if (lVar5 == 0) break;
      uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar15));
      DAT_053f6414 = CONCAT44(0xfffffffe,(int)DAT_053f6414);
      if (uVar13 == 0) break;
      piVar10 = (int *)(lVar5 + 4);
      while (piVar10[-1] != -0x33ec914b) {
        piVar10 = piVar10 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) goto LAB_0215eb18;
      }
      iVar12 = 0;
      if (*piVar10 != -1) {
        iVar12 = *piVar10;
      }
      DAT_053f6414 = CONCAT44(iVar12,(int)DAT_053f6414);
      if (*puVar16 == 0) break;
    } while( true );
  }
LAB_0215eb18:
  uVar11 = 0xfffe;
LAB_0215eb1c:
  local_58 = (uint)uVar11;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  *(uint *)((long)param_1 + 0x1c) = local_58;
  *(undefined4 *)(param_1 + 4) = local_54;
  if (*puVar16 != 0) {
    cVar9 = DAT_053f6410;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        DAT_053f6414 = 0xffffffffffffffff;
        DAT_053f641c = 0xffffffffffffffff;
        DAT_053f6410 = '\x01';
        DAT_053f6434 = 0xffffffffffffffff;
        DAT_053f6424 = -1;
        DAT_053f642c = 0xffffffffffffffff;
      }
      else {
        if (-1 < (long)DAT_053f641c) {
          if ((ushort *)((ulong)DAT_053f641c._4_4_ + (long)puVar16) != (ushort *)0x0) {
            uVar11 = *(ushort *)((ulong)DAT_053f641c._4_4_ + (long)puVar16);
            goto LAB_0215ec10;
          }
          break;
        }
        if (DAT_053f641c._4_4_ != 0xffffffff) break;
      }
      puVar15 = (uint *)(ulong)*puVar16;
      uVar11 = 0xfffe;
      if ((*puVar16 == 0) || (puVar16 == puVar15)) goto LAB_0215ec10;
      lVar5 = 0xc;
      if (*(char *)((long)puVar16 + (10 - (long)puVar15)) != '\0') {
        lVar5 = 0x1c;
      }
      lVar5 = (long)puVar16 + (lVar5 - (long)puVar15);
      if (lVar5 == 0) break;
      uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar15));
      DAT_053f641c = CONCAT44(0xfffffffe,(int)DAT_053f641c);
      if (uVar13 == 0) break;
      piVar10 = (int *)(lVar5 + 4);
      while (piVar10[-1] != -0x317d82b9) {
        piVar10 = piVar10 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) goto LAB_0215ec0c;
      }
      iVar12 = 0;
      if (*piVar10 != -1) {
        iVar12 = *piVar10;
      }
      DAT_053f641c = CONCAT44(iVar12,(int)DAT_053f641c);
      if (*puVar16 == 0) break;
    } while( true );
  }
LAB_0215ec0c:
  uVar11 = 0xfffe;
LAB_0215ec10:
  local_58 = (uint)uVar11;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  *(uint *)((long)param_1 + 0x24) = local_58;
  *(undefined4 *)(param_1 + 5) = local_54;
  if (*puVar16 == 0) {
LAB_0215ed08:
    uVar11 = 0xfffe;
LAB_0215ed0c:
    local_58 = (uint)uVar11;
    local_54 = 0;
    FUN_0277d4ac(&local_58);
    *(uint *)((long)param_1 + 0x2c) = local_58;
    *(undefined4 *)(param_1 + 6) = local_54;
    return;
  }
  cVar9 = DAT_053f6410;
  do {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      DAT_053f6414 = 0xffffffffffffffff;
      DAT_053f641c = 0xffffffffffffffff;
      DAT_053f6410 = '\x01';
      DAT_053f6434 = 0xffffffffffffffff;
      DAT_053f6424 = -1;
      DAT_053f642c = 0xffffffffffffffff;
    }
    else {
      if (-1 < DAT_053f6424) {
        if ((ushort *)((ulong)DAT_053f6424._4_4_ + (long)puVar16) != (ushort *)0x0) {
          uVar11 = *(ushort *)((ulong)DAT_053f6424._4_4_ + (long)puVar16);
          goto LAB_0215ed0c;
        }
        goto LAB_0215ed08;
      }
      if (DAT_053f6424._4_4_ != 0xffffffff) goto LAB_0215ed08;
    }
    puVar15 = (uint *)(ulong)*puVar16;
    uVar11 = 0xfffe;
    if ((*puVar16 == 0) || (puVar16 == puVar15)) goto LAB_0215ed0c;
    lVar5 = 0xc;
    if (*(char *)((long)puVar16 + (10 - (long)puVar15)) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar16 + (lVar5 - (long)puVar15);
    if (lVar5 == 0) goto LAB_0215ed08;
    uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar15));
    DAT_053f6424 = CONCAT44(0xfffffffe,(undefined4)DAT_053f6424);
    if (uVar13 == 0) goto LAB_0215ed08;
    piVar10 = (int *)(lVar5 + 4);
    while (piVar10[-1] != -0x68c051cc) {
      piVar10 = piVar10 + 2;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) goto LAB_0215ed08;
    }
    iVar12 = 0;
    if (*piVar10 != -1) {
      iVar12 = *piVar10;
    }
    DAT_053f6424 = CONCAT44(iVar12,(undefined4)DAT_053f6424);
    if (*puVar16 == 0) goto LAB_0215ed08;
  } while( true );
}

