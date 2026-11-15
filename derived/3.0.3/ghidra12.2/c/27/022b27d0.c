
uint FUN_022b27d0(long param_1,undefined4 *param_2,undefined1 *param_3,undefined4 *param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint *puVar14;
  char cVar15;
  char cVar16;
  uint uVar17;
  undefined4 uVar18;
  long lVar19;
  long lVar20;
  undefined4 local_9c [3];
  undefined8 local_90;
  undefined8 uStack_88;
  uint *local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint *local_68;
  undefined8 local_48;
  
  pbVar1 = (byte *)(param_1 + 0x10);
  FUN_0252d8f0(&local_90,pbVar1);
  puVar3 = PTR_DAT_04bb43c0;
  lVar20 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(&local_90);
  lVar19 = *(long *)puVar3;
  if (lVar19 == 0) {
LAB_022b298c:
    bVar5 = false;
  }
  else {
    lVar20 = *(long *)(lVar20 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if ((*(uint *)(lVar20 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_022b298c;
    local_68 = (uint *)0x0;
    local_78 = PTR_DAT_04bc0510 + 0x10;
    local_70 = (undefined4)local_90;
    uStack_6c = local_90._4_4_;
    uVar8 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar3 == 0) {
LAB_022b29a0:
      uVar8 = 0xbc;
    }
    else {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((*(uint *)(lVar19 + 0x1d8) <= uVar8) ||
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_022b29a0;
      lVar19 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(&local_90);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((*(uint *)(lVar19 + 0x1d8) <= uVar8) ||
         (puVar13 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar8 * 8),
         puVar13 == (uint *)0x0)) goto LAB_022b29a0;
      uVar8 = 0;
      uVar17 = *puVar13;
      if ((uVar17 != 0) && (puVar13 != (uint *)(ulong)uVar17)) {
        puVar14 = (uint *)((long)puVar13 - (long)(ulong)uVar17);
        uVar8 = 0;
        if (*puVar14 != 0) {
          uVar8 = puVar14[1];
          if ((uVar8 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
            lVar19 = 0xc;
            if (*(char *)((long)puVar14 + 10) != '\0') {
              lVar19 = 0x1c;
            }
            lVar19 = (long)puVar14 + lVar19 + (ulong)(ushort)puVar14[2] * 8;
            if (lVar19 != 0) {
              uVar17 = 0;
              if ((ulong)uVar8 != 0) {
                uVar17 = (uint)((ulong)((long)puVar13 - lVar19) / (ulong)uVar8);
              }
              if (*puVar14 <= uVar17) {
                uVar17 = 0xffffffff;
              }
              if ((uVar17 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar8 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar17 * 2)
                 , uVar8 < 0xbd)) goto LAB_022b29ac;
            }
          }
          uVar8 = 0;
        }
      }
    }
LAB_022b29ac:
    local_9c[0] = 0x1a;
    local_48 = CONCAT44(local_48._4_4_,uVar8);
    bVar5 = uVar8 == 0x1a;
  }
  if ((param_4 == (undefined4 *)0x0) && (!bVar5)) {
    uVar8 = 0;
    goto LAB_022b2f94;
  }
  lVar20 = *(long *)puVar3;
  uVar8 = FUN_0277d6c4(param_2);
  lVar19 = *(long *)puVar3;
  if (lVar19 == 0) {
LAB_022b2f84:
    uVar8 = 0;
    if (param_4 == (undefined4 *)0x0) goto LAB_022b2f94;
    uVar18 = 3;
  }
  else {
    lVar20 = *(long *)(lVar20 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if ((*(uint *)(lVar20 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_022b2f84;
    local_68 = (uint *)0x0;
    local_70 = *param_2;
    uStack_6c = param_2[1];
    local_78 = PTR_DAT_04bc0510 + 0x10;
    uVar8 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar3 == 0) {
LAB_022b2aa8:
      puVar13 = (uint *)0x0;
    }
    else {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((*(uint *)(lVar19 + 0x1d8) <= uVar8) ||
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_022b2aa8;
      lVar19 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(param_2);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if (*(uint *)(lVar19 + 0x1d8) <= uVar8) goto LAB_022b2aa8;
      puVar13 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar8 * 8);
      if (puVar13 != (uint *)0x0) {
        local_68 = puVar13;
      }
    }
    local_48 = 0xfffe;
    FUN_0277d4ac(&local_48);
    uVar10 = FUN_0124ccbc(param_2,&local_48);
    if ((uVar10 & 1) == 0) {
      uVar10 = FUN_01ae59b0(&local_78);
      if ((uVar10 & 1) != 0) {
        FUN_01afc110(&local_78,1);
      }
      uVar10 = FUN_01b15880(&local_78);
      if ((uVar10 & 1) == 0) goto LAB_022b2f84;
LAB_022b2d20:
      uVar17 = 0;
      bVar7 = false;
      bVar6 = false;
      uVar18 = 0;
    }
    else {
      if (puVar13 == (uint *)0x0) {
LAB_022b2d30:
        uVar17 = 0;
        bVar7 = false;
        uVar18 = 0;
      }
      else {
        uVar8 = *puVar13;
        uVar17 = 0;
        if (uVar8 == 0) {
          bVar7 = false;
          uVar18 = 0;
        }
        else {
          bVar7 = false;
          uVar18 = 0;
          if (puVar13 != (uint *)(ulong)uVar8) {
            puVar14 = (uint *)((long)puVar13 - (long)(ulong)uVar8);
            if (((*puVar14 != 0) && (uVar8 = puVar14[1], uVar8 != 0)) &&
               ((ulong)(ushort)puVar14[2] != 0)) {
              lVar19 = 0xc;
              if (*(char *)((long)puVar14 + 10) != '\0') {
                lVar19 = 0x1c;
              }
              lVar19 = (long)puVar14 + lVar19 + (ulong)(ushort)puVar14[2] * 8;
              if (lVar19 != 0) {
                uVar17 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar17 = (uint)((ulong)((long)puVar13 - lVar19) / (ulong)uVar8);
                }
                if (*puVar14 <= uVar17) {
                  uVar17 = 0xffffffff;
                }
                if ((uVar17 < *(uint *)PTR_DAT_04bc00c8) &&
                   (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar17 * 2) == 0x4c)) {
                  lVar19 = *(long *)PTR_DAT_04bbbc68;
                  if (lVar19 == 0) goto LAB_022b2d20;
                  if (((*(long *)(lVar19 + 0xb0) != 0) &&
                      (*(long *)(*(long *)(lVar19 + 0xb0) + 8) != 0)) &&
                     ((*(long *)(lVar19 + 0x488) != 0 &&
                      (*(long *)(*(long *)(lVar19 + 0x488) + 8) != 0)))) {
                    if ((*(long *)(lVar19 + 0x2b0) != 0) &&
                       (*(long *)(*(long *)(lVar19 + 0x2b0) + 8) != 0)) {
                      uVar8 = FUN_0277d6c4(&local_48);
                      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                      if ((uVar8 < *(uint *)(lVar19 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
                        FUN_0124c030(&local_90,&local_48);
                        iVar9 = FUN_0123db50(&uStack_88,local_80);
                        if ((iVar9 == 5) || (iVar9 = FUN_0123db50(&uStack_88,local_80), iVar9 == 5))
                        {
                          uVar17 = 1;
                        }
                        else {
                          uVar10 = FUN_0124e148(&local_90);
                          uVar17 = 0;
                          bVar7 = false;
                          uVar18 = 0;
                          if ((uVar10 & 1) == 0) goto LAB_022b2d3c;
                        }
                        puVar4 = PTR_DAT_04bbbc78;
                        puVar3 = PTR_DAT_04bbbc70;
                        if ((local_80 != (uint *)0x0) && (uVar8 = *local_80, uVar8 != 0)) {
                          cVar15 = *PTR_DAT_04bbbc70;
                          do {
                            if (cVar15 == '\0') {
                              cVar15 = '\x01';
                              *(undefined8 *)puVar4 = 0xffffffffffffffff;
                              *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                              *puVar3 = 1;
                              *(undefined4 *)(puVar4 + 0x60) = 0xffffffff;
                              *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
                              uVar8 = *local_80;
                            }
                            else {
                              uVar2 = *(uint *)(puVar4 + 0x4c);
                              if (-1 < (int)uVar2) {
                                if ((char *)((ulong)uVar2 + (long)local_80) == (char *)0x0) break;
                                cVar16 = *(char *)((ulong)uVar2 + (long)local_80);
                                goto LAB_022b3054;
                              }
                              if (uVar2 != 0xffffffff) break;
                            }
                            puVar13 = (uint *)(ulong)uVar8;
                            cVar16 = '\0';
                            if ((puVar13 == (uint *)0x0) || (local_80 == puVar13))
                            goto LAB_022b3054;
                            lVar19 = 0xc;
                            if (*(char *)((long)local_80 + (10 - (long)puVar13)) != '\0') {
                              lVar19 = 0x1c;
                            }
                            lVar19 = (long)local_80 + (lVar19 - (long)puVar13);
                            cVar16 = '\0';
                            if (lVar19 == 0) goto LAB_022b3054;
                            uVar10 = (ulong)*(ushort *)((long)local_80 + (8 - (long)puVar13));
                            *(undefined4 *)(puVar4 + 0x4c) = 0xfffffffe;
                            if (uVar10 == 0) break;
                            piVar11 = (int *)(lVar19 + 4);
                            while (piVar11[-1] != -0xa58ccc9) {
                              piVar11 = piVar11 + 2;
                              uVar10 = uVar10 - 1;
                              if (uVar10 == 0) goto LAB_022b3050;
                            }
                            cVar16 = '\0';
                            iVar9 = 0;
                            if (*piVar11 != -1) {
                              iVar9 = *piVar11;
                            }
                            *(int *)(puVar4 + 0x4c) = iVar9;
                            uVar8 = *local_80;
                            if (uVar8 == 0) goto LAB_022b3054;
                          } while( true );
                        }
LAB_022b3050:
                        cVar16 = '\0';
LAB_022b3054:
                        bVar7 = cVar16 == '\0';
                        uVar8 = uVar17 ^ 1;
                        uVar18 = 1;
                        if (param_3 == (undefined1 *)0x0) {
                          uVar8 = 1;
                        }
                        if (uVar8 == 0) {
                          uVar17 = 1;
                          *param_3 = 1;
                        }
                        goto LAB_022b2d3c;
                      }
                    }
                    uVar17 = 0;
                    bVar7 = false;
                    uVar18 = 0;
                    goto LAB_022b2d3c;
                  }
                }
              }
            }
            goto LAB_022b2d30;
          }
        }
      }
LAB_022b2d3c:
      lVar19 = *(long *)PTR_DAT_04bbbc68;
      if (((((lVar19 != 0) && (*(long *)(lVar19 + 0xb0) != 0)) &&
           (*(long *)(*(long *)(lVar19 + 0xb0) + 8) != 0)) &&
          ((*(long *)(lVar19 + 0x488) != 0 && (*(long *)(*(long *)(lVar19 + 0x488) + 8) != 0)))) &&
         ((*(long *)(lVar19 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar19 + 0x2b0) + 8) != 0)))) {
        uVar8 = FUN_0277d6c4(&local_48);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar19 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          FUN_0124c030(&local_90,&local_48);
          iVar9 = FUN_0123db50(&uStack_88,local_80);
          puVar4 = PTR_DAT_04bbbc78;
          puVar3 = PTR_DAT_04bbbc70;
          if ((iVar9 - 0xbU < 7) && ((local_80 != (uint *)0x0 && (uVar8 = *local_80, uVar8 != 0))))
          {
            cVar15 = *PTR_DAT_04bbbc70;
            do {
              if (cVar15 == '\0') {
                cVar15 = '\x01';
                *(undefined8 *)puVar4 = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                *puVar3 = 1;
                *(undefined4 *)(puVar4 + 0x60) = 0xffffffff;
                *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
                uVar8 = *local_80;
              }
              else {
                uVar2 = *(uint *)(puVar4 + 0x4c);
                if (-1 < (int)uVar2) {
                  if ((char *)((ulong)uVar2 + (long)local_80) == (char *)0x0) break;
                  bVar6 = *(char *)((ulong)uVar2 + (long)local_80) != '\0';
                  goto LAB_022b2ef8;
                }
                if (uVar2 != 0xffffffff) break;
              }
              puVar13 = (uint *)(ulong)uVar8;
              bVar6 = false;
              if ((puVar13 == (uint *)0x0) || (local_80 == puVar13)) goto LAB_022b2ef8;
              lVar19 = 0xc;
              if (*(char *)((long)local_80 + (10 - (long)puVar13)) != '\0') {
                lVar19 = 0x1c;
              }
              lVar19 = (long)local_80 + (lVar19 - (long)puVar13);
              if (lVar19 == 0) break;
              uVar10 = (ulong)*(ushort *)((long)local_80 + (8 - (long)puVar13));
              *(undefined4 *)(puVar4 + 0x4c) = 0xfffffffe;
              if (uVar10 == 0) break;
              piVar11 = (int *)(lVar19 + 4);
              while (piVar11[-1] != -0xa58ccc9) {
                piVar11 = piVar11 + 2;
                uVar10 = uVar10 - 1;
                if (uVar10 == 0) goto LAB_022b2ef4;
              }
              bVar6 = false;
              iVar9 = 0;
              if (*piVar11 != -1) {
                iVar9 = *piVar11;
              }
              *(int *)(puVar4 + 0x4c) = iVar9;
              uVar8 = *local_80;
              if (uVar8 == 0) goto LAB_022b2ef8;
            } while( true );
          }
        }
      }
LAB_022b2ef4:
      bVar6 = false;
    }
LAB_022b2ef8:
    local_90 = PTR_DAT_04bb2010 + 0x10;
    uStack_88 = 0;
    uVar10 = FUN_022a9660(param_1,0,&local_90,uVar18,uVar17,bVar7,bVar6);
    if ((uVar10 & 1) == 0) goto LAB_022b2f84;
    if (param_4 == (undefined4 *)0x0) {
      bVar5 = true;
    }
    if (bVar5) {
      if (param_4 == (undefined4 *)0x0) {
LAB_022b3010:
        uVar8 = FUN_022a9384(param_1,&local_90);
        uVar8 = uVar8 ^ 1;
        goto LAB_022b2f94;
      }
      uVar10 = FUN_0252b6b0(0x40200000,local_9c,pbVar1,1,1,0,1);
      if ((uVar10 & 1) == 0) {
        if (((ulong)*pbVar1 < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          puVar12 = (undefined4 *)(*(long *)PTR_DAT_04bb4718 + (ulong)*pbVar1 * 4 + 0xde8);
        }
        else {
          puVar12 = (undefined4 *)PTR_DAT_04bb3238;
        }
        uVar10 = FUN_01735670(0x40200000,0xbf800000,local_9c,*puVar12,*puVar12,1,1,0,1,0,0,1);
        if ((uVar10 & 1) == 0) goto LAB_022b3010;
      }
      uVar18 = 2;
    }
    else {
      uVar18 = 1;
    }
  }
  uVar8 = 0;
  *param_4 = uVar18;
LAB_022b2f94:
  return uVar8 & 1;
}

