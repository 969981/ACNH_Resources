
undefined8 FUN_01b0bac0(long param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *__s;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ushort uVar11;
  uint *puVar12;
  int *piVar13;
  long lVar14;
  uint *puVar15;
  char cVar16;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  
  __s = PTR_DAT_04bbfe90;
  puVar4 = PTR_DAT_04bbfe88;
  puVar3 = PTR_DAT_04bb46f0;
  puVar15 = *(uint **)(param_1 + 0x10);
  if (puVar15 != (uint *)0x0) {
    uVar9 = *puVar15;
    if (uVar9 == 0 || puVar15 == (uint *)(ulong)uVar9) {
LAB_01b0bb7c:
      uVar11 = 0;
      uVar9 = *(uint *)PTR_DAT_04bc00c8;
    }
    else {
      puVar12 = (uint *)((long)puVar15 - (long)(ulong)uVar9);
      if (((*puVar12 == 0) || (uVar9 = puVar12[1], uVar9 == 0)) || ((ulong)(ushort)puVar12[2] == 0))
      goto LAB_01b0bb7c;
      lVar6 = 0xc;
      if (*(char *)((long)puVar12 + 10) != '\0') {
        lVar6 = 0x1c;
      }
      lVar6 = (long)puVar12 + lVar6 + (ulong)(ushort)puVar12[2] * 8;
      if (lVar6 == 0) goto LAB_01b0bb7c;
      uVar2 = 0;
      if ((ulong)uVar9 != 0) {
        uVar2 = (uint)((ulong)((long)puVar15 - lVar6) / (ulong)uVar9);
      }
      uVar9 = *(uint *)PTR_DAT_04bc00c8;
      if (*puVar12 <= uVar2) {
        uVar2 = 0xffffffff;
      }
      if ((uVar9 <= uVar2) ||
         (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
         0xbc < uVar11)) {
        uVar11 = 0;
      }
    }
    if ((uVar11 == 0xb1) && (uVar2 = *(uint *)(param_1 + 0xc), (uVar2 & 0xf800) == 0)) {
      lVar14 = *(long *)PTR_DAT_04bb46f0;
      lVar6 = lVar14 + 0xe98e0;
      if ((*(byte *)(lVar6 + ((ulong)(uVar2 >> 3) & 0x1fff)) >> (ulong)(uVar2 & 7) & 1) != 0) {
        uVar2 = *puVar15;
        uVar8 = 0;
        if ((uVar2 != 0) && (puVar15 != (uint *)(ulong)uVar2)) {
          puVar12 = (uint *)((long)puVar15 - (long)(ulong)uVar2);
          uVar8 = 0;
          if (*puVar12 != 0) {
            uVar2 = puVar12[1];
            if ((uVar2 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
              lVar1 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar12 + lVar1 + (ulong)(ushort)puVar12[2] * 8;
              if (lVar1 != 0) {
                uVar8 = 0;
                if ((ulong)uVar2 != 0) {
                  uVar8 = (uint)((ulong)((long)puVar15 - lVar1) / (ulong)uVar2);
                }
                if (*puVar12 <= uVar8) {
                  uVar8 = 0xffffffff;
                }
                if ((uVar8 < uVar9) &&
                   (uVar8 = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar8 * 2),
                   uVar8 < 0xbd)) goto LAB_01b0bddc;
              }
            }
            uVar8 = 0;
          }
        }
LAB_01b0bddc:
        local_80 = (undefined **)CONCAT44(local_80._4_4_,uVar8);
        if ((uVar8 == 0xb1) && (iVar5 = FUN_0277d6c4(param_1 + 8), iVar5 == 0x16a2)) {
          uVar2 = *(uint *)(param_1 + 0xc);
          uVar9 = 0x4c7b;
          if (((uVar2 & 0xffff) < 0x800) &&
             (uVar9 = 0x4c7b,
             (*(byte *)(*(long *)puVar3 + ((ulong)(uVar2 >> 3) & 0x1fff) + 0xe98e0) >>
              (ulong)(uVar2 & 7) & 1) != 0)) {
            uVar9 = uVar2;
          }
        }
        else {
          uVar9 = 0x4c7b;
        }
        FUN_0262eb00(&local_68,lVar14,uVar9,lVar6);
        puVar3 = PTR_DAT_04bb43c0;
        lVar14 = *(long *)PTR_DAT_04bb43c0;
        uVar9 = FUN_0277d6c4(&local_68);
        lVar6 = *(long *)puVar3;
        if (lVar6 != 0) {
          lVar14 = *(long *)(lVar14 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            local_70 = 0;
            local_80 = &PTR_FUN_04a36b50;
            local_78 = (undefined4)local_68;
            uStack_74 = local_68._4_4_;
            uVar9 = FUN_0277d6c4(&local_78);
            lVar14 = DAT_0532a768;
            if (*(long *)puVar3 != 0) {
              lVar6 = *(long *)(lVar6 + 0x57e58);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
              if ((uVar9 < *(uint *)(lVar6 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                uVar9 = FUN_0277d6c4(&local_68);
                puVar4 = PTR_DAT_04bbfe90;
                puVar3 = PTR_DAT_04bbfe88;
                uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
                   (puVar15 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8),
                   puVar15 != (uint *)0x0)) {
                  uVar9 = 0;
                  if (*puVar15 != 0) {
                    cVar16 = *PTR_DAT_04bbfe88;
                    do {
                      if (cVar16 == '\0') {
                        cVar16 = '\x01';
                        *puVar3 = 1;
                        memset(puVar4,0xff,0x1ac);
                      }
                      else {
                        uVar2 = *(uint *)(puVar4 + 0x128);
                        if (-1 < (int)uVar2) goto LAB_01b0c364;
                        if (uVar2 != 0xffffffff) goto LAB_01b0c35c;
                      }
                      puVar12 = (uint *)(ulong)*puVar15;
                      uVar9 = 0;
                      if ((*puVar15 == 0) || (puVar15 == puVar12)) goto LAB_01b0c370;
                      lVar6 = 0xc;
                      if (*(char *)((long)puVar15 + (10 - (long)puVar12)) != '\0') {
                        lVar6 = 0x1c;
                      }
                      lVar6 = (long)puVar15 + (lVar6 - (long)puVar12);
                      if (lVar6 == 0) goto LAB_01b0c35c;
                      uVar10 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar12));
                      *(undefined4 *)(puVar4 + 0x128) = 0xfffffffe;
                      uVar9 = 0;
                      if (uVar10 == 0) goto LAB_01b0c370;
                      piVar13 = (int *)(lVar6 + 4);
                      while (piVar13[-1] != 0x54706054) {
                        piVar13 = piVar13 + 2;
                        uVar10 = uVar10 - 1;
                        if (uVar10 == 0) {
                          uVar9 = 0;
                          goto LAB_01b0c370;
                        }
                      }
                      iVar5 = 0;
                      if (*piVar13 != -1) {
                        iVar5 = *piVar13;
                      }
                      *(int *)(puVar4 + 0x128) = iVar5;
                    } while (*puVar15 != 0);
                    uVar9 = 0;
                  }
                  goto LAB_01b0c370;
                }
              }
            }
          }
        }
        goto LAB_01b0c3a4;
      }
    }
    uVar2 = *puVar15;
    local_80._0_4_ = 0;
    if ((uVar2 != 0) && (puVar15 != (uint *)(ulong)uVar2)) {
      puVar12 = (uint *)((long)puVar15 - (long)(ulong)uVar2);
      local_80._0_4_ = 0;
      if (*puVar12 != 0) {
        uVar2 = puVar12[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar6 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar12 + lVar6 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar6 != 0) {
            uVar8 = 0;
            if ((ulong)uVar2 != 0) {
              uVar8 = (uint)((ulong)((long)puVar15 - lVar6) / (ulong)uVar2);
            }
            if (*puVar12 <= uVar8) {
              uVar8 = 0xffffffff;
            }
            if ((uVar8 < uVar9) &&
               (local_80._0_4_ =
                     (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar8 * 2),
               (uint)local_80 < 0xbd)) goto LAB_01b0bc30;
          }
        }
        local_80._0_4_ = 0;
      }
    }
LAB_01b0bc30:
    if ((((uint)local_80 == 0xb1) && (uVar9 = *(uint *)(param_1 + 0xc), (uVar9 & 0xf800) == 0)) &&
       ((*(byte *)(*(long *)PTR_DAT_04bb46f0 + ((ulong)(uVar9 >> 3) & 0x1fff) + 0xe99e0) >>
         (ulong)(uVar9 & 7) & 1) != 0)) {
      local_68 = 0xfffe;
      FUN_0277d4ac(&local_68);
      puVar15 = *(uint **)(param_1 + 0x10);
      if (puVar15 == (uint *)0x0) {
        local_80._0_4_ = 0xbc;
      }
      else {
        uVar9 = *puVar15;
        local_80._0_4_ = 0;
        if ((uVar9 != 0) && (puVar15 != (uint *)(ulong)uVar9)) {
          puVar12 = (uint *)((long)puVar15 - (long)(ulong)uVar9);
          local_80._0_4_ = 0;
          if (*puVar12 != 0) {
            uVar9 = puVar12[1];
            if ((uVar9 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
              lVar6 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                lVar6 = 0x1c;
              }
              lVar6 = (long)puVar12 + lVar6 + (ulong)(ushort)puVar12[2] * 8;
              if (lVar6 != 0) {
                uVar2 = 0;
                if ((ulong)uVar9 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar15 - lVar6) / (ulong)uVar9);
                }
                if (*puVar12 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_80._0_4_ =
                         (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                   (uint)local_80 < 0xbd)) goto LAB_01b0c0e8;
              }
            }
            local_80._0_4_ = 0;
          }
        }
      }
LAB_01b0c0e8:
      if (((((uint)local_80 == 0xb1) && (iVar5 = FUN_0277d6c4(param_1 + 8), iVar5 == 0x16a2)) &&
          (uVar9 = *(uint *)(param_1 + 0xc), (uVar9 & 0xffff) < 0x800)) &&
         ((*(byte *)(*(long *)puVar3 + ((ulong)(uVar9 >> 3) & 0x1fff) + 0xe99e0) >>
           (ulong)(uVar9 & 7) & 1) != 0)) {
        FUN_02621f00(&local_80);
        local_68 = CONCAT44(local_80._4_4_,(uint)local_80);
      }
      puVar3 = PTR_DAT_04bb43c0;
      lVar14 = *(long *)PTR_DAT_04bb43c0;
      uVar9 = FUN_0277d6c4(&local_68);
      lVar6 = *(long *)puVar3;
      if (lVar6 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          local_70 = 0;
          local_80 = &PTR_FUN_04a36b50;
          local_78 = (undefined4)local_68;
          uStack_74 = local_68._4_4_;
          uVar9 = FUN_0277d6c4(&local_78);
          lVar14 = DAT_0532a768;
          if (*(long *)puVar3 != 0) {
            lVar6 = *(long *)(lVar6 + 0x57e58);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar6 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
              uVar9 = FUN_0277d6c4(&local_68);
              puVar4 = PTR_DAT_04bbfe90;
              puVar3 = PTR_DAT_04bbfe88;
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
              if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
                 (puVar15 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8),
                 puVar15 != (uint *)0x0)) {
                uVar9 = 0;
                if (*puVar15 != 0) {
                  cVar16 = *PTR_DAT_04bbfe88;
                  do {
                    if (cVar16 == '\0') {
                      cVar16 = '\x01';
                      *puVar3 = 1;
                      memset(puVar4,0xff,0x1ac);
                    }
                    else {
                      uVar2 = *(uint *)(puVar4 + 0x128);
                      if (-1 < (int)uVar2) goto LAB_01b0c364;
                      if (uVar2 != 0xffffffff) goto LAB_01b0c35c;
                    }
                    puVar12 = (uint *)(ulong)*puVar15;
                    uVar9 = 0;
                    if ((*puVar15 == 0) || (puVar15 == puVar12)) goto LAB_01b0c370;
                    lVar6 = 0xc;
                    if (*(char *)((long)puVar15 + (10 - (long)puVar12)) != '\0') {
                      lVar6 = 0x1c;
                    }
                    lVar6 = (long)puVar15 + (lVar6 - (long)puVar12);
                    if (lVar6 == 0) goto LAB_01b0c35c;
                    uVar10 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar12));
                    *(undefined4 *)(puVar4 + 0x128) = 0xfffffffe;
                    uVar9 = 0;
                    if (uVar10 == 0) goto LAB_01b0c370;
                    piVar13 = (int *)(lVar6 + 4);
                    while (piVar13[-1] != 0x54706054) {
                      piVar13 = piVar13 + 2;
                      uVar10 = uVar10 - 1;
                      if (uVar10 == 0) {
                        uVar9 = 0;
                        goto LAB_01b0c370;
                      }
                    }
                    iVar5 = 0;
                    if (*piVar13 != -1) {
                      iVar5 = *piVar13;
                    }
                    *(int *)(puVar4 + 0x128) = iVar5;
                  } while (*puVar15 != 0);
                  uVar9 = 0;
                }
                goto LAB_01b0c370;
              }
            }
          }
        }
      }
    }
    else {
      uVar9 = 0;
      if (*puVar15 != 0) {
        cVar16 = *PTR_DAT_04bbfe88;
        do {
          if (cVar16 != '\0') {
            uVar2 = *(uint *)(__s + 0x128);
            if ((int)uVar2 < 0) {
              if (uVar2 == 0xffffffff) goto LAB_01b0bcb0;
LAB_01b0c0dc:
              uVar9 = 0;
            }
            else {
              uVar9 = 0;
              if ((ushort *)((ulong)uVar2 + (long)puVar15) != (ushort *)0x0) {
                uVar9 = (uint)*(ushort *)((ulong)uVar2 + (long)puVar15);
              }
            }
            goto LAB_01b0c310;
          }
          cVar16 = '\x01';
          *puVar4 = 1;
          memset(__s,0xff,0x1ac);
LAB_01b0bcb0:
          puVar12 = (uint *)(ulong)*puVar15;
          uVar9 = 0;
          if ((*puVar15 == 0) || (puVar15 == puVar12)) goto LAB_01b0c310;
          lVar6 = 0xc;
          if (*(char *)((long)puVar15 + (10 - (long)puVar12)) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar15 + (lVar6 - (long)puVar12);
          if (lVar6 == 0) goto LAB_01b0c0dc;
          uVar10 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar12));
          *(undefined4 *)(__s + 0x128) = 0xfffffffe;
          uVar9 = 0;
          if (uVar10 == 0) goto LAB_01b0c310;
          piVar13 = (int *)(lVar6 + 4);
          while (piVar13[-1] != 0x54706054) {
            piVar13 = piVar13 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) {
              uVar9 = 0;
              goto LAB_01b0c310;
            }
          }
          iVar5 = 0;
          if (*piVar13 != -1) {
            iVar5 = *piVar13;
          }
          *(int *)(__s + 0x128) = iVar5;
        } while (*puVar15 != 0);
        uVar9 = 0;
      }
LAB_01b0c310:
      uVar9 = uVar9 - *(ushort *)(DAT_0532a800 + 0x1f8);
      if ((uVar9 < *(uint *)(DAT_0532a800 + 0x1d8)) &&
         (lVar6 = *(long *)(*(long *)(DAT_0532a800 + 0x1e0) + (long)(int)uVar9 * 8), lVar6 != 0)) {
        uVar7 = FUN_01b0c4f0(lVar6,param_2);
        return uVar7;
      }
    }
  }
  goto LAB_01b0c3a4;
LAB_01b0c35c:
  uVar9 = 0;
  goto LAB_01b0c370;
LAB_01b0c364:
  uVar9 = 0;
  if ((ushort *)((ulong)uVar2 + (long)puVar15) != (ushort *)0x0) {
    uVar9 = (uint)*(ushort *)((ulong)uVar2 + (long)puVar15);
  }
LAB_01b0c370:
  uVar9 = uVar9 - *(ushort *)(DAT_0532a800 + 0x1f8);
  if ((uVar9 < *(uint *)(DAT_0532a800 + 0x1d8)) &&
     (lVar6 = *(long *)(*(long *)(DAT_0532a800 + 0x1e0) + (long)(int)uVar9 * 8), lVar6 != 0)) {
    uVar7 = FUN_01b0c4f0(lVar6,param_2);
  }
  else {
LAB_01b0c3a4:
    uVar7 = 0xffff;
  }
  return uVar7;
}

