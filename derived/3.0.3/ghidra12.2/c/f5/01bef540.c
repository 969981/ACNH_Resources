
/* WARNING: Type propagation algorithm not settling */

void FUN_01bef540(ushort *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  short *psVar5;
  uint *puVar6;
  undefined4 *puVar7;
  short sVar8;
  ushort uVar9;
  char cVar10;
  byte bVar11;
  undefined *puVar12;
  ushort *puVar13;
  bool bVar14;
  long *plVar15;
  ulong uVar16;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  int iVar23;
  ushort *puVar24;
  ulong uVar25;
  byte *pbVar26;
  ushort *puVar27;
  uint uVar28;
  undefined *local_e0;
  ushort *local_d8;
  uint local_d0;
  undefined1 local_cc [31];
  undefined1 local_ad;
  uint local_a4;
  ushort *local_a0;
  uint local_98;
  undefined *local_90;
  undefined2 *local_88;
  undefined **local_80;
  ushort *local_78;
  
  puVar27 = param_1 + 8;
  (**(code **)(*(long *)puVar27 + 0x18))(puVar27);
  puVar12 = PTR_DAT_04bb2da0;
  lVar20 = 0;
  do {
    if (*(short *)(*(long *)(param_1 + 0xc) + lVar20 * 2) == 0) {
LAB_01bef5f4:
      uVar28 = (int)lVar20 + 1;
      if ((int)lVar20 == -1) {
        return;
      }
      goto LAB_01bef644;
    }
    lVar21 = *(long *)(param_1 + 0xc) + lVar20 * 2;
    if (*(short *)(lVar21 + 2) == 0) {
      lVar20 = lVar20 + 1;
      goto LAB_01bef5f4;
    }
    if (*(short *)(lVar21 + 4) == 0) {
      lVar20 = lVar20 + 2;
      goto LAB_01bef5f4;
    }
    lVar20 = lVar20 + 3;
  } while (lVar20 != 0x80001);
  uVar28 = 1;
LAB_01bef644:
  local_88 = &DAT_04169b6e;
  local_90 = PTR_DAT_04bb8610 + 0x10;
  local_98 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puVar2 = PTR_DAT_04bb2028 + 0x10;
  ppuVar3 = (undefined **)(PTR_DAT_04bb8610 + 0x10);
  local_a0 = puVar27;
  do {
    FUN_01befda0(&local_a0,param_1 + 0x54);
    psVar5 = *(short **)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x5c) < 1) {
      psVar5 = (short *)puVar12;
    }
    if (*psVar5 == 0x50) {
      if (*(long **)(*(long *)param_1 + 0xb8) != (long *)0x0) {
        (**(code **)(**(long **)(*(long *)param_1 + 0xb8) + 0x10))(&local_80);
        if (((ulong)local_80 & 0xff) < 8) {
          puVar6 = (uint *)PTR_DAT_04bb3238;
          if (*(long *)PTR_DAT_04bb4718 != 0) {
            puVar6 = (uint *)(*(long *)PTR_DAT_04bb4718 + ((ulong)local_80 & 0xff) * 4 + 0xde8);
          }
          lVar20 = *(long *)PTR_DAT_04bb27c0;
          if (lVar20 != 0) {
            uVar19 = *puVar6;
            if ((((uVar19 == 0) ||
                 (lVar21 = *(long *)(*(long *)(*(long *)(lVar20 + 0x1c0) + 8) +
                                    ((ulong)(uVar19 >> 0x11) & 0x7ff8)), lVar21 == 0)) ||
                ((*(uint *)(lVar21 + 0x248) >> 1 & 1) != 0)) ||
               (*(uint *)(lVar21 + 0x230) != uVar19)) {
              lVar21 = 0;
            }
            if ((*(int *)(lVar20 + 0x288) == 1) || (*(int *)(lVar20 + 0x288) == -1)) {
              plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                     (*(long *)PTR_DAT_04bb3350 + 0x68));
              lVar20 = *(long *)PTR_DAT_04bb27c0;
              iVar23 = (**(code **)(*plVar15 + 0x60))();
              plVar15 = (long *)PTR_PTR_04bb2238;
              if (iVar23 < 0x11) {
                uVar19 = 1;
              }
              else {
                if (4 < *(uint *)(lVar20 + 0x5e8)) goto LAB_01bef83c;
                uVar19 = 0x1aU >> (ulong)(*(uint *)(lVar20 + 0x5e8) & 0x1f) & 1;
              }
            }
            else {
LAB_01bef83c:
              uVar19 = 0;
              plVar15 = (long *)PTR_PTR_04bb2238;
            }
            PTR_PTR_04bb2238 = (undefined *)plVar15;
            if (lVar21 != 0) {
              uVar19 = uVar19 ^ 1;
              if (*(int *)(lVar21 + 0x150) != 1) {
                uVar19 = 1;
              }
              if (uVar19 == 0) {
                local_d8 = (ushort *)0x40b532c;
                lVar20 = *(long *)(*(long *)(lVar21 + 0x60) + 0x1138);
                local_e0 = puVar1;
                if (lVar20 == 0) {
                  (**(code **)(*plVar15 + 0x18))(plVar15);
                  pcVar17 = (char *)plVar15[1];
joined_r0x01befaf0:
                  if ((pcVar17 != (char *)0x0) &&
                     ((pcVar17 == "Keep" ||
                      ((((*pcVar17 == 'K' && (pcVar17[1] == 'e')) && (pcVar17[2] == 'e')) &&
                       ((pcVar17[3] == 'p' && (pcVar17[4] == '\0')))))))) goto LAB_01befc20;
                }
                else {
                  lVar20 = *(long *)(lVar20 + 0x78);
                  if ((lVar20 != 0) && (plVar15 = *(long **)(lVar20 + 0x48), plVar15 != (long *)0x0)
                     ) {
                    pcVar17 = (char *)(**(code **)(*plVar15 + 0xf0))(plVar15,&local_e0);
                    goto joined_r0x01befaf0;
                  }
                }
                if ((char)param_1[5] == '\0') {
                  local_e0 = (undefined *)CONCAT44(local_e0._4_4_,*(undefined4 *)(param_1 + 6));
                  FUN_02538020(&local_80,&local_e0,1,(char)param_1[4],0);
                }
                else {
                  if (*(long *)PTR_DAT_04bb4718 == 0) {
                    puVar22 = &DAT_054f0958;
                    if ((DAT_054f0960 & 1) == 0) {
                      iVar23 = __cxa_guard_acquire(&DAT_054f0960);
                      if (iVar23 == 0) {
                        puVar22 = &DAT_054f0958;
                      }
                      else {
                        DAT_054f0958 = 0;
                        __cxa_guard_release(&DAT_054f0960);
                        puVar22 = &DAT_054f0958;
                      }
                    }
                  }
                  else {
                    puVar22 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
                    if (((ulong)local_80 & 0xff) < 8) {
                      puVar22 = puVar22 + ((ulong)local_80 & 0xff);
                    }
                  }
                  local_e0 = (undefined *)CONCAT44(local_e0._4_4_,0x34);
                  *(uint *)((long)puVar22 + 4) = *(uint *)((long)puVar22 + 4) | 0x100000;
                  *(undefined4 *)(*(long *)PTR_DAT_04bb3968 + 0xd80) = 2;
                }
              }
            }
          }
        }
      }
    }
    else if ((*psVar5 == 0x4e) && ((char)param_1[4] == '\0')) {
      local_ad = 0;
      local_a4 = 0xffffffff;
      local_d0 = 0x20;
      local_cc[0] = 0;
      local_e0 = puVar2;
      local_d8 = (ushort *)local_cc;
      (**(code **)(*(long *)(param_1 + 0x54) + 0x18))(param_1 + 0x54);
      lVar21 = *(long *)(param_1 + 0x58);
      lVar20 = 0;
      do {
        if (*(short *)(lVar21 + lVar20 * 2) == 0) {
LAB_01bef84c:
          iVar23 = (int)lVar20;
joined_r0x01bef850:
          if (0 < iVar23) {
            local_78 = (ushort *)(lVar21 + 2);
            goto LAB_01bef874;
          }
          break;
        }
        lVar4 = lVar21 + lVar20 * 2;
        if (*(short *)(lVar4 + 2) == 0) {
          lVar20 = lVar20 + 1;
          goto LAB_01bef84c;
        }
        if (*(short *)(lVar4 + 4) == 0) {
          iVar23 = (int)lVar20 + 2;
          goto joined_r0x01bef850;
        }
        lVar20 = lVar20 + 3;
      } while (lVar20 != 0x80001);
      local_78 = *(ushort **)(PTR_PTR_04bb8620 + 8);
LAB_01bef874:
      local_80 = ppuVar3;
      (**(code **)(local_e0 + 0x18))(&local_e0);
      uVar19 = local_d0;
      puVar13 = local_d8;
      (*(code *)local_80[3])(&local_80);
      if (uVar19 != 0) {
        uVar18 = 0;
        lVar20 = 0x7fffffff;
        puVar24 = local_78;
        do {
          pbVar26 = (byte *)((long)puVar13 + (ulong)uVar18);
          if (lVar20 == 0) goto LAB_01bef964;
          uVar9 = *puVar24;
          if (uVar9 == 0) goto LAB_01bef964;
          bVar11 = (byte)uVar9;
          if (uVar9 < 0x80) {
            *pbVar26 = bVar11;
            iVar23 = 1;
          }
          else if (uVar9 < 0x800) {
            if (uVar19 <= uVar18 + 1) break;
            *pbVar26 = (byte)(uVar9 >> 6) | 0xc0;
            pbVar26[1] = bVar11 & 0x3f | 0x80;
            iVar23 = 2;
          }
          else {
            if (uVar19 <= uVar18 + 2) break;
            *pbVar26 = (byte)(uVar9 >> 0xc) | 0xe0;
            pbVar26[1] = (byte)(uVar9 >> 6) & 0x3f | 0x80;
            pbVar26[2] = bVar11 & 0x3f | 0x80;
            iVar23 = 3;
          }
          uVar18 = iVar23 + uVar18;
          lVar20 = lVar20 + -1;
          puVar24 = puVar24 + 1;
        } while (uVar18 < uVar19);
        pbVar26 = (byte *)((long)puVar13 + (ulong)(uVar18 - 1));
LAB_01bef964:
        *pbVar26 = 0;
      }
      uVar16 = FUN_038d30c0(&local_a4,&local_e0,0xffffffff);
      if ((uVar16 & 1) == 0) {
        local_80 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_78 = (ushort *)&DAT_040947d9;
        (**(code **)(local_e0 + 0x18))(&local_e0);
        (**(code **)(local_e0 + 0x18))(&local_e0);
        puVar13 = local_d8;
        (*(code *)local_80[3])(&local_80);
        if (puVar13 == local_78) {
LAB_01befb94:
          local_80 = &PTR_LAB_04a3e100;
          local_78 = param_1;
          FUN_020b020c(*(undefined8 *)PTR_DAT_04bb3968,&local_80);
        }
        else {
          uVar16 = 0;
          bVar14 = true;
          do {
            if (*(char *)((long)local_d8 + uVar16) != *(char *)((long)local_78 + uVar16)) break;
            if (*(char *)((long)local_d8 + uVar16) == '\0') {
              if (bVar14) goto LAB_01befb94;
              break;
            }
            cVar10 = *(char *)((long)local_d8 + uVar16 + 1);
            if (cVar10 != *(char *)((long)local_78 + uVar16 + 1)) break;
            if (cVar10 == '\0') goto LAB_01befb94;
            cVar10 = *(char *)((long)local_d8 + uVar16 + 2);
            if (cVar10 != *(char *)((long)local_78 + uVar16 + 2)) break;
            if (cVar10 == '\0') goto LAB_01befb94;
            bVar14 = uVar16 < 0x7fffe;
            uVar16 = uVar16 + 3;
          } while (uVar16 != 0x80001);
        }
      }
      else {
        puVar7 = (undefined4 *)(*(long *)PTR_DAT_04bb3968 + 0xa20) + local_a4;
        if (0x11 < local_a4) {
          puVar7 = (undefined4 *)(*(long *)PTR_DAT_04bb3968 + 0xa20);
        }
        FUN_01bf0040(param_1,*puVar7);
      }
    }
LAB_01befc20:
    uVar19 = local_98;
    puVar13 = local_a0;
    uVar16 = (ulong)local_98;
    (**(code **)(*(long *)local_a0 + 0x18))(local_a0);
    lVar20 = 0;
    do {
      if (*(short *)(*(long *)(puVar13 + 4) + lVar20 * 2) == 0) {
LAB_01befc84:
        iVar23 = (int)lVar20;
        goto joined_r0x01befcac;
      }
      lVar21 = *(long *)(puVar13 + 4) + lVar20 * 2;
      if (*(short *)(lVar21 + 2) == 0) {
        lVar20 = lVar20 + 1;
        goto LAB_01befc84;
      }
      if (*(short *)(lVar21 + 4) == 0) {
        iVar23 = (int)lVar20 + 2;
        goto joined_r0x01befcac;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    iVar23 = 0;
joined_r0x01befcac:
    if ((-1 < (int)uVar19) && ((int)uVar19 <= iVar23)) {
      for (; psVar5 = (short *)(*(long *)(local_a0 + 4) + uVar16 * 2), *psVar5 != 0;
          uVar16 = uVar16 + 1) {
        (**(code **)(local_90 + 0x18))(&local_90);
        uVar25 = 0;
        bVar14 = true;
        sVar8 = *psVar5;
        do {
          if (local_88[uVar25] == 0) break;
          if (local_88[uVar25] == sVar8) {
            if (bVar14) goto LAB_01befd44;
            break;
          }
          if (local_88[uVar25 + 1] == 0) break;
          if (local_88[uVar25 + 1] == sVar8) goto LAB_01befd44;
          if (local_88[uVar25 + 2] == 0) break;
          if (local_88[uVar25 + 2] == sVar8) goto LAB_01befd44;
          bVar14 = uVar25 < 0x7fffe;
          uVar25 = uVar25 + 3;
        } while (uVar25 != 0x80001);
      }
LAB_01befd44:
      local_98 = (int)uVar16 + 1;
    }
    if ((local_a0 == puVar27) && (local_98 == uVar28)) {
      return;
    }
  } while( true );
}

