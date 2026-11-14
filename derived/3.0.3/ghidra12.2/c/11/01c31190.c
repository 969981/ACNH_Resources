
ulong FUN_01c31190(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  ushort uVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  ushort uVar12;
  uint *puVar13;
  int *piVar14;
  
  iVar6 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  if (iVar6 < -0x83ceb3d) {
    if (iVar6 < -0x15fdefdb) {
      if (iVar6 == -0x477aafe0) {
        uVar8 = 5;
        goto LAB_01c312d4;
      }
      if (iVar6 == -0x2099c902) {
        uVar8 = 9;
        goto LAB_01c312d4;
      }
    }
    else {
      if (iVar6 == -0x15fdefdb) {
        uVar8 = 7;
        goto LAB_01c312d4;
      }
      if (iVar6 == -0xe632453) {
        uVar8 = 3;
        goto LAB_01c312d4;
      }
    }
  }
  else if (iVar6 < 0x3b3bf38a) {
    if (iVar6 == -0x83ceb3d) {
      uVar8 = 4;
      goto LAB_01c312d4;
    }
    if (iVar6 == -0x169521c) {
      uVar8 = 1;
      goto LAB_01c312d4;
    }
  }
  else {
    if (iVar6 == 0x3b3bf38a) {
      uVar8 = 6;
      goto LAB_01c312d4;
    }
    if (iVar6 == 0x3fce6459) {
      uVar8 = 2;
      goto LAB_01c312d4;
    }
    if (iVar6 == 0x6148bcad) {
      uVar8 = 0;
      goto LAB_01c312d4;
    }
  }
  uVar8 = (ushort)(iVar6 == 0x17f77b87) << 3;
LAB_01c312d4:
  uVar3 = *(uint *)(param_1 + 0x9d0);
  lVar9 = *(long *)(param_1 + 0x8c0);
  uVar7 = 0;
  cVar5 = DAT_0534bc48;
  do {
    uVar10 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
    if ((int)uVar3 < 1 && lVar9 != 0) {
      uVar10 = 0;
      if (*(uint **)(lVar9 + 8) != (uint *)0x0) {
        uVar10 = (ulong)**(uint **)(lVar9 + 8);
      }
    }
    if (uVar10 <= uVar7) {
      return 0xffffffff;
    }
    if ((int)uVar3 < 1) {
      if ((((lVar9 != 0) && (puVar11 = *(uint **)(lVar9 + 8), puVar11 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0x8d8) <= uVar7 ||
           (*(char *)(*(long *)(param_1 + 0x8e0) + uVar7) != '\0')))) &&
         (((uVar7 < *puVar11 && (puVar11[1] != 0)) && ((ushort)puVar11[2] != 0)))) {
        iVar6 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          iVar6 = 0x1c;
        }
        puVar11 = (uint *)((ulong)(puVar11[1] * (int)uVar7 + (uint)(ushort)puVar11[2] * 8 + iVar6) +
                          (long)puVar11);
        goto joined_r0x01c31534;
      }
    }
    else if (uVar7 < uVar3) {
      uVar10 = uVar7 & 0xffffffff;
      if (*(uint *)(param_1 + 0x9c0) <= uVar7) {
        uVar10 = 0;
      }
      puVar11 = *(uint **)(*(long *)(param_1 + 0x9c8) + uVar10 * 8);
joined_r0x01c31534:
      if (puVar11 != (uint *)0x0) {
        uVar4 = *puVar11;
        uVar12 = 0;
        if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
          puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
          uVar12 = 0;
          if (*puVar13 != 0) {
            uVar4 = puVar13[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
              lVar1 = 0xc;
              if (*(char *)((long)puVar13 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar13 + lVar1 + (ulong)(ushort)puVar13[2] * 8;
              if (lVar1 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar11 - lVar1) / (ulong)uVar4);
                }
                if (*puVar13 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_0534bc38) &&
                   (uVar12 = *(ushort *)(DAT_0534bc40 + (long)(int)uVar2 * 2), uVar12 < 10))
                goto LAB_01c3140c;
              }
            }
            uVar12 = 0;
          }
        }
LAB_01c3140c:
        if (uVar12 == uVar8) {
          iVar6 = 0;
          if (*puVar11 != 0) {
            do {
              if (cVar5 != '\0') {
                if (DAT_0534bc4c < 0) {
                  if (DAT_0534bc4c._4_4_ == 0xffffffff) {
                    uVar4 = *puVar11;
                    if (uVar4 != 0) goto LAB_01c31470;
                    iVar6 = 0;
                  }
                  else {
LAB_01c3153c:
                    iVar6 = 0;
                  }
                }
                else {
                  iVar6 = 0;
                  if ((int *)((ulong)DAT_0534bc4c._4_4_ + (long)puVar11) != (int *)0x0) {
                    iVar6 = *(int *)((ulong)DAT_0534bc4c._4_4_ + (long)puVar11);
                  }
                }
                goto LAB_01c31540;
              }
              cVar5 = '\x01';
              DAT_0534bc4c = -1;
              DAT_0534bc54 = 0xffffffffffffffff;
              DAT_0534bc48 = '\x01';
              DAT_0534bc7c = 0xffffffff;
              DAT_0534bc5c = 0xffffffffffffffff;
              DAT_0534bc64 = 0xffffffffffffffff;
              DAT_0534bc6c = 0xffffffffffffffff;
              DAT_0534bc74 = 0xffffffffffffffff;
              uVar4 = *puVar11;
              iVar6 = 0;
              if (uVar4 == 0) goto LAB_01c31540;
LAB_01c31470:
              puVar13 = (uint *)(ulong)uVar4;
              if (puVar11 == puVar13) goto LAB_01c3153c;
              lVar1 = 0xc;
              if (*(char *)((long)puVar11 + (10 - (long)puVar13)) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar11 + (lVar1 - (long)puVar13);
              if (lVar1 == 0) goto LAB_01c3153c;
              uVar10 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar13));
              DAT_0534bc4c = CONCAT44(0xfffffffe,(undefined4)DAT_0534bc4c);
              iVar6 = 0;
              if (uVar10 == 0) goto LAB_01c31540;
              piVar14 = (int *)(lVar1 + 4);
              while (piVar14[-1] != -0x670080c8) {
                piVar14 = piVar14 + 2;
                uVar10 = uVar10 - 1;
                if (uVar10 == 0) {
                  iVar6 = 0;
                  goto LAB_01c31540;
                }
              }
              iVar6 = 0;
              if (*piVar14 != -1) {
                iVar6 = *piVar14;
              }
              DAT_0534bc4c = CONCAT44(iVar6,(undefined4)DAT_0534bc4c);
            } while (*puVar11 != 0);
            iVar6 = 0;
          }
LAB_01c31540:
          if (iVar6 == *(int *)(param_2 + 8)) {
            if (*puVar11 != 0) {
              while( true ) {
                if (cVar5 == '\0') {
                  cVar5 = '\x01';
                  DAT_0534bc4c = -1;
                  DAT_0534bc54 = 0xffffffffffffffff;
                  DAT_0534bc48 = '\x01';
                  DAT_0534bc7c = 0xffffffff;
                  DAT_0534bc5c = 0xffffffffffffffff;
                  DAT_0534bc64 = 0xffffffffffffffff;
                  DAT_0534bc6c = 0xffffffffffffffff;
                  DAT_0534bc74 = 0xffffffffffffffff;
                  uVar4 = *puVar11;
                }
                else {
                  if (-1 < (int)DAT_0534bc54) {
                    piVar14 = (int *)((DAT_0534bc54 & 0xffffffff) + (long)puVar11);
                    iVar6 = 0;
                    if (piVar14 != (int *)0x0) {
                      iVar6 = *piVar14;
                    }
                    goto LAB_01c315fc;
                  }
                  if ((int)DAT_0534bc54 != -1) break;
                  uVar4 = *puVar11;
                }
                if ((uVar4 == 0) || (puVar13 = (uint *)(ulong)uVar4, puVar11 == puVar13)) break;
                lVar1 = 0xc;
                if (*(char *)((long)puVar11 + (10 - (long)puVar13)) != '\0') {
                  lVar1 = 0x1c;
                }
                lVar1 = (long)puVar11 + (lVar1 - (long)puVar13);
                if (lVar1 == 0) break;
                uVar10 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar13));
                DAT_0534bc54._4_4_ = (undefined4)(DAT_0534bc54 >> 0x20);
                DAT_0534bc54 = CONCAT44(DAT_0534bc54._4_4_,0xfffffffe);
                if (uVar10 == 0) break;
                piVar14 = (int *)(lVar1 + 4);
                while (piVar14[-1] != -0x1dc0d3a8) {
                  piVar14 = piVar14 + 2;
                  uVar10 = uVar10 - 1;
                  if (uVar10 == 0) goto LAB_01c315f8;
                }
                iVar6 = 0;
                if (*piVar14 != -1) {
                  iVar6 = *piVar14;
                }
                DAT_0534bc54 = CONCAT44(DAT_0534bc54._4_4_,iVar6);
                if (*puVar11 == 0) break;
              }
            }
LAB_01c315f8:
            iVar6 = 0;
LAB_01c315fc:
            if (iVar6 == *(int *)(param_2 + 0xc)) {
              return uVar7 & 0xffffffff;
            }
          }
        }
      }
    }
    uVar7 = uVar7 + 1;
  } while( true );
}

