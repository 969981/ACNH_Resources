
void FUN_033fd750(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  uint *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint *puVar14;
  ulong uVar15;
  int *piVar16;
  char cVar17;
  long lVar18;
  ulong uVar19;
  undefined4 *puVar20;
  long *plVar21;
  undefined8 local_820;
  undefined8 local_818;
  undefined8 local_810;
  undefined8 local_808;
  undefined8 local_800;
  undefined8 local_7f8;
  undefined *local_7f0;
  undefined2 local_7e8;
  undefined1 local_7e6;
  undefined1 local_7e5;
  undefined4 local_7e4;
  uint *local_7e0;
  undefined **local_7d8;
  char *apcStack_7d0 [234];
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  
  if (param_1 != (long *)0x0) {
    FUN_0264a400(&local_7d8,param_2);
    memcpy(param_1 + 1,apcStack_7d0,0x754);
    local_7d8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    apcStack_7d0[0] = "UnlockCatalogPokiBag";
    iVar6 = FUN_0274bce0(param_2,&local_7d8);
    if (iVar6 != 0) {
      local_7d8 = (undefined **)0x2f4;
      FUN_0277d4ac(&local_7d8);
      FUN_0277dedc(&local_7d8);
      lVar10 = (**(code **)(*param_1 + 0x18))(param_1);
      uVar7 = FUN_0277d6c4(&local_7d8);
      if ((uVar7 >> 3 & 0x1fff) < 0x753) {
        lVar11 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
        *(uint *)(lVar10 + lVar11) = *(uint *)(lVar10 + lVar11) | 1 << (ulong)(uVar7 & 0x1f);
      }
    }
    local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    uVar7 = nn::os::GetSystemTick();
    local_7c = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
    local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
    memcpy(apcStack_7d0,param_1 + 1,0x754);
    lVar10 = (*(code *)local_7d8[4])(&local_7d8);
    uVar19 = 0;
    do {
      if ((*(uint *)(lVar10 + (uVar19 >> 5) * 4) >> (ulong)((uint)uVar19 & 0x1f) & 1) != 0)
      goto LAB_033fd8e0;
      uVar7 = (uint)uVar19 + 1;
      uVar19 = (ulong)uVar7;
    } while (uVar7 != 15000);
    uVar19 = 0;
LAB_033fd8e0:
    lVar11 = (*(code *)local_7d8[4])(&local_7d8);
    puVar5 = PTR_DAT_04bb43c0;
    iVar6 = 15000;
    do {
      if ((*(uint *)(lVar11 + (ulong)(iVar6 - 1U >> 5) * 4) >> (ulong)(iVar6 - 1U & 0x1f) & 1) != 0)
      break;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (iVar6 != (int)uVar19) {
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      plVar21 = (long *)PTR_DAT_04bbfe58;
LAB_033fdbb4:
      plVar2 = plVar21 + uVar19;
      if (0x752 < (uint)(uVar19 >> 3)) {
        plVar2 = plVar21;
      }
      lVar11 = *(long *)puVar5;
      plVar3 = (long *)PTR_DAT_04bb37e0;
      if ((uint)uVar19 < 0x3a99) {
        plVar3 = plVar2;
      }
      local_7f0 = (undefined *)*plVar3;
      uVar7 = FUN_0277d6c4(&local_7f0);
      lVar18 = *(long *)puVar5;
      if (lVar18 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          local_7e0 = (uint *)0x0;
          local_7e6 = *(undefined1 *)((long)plVar3 + 2);
          local_7e8 = (undefined2)*plVar3;
          local_7e5 = *(undefined1 *)((long)plVar3 + 3);
          local_7e4 = *(undefined4 *)((long)plVar3 + 4);
          local_7f8 = *plVar3;
          local_7f0 = puVar1;
          uVar7 = FUN_0277d6c4(&local_7e8);
          if (*(long *)puVar5 == 0) {
LAB_033fdce8:
            local_7f8 = CONCAT44(local_7f8._4_4_,0x4f);
            if (local_7e0 != (uint *)0x0) goto LAB_033fdd00;
            uVar7 = 0xbc;
          }
          else {
            lVar11 = *(long *)(lVar18 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((*(uint *)(lVar11 + 0x1d8) <= uVar7) ||
               (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
            goto LAB_033fdce8;
            lVar11 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(&local_7f8);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((*(uint *)(lVar11 + 0x1d8) <= uVar7) ||
               (puVar14 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8),
               puVar14 == (uint *)0x0)) goto LAB_033fdce8;
            local_7f8 = CONCAT44(local_7f8._4_4_,0x4f);
            local_7e0 = puVar14;
LAB_033fdd00:
            uVar13 = *local_7e0;
            uVar7 = 0;
            if ((uVar13 != 0) && (local_7e0 != (uint *)(ulong)uVar13)) {
              puVar14 = (uint *)((long)local_7e0 - (long)(ulong)uVar13);
              uVar7 = 0;
              if (*puVar14 != 0) {
                uVar7 = puVar14[1];
                if ((uVar7 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
                  lVar11 = 0xc;
                  if (*(char *)((long)puVar14 + 10) != '\0') {
                    lVar11 = 0x1c;
                  }
                  lVar11 = (long)puVar14 + lVar11 + (ulong)(ushort)puVar14[2] * 8;
                  if (lVar11 != 0) {
                    uVar13 = 0;
                    if ((ulong)uVar7 != 0) {
                      uVar13 = (uint)((ulong)((long)local_7e0 - lVar11) / (ulong)uVar7);
                    }
                    if (*puVar14 <= uVar13) {
                      uVar13 = 0xffffffff;
                    }
                    if ((uVar13 < *(uint *)PTR_DAT_04bc00c8) &&
                       (uVar7 = (uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2),
                       uVar7 < 0xbd)) goto LAB_033fdd8c;
                  }
                }
                uVar7 = 0;
              }
            }
          }
LAB_033fdd8c:
          local_800 = CONCAT44(local_800._4_4_,uVar7);
          if (uVar7 == (uint)local_7f8) {
            local_7f8 = *plVar3;
            lVar11 = (**(code **)(*param_1 + 0x18))(param_1);
            uVar7 = FUN_0277d6c4(&local_7f8);
            if ((uVar7 >> 3 & 0x1fff) < 0x753) {
              lVar18 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
              *(uint *)(lVar11 + lVar18) =
                   *(uint *)(lVar11 + lVar18) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
            }
            local_7f8 = 0x2f5;
            FUN_0277d4ac(&local_7f8);
LAB_033fde00:
            FUN_0277dedc(&local_7f8);
            lVar11 = (**(code **)(*param_1 + 0x18))(param_1);
            puVar12 = &local_7f8;
LAB_033fe274:
            uVar7 = FUN_0277d6c4(puVar12);
            if ((uVar7 >> 3 & 0x1fff) < 0x753) {
              lVar18 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
              *(uint *)(lVar11 + lVar18) = *(uint *)(lVar11 + lVar18) | 1 << (ulong)(uVar7 & 0x1f);
            }
          }
          else {
            if (((DAT_0574d798 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&DAT_0574d798), iVar9 != 0)) {
              local_7f8 = 0xa40;
              FUN_0277d4ac(&local_7f8);
              local_800 = 0x2f6;
              FUN_0277d4ac(&local_800);
              DAT_0574d768 = (uint)local_7f8;
              DAT_0574d76c = local_7f8._4_4_;
              DAT_0574d770 = (undefined4)local_800;
              DAT_0574d774 = local_800._4_4_;
              local_808 = 0x3107;
              FUN_0277d4ac(&local_808);
              local_810 = 0x2f8;
              FUN_0277d4ac(&local_810);
              DAT_0574d778 = (undefined4)local_808;
              DAT_0574d77c = local_808._4_4_;
              DAT_0574d780 = (undefined4)local_810;
              DAT_0574d784 = local_810._4_4_;
              local_818 = 0x3106;
              FUN_0277d4ac(&local_818);
              local_820 = 0x2f7;
              FUN_0277d4ac(&local_820);
              DAT_0574d788 = (undefined4)local_818;
              DAT_0574d78c = local_818._4_4_;
              DAT_0574d790 = (undefined4)local_820;
              DAT_0574d794 = local_820._4_4_;
              __cxa_guard_release(&DAT_0574d798);
            }
            uVar7 = FUN_0277d6c4(&DAT_0574d768);
            puVar14 = local_7e0;
            if (local_7e0 == (uint *)0x0) {
              uVar13 = 0xfffe;
            }
            else {
              uVar8 = *local_7e0;
              if (uVar8 != 0) {
                cVar17 = *PTR_DAT_04bbfe88;
                do {
                  if (cVar17 == '\0') {
                    cVar17 = '\x01';
                    *PTR_DAT_04bbfe88 = 1;
                    memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                    uVar8 = *puVar14;
                  }
                  else {
                    uVar13 = *(uint *)(PTR_DAT_04bbfe90 + 0x128);
                    if (-1 < (int)uVar13) {
                      if ((ushort *)((ulong)uVar13 + (long)puVar14) == (ushort *)0x0) break;
                      uVar13 = (uint)*(ushort *)((ulong)uVar13 + (long)puVar14);
                      goto LAB_033fdf74;
                    }
                    if (uVar13 != 0xffffffff) break;
                  }
                  puVar4 = (uint *)(ulong)uVar8;
                  uVar13 = 0;
                  if ((puVar4 == (uint *)0x0) || (uVar13 = 0, puVar14 == puVar4)) goto LAB_033fdf74;
                  lVar11 = 0xc;
                  if (*(char *)((long)puVar14 + (10 - (long)puVar4)) != '\0') {
                    lVar11 = 0x1c;
                  }
                  lVar11 = (long)puVar14 + (lVar11 - (long)puVar4);
                  uVar13 = 0;
                  if (lVar11 == 0) goto LAB_033fdf74;
                  uVar15 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar4));
                  *(undefined4 *)(PTR_DAT_04bbfe90 + 0x128) = 0xfffffffe;
                  if (uVar15 == 0) break;
                  piVar16 = (int *)(lVar11 + 4);
                  while (piVar16[-1] != 0x54706054) {
                    piVar16 = piVar16 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_033fdf70;
                  }
                  uVar13 = 0;
                  iVar9 = 0;
                  if (*piVar16 != -1) {
                    iVar9 = *piVar16;
                  }
                  *(int *)(PTR_DAT_04bbfe90 + 0x128) = iVar9;
                  uVar8 = *puVar14;
                  if (uVar8 == 0) goto LAB_033fdf74;
                } while( true );
              }
LAB_033fdf70:
              uVar13 = 0;
            }
LAB_033fdf74:
            puVar20 = &DAT_0574d768;
            if (uVar7 == uVar13) {
LAB_033fe208:
              lVar11 = (**(code **)(*param_1 + 0x18))(param_1);
              uVar7 = FUN_0277d6c4(puVar20);
              if ((uVar7 >> 3 & 0x1fff) < 0x753) {
                lVar18 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
                *(uint *)(lVar11 + lVar18) =
                     *(uint *)(lVar11 + lVar18) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
              }
              puVar12 = (undefined8 *)(puVar20 + 2);
              FUN_0277dedc(puVar12);
              lVar11 = (**(code **)(*param_1 + 0x18))(param_1);
              goto LAB_033fe274;
            }
            uVar7 = FUN_0277d6c4(&DAT_0574d778);
            puVar14 = local_7e0;
            if (local_7e0 == (uint *)0x0) {
              uVar13 = 0xfffe;
            }
            else {
              uVar8 = *local_7e0;
              if (uVar8 != 0) {
                cVar17 = *PTR_DAT_04bbfe88;
                do {
                  if (cVar17 == '\0') {
                    cVar17 = '\x01';
                    *PTR_DAT_04bbfe88 = 1;
                    memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                    uVar8 = *puVar14;
                  }
                  else {
                    uVar13 = *(uint *)(PTR_DAT_04bbfe90 + 0x128);
                    if (-1 < (int)uVar13) {
                      if ((ushort *)((ulong)uVar13 + (long)puVar14) == (ushort *)0x0) break;
                      uVar13 = (uint)*(ushort *)((ulong)uVar13 + (long)puVar14);
                      goto LAB_033fe0b8;
                    }
                    if (uVar13 != 0xffffffff) break;
                  }
                  puVar4 = (uint *)(ulong)uVar8;
                  uVar13 = 0;
                  if ((puVar4 == (uint *)0x0) || (uVar13 = 0, puVar14 == puVar4)) goto LAB_033fe0b8;
                  lVar11 = 0xc;
                  if (*(char *)((long)puVar14 + (10 - (long)puVar4)) != '\0') {
                    lVar11 = 0x1c;
                  }
                  lVar11 = (long)puVar14 + (lVar11 - (long)puVar4);
                  uVar13 = 0;
                  if (lVar11 == 0) goto LAB_033fe0b8;
                  uVar15 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar4));
                  *(undefined4 *)(PTR_DAT_04bbfe90 + 0x128) = 0xfffffffe;
                  if (uVar15 == 0) break;
                  piVar16 = (int *)(lVar11 + 4);
                  while (piVar16[-1] != 0x54706054) {
                    piVar16 = piVar16 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_033fe0b4;
                  }
                  uVar13 = 0;
                  iVar9 = 0;
                  if (*piVar16 != -1) {
                    iVar9 = *piVar16;
                  }
                  *(int *)(PTR_DAT_04bbfe90 + 0x128) = iVar9;
                  uVar8 = *puVar14;
                  if (uVar8 == 0) goto LAB_033fe0b8;
                } while( true );
              }
LAB_033fe0b4:
              uVar13 = 0;
            }
LAB_033fe0b8:
            puVar20 = &DAT_0574d778;
            if (uVar7 == uVar13) goto LAB_033fe208;
            uVar7 = FUN_0277d6c4(&DAT_0574d788);
            puVar14 = local_7e0;
            if (local_7e0 == (uint *)0x0) {
              uVar13 = 0xfffe;
            }
            else {
              uVar8 = *local_7e0;
              if (uVar8 != 0) {
                cVar17 = *PTR_DAT_04bbfe88;
                do {
                  if (cVar17 == '\0') {
                    cVar17 = '\x01';
                    *PTR_DAT_04bbfe88 = 1;
                    memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                    uVar8 = *puVar14;
                  }
                  else {
                    uVar13 = *(uint *)(PTR_DAT_04bbfe90 + 0x128);
                    if (-1 < (int)uVar13) {
                      if ((ushort *)((ulong)uVar13 + (long)puVar14) == (ushort *)0x0) break;
                      uVar13 = (uint)*(ushort *)((ulong)uVar13 + (long)puVar14);
                      goto LAB_033fe1f8;
                    }
                    if (uVar13 != 0xffffffff) break;
                  }
                  puVar4 = (uint *)(ulong)uVar8;
                  uVar13 = 0;
                  if ((puVar4 == (uint *)0x0) || (uVar13 = 0, puVar14 == puVar4)) goto LAB_033fe1f8;
                  lVar11 = 0xc;
                  if (*(char *)((long)puVar14 + (10 - (long)puVar4)) != '\0') {
                    lVar11 = 0x1c;
                  }
                  lVar11 = (long)puVar14 + (lVar11 - (long)puVar4);
                  uVar13 = 0;
                  if (lVar11 == 0) goto LAB_033fe1f8;
                  uVar15 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar4));
                  *(undefined4 *)(PTR_DAT_04bbfe90 + 0x128) = 0xfffffffe;
                  if (uVar15 == 0) break;
                  piVar16 = (int *)(lVar11 + 4);
                  while (piVar16[-1] != 0x54706054) {
                    piVar16 = piVar16 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_033fe1f4;
                  }
                  uVar13 = 0;
                  iVar9 = 0;
                  if (*piVar16 != -1) {
                    iVar9 = *piVar16;
                  }
                  *(int *)(PTR_DAT_04bbfe90 + 0x128) = iVar9;
                  uVar8 = *puVar14;
                  if (uVar8 == 0) goto LAB_033fe1f8;
                } while( true );
              }
LAB_033fe1f4:
              uVar13 = 0;
            }
LAB_033fe1f8:
            puVar20 = &DAT_0574d788;
            if (uVar7 == uVar13) goto LAB_033fe208;
            FUN_01af97c0(&local_7f8,&local_7f0);
            if ((short)local_7f8 != -2) {
              local_800 = *plVar3;
              lVar11 = (**(code **)(*param_1 + 0x18))(param_1);
              uVar7 = FUN_0277d6c4(&local_800);
              if ((uVar7 >> 3 & 0x1fff) < 0x753) {
                lVar18 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
                *(uint *)(lVar11 + lVar18) =
                     *(uint *)(lVar11 + lVar18) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
              }
              goto LAB_033fde00;
            }
          }
          plVar21 = (long *)PTR_DAT_04bbfe58;
        }
      }
      do {
        uVar7 = (int)uVar19 + 1;
        uVar19 = (ulong)uVar7;
        if (0x752 < uVar7 >> 3) {
          uVar7 = 0x3a95;
          goto LAB_033fe2e0;
        }
      } while ((*(uint *)(lVar10 + (ulong)(uVar7 >> 5) * 4) >> (ulong)(uVar7 & 0x1f) & 1) == 0);
      goto LAB_033fdbac;
    }
LAB_033fd92c:
    uVar19 = FUN_02612720(param_2);
    if ((uVar19 & 1) != 0) {
      local_7d8 = (undefined **)0x2f0;
      FUN_0277d4ac(&local_7d8);
      FUN_0277dedc(&local_7d8);
      lVar10 = (**(code **)(*param_1 + 0x18))(param_1);
      uVar7 = FUN_0277d6c4(&local_7d8);
      if ((uVar7 >> 3 & 0x1fff) < 0x753) {
        lVar11 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
        *(uint *)(lVar10 + lVar11) = *(uint *)(lVar10 + lVar11) | 1 << (ulong)(uVar7 & 0x1f);
      }
    }
    uVar19 = FUN_033fe450(param_1,10);
    if ((uVar19 & 1) != 0) {
      local_7d8 = (undefined **)0x2f1;
      FUN_0277d4ac(&local_7d8);
      FUN_0277dedc(&local_7d8);
      lVar10 = (**(code **)(*param_1 + 0x18))(param_1);
      uVar7 = FUN_0277d6c4(&local_7d8);
      if ((uVar7 >> 3 & 0x1fff) < 0x753) {
        lVar11 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
        *(uint *)(lVar10 + lVar11) = *(uint *)(lVar10 + lVar11) | 1 << (ulong)(uVar7 & 0x1f);
      }
    }
    uVar19 = FUN_033fe450(param_1,9);
    if ((uVar19 & 1) != 0) {
      local_7d8 = (undefined **)0x2f2;
      FUN_0277d4ac(&local_7d8);
      FUN_0277dedc(&local_7d8);
      lVar10 = (**(code **)(*param_1 + 0x18))(param_1);
      uVar7 = FUN_0277d6c4(&local_7d8);
      if ((uVar7 >> 3 & 0x1fff) < 0x753) {
        lVar11 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
        *(uint *)(lVar10 + lVar11) = *(uint *)(lVar10 + lVar11) | 1 << (ulong)(uVar7 & 0x1f);
      }
    }
    uVar7 = 0;
    local_7d8 = &PTR_FUN_04b295f0;
    do {
      (**(code **)(*param_1 + 0x10))(&local_7f0,param_1,uVar7);
      lVar10 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar13 = 1 << (ulong)(uVar7 & 0x1f);
      if ((*(uint *)(lVar10 + (ulong)(uVar7 >> 5) * 4) & uVar13) != 0) {
        lVar10 = *(long *)puVar5;
        uVar8 = FUN_0277d6c4(&local_7f0);
        if (*(long *)puVar5 != 0) {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if (((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) &&
             (uVar19 = (*(code *)*local_7d8)(&local_7d8,&local_7f0), (uVar19 & 1) != 0))
          goto LAB_033fdac0;
        }
        lVar10 = (**(code **)(*param_1 + 0x18))(param_1);
        lVar11 = (ulong)(uVar7 >> 5) * 4;
        *(uint *)(lVar10 + lVar11) = *(uint *)(lVar10 + lVar11) & (uVar13 ^ 0xffffffff);
      }
LAB_033fdac0:
      uVar7 = uVar7 + 1;
    } while (uVar7 != 15000);
  }
  return;
  while (uVar7 = uVar7 - 3, uVar7 != 0xfffffffd) {
LAB_033fe2e0:
    uVar13 = uVar7 + 2;
    if ((((*(uint *)(lVar10 + (ulong)(uVar13 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1) != 0) ||
        (uVar13 = uVar7 + 1,
        (*(uint *)(lVar10 + (ulong)(uVar13 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1) != 0)) ||
       (uVar13 = uVar7,
       (*(uint *)(lVar10 + (ulong)(uVar7 >> 5) * 4) >> (ulong)(uVar7 & 0x1f) & 1) != 0)) {
      uVar19 = (ulong)(uVar13 + 1);
      goto LAB_033fdbac;
    }
  }
  uVar19 = 0;
LAB_033fdbac:
  if (iVar6 == (int)uVar19) goto LAB_033fd92c;
  goto LAB_033fdbb4;
}

