
void FUN_00b122c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined4 uVar9;
  bool bVar10;
  byte bVar11;
  ushort uVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  char *pcVar16;
  undefined2 uVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  undefined *local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  int local_98;
  char local_94 [31];
  undefined1 local_75;
  byte local_70 [4];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  local_a8 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_a8);
  *(undefined8 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x218) = 0x41c8000041800000;
  *(undefined8 *)(param_1 + 0x231) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0xbf800000bf800000;
  uVar14 = (undefined4)local_a8;
  uVar9 = local_a8._4_4_;
  local_a8 = (undefined *)0xfffe;
  *(undefined4 *)(param_1 + 0x210) = uVar14;
  *(undefined4 *)(param_1 + 0x214) = uVar9;
  FUN_0277d4ac(&local_a8);
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined8 *)(param_1 + 0x24c) = 0;
  *(undefined2 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined8 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x23c) = (undefined4)local_a8;
  *(undefined4 *)(param_1 + 0x240) = local_a8._4_4_;
  *(undefined8 *)(param_1 + 0x254) = 0;
  *(undefined8 *)(param_1 + 0x25c) = 0;
  **(undefined1 **)(param_1 + 0x278) = 0;
  **(undefined1 **)(param_1 + 0x2b0) = 0;
  iVar13 = FUN_0068aa0c(param_2);
  puVar8 = PTR_DAT_04bb2028;
  if (iVar13 < 1) {
    return;
  }
  iVar20 = 0;
  puVar1 = PTR_DAT_04bb2a08 + 0x10;
  puVar2 = PTR_DAT_04bb2028 + 0x10;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  puVar4 = PTR_DAT_04bc0510 + 0x10;
LAB_00b12460:
  pcVar16 = (char *)FUN_0068aa58(param_2,iVar20);
  FUN_0068aab0(param_2,iVar20);
  if (pcVar16 != (char *)0x0) {
    local_75 = 0;
    local_98 = 0x20;
    local_a0 = local_94;
    if (local_94 != pcVar16) {
      lVar18 = 0;
      do {
        if (pcVar16[lVar18] == '\0') {
LAB_00b124dc:
          iVar19 = (int)lVar18;
joined_r0x00b124e0:
          if (0x1f < iVar19) {
            iVar19 = 0x1f;
          }
          goto LAB_00b124e8;
        }
        if (pcVar16[lVar18 + 1] == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_00b124dc;
        }
        if (pcVar16[lVar18 + 2] == '\0') {
          iVar19 = (int)lVar18 + 2;
          goto joined_r0x00b124e0;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      iVar19 = 0;
LAB_00b124e8:
      local_a8 = puVar1;
      memcpy(local_94,pcVar16,(long)iVar19);
      local_94[iVar19] = '\0';
    }
    local_c0 = "Arg";
    local_a0[(long)local_98 + -1] = '\0';
    local_c8 = puVar3;
    local_a8 = puVar2;
    (**(code **)(puVar8 + 0x28))(&local_a8);
    pcVar16 = local_a0;
    (**(code **)(local_c8 + 0x18))(&local_c8);
    if ((pcVar16 == local_c0) ||
       ((*local_a0 == *local_c0 &&
        ((*local_a0 == '\0' ||
         ((local_a0[1] == local_c0[1] && ((local_a0[1] == '\0' || (local_a0[2] == local_c0[2])))))))
        ))) {
      (**(code **)(local_a8 + 0x18))(&local_a8);
      lVar18 = 0;
      do {
        if (local_a0[lVar18] == '\0') {
LAB_00b1282c:
          iVar19 = (int)lVar18;
joined_r0x00b12830:
          if (2 < iVar19) {
            pcVar16 = local_a0 + 3;
            goto LAB_00b12854;
          }
          break;
        }
        if (local_a0[lVar18 + 1] == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_00b1282c;
        }
        if (local_a0[lVar18 + 2] == '\0') {
          iVar19 = (int)lVar18 + 2;
          goto joined_r0x00b12830;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      pcVar16 = *(char **)(PTR_PTR_04bb2238 + 8);
LAB_00b12854:
      if ((pcVar16 == "Int") || (((*pcVar16 == 'I' && (pcVar16[1] == 'n')) && (pcVar16[2] == 't'))))
      {
        (**(code **)(local_a8 + 0x18))(&local_a8);
        lVar18 = 0;
        do {
          if (local_a0[lVar18] == '\0') {
LAB_00b12a14:
            iVar19 = (int)lVar18;
joined_r0x00b12a18:
            if (5 < iVar19) {
              local_c0 = local_a0 + 6;
              goto LAB_00b12414;
            }
            break;
          }
          if (local_a0[lVar18 + 1] == '\0') {
            lVar18 = lVar18 + 1;
            goto LAB_00b12a14;
          }
          if (local_a0[lVar18 + 2] == '\0') {
            iVar19 = (int)lVar18 + 2;
            goto joined_r0x00b12a18;
          }
          lVar18 = lVar18 + 3;
        } while (lVar18 != 0x80001);
        local_c0 = *(char **)(PTR_PTR_04bb2238 + 8);
LAB_00b12414:
        local_b0 = 0;
        local_c8 = PTR_DAT_04bb2020 + 0x10;
        FUN_038d30c0(&local_b0,&local_c8,0xffffffff);
        uVar15 = local_b0;
        uVar21 = (ulong)local_b0;
        uVar14 = FUN_0068b2c0(param_2,iVar20);
        if (3 < uVar15) {
          uVar21 = 0;
        }
        *(undefined4 *)(param_1 + 0x24c + uVar21 * 4) = uVar14;
      }
      else {
        (**(code **)(local_a8 + 0x18))(&local_a8);
        lVar18 = 0;
        do {
          if (local_a0[lVar18] == '\0') {
LAB_00b12914:
            iVar19 = (int)lVar18;
joined_r0x00b12918:
            if (2 < iVar19) {
              pcVar16 = local_a0 + 3;
              goto LAB_00b1293c;
            }
            break;
          }
          if (local_a0[lVar18 + 1] == '\0') {
            lVar18 = lVar18 + 1;
            goto LAB_00b12914;
          }
          if (local_a0[lVar18 + 2] == '\0') {
            iVar19 = (int)lVar18 + 2;
            goto joined_r0x00b12918;
          }
          lVar18 = lVar18 + 3;
        } while (lVar18 != 0x80001);
        pcVar16 = *(char **)(PTR_PTR_04bb2238 + 8);
LAB_00b1293c:
        if ((pcVar16 == "Float") ||
           (((*pcVar16 == 'F' && (pcVar16[1] == 'l')) &&
            ((pcVar16[2] == 'o' && ((pcVar16[3] == 'a' && (pcVar16[4] == 't')))))))) {
          (**(code **)(local_a8 + 0x18))(&local_a8);
          lVar18 = 0;
          do {
            if (local_a0[lVar18] == '\0') {
LAB_00b12b34:
              iVar19 = (int)lVar18;
joined_r0x00b12b38:
              if (7 < iVar19) {
                local_c0 = local_a0 + 8;
                goto LAB_00b12b5c;
              }
              break;
            }
            if (local_a0[lVar18 + 1] == '\0') {
              lVar18 = lVar18 + 1;
              goto LAB_00b12b34;
            }
            if (local_a0[lVar18 + 2] == '\0') {
              iVar19 = (int)lVar18 + 2;
              goto joined_r0x00b12b38;
            }
            lVar18 = lVar18 + 3;
          } while (lVar18 != 0x80001);
          local_c0 = *(char **)(PTR_PTR_04bb2238 + 8);
LAB_00b12b5c:
          local_b0 = 0;
          local_c8 = PTR_DAT_04bb2020 + 0x10;
          FUN_038d30c0(&local_b0,&local_c8,0xffffffff);
          uVar15 = local_b0;
          uVar21 = (ulong)local_b0;
          uVar14 = FUN_0068b958(param_2,iVar20);
          if (3 < uVar15) {
            uVar21 = 0;
          }
          *(undefined4 *)(param_1 + 0x25c + uVar21 * 4) = uVar14;
        }
        else {
          (**(code **)(local_a8 + 0x18))(&local_a8);
          lVar18 = 0;
          do {
            if (local_a0[lVar18] == '\0') {
LAB_00b12a38:
              iVar19 = (int)lVar18;
joined_r0x00b12a3c:
              if (2 < iVar19) {
                pcVar16 = local_a0 + 3;
                goto LAB_00b12a60;
              }
              break;
            }
            if (local_a0[lVar18 + 1] == '\0') {
              lVar18 = lVar18 + 1;
              goto LAB_00b12a38;
            }
            if (local_a0[lVar18 + 2] == '\0') {
              iVar19 = (int)lVar18 + 2;
              goto joined_r0x00b12a3c;
            }
            lVar18 = lVar18 + 3;
          } while (lVar18 != 0x80001);
          pcVar16 = *(char **)(PTR_PTR_04bb2238 + 8);
LAB_00b12a60:
          if ((pcVar16 == "Flag") ||
             ((((*pcVar16 == 'F' && (pcVar16[1] == 'l')) && (pcVar16[2] == 'a')) &&
              (pcVar16[3] == 'g')))) {
            (**(code **)(local_a8 + 0x18))(&local_a8);
            lVar18 = 0;
            do {
              if (local_a0[lVar18] == '\0') {
LAB_00b12c50:
                iVar19 = (int)lVar18;
joined_r0x00b12c54:
                if (6 < iVar19) {
                  local_c0 = local_a0 + 7;
                  goto LAB_00b12c78;
                }
                break;
              }
              if (local_a0[lVar18 + 1] == '\0') {
                lVar18 = lVar18 + 1;
                goto LAB_00b12c50;
              }
              if (local_a0[lVar18 + 2] == '\0') {
                iVar19 = (int)lVar18 + 2;
                goto joined_r0x00b12c54;
              }
              lVar18 = lVar18 + 3;
            } while (lVar18 != 0x80001);
            local_c0 = *(char **)(PTR_PTR_04bb2238 + 8);
LAB_00b12c78:
            local_b0 = 0;
            local_c8 = PTR_DAT_04bb2020 + 0x10;
            FUN_038d30c0(&local_b0,&local_c8,0xffffffff);
            uVar15 = local_b0;
            uVar21 = (ulong)local_b0;
            bVar11 = FUN_0068b600(param_2,iVar20);
            if (3 < uVar15) {
              uVar21 = 0;
            }
            *(byte *)(param_1 + 0x26c + uVar21) = bVar11 & 1;
          }
          else {
            (**(code **)(local_a8 + 0x18))(&local_a8);
            lVar18 = 0;
            do {
              if (local_a0[lVar18] == '\0') {
LAB_00b12ba8:
                iVar19 = (int)lVar18;
joined_r0x00b12bac:
                if (2 < iVar19) {
                  pcVar16 = local_a0 + 3;
                  goto LAB_00b12bd0;
                }
                break;
              }
              if (local_a0[lVar18 + 1] == '\0') {
                lVar18 = lVar18 + 1;
                goto LAB_00b12ba8;
              }
              if (local_a0[lVar18 + 2] == '\0') {
                iVar19 = (int)lVar18 + 2;
                goto joined_r0x00b12bac;
              }
              lVar18 = lVar18 + 3;
            } while (lVar18 != 0x80001);
            pcVar16 = *(char **)(PTR_PTR_04bb2238 + 8);
LAB_00b12bd0:
            if ((pcVar16 == "Str") ||
               (((*pcVar16 == 'S' && (pcVar16[1] == 't')) && (pcVar16[2] == 'r')))) {
              (**(code **)(local_a8 + 0x18))(&local_a8);
              lVar18 = 0;
              do {
                if (local_a0[lVar18] == '\0') {
LAB_00b12cc8:
                  iVar19 = (int)lVar18;
joined_r0x00b12ccc:
                  if (5 < iVar19) {
                    local_c0 = local_a0 + 6;
                    goto LAB_00b12cf0;
                  }
                  break;
                }
                if (local_a0[lVar18 + 1] == '\0') {
                  lVar18 = lVar18 + 1;
                  goto LAB_00b12cc8;
                }
                if (local_a0[lVar18 + 2] == '\0') {
                  iVar19 = (int)lVar18 + 2;
                  goto joined_r0x00b12ccc;
                }
                lVar18 = lVar18 + 3;
              } while (lVar18 != 0x80001);
              local_c0 = *(char **)(PTR_PTR_04bb2238 + 8);
LAB_00b12cf0:
              local_b0 = 0;
              puVar5 = PTR_DAT_04bb2020 + 0x10;
              local_c8 = puVar5;
              FUN_038d30c0(&local_b0,&local_c8,0xffffffff);
              uVar15 = local_b0;
              local_c0 = (char *)FUN_0068bc94(param_2,iVar20);
              plVar7 = (long *)(param_1 + 0x270) + (ulong)uVar15 * 7;
              if (1 < uVar15) {
                plVar7 = (long *)(param_1 + 0x270);
              }
              local_c8 = puVar5;
              (**(code **)(*plVar7 + 0x10))(plVar7,&local_c8);
            }
          }
        }
      }
      goto LAB_00b12454;
    }
    local_c8 = PTR_DAT_04bb2020 + 0x10;
    local_c0 = "HandToolItem";
    (**(code **)(local_a8 + 0x18))(&local_a8);
    (**(code **)(local_a8 + 0x18))(&local_a8);
    pcVar16 = local_a0;
    (**(code **)(local_c8 + 0x18))(&local_c8);
    if (pcVar16 != local_c0) {
      lVar18 = 0;
      do {
        if (local_a0[lVar18] != local_c0[lVar18]) goto LAB_00b12454;
      } while ((local_a0[lVar18] != '\0') && (bVar10 = lVar18 != 0xb, lVar18 = lVar18 + 1, bVar10));
    }
    uVar12 = FUN_0068b2c0(param_2,iVar20);
    local_b0 = (uint)uVar12;
    local_ac = 0;
    FUN_0277d4ac(&local_b0);
    puVar5 = PTR_DAT_04bb43c0;
    lVar22 = *(long *)PTR_DAT_04bb43c0;
    uVar15 = FUN_0277d6c4(&local_b0);
    lVar18 = *(long *)puVar5;
    if (lVar18 != 0) {
      lVar22 = *(long *)(lVar22 + 0x57e58);
      uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
      if ((uVar15 < *(uint *)(lVar22 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
        local_b8 = 0;
        local_c0 = (char *)CONCAT44(local_ac,local_b0);
        local_c8 = puVar4;
        uVar15 = FUN_0277d6c4(&local_c0);
        if (*(long *)PTR_DAT_04bb43c0 != 0) {
          lVar18 = *(long *)(lVar18 + 0x57e58);
          uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if ((uVar15 < *(uint *)(lVar18 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
            lVar18 = *(long *)PTR_DAT_04bc0428;
            uVar15 = FUN_0277d6c4(&local_b0);
            uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if ((uVar15 < *(uint *)(lVar18 + 0x1d8)) &&
               (lVar18 = *(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar15 * 8), lVar18 != 0))
            {
              local_b8 = lVar18;
            }
          }
        }
        local_70[0] = 0;
        local_70[1] = 0;
        FUN_01adab50(&local_c8,local_70);
        uVar15 = 0;
        do {
          if ((uVar15 != 0) && (uVar15 < 0xe)) {
            uVar6 = uVar15 + 7;
            if (-1 < (int)uVar15) {
              uVar6 = uVar15;
            }
            if (((uint)((int)uVar6 >> 3) < 2) &&
               ((local_70[(uint)((int)uVar6 >> 3)] >> (ulong)(uVar15 & 7) & 1) != 0))
            goto code_r0x00b127e0;
          }
          uVar15 = uVar15 + 1;
          if (uVar15 == 0xe) {
            return;
          }
        } while( true );
      }
    }
    if ((short)local_b0 != -2) {
      return;
    }
    uVar17 = 0xfffe;
    goto LAB_00b12800;
  }
  goto LAB_00b12454;
code_r0x00b127e0:
  if (uVar15 != 9) {
    return;
  }
  local_6c = 9;
  local_68 = 9;
  local_64 = 9;
  uVar17 = (short)local_b0;
LAB_00b12800:
  *(undefined2 *)(param_1 + 0x210) = uVar17;
  *(undefined2 *)(param_1 + 0x212) = local_b0._2_2_;
  *(undefined4 *)(param_1 + 0x214) = local_ac;
LAB_00b12454:
  iVar20 = iVar20 + 1;
  if (iVar20 == iVar13) {
    return;
  }
  goto LAB_00b12460;
}

