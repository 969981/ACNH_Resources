
void FUN_039dd8b0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  short *psVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined **local_70;
  long local_68;
  
  lVar13 = *(long *)(param_3 + 0x10);
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  lVar11 = *(long *)(param_2 + 0x4af8);
  if ((lVar11 != 0) && (lVar6 = *(long *)(lVar13 + 0x18), lVar6 != 0)) {
    uVar7 = (ulong)*(ushort *)(lVar6 + 0xc);
    puVar10 = (uint *)((int *)(lVar6 + 8) + uVar7 * 4);
    uVar2 = *puVar10;
    if (*(int *)(lVar6 + 8) < (int)uVar2) {
      do {
        if (uVar2 < 0x90) {
          uVar9 = (ulong)((byte)"gsys_light_diffuse"[0x11 - (ulong)(uVar2 >> 3)] >>
                         ((ulong)uVar2 & 7)) & 1;
        }
        else {
          uVar9 = 0;
        }
        uVar7 = (ulong)*(ushort *)(lVar6 + 8 + uVar7 * 0x10 + uVar9 * 2 + 4);
        puVar10 = (uint *)(lVar6 + 8 + uVar7 * 0x10);
        bVar4 = (int)uVar2 < (int)*puVar10;
        uVar2 = *puVar10;
      } while (bVar4);
    }
    psVar8 = *(short **)(puVar10 + 2);
    if ((((*psVar8 == 0x12) &&
         ((*(long *)(psVar8 + 1) == s_gsys_light_diffuse_040f1951._0_8_ &&
          *(long *)(psVar8 + 5) == s_gsys_light_diffuse_040f1951._8_8_) &&
          psVar8[9] == s_gsys_light_diffuse_040f1951._16_2_)) &&
        (uVar7 = (long)puVar10 + (-0x18 - lVar6), ((uVar7 ^ 0xffffffffffffffff) & 0xffffffff0) != 0)
        ) && ((*(long *)(lVar13 + 0x10) != 0 &&
              (lVar6 = *(long *)(lVar13 + 0x10) + (long)(int)(uVar7 >> 4) * 0x18,
              *(short *)(lVar6 + 0x10) != 0)))) {
      *(undefined1 *)(param_1 + 8) = 0;
      local_68 = **(long **)(lVar6 + 8) + 2;
      local_70 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      iVar5 = FUN_039e06b0(lVar11,&local_70);
      if (iVar5 != -1) {
        *(char *)(param_1 + 8) = (char)iVar5;
        cVar3 = *(char *)(param_3 + 0x194);
        if (cVar3 != -1) {
          if (iVar5 * 0x1000000 == -0x1000000) {
            lVar6 = 0;
          }
          else {
            uVar2 = iVar5 * 0x1000000 >> 0x18;
            if (*(uint *)(lVar11 + 0x1d0) <= uVar2) {
              uVar2 = 0;
            }
            lVar6 = *(long *)(lVar11 + 0x1d8) + (long)(int)uVar2 * 0x910;
          }
          if ((int)cVar3 <= *(int *)(lVar6 + 0x6a8)) {
            if (cVar3 != 0) {
              lVar6 = *(long *)(*(long *)(lVar6 + 0x6b0) + (long)(cVar3 + -1) * 8);
            }
            *(undefined1 *)(param_1 + 8) = *(undefined1 *)(lVar6 + 0x309);
          }
        }
      }
    }
    lVar6 = *(long *)(lVar13 + 0x18);
    if (lVar6 != 0) {
      uVar7 = (ulong)*(ushort *)(lVar6 + 0xc);
      puVar10 = (uint *)((int *)(lVar6 + 8) + uVar7 * 4);
      uVar2 = *puVar10;
      if (*(int *)(lVar6 + 8) < (int)uVar2) {
        do {
          if (uVar2 < 0x98) {
            uVar9 = (ulong)((byte)"gsys_light_specular"[0x12 - (ulong)(uVar2 >> 3)] >>
                           ((ulong)uVar2 & 7)) & 1;
          }
          else {
            uVar9 = 0;
          }
          uVar7 = (ulong)*(ushort *)(lVar6 + 8 + uVar7 * 0x10 + uVar9 * 2 + 4);
          puVar10 = (uint *)(lVar6 + 8 + uVar7 * 0x10);
          bVar4 = (int)uVar2 < (int)*puVar10;
          uVar2 = *puVar10;
        } while (bVar4);
      }
      psVar8 = *(short **)(puVar10 + 2);
      if (((*psVar8 == 0x13) &&
          ((*(long *)(psVar8 + 1) == s_gsys_light_specular_040897a2._0_8_ &&
           *(long *)(psVar8 + 5) ==
           CONCAT53(s_gsys_light_specular_040897a2._11_5_,s_gsys_light_specular_040897a2._8_3_)) &&
           *(long *)((long)psVar8 + 0xd) ==
           CONCAT35(s_gsys_light_specular_040897a2._16_3_,s_gsys_light_specular_040897a2._11_5_)))
         && ((uVar7 = (long)puVar10 + (-0x18 - lVar6),
             ((uVar7 ^ 0xffffffffffffffff) & 0xffffffff0) != 0 &&
             ((*(long *)(lVar13 + 0x10) != 0 &&
              (lVar6 = *(long *)(lVar13 + 0x10) + (long)(int)(uVar7 >> 4) * 0x18,
              *(short *)(lVar6 + 0x10) != 0)))))) {
        *(undefined1 *)(param_1 + 9) = 0;
        local_68 = **(long **)(lVar6 + 8) + 2;
        local_70 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        iVar5 = FUN_039e06b0(lVar11,&local_70);
        if (iVar5 != -1) {
          *(char *)(param_1 + 9) = (char)iVar5;
          cVar3 = *(char *)(param_3 + 0x194);
          if (cVar3 != -1) {
            if (iVar5 * 0x1000000 == -0x1000000) {
              lVar11 = 0;
            }
            else {
              uVar2 = iVar5 * 0x1000000 >> 0x18;
              if (*(uint *)(lVar11 + 0x1d0) <= uVar2) {
                uVar2 = 0;
              }
              lVar11 = *(long *)(lVar11 + 0x1d8) + (long)(int)uVar2 * 0x910;
            }
            if ((int)cVar3 <= *(int *)(lVar11 + 0x6a8)) {
              if (cVar3 != 0) {
                lVar11 = *(long *)(*(long *)(lVar11 + 0x6b0) + (long)(cVar3 + -1) * 8);
              }
              *(undefined1 *)(param_1 + 9) = *(undefined1 *)(lVar11 + 0x309);
            }
          }
        }
      }
    }
  }
  lVar11 = *(long *)(lVar13 + 0x18);
  if (lVar11 == 0) {
    return;
  }
  uVar7 = (ulong)*(ushort *)(lVar11 + 0xc);
  puVar10 = (uint *)((int *)(lVar11 + 8) + uVar7 * 4);
  uVar2 = *puVar10;
  if (*(int *)(lVar11 + 8) < (int)uVar2) {
    do {
      if (uVar2 < 0x80) {
        uVar9 = (ulong)((byte)"gsys_env_obj_set"[0xf - (ulong)(uVar2 >> 3)] >> ((ulong)uVar2 & 7)) &
                1;
      }
      else {
        uVar9 = 0;
      }
      uVar7 = (ulong)*(ushort *)(lVar11 + 8 + uVar7 * 0x10 + uVar9 * 2 + 4);
      puVar10 = (uint *)(lVar11 + 8 + uVar7 * 0x10);
      bVar4 = (int)uVar2 < (int)*puVar10;
      uVar2 = *puVar10;
    } while (bVar4);
  }
  psVar8 = *(short **)(puVar10 + 2);
  if (*psVar8 != 0x10) {
    return;
  }
  if (*(long *)(psVar8 + 1) != s_gsys_env_obj_set_04089791._0_8_ ||
      *(long *)(psVar8 + 5) != s_gsys_env_obj_set_04089791._8_8_) {
    return;
  }
  uVar7 = (long)puVar10 + (-0x18 - lVar11);
  if (((uVar7 ^ 0xffffffffffffffff) & 0xffffffff0) == 0) {
    return;
  }
  if (*(long *)(lVar13 + 0x10) == 0) {
    return;
  }
  lVar11 = *(long *)(lVar13 + 0x10) + (long)(int)(uVar7 >> 4) * 0x18;
  if (*(short *)(lVar11 + 0x10) == 0) {
    return;
  }
  local_68 = **(long **)(lVar11 + 8) + 2;
  local_70 = &PTR_LAB_048f9770;
  iVar5 = *(int *)(param_2 + 0x5578);
  if (iVar5 == 0) {
    return;
  }
  plVar14 = *(long **)(param_2 + 0x5580);
  plVar1 = plVar14 + iVar5;
  do {
    lVar13 = *plVar14;
    plVar12 = (long *)(lVar13 + 0xa0);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar11 = *(long *)(lVar13 + 0xa8);
    (*(code *)local_70[3])(&local_70);
    if (lVar11 == local_68) {
LAB_039dddec:
      if (*plVar14 == 0) {
        return;
      }
      iVar5 = *(int *)(param_2 + 0x5578);
      if (iVar5 == 0) {
        return;
      }
      lVar11 = 0;
      lVar13 = (long)iVar5 << 3;
      do {
        if (*(long *)(*(long *)(param_2 + 0x5580) + lVar11 * 8) == *plVar14) {
          *(short *)(param_1 + 0xc) = (short)lVar11;
          return;
        }
        lVar11 = lVar11 + 1;
        lVar13 = lVar13 + -8;
      } while (lVar13 != 0);
      return;
    }
    uVar7 = 0;
    bVar4 = true;
    lVar11 = *(long *)(lVar13 + 0xa8) + 1;
    do {
      lVar13 = lVar11 + uVar7;
      lVar6 = local_68 + 1 + uVar7;
      cVar3 = *(char *)(lVar13 + -1);
      if (cVar3 != *(char *)(lVar6 + -1)) break;
      if (cVar3 == '\0') {
        if (bVar4) goto LAB_039dddec;
        break;
      }
      cVar3 = *(char *)(lVar11 + uVar7);
      if (cVar3 != *(char *)(local_68 + 1 + uVar7)) break;
      if (cVar3 == '\0') goto LAB_039dddec;
      cVar3 = *(char *)(lVar13 + 1);
      if (cVar3 != *(char *)(lVar6 + 1)) break;
      if (cVar3 == '\0') goto LAB_039dddec;
      bVar4 = uVar7 < 0x7fffe;
      uVar7 = uVar7 + 3;
    } while (uVar7 != 0x80001);
    plVar14 = plVar14 + 1;
    if (plVar14 == plVar1) {
      return;
    }
  } while( true );
}

