
undefined8 FUN_01c1da00(long param_1,undefined4 *param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  int iVar13;
  uint local_6c [3];
  
  uVar12 = 0;
  local_6c[2] = param_4;
  do {
    uVar6 = *(uint *)(param_1 + 0x1c8);
    if ((int)uVar6 < 1) {
      uVar7 = 0;
      if (*(long *)(param_1 + 0xb8) != 0) {
        puVar11 = *(uint **)(*(long *)(param_1 + 0xb8) + 8);
        uVar7 = 0;
        if (puVar11 != (uint *)0x0) {
          uVar7 = (ulong)*puVar11;
        }
      }
      if (uVar7 <= uVar12) {
        return 0;
      }
      if (0 < (int)uVar6) goto LAB_01c1daa4;
      if ((((*(long *)(param_1 + 0xb8) != 0) &&
           (puVar11 = *(uint **)(*(long *)(param_1 + 0xb8) + 8), puVar11 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0xd0) <= uVar12 ||
           (*(char *)(*(long *)(param_1 + 0xd8) + uVar12) != '\0')))) &&
         (((uVar12 < *puVar11 && (puVar11[1] != 0)) && ((ushort)puVar11[2] != 0)))) {
        iVar13 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          iVar13 = 0x1c;
        }
        puVar11 = (uint *)((ulong)(puVar11[1] * (int)uVar12 + (uint)(ushort)puVar11[2] * 8 + iVar13)
                          + (long)puVar11);
        goto joined_r0x01c1dc1c;
      }
    }
    else {
      if (uVar6 <= uVar12) {
        return 0;
      }
LAB_01c1daa4:
      if (uVar12 < uVar6) {
        uVar7 = uVar12 & 0xffffffff;
        if (*(uint *)(param_1 + 0x1b8) <= uVar12) {
          uVar7 = 0;
        }
        puVar11 = *(uint **)(*(long *)(param_1 + 0x1c0) + uVar7 * 8);
joined_r0x01c1dc1c:
        if (puVar11 != (uint *)0x0) {
          uVar6 = *puVar11;
          if (uVar6 == 0 || puVar11 == (uint *)(ulong)uVar6) {
LAB_01c1dad8:
            uVar6 = 0;
          }
          else {
            puVar10 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
            uVar6 = 0;
            if (*puVar10 != 0) {
              uVar6 = puVar10[1];
              if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
                lVar1 = 0xc;
                if (*(char *)((long)puVar10 + 10) != '\0') {
                  lVar1 = 0x1c;
                }
                lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
                if (lVar1 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar6 != 0) {
                    uVar3 = (uint)((ulong)((long)puVar11 - lVar1) / (ulong)uVar6);
                  }
                  if (*puVar10 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if ((uVar3 < DAT_0534b090) &&
                     (uVar6 = (uint)*(ushort *)(DAT_0534b098 + (long)(int)uVar3 * 2), uVar6 < 10))
                  goto LAB_01c1dadc;
                }
              }
              goto LAB_01c1dad8;
            }
          }
LAB_01c1dadc:
          if (uVar6 == local_6c[2]) {
            if (*puVar11 != 0) {
              cVar4 = DAT_0534b078;
              do {
                if (cVar4 == '\0') {
                  cVar4 = '\x01';
                  DAT_0534b078 = '\x01';
                  DAT_0534b07c = -1;
                  DAT_0534b084 = -1;
                  DAT_0534b08c = 0xffffffff;
                }
                else {
                  if (-1 < DAT_0534b084) {
                    if ((ushort *)((ulong)DAT_0534b084._4_4_ + (long)puVar11) != (ushort *)0x0) {
                      uVar5 = *(ushort *)((ulong)DAT_0534b084._4_4_ + (long)puVar11);
                      goto LAB_01c1dca8;
                    }
                    break;
                  }
                  if (DAT_0534b084._4_4_ != 0xffffffff) break;
                }
                puVar10 = (uint *)(ulong)*puVar11;
                uVar5 = 0xfffe;
                if ((*puVar11 == 0) || (puVar11 == puVar10)) goto LAB_01c1dca8;
                lVar1 = 0xc;
                if (*(char *)((long)puVar11 + (10 - (long)puVar10)) != '\0') {
                  lVar1 = 0x1c;
                }
                lVar1 = (long)puVar11 + (lVar1 - (long)puVar10);
                if (lVar1 == 0) break;
                uVar7 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar10));
                DAT_0534b084 = CONCAT44(0xfffffffe,(undefined4)DAT_0534b084);
                if (uVar7 == 0) break;
                piVar8 = (int *)(lVar1 + 4);
                while (piVar8[-1] != -0x489482c9) {
                  piVar8 = piVar8 + 2;
                  uVar7 = uVar7 - 1;
                  if (uVar7 == 0) goto LAB_01c1dca4;
                }
                iVar13 = 0;
                if (*piVar8 != -1) {
                  iVar13 = *piVar8;
                }
                DAT_0534b084 = CONCAT44(iVar13,(undefined4)DAT_0534b084);
                if (*puVar11 == 0) break;
              } while( true );
            }
LAB_01c1dca4:
            uVar5 = 0xfffe;
LAB_01c1dca8:
            local_6c[0] = (uint)uVar5;
            local_6c[1] = 0;
            FUN_0277d4ac(local_6c);
            uVar7 = FUN_0277d7b4(param_3,local_6c);
            if ((uVar7 & 1) != 0) {
              if (*puVar11 == 0) {
LAB_01c1ddb0:
                uVar6 = 0;
              }
              else {
                cVar4 = DAT_0534b078;
                do {
                  if (cVar4 == '\0') {
                    cVar4 = '\x01';
                    DAT_0534b078 = '\x01';
                    DAT_0534b07c = -1;
                    DAT_0534b084 = -1;
                    DAT_0534b08c = 0xffffffff;
                  }
                  else {
                    if (-1 < DAT_0534b07c) {
                      if ((ushort *)((ulong)DAT_0534b07c._4_4_ + (long)puVar11) == (ushort *)0x0)
                      goto LAB_01c1ddb0;
                      uVar6 = (uint)*(ushort *)((ulong)DAT_0534b07c._4_4_ + (long)puVar11);
                      goto LAB_01c1ddb4;
                    }
                    if (DAT_0534b07c._4_4_ != 0xffffffff) goto LAB_01c1ddb0;
                  }
                  puVar10 = (uint *)(ulong)*puVar11;
                  uVar6 = 0;
                  if ((*puVar11 == 0) || (puVar11 == puVar10)) goto LAB_01c1ddb4;
                  lVar1 = 0xc;
                  if (*(char *)((long)puVar11 + (10 - (long)puVar10)) != '\0') {
                    lVar1 = 0x1c;
                  }
                  lVar1 = (long)puVar11 + (lVar1 - (long)puVar10);
                  if (lVar1 == 0) goto LAB_01c1ddb0;
                  uVar7 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar10));
                  DAT_0534b07c = CONCAT44(0xfffffffe,(undefined4)DAT_0534b07c);
                  uVar6 = 0;
                  if (uVar7 == 0) goto LAB_01c1ddb4;
                  piVar8 = (int *)(lVar1 + 4);
                  while (piVar8[-1] != -0x2112f64) {
                    piVar8 = piVar8 + 2;
                    uVar7 = uVar7 - 1;
                    if (uVar7 == 0) {
                      uVar6 = 0;
                      goto LAB_01c1ddb4;
                    }
                  }
                  iVar13 = 0;
                  if (*piVar8 != -1) {
                    iVar13 = *piVar8;
                  }
                  DAT_0534b07c = CONCAT44(iVar13,(undefined4)DAT_0534b07c);
                } while (*puVar11 != 0);
                uVar6 = 0;
              }
LAB_01c1ddb4:
              if (((uVar6 < 0x40) && (DAT_05292338 != 0)) &&
                 (*(char *)(DAT_05292338 + 0x50c + (ulong)uVar6 * 0x10) != '\0')) break;
            }
          }
        }
      }
    }
    uVar12 = uVar12 + 1;
  } while( true );
  lVar1 = DAT_05292338 + 0x50c + (ulong)uVar6 * 0x10;
  *param_2 = *(undefined4 *)(lVar1 + 4);
  param_2[1] = *(undefined4 *)(lVar1 + 8);
  param_2[2] = *(undefined4 *)(lVar1 + 0xc);
  if (*puVar11 != 0) {
    cVar4 = DAT_0534b078;
    do {
      if (cVar4 == '\0') {
        cVar4 = '\x01';
        DAT_0534b078 = '\x01';
        DAT_0534b07c = -1;
        DAT_0534b084 = -1;
        DAT_0534b08c = 0xffffffff;
      }
      else {
        if (-1 < (int)DAT_0534b08c) {
          puVar9 = (undefined8 *)((ulong)DAT_0534b08c + (long)puVar11);
          goto LAB_01c1ded8;
        }
        if (DAT_0534b08c != 0xffffffff) break;
      }
      puVar10 = (uint *)(ulong)*puVar11;
      puVar9 = (undefined8 *)0x0;
      if ((*puVar11 == 0) || (puVar11 == puVar10)) goto LAB_01c1ded8;
      lVar1 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar10)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar11 + (lVar1 - (long)puVar10);
      if (lVar1 == 0) break;
      uVar12 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar10));
      DAT_0534b08c = 0xfffffffe;
      puVar9 = (undefined8 *)0x0;
      if (uVar12 == 0) goto LAB_01c1ded8;
      puVar10 = (uint *)(lVar1 + 4);
      while (puVar10[-1] != 0xb16c3035) {
        puVar10 = puVar10 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          puVar9 = (undefined8 *)0x0;
          goto LAB_01c1ded8;
        }
      }
      DAT_0534b08c = 0;
      if (*puVar10 != 0xffffffff) {
        DAT_0534b08c = *puVar10;
      }
    } while (*puVar11 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_01c1ded8:
  puVar2 = &DAT_0407ebb1;
  if (puVar9 != (undefined8 *)0x0) {
    puVar2 = puVar9;
  }
  FUN_038d1270(param_2 + 4,&DAT_0409e973,puVar2);
  return 1;
}

