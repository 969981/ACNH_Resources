
uint FUN_01c272b0(long param_1,undefined4 *param_2,short *param_3)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  int iVar14;
  short local_6c [6];
  
  if (*param_3 == -2) {
    return 0;
  }
  uVar13 = 0;
  do {
    uVar6 = *(uint *)(param_1 + 0x1d0);
    if ((int)uVar6 < 1) {
      uVar9 = 0;
      if (*(long *)(param_1 + 0xc0) != 0) {
        puVar12 = *(uint **)(*(long *)(param_1 + 0xc0) + 8);
        uVar9 = 0;
        if (puVar12 != (uint *)0x0) {
          uVar9 = (ulong)*puVar12;
        }
      }
      if (uVar9 <= uVar13) goto LAB_01c275c8;
      if (0 < (int)uVar6) goto LAB_01c27364;
      if ((((*(long *)(param_1 + 0xc0) != 0) &&
           (puVar12 = *(uint **)(*(long *)(param_1 + 0xc0) + 8), puVar12 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0xd8) <= uVar13 ||
           (*(char *)(*(long *)(param_1 + 0xe0) + uVar13) != '\0')))) &&
         (((uVar13 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
        iVar14 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          iVar14 = 0x1c;
        }
        puVar12 = (uint *)((ulong)(puVar12[1] * (int)uVar13 + (uint)(ushort)puVar12[2] * 8 + iVar14)
                          + (long)puVar12);
        goto joined_r0x01c274ac;
      }
    }
    else {
      if (uVar6 <= uVar13) {
LAB_01c275c8:
        uVar8 = 0;
        goto LAB_01c275cc;
      }
LAB_01c27364:
      if (uVar13 < uVar6) {
        uVar9 = uVar13 & 0xffffffff;
        if (*(uint *)(param_1 + 0x1c0) <= uVar13) {
          uVar9 = 0;
        }
        puVar12 = *(uint **)(*(long *)(param_1 + 0x1c8) + uVar9 * 8);
joined_r0x01c274ac:
        if (puVar12 != (uint *)0x0) {
          if (*puVar12 != 0) {
            cVar5 = DAT_0534be78;
            do {
              if (cVar5 == '\0') {
                cVar5 = '\x01';
                DAT_0534be8c = 0xffffffffffffffff;
                DAT_0534be78 = '\x01';
                DAT_0534be94 = 0xffffffff;
                DAT_0534be7c = -1;
                DAT_0534be84 = 0xffffffffffffffff;
              }
              else {
                if (-1 < DAT_0534be7c) {
                  if ((short *)((ulong)DAT_0534be7c._4_4_ + (long)puVar12) != (short *)0x0) {
                    local_6c[0] = *(short *)((ulong)DAT_0534be7c._4_4_ + (long)puVar12);
                    goto LAB_01c274c8;
                  }
                  break;
                }
                if (DAT_0534be7c._4_4_ != 0xffffffff) break;
              }
              puVar11 = (uint *)(ulong)*puVar12;
              local_6c[0] = -2;
              if ((*puVar12 == 0) || (puVar12 == puVar11)) goto LAB_01c274c8;
              lVar3 = 0xc;
              if (*(char *)((long)puVar12 + (10 - (long)puVar11)) != '\0') {
                lVar3 = 0x1c;
              }
              lVar3 = (long)puVar12 + (lVar3 - (long)puVar11);
              if (lVar3 == 0) break;
              uVar9 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar11));
              DAT_0534be7c = CONCAT44(0xfffffffe,(undefined4)DAT_0534be7c);
              if (uVar9 == 0) break;
              piVar10 = (int *)(lVar3 + 4);
              while (piVar10[-1] != -0x489482c9) {
                piVar10 = piVar10 + 2;
                uVar9 = uVar9 - 1;
                if (uVar9 == 0) goto LAB_01c274c4;
              }
              iVar14 = 0;
              if (*piVar10 != -1) {
                iVar14 = *piVar10;
              }
              DAT_0534be7c = CONCAT44(iVar14,(undefined4)DAT_0534be7c);
              if (*puVar12 == 0) break;
            } while( true );
          }
LAB_01c274c4:
          local_6c[0] = -2;
LAB_01c274c8:
          local_6c[1] = 0;
          local_6c[2] = 0;
          local_6c[3] = 0;
          FUN_0277d4ac(local_6c);
          if ((local_6c[0] != -2) && (uVar9 = FUN_0277d7b4(param_3,local_6c), (uVar9 & 1) != 0))
          break;
        }
      }
    }
    uVar13 = uVar13 + 1;
  } while( true );
  if (*puVar12 != 0) {
    uVar6 = 0x4c7b;
    cVar5 = DAT_0534be78;
    do {
      if (cVar5 == '\0') {
        cVar5 = '\x01';
        DAT_0534be8c = 0xffffffffffffffff;
        DAT_0534be78 = '\x01';
        DAT_0534be94 = 0xffffffff;
        DAT_0534be7c = -1;
        DAT_0534be84 = 0xffffffffffffffff;
      }
      else {
        if (-1 < (int)DAT_0534be84) {
          puVar1 = (ushort *)((DAT_0534be84 & 0xffffffff) + (long)puVar12);
          if (puVar1 == (ushort *)0x0) break;
          uVar6 = (uint)*puVar1;
          goto LAB_01c27604;
        }
        if ((int)DAT_0534be84 != -1) goto LAB_01c27604;
      }
      lVar3 = (long)puVar12 - (ulong)*puVar12;
      if ((*puVar12 == 0) || (lVar3 == 0)) goto LAB_01c27604;
      lVar2 = 0xc;
      if (*(char *)(lVar3 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar3 == 0) goto LAB_01c27604;
      uVar13 = (ulong)*(ushort *)(lVar3 + 8);
      DAT_0534be84 = CONCAT44(DAT_0534be84._4_4_,0xfffffffe);
      if (uVar13 == 0) goto LAB_01c27604;
      piVar10 = (int *)(lVar2 + lVar3 + 4);
      while (piVar10[-1] != 0x4765b463) {
        piVar10 = piVar10 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) goto LAB_01c27604;
      }
      iVar14 = 0;
      if (*piVar10 != -1) {
        iVar14 = *piVar10;
      }
      DAT_0534be84 = CONCAT44(DAT_0534be84._4_4_,iVar14);
      if (*puVar12 == 0) goto LAB_01c27604;
    } while( true );
  }
  uVar6 = 0x4c7b;
LAB_01c27604:
  uVar6 = uVar6 - *(ushort *)(param_1 + 0x408);
  if (*(uint *)(param_1 + 1000) <= uVar6) {
    uVar6 = 0;
    goto LAB_01c276ec;
  }
  puVar12 = *(uint **)(*(long *)(param_1 + 0x3f0) + (long)(int)uVar6 * 8);
  uVar6 = 0;
  if (puVar12 == (uint *)0x0) goto LAB_01c276ec;
  uVar6 = *puVar12;
  if (uVar6 == 0 || puVar12 == (uint *)(ulong)uVar6) {
LAB_01c276a8:
    uVar6 = 0;
  }
  else {
    puVar11 = (uint *)((long)puVar12 - (long)(ulong)uVar6);
    if (((*puVar11 == 0) || (uVar6 = puVar11[1], uVar6 == 0)) || ((ulong)(ushort)puVar11[2] == 0))
    goto LAB_01c276a8;
    lVar3 = 0xc;
    if (*(char *)((long)puVar11 + 10) != '\0') {
      lVar3 = 0x1c;
    }
    lVar3 = (long)puVar11 + lVar3 + (ulong)(ushort)puVar11[2] * 8;
    if (lVar3 == 0) goto LAB_01c276a8;
    uVar8 = 0;
    if ((ulong)uVar6 != 0) {
      uVar8 = (uint)((ulong)((long)puVar12 - lVar3) / (ulong)uVar6);
    }
    if (*puVar11 <= uVar8) {
      uVar8 = 0xffffffff;
    }
    if ((DAT_0534bd28 <= uVar8) ||
       (uVar4 = *(ushort *)(DAT_0534bd30 + (long)(int)uVar8 * 2), uVar6 = (uint)uVar4, 9 < uVar4))
    goto LAB_01c276a8;
  }
  if (uVar6 - 1 < 9) {
    uVar7 = *(undefined4 *)(&DAT_041786fc + (long)(int)(uVar6 - 1) * 4);
  }
  else {
    uVar7 = 0x6148bcad;
  }
  *param_2 = uVar7;
  uVar6 = 1;
LAB_01c276ec:
  uVar8 = 1;
LAB_01c275cc:
  return uVar8 & uVar6;
}

