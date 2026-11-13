
undefined8 FUN_0123ef30(uint *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ushort *puVar7;
  char cVar8;
  ushort uVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  uint local_80;
  uint local_7c;
  undefined **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint *local_68;
  
  puVar1 = PTR_DAT_04bb43c0;
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  lVar14 = *(long *)puVar1;
  if (lVar14 == 0) {
    return 0;
  }
  lVar16 = *(long *)(lVar16 + 0x57e58);
  uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
  if (*(uint *)(lVar16 + 0x1d8) <= uVar2) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar2 * 8) == 0) {
    return 0;
  }
  local_68 = (uint *)0x0;
  local_70 = *param_2;
  uStack_6c = param_2[1];
  local_78 = &PTR_FUN_04a36b50;
  uVar2 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar1 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_2);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar14 + 0x1d8)) &&
         (puVar10 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar2 * 8),
         puVar10 != (uint *)0x0)) {
        local_68 = puVar10;
        goto LAB_0123f050;
      }
    }
  }
  if (local_68 == (uint *)0x0) {
    return 0;
  }
LAB_0123f050:
  uVar2 = *local_68;
  if (uVar2 == 0) {
    return 0;
  }
  if (local_68 == (uint *)(ulong)uVar2) {
    return 0;
  }
  puVar10 = (uint *)((long)local_68 - (long)(ulong)uVar2);
  if (((*puVar10 != 0) && (uVar2 = puVar10[1], uVar2 != 0)) && ((ulong)(ushort)puVar10[2] != 0)) {
    lVar14 = 0xc;
    if (*(char *)((long)puVar10 + 10) != '\0') {
      lVar14 = 0x1c;
    }
    lVar14 = (long)puVar10 + lVar14 + (ulong)(ushort)puVar10[2] * 8;
    if (lVar14 != 0) {
      uVar3 = 0;
      if ((ulong)uVar2 != 0) {
        uVar3 = (uint)((ulong)((long)local_68 - lVar14) / (ulong)uVar2);
      }
      if (*puVar10 <= uVar3) {
        uVar3 = 0xffffffff;
      }
      if ((uVar3 < DAT_05326ec0) && (*(short *)(DAT_05326ec8 + (long)(int)uVar3 * 2) == 0x78)) {
        uVar6 = FUN_01ad7260(&local_78);
        if ((int)uVar6 == 0) {
          return uVar6;
        }
        uVar15 = 0;
        do {
          uVar2 = *(uint *)(DAT_05150358 + 0x598);
          if ((int)uVar2 < 1) {
            uVar12 = 0;
            if (*(long *)(DAT_05150358 + 0x488) != 0) {
              puVar10 = *(uint **)(*(long *)(DAT_05150358 + 0x488) + 8);
              uVar12 = 0;
              if (puVar10 != (uint *)0x0) {
                uVar12 = (ulong)*puVar10;
              }
            }
            if (uVar12 <= uVar15) {
              return 0;
            }
            if (0 < (int)uVar2) goto LAB_0123f150;
            if ((((*(long *)(DAT_05150358 + 0x488) != 0) &&
                 (puVar10 = *(uint **)(*(long *)(DAT_05150358 + 0x488) + 8), puVar10 != (uint *)0x0)
                 ) && ((*(uint *)(DAT_05150358 + 0x4a0) <= uVar15 ||
                       (*(char *)(*(long *)(DAT_05150358 + 0x4a8) + uVar15) != '\0')))) &&
               (((uVar15 < *puVar10 && (puVar10[1] != 0)) && ((ushort)puVar10[2] != 0)))) {
              iVar4 = 0xc;
              if (*(char *)((long)puVar10 + 10) != '\0') {
                iVar4 = 0x1c;
              }
              puVar10 = (uint *)((ulong)(puVar10[1] * (int)uVar15 + (uint)(ushort)puVar10[2] * 8 +
                                        iVar4) + (long)puVar10);
              if (puVar10 == (uint *)0x0) goto LAB_0123f10c;
              goto LAB_0123f174;
            }
          }
          else {
            if (uVar2 <= uVar15) {
              return 0;
            }
LAB_0123f150:
            if (uVar15 < uVar2) {
              uVar12 = uVar15 & 0xffffffff;
              if (*(uint *)(DAT_05150358 + 0x588) <= uVar15) {
                uVar12 = 0;
              }
              puVar10 = *(uint **)(*(long *)(DAT_05150358 + 0x590) + uVar12 * 8);
              if (puVar10 != (uint *)0x0) {
LAB_0123f174:
                if (*puVar10 != 0) {
                  cVar8 = DAT_05150d60;
                  do {
                    if (cVar8 == '\0') {
                      cVar8 = '\x01';
                      DAT_05150d60 = '\x01';
                      DAT_05150d64 = -1;
                      DAT_05150d6c = 0xffffffffffffffff;
                    }
                    else {
                      if (-1 < DAT_05150d64) {
                        if ((ushort *)((ulong)DAT_05150d64._4_4_ + (long)puVar10) != (ushort *)0x0)
                        {
                          uVar2 = (uint)*(ushort *)((ulong)DAT_05150d64._4_4_ + (long)puVar10);
                          goto LAB_0123f2b4;
                        }
                        break;
                      }
                      if (DAT_05150d64._4_4_ != 0xffffffff) break;
                    }
                    puVar11 = (uint *)(ulong)*puVar10;
                    uVar2 = 0;
                    if ((*puVar10 == 0) || (puVar10 == puVar11)) goto LAB_0123f2b4;
                    lVar14 = 0xc;
                    if (*(char *)((long)puVar10 + (10 - (long)puVar11)) != '\0') {
                      lVar14 = 0x1c;
                    }
                    lVar14 = (long)puVar10 + (lVar14 - (long)puVar11);
                    if (lVar14 == 0) break;
                    uVar12 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar11));
                    DAT_05150d64 = CONCAT44(0xfffffffe,(undefined4)DAT_05150d64);
                    if (uVar12 == 0) break;
                    piVar13 = (int *)(lVar14 + 4);
                    while (piVar13[-1] != -0x2650e1f) {
                      piVar13 = piVar13 + 2;
                      uVar12 = uVar12 - 1;
                      if (uVar12 == 0) goto LAB_0123f2b0;
                    }
                    iVar4 = 0;
                    if (*piVar13 != -1) {
                      iVar4 = *piVar13;
                    }
                    DAT_05150d64 = CONCAT44(iVar4,(undefined4)DAT_05150d64);
                    if (*puVar10 == 0) break;
                  } while( true );
                }
LAB_0123f2b0:
                uVar2 = 0;
LAB_0123f2b4:
                uVar3 = FUN_0277d6c4(param_2);
                if (uVar3 == uVar2) {
                  if (*puVar10 != 0) {
                    cVar8 = DAT_05150d60;
                    do {
                      if (cVar8 == '\0') {
                        cVar8 = '\x01';
                        DAT_05150d60 = '\x01';
                        DAT_05150d64 = -1;
                        DAT_05150d6c = 0xffffffffffffffff;
                      }
                      else {
                        if (-1 < (int)DAT_05150d6c) {
                          puVar7 = (ushort *)((DAT_05150d6c & 0xffffffff) + (long)puVar10);
                          if (puVar7 != (ushort *)0x0) {
                            uVar2 = (uint)*puVar7;
                            goto LAB_0123f3a0;
                          }
                          break;
                        }
                        if ((int)DAT_05150d6c != -1) break;
                      }
                      puVar11 = (uint *)(ulong)*puVar10;
                      uVar2 = 0;
                      if ((*puVar10 == 0) || (puVar10 == puVar11)) goto LAB_0123f3a0;
                      lVar14 = 0xc;
                      if (*(char *)((long)puVar10 + (10 - (long)puVar11)) != '\0') {
                        lVar14 = 0x1c;
                      }
                      lVar14 = (long)puVar10 + (lVar14 - (long)puVar11);
                      if (lVar14 == 0) break;
                      uVar12 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar11));
                      DAT_05150d6c = CONCAT44(DAT_05150d6c._4_4_,0xfffffffe);
                      if (uVar12 == 0) break;
                      piVar13 = (int *)(lVar14 + 4);
                      while (piVar13[-1] != -0x3fe657ac) {
                        piVar13 = piVar13 + 2;
                        uVar12 = uVar12 - 1;
                        if (uVar12 == 0) goto LAB_0123f39c;
                      }
                      iVar4 = 0;
                      if (*piVar13 != -1) {
                        iVar4 = *piVar13;
                      }
                      DAT_05150d6c = CONCAT44(DAT_05150d6c._4_4_,iVar4);
                      if (*puVar10 == 0) break;
                    } while( true );
                  }
LAB_0123f39c:
                  uVar2 = 0;
LAB_0123f3a0:
                  iVar4 = FUN_01ad7260(&local_78);
                  if ((iVar4 == 0) ||
                     (puVar7 = (ushort *)FUN_01afd600(&local_78), puVar7 == (ushort *)0x0)) {
                    if (uVar2 == 0) {
LAB_0123f3f4:
                      puVar7 = (ushort *)FUN_0124b2a0(puVar10,0,0x34e5bfbd,0);
                      if (puVar7 == (ushort *)0x0) {
                        uVar9 = 0;
                      }
                      else {
                        uVar9 = *puVar7;
                      }
                      local_80 = (uint)uVar9;
                      local_7c = 0;
                      FUN_0277d4ac(&local_80);
                      *param_1 = local_80;
                      param_1[1] = local_7c;
                      return 1;
                    }
                  }
                  else {
                    uVar3 = *puVar7 & 7;
                    uVar5 = FUN_01ad7260(&local_78);
                    if (uVar5 <= uVar3) {
                      uVar3 = 0;
                    }
                    if (uVar3 == uVar2) goto LAB_0123f3f4;
                  }
                }
              }
            }
          }
LAB_0123f10c:
          uVar15 = uVar15 + 1;
        } while( true );
      }
    }
  }
  return 0;
}

