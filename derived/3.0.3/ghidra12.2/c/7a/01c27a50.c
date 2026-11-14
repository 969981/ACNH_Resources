
undefined8 FUN_01c27a50(long param_1,int param_2)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  uint *puVar6;
  char cVar7;
  uint *puVar8;
  ushort uVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  int *piVar13;
  int iVar14;
  ulong uVar15;
  uint local_6c [3];
  
  local_6c[2] = 0;
  if (param_2 < -0x83ceb3d) {
    if (param_2 < -0x15fdefdb) {
      if (param_2 == -0x477aafe0) {
        local_6c[2] = 5;
      }
      else if (param_2 == -0x2099c902) {
        local_6c[2] = 9;
      }
    }
    else if (param_2 == -0x15fdefdb) {
      local_6c[2] = 7;
    }
    else if (param_2 == -0xe632453) {
      local_6c[2] = 3;
    }
  }
  else if (param_2 < 0x17f77b87) {
    if (param_2 == -0x83ceb3d) {
      local_6c[2] = 4;
    }
    else if (param_2 == -0x169521c) {
      local_6c[2] = 1;
    }
  }
  else if (param_2 == 0x17f77b87) {
    local_6c[2] = 8;
  }
  else if (param_2 == 0x3b3bf38a) {
    local_6c[2] = 6;
  }
  else if (param_2 == 0x3fce6459) {
    local_6c[2] = 2;
  }
  uVar15 = 0;
  do {
    uVar10 = *(uint *)(param_1 + 0x1d0);
    if ((int)uVar10 < 1) {
      uVar11 = 0;
      if (*(long *)(param_1 + 0xc0) != 0) {
        puVar6 = *(uint **)(*(long *)(param_1 + 0xc0) + 8);
        uVar11 = 0;
        if (puVar6 != (uint *)0x0) {
          uVar11 = (ulong)*puVar6;
        }
      }
      if (uVar11 <= uVar15) {
        return 0;
      }
      if (0 < (int)uVar10) goto LAB_01c27c14;
      if ((((*(long *)(param_1 + 0xc0) != 0) &&
           (puVar6 = *(uint **)(*(long *)(param_1 + 0xc0) + 8), puVar6 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0xd8) <= uVar15 ||
           (*(char *)(*(long *)(param_1 + 0xe0) + uVar15) != '\0')))) &&
         (((uVar15 < *puVar6 && (puVar6[1] != 0)) && ((ushort)puVar6[2] != 0)))) {
        iVar14 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          iVar14 = 0x1c;
        }
        puVar6 = (uint *)((ulong)(puVar6[1] * (int)uVar15 + (uint)(ushort)puVar6[2] * 8 + iVar14) +
                         (long)puVar6);
        goto joined_r0x01c27d4c;
      }
    }
    else {
      if (uVar10 <= uVar15) {
        return 0;
      }
LAB_01c27c14:
      if (uVar15 < uVar10) {
        uVar11 = uVar15 & 0xffffffff;
        if (*(uint *)(param_1 + 0x1c0) <= uVar15) {
          uVar11 = 0;
        }
        puVar6 = *(uint **)(*(long *)(param_1 + 0x1c8) + uVar11 * 8);
joined_r0x01c27d4c:
        if (puVar6 != (uint *)0x0) {
          if (*puVar6 != 0) {
            cVar7 = DAT_0534be78;
            do {
              if (cVar7 == '\0') {
                cVar7 = '\x01';
                DAT_0534be7c = -1;
                DAT_0534be84 = 0xffffffffffffffff;
                DAT_0534be78 = '\x01';
                DAT_0534be8c = 0xffffffffffffffff;
                DAT_0534be94 = 0xffffffff;
              }
              else {
                if (-1 < (int)DAT_0534be84) {
                  puVar1 = (ushort *)((DAT_0534be84 & 0xffffffff) + (long)puVar6);
                  if (puVar1 != (ushort *)0x0) {
                    uVar10 = (uint)*puVar1;
                    goto LAB_01c27d68;
                  }
                  break;
                }
                if ((int)DAT_0534be84 != -1) break;
              }
              lVar3 = (long)puVar6 - (ulong)*puVar6;
              if (*puVar6 == 0) break;
              uVar10 = 0x4c7b;
              if (lVar3 == 0) goto LAB_01c27d68;
              lVar2 = 0xc;
              if (*(char *)(lVar3 + 10) != '\0') {
                lVar2 = 0x1c;
              }
              if (lVar2 + lVar3 == 0) break;
              uVar11 = (ulong)*(ushort *)(lVar3 + 8);
              DAT_0534be84 = CONCAT44(DAT_0534be84._4_4_,0xfffffffe);
              if (uVar11 == 0) break;
              piVar13 = (int *)(lVar2 + lVar3 + 4);
              while (piVar13[-1] != 0x4765b463) {
                piVar13 = piVar13 + 2;
                uVar11 = uVar11 - 1;
                if (uVar11 == 0) goto LAB_01c27d64;
              }
              iVar14 = 0;
              if (*piVar13 != -1) {
                iVar14 = *piVar13;
              }
              DAT_0534be84 = CONCAT44(DAT_0534be84._4_4_,iVar14);
              if (*puVar6 == 0) break;
            } while( true );
          }
LAB_01c27d64:
          uVar10 = 0x4c7b;
LAB_01c27d68:
          uVar10 = uVar10 - *(ushort *)(param_1 + 0x408);
          if ((uVar10 < *(uint *)(param_1 + 1000)) &&
             (puVar8 = *(uint **)(*(long *)(param_1 + 0x3f0) + (long)(int)uVar10 * 8),
             puVar8 != (uint *)0x0)) {
            uVar10 = *puVar8;
            if (uVar10 == 0 || puVar8 == (uint *)(ulong)uVar10) {
LAB_01c27e04:
              uVar10 = 0;
            }
            else {
              puVar12 = (uint *)((long)puVar8 - (long)(ulong)uVar10);
              if (((*puVar12 == 0) || (uVar10 = puVar12[1], uVar10 == 0)) ||
                 ((ulong)(ushort)puVar12[2] == 0)) goto LAB_01c27e04;
              lVar3 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                lVar3 = 0x1c;
              }
              lVar3 = (long)puVar12 + lVar3 + (ulong)(ushort)puVar12[2] * 8;
              if (lVar3 == 0) goto LAB_01c27e04;
              uVar4 = 0;
              if ((ulong)uVar10 != 0) {
                uVar4 = (uint)((ulong)((long)puVar8 - lVar3) / (ulong)uVar10);
              }
              if (*puVar12 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if ((DAT_0534bd28 <= uVar4) ||
                 (uVar9 = *(ushort *)(DAT_0534bd30 + (long)(int)uVar4 * 2), uVar10 = (uint)uVar9,
                 9 < uVar9)) goto LAB_01c27e04;
            }
            if (uVar10 == local_6c[2]) {
              if (*puVar6 != 0) {
                cVar7 = DAT_0534be78;
                do {
                  if (cVar7 == '\0') {
                    cVar7 = '\x01';
                    DAT_0534be7c = -1;
                    DAT_0534be84 = 0xffffffffffffffff;
                    DAT_0534be78 = '\x01';
                    DAT_0534be8c = 0xffffffffffffffff;
                    DAT_0534be94 = 0xffffffff;
                  }
                  else {
                    if (-1 < DAT_0534be7c) {
                      if ((ushort *)((ulong)DAT_0534be7c._4_4_ + (long)puVar6) != (ushort *)0x0) {
                        uVar9 = *(ushort *)((ulong)DAT_0534be7c._4_4_ + (long)puVar6);
                        goto LAB_01c27ee0;
                      }
                      break;
                    }
                    if (DAT_0534be7c._4_4_ != 0xffffffff) break;
                  }
                  puVar8 = (uint *)(ulong)*puVar6;
                  uVar9 = 0xfffe;
                  if ((*puVar6 == 0) || (puVar6 == puVar8)) goto LAB_01c27ee0;
                  lVar3 = 0xc;
                  if (*(char *)((long)puVar6 + (10 - (long)puVar8)) != '\0') {
                    lVar3 = 0x1c;
                  }
                  lVar3 = (long)puVar6 + (lVar3 - (long)puVar8);
                  if (lVar3 == 0) break;
                  uVar11 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar8));
                  DAT_0534be7c = CONCAT44(0xfffffffe,(undefined4)DAT_0534be7c);
                  if (uVar11 == 0) break;
                  piVar13 = (int *)(lVar3 + 4);
                  while (piVar13[-1] != -0x489482c9) {
                    piVar13 = piVar13 + 2;
                    uVar11 = uVar11 - 1;
                    if (uVar11 == 0) goto LAB_01c27edc;
                  }
                  iVar14 = 0;
                  if (*piVar13 != -1) {
                    iVar14 = *piVar13;
                  }
                  DAT_0534be7c = CONCAT44(iVar14,(undefined4)DAT_0534be7c);
                  if (*puVar6 == 0) break;
                } while( true );
              }
LAB_01c27edc:
              uVar9 = 0xfffe;
LAB_01c27ee0:
              local_6c[0] = (uint)uVar9;
              local_6c[1] = 0;
              uVar5 = FUN_0277d4ac(local_6c);
              if (((short)local_6c[0] != -2) &&
                 (uVar11 = FUN_01c27f3c(uVar5,local_6c,0), (uVar11 & 1) != 0)) {
                return 1;
              }
            }
          }
        }
      }
    }
    uVar15 = uVar15 + 1;
  } while( true );
}

