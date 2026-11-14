
void FUN_01b079ec(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  byte bVar11;
  long lVar12;
  uint *puVar13;
  undefined8 *puVar14;
  uint *puVar15;
  long lVar16;
  undefined8 local_a0;
  undefined2 local_98;
  undefined1 local_96;
  byte local_95;
  undefined4 local_94;
  uint *local_90;
  undefined2 local_88;
  undefined1 local_86;
  byte local_85;
  undefined4 local_84;
  undefined **local_80;
  undefined4 local_78;
  undefined4 local_74;
  long local_70;
  uint local_68;
  uint local_64;
  
  if (((DAT_0532acf0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_0532acf0), iVar9 != 0)) {
    DAT_0532ace8 = 0x9c4;
    FUN_0277d4ac();
    __cxa_guard_release(&DAT_0532acf0);
  }
  if (((DAT_0532ad00 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_0532ad00), iVar9 != 0)) {
    DAT_0532acf8 = 0x839;
    FUN_0277d4ac();
    __cxa_guard_release(&DAT_0532ad00);
  }
  puVar4 = PTR_DAT_04bb43c0;
  local_70 = 0;
  local_78 = *(uint *)(param_2 + 8);
  local_74 = *(undefined4 *)(param_2 + 0xc);
  local_80 = &PTR_FUN_04a36b50;
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_78);
  lVar12 = DAT_0532a768;
  if (*(long *)puVar4 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      uVar7 = FUN_0277d6c4((uint *)(param_2 + 8));
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
         (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8), lVar12 != 0)) {
        local_70 = lVar12;
      }
    }
  }
  uVar10 = FUN_01b032d0(&local_80);
  if (((((uVar10 & 1) != 0) && (uVar10 = FUN_01b032d0(&local_80), (uVar10 & 1) != 0)) &&
      ((local_78 & 0x3000000) != 0)) && (uVar10 = FUN_01b032d0(&local_80), (uVar10 & 1) != 0)) {
    local_78 = local_78 & 0xbfffffff;
  }
  local_a0 = (undefined **)((ulong)local_a0._4_4_ << 0x20);
  uVar10 = FUN_01b032d0(&local_80);
  if ((uVar10 & 1) != 0) {
    uVar10 = FUN_01b032d0(&local_80);
    if (((uVar10 & 1) == 0) || ((local_78 & 0x3000000) == 0)) {
      bVar11 = local_78._3_1_ & 0xc3;
    }
    else {
      bVar11 = (byte)(((uint)local_a0 & 0xf) << 2) | local_78._3_1_ & 0xc3;
    }
    local_78 = CONCAT13(bVar11,(undefined3)local_78);
  }
  local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
  uVar10 = FUN_01b032d0(&local_80);
  uVar1 = local_74;
  bVar11 = local_78._3_1_;
  if ((uVar10 & 1) != 0) {
    bVar11 = local_78._3_1_ & 0xfc | (byte)local_a0 & 3;
    local_78 = CONCAT13(bVar11,(undefined3)local_78);
  }
  uVar5 = (undefined2)local_78;
  uVar6 = local_78._2_1_;
  local_88 = (undefined2)local_78;
  lVar16 = *(long *)puVar4;
  local_86 = local_78._2_1_;
  local_84 = local_74;
  local_85 = bVar11;
  uVar7 = FUN_0277d6c4(&local_88);
  lVar12 = *(long *)puVar4;
  if (lVar12 == 0) {
LAB_01b07d68:
    uVar10 = FUN_01b032d0(param_2);
    uVar7 = *(byte *)(param_2 + 0xb) & 3;
    if ((uVar10 & 1) == 0) {
      uVar7 = 0;
    }
    local_a0 = (undefined **)CONCAT44(local_a0._4_4_,uVar7);
    uVar10 = FUN_01b032d0(param_2);
    bVar11 = *(byte *)(param_2 + 0xb) >> 2 & 0xf;
    if ((uVar10 & 1) == 0) {
      bVar11 = 1;
    }
    if (((uint)local_a0 == 3) && (bVar11 != 0xf)) {
      iVar9 = FUN_01b03610();
joined_r0x01b07dbc:
      if (iVar9 != 0) {
LAB_01b07dc0:
        puVar14 = &DAT_0532acf8;
        goto LAB_01b080e0;
      }
    }
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_01b07d68;
    local_a0 = &PTR_FUN_04a36b50;
    local_98 = uVar5;
    local_96 = uVar6;
    local_94 = uVar1;
    local_90 = (uint *)0x0;
    local_95 = bVar11;
    uVar7 = FUN_0277d6c4(&local_98);
    lVar16 = DAT_0532a768;
    if (*(long *)puVar4 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        uVar7 = FUN_0277d6c4(&local_88);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar16 + 0x1d8)) &&
           (puVar13 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8),
           puVar13 != (uint *)0x0)) {
          local_90 = puVar13;
        }
      }
    }
    uVar10 = FUN_01b032d0(param_2);
    local_64 = *(byte *)(param_2 + 0xb) & 3;
    if ((uVar10 & 1) == 0) {
      local_64 = 0;
    }
    uVar10 = FUN_01b032d0(param_2);
    bVar3 = *(byte *)(param_2 + 0xb) >> 2 & 0xf;
    if ((uVar10 & 1) == 0) {
      bVar3 = 1;
    }
    if (((local_64 == 3) && (bVar3 != 0xf)) && (local_68 = FUN_01b03610(), local_68 != 0)) {
      local_64 = 0x86;
      if (local_90 == (uint *)0x0) {
        local_68 = 0xbc;
      }
      else {
        uVar7 = *local_90;
        local_68 = 0;
        if ((uVar7 != 0) && (local_90 != (uint *)(ulong)uVar7)) {
          puVar13 = (uint *)((long)local_90 - (long)(ulong)uVar7);
          local_68 = 0;
          if (*puVar13 != 0) {
            uVar7 = puVar13[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
              lVar12 = 0xc;
              if (*(char *)((long)puVar13 + 10) != '\0') {
                lVar12 = 0x1c;
              }
              lVar12 = (long)puVar13 + lVar12 + (ulong)(ushort)puVar13[2] * 8;
              if (lVar12 != 0) {
                uVar8 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar8 = (uint)((ulong)((long)local_90 - lVar12) / (ulong)uVar7);
                }
                if (*puVar13 <= uVar8) {
                  uVar8 = 0xffffffff;
                }
                if ((uVar8 < DAT_05326ec0) &&
                   (local_68 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar8 * 2),
                   local_68 < 0xbd)) goto LAB_01b07fd4;
              }
            }
            local_68 = 0;
          }
        }
      }
LAB_01b07fd4:
      if (((local_68 == 0x86) && (uVar10 = FUN_01b032d0(&local_a0), (uVar10 & 1) != 0)) &&
         ((uVar10 = FUN_01b032d0(&local_a0), (uVar10 & 1) == 0 || ((local_95 & 3) == 0))))
      goto LAB_01b07df0;
      goto LAB_01b07dc0;
    }
    uVar10 = FUN_01b032d0(&local_a0);
    if (((uVar10 & 1) != 0) &&
       ((uVar10 = FUN_01b032d0(&local_a0), (uVar10 & 1) == 0 || ((local_95 & 3) == 0)))) {
LAB_01b07df0:
      puVar13 = local_90;
      local_64 = 0xb4;
      if (local_90 == (uint *)0x0) {
code_r0x01b08060:
        local_64 = 0xb9;
        local_68 = 0xbc;
LAB_01b0806c:
        if (local_68 != local_64) {
          uVar10 = FUN_01af2868(param_2);
          if ((uVar10 & 1) == 0) {
            uVar1 = *(undefined4 *)(param_2 + 0xc);
            *param_1 = *(undefined4 *)(param_2 + 8);
            param_1[1] = uVar1;
            return;
          }
          *(undefined2 *)param_1 = uVar5;
          *(undefined1 *)((long)param_1 + 2) = uVar6;
          *(byte *)((long)param_1 + 3) = bVar11;
          param_1[1] = uVar1;
          return;
        }
      }
      else {
        uVar7 = *local_90;
        local_68 = 0;
        if ((uVar7 != 0) && (local_90 != (uint *)(ulong)uVar7)) {
          puVar15 = (uint *)((long)local_90 - (long)(ulong)uVar7);
          local_68 = 0;
          if (*puVar15 != 0) {
            uVar7 = puVar15[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
              lVar12 = 0xc;
              if (*(char *)((long)puVar15 + 10) != '\0') {
                lVar12 = 0x1c;
              }
              lVar12 = (long)puVar15 + lVar12 + (ulong)(ushort)puVar15[2] * 8;
              if (lVar12 != 0) {
                uVar8 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar8 = (uint)((ulong)((long)local_90 - lVar12) / (ulong)uVar7);
                }
                if (*puVar15 <= uVar8) {
                  uVar8 = 0xffffffff;
                }
                if ((uVar8 < DAT_05326ec0) &&
                   (local_68 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar8 * 2),
                   local_68 < 0xbd)) goto LAB_01b07e8c;
              }
            }
            local_68 = 0;
          }
        }
LAB_01b07e8c:
        if (local_68 != 0xb4) {
          local_68 = 0;
          local_64 = 0xb3;
          uVar7 = *local_90;
          if ((uVar7 != 0) && (local_90 != (uint *)(ulong)uVar7)) {
            puVar15 = (uint *)((long)local_90 - (long)(ulong)uVar7);
            local_68 = 0;
            if (*puVar15 != 0) {
              uVar7 = puVar15[1];
              if ((uVar7 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
                lVar12 = 0xc;
                if (*(char *)((long)puVar15 + 10) != '\0') {
                  lVar12 = 0x1c;
                }
                lVar12 = (long)puVar15 + lVar12 + (ulong)(ushort)puVar15[2] * 8;
                if (lVar12 != 0) {
                  uVar8 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar8 = (uint)((ulong)((long)local_90 - lVar12) / (ulong)uVar7);
                  }
                  if (*puVar15 <= uVar8) {
                    uVar8 = 0xffffffff;
                  }
                  if ((uVar8 < DAT_05326ec0) &&
                     (local_68 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar8 * 2),
                     local_68 < 0xbd)) goto LAB_01b07f34;
                }
              }
              local_68 = 0;
            }
          }
LAB_01b07f34:
          if (local_68 != 0xb3) {
            local_64 = 0xb2;
            if (local_90 == (uint *)0x0) goto code_r0x01b08060;
            uVar8 = FUN_03853b94(local_90);
            uVar7 = DAT_05326ec0;
            if ((DAT_05326ec0 <= uVar8) ||
               (uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar8 * 2), local_68 = (uint)uVar2,
               0xbc < uVar2)) {
              local_68 = 0;
            }
            if (local_68 != local_64) {
              local_64 = 0xb9;
              uVar8 = FUN_03853b94(puVar13);
              if ((uVar7 <= uVar8) ||
                 (uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar8 * 2), local_68 = (uint)uVar2,
                 0xbc < uVar2)) {
                local_68 = 0;
              }
              goto LAB_01b0806c;
            }
          }
        }
      }
      uVar10 = FUN_01b032d0(param_2);
      local_64 = *(byte *)(param_2 + 0xb) & 3;
      if ((uVar10 & 1) == 0) {
        local_64 = 0;
      }
      uVar10 = FUN_01b032d0(param_2);
      bVar11 = *(byte *)(param_2 + 0xb) >> 2 & 0xf;
      if ((uVar10 & 1) == 0) {
        bVar11 = 1;
      }
      if ((local_64 != 3) || (bVar11 == 0xf)) goto LAB_01b080d8;
      iVar9 = FUN_01b03610();
      goto joined_r0x01b07dbc;
    }
  }
LAB_01b080d8:
  puVar14 = &DAT_0532ace8;
LAB_01b080e0:
  uVar1 = *(undefined4 *)((long)puVar14 + 4);
  *param_1 = *(undefined4 *)puVar14;
  param_1[1] = uVar1;
  return;
}

