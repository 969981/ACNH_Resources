
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0373424c(long param_1,undefined4 *param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined2 *puVar9;
  ushort uVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined2 local_124;
  undefined1 local_122;
  undefined1 local_121;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined2 local_f0;
  undefined2 uStack_ee;
  undefined4 uStack_ec;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  undefined4 local_6c;
  
  puVar7 = PTR_DAT_04bb43c0;
  local_b8 = *param_2;
  uStack_b4 = param_2[1];
  uVar6 = *(undefined2 *)(param_2 + 6);
  local_b0 = *(undefined8 *)(param_2 + 2);
  uVar4 = *(undefined1 *)((long)param_2 + 0x1a);
  uVar5 = *(undefined1 *)((long)param_2 + 0x1b);
  local_a8 = param_2[4];
  uStack_a4 = param_2[5];
  uVar3 = param_2[7];
  local_a0 = *(undefined8 *)(param_2 + 6);
  local_98 = param_2[8];
  local_88 = *(undefined8 *)(param_2 + 0xc);
  uStack_90 = (undefined4)*(undefined8 *)(param_2 + 10);
  uStack_8c = (undefined4)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20);
  local_94 = param_2[9];
  local_80 = param_2[0xe];
  uStack_7c = param_2[0xf];
  local_78 = param_2[0x10];
  local_74 = param_2[0x11];
  if (param_3 == 0xffffffff) {
    return;
  }
  if (param_3 < *(uint *)(param_1 + 0xe0)) {
    lVar13 = *(long *)(*(long *)(param_1 + 0xe8) + (long)(int)param_3 * 8);
  }
  else {
    lVar13 = 0;
  }
  if (*(int *)(lVar13 + 0x3c) == 1) {
    if ((*(ushort *)(lVar13 + 0x114) >> 0xb & 1) == 0) {
      FUN_0372d6e0(&local_b8,lVar13 + 0x10);
    }
    else {
      uVar3 = *(undefined4 *)(lVar13 + 0xd4);
      local_f0 = 0xffff;
      uStack_ec = 0xfffe;
      uStack_e8 = 0;
      uStack_e6 = 0;
      uStack_e5 = 0;
      FUN_0277d4ac(&uStack_ec);
      local_e4 = 0xfffe;
      uStack_e0 = 0;
      FUN_0277d4ac(&local_e4);
      local_dc = 0xfffe;
      uStack_d8 = 0;
      FUN_0277d4ac(&local_dc);
      local_d4 = 0xfffe;
      FUN_0277d4ac(&local_d4);
      local_cc = 0xfffe;
      FUN_0277d4ac(&local_cc);
      local_c4 = 0xfffe;
      FUN_0277d4ac(&local_c4);
      FUN_0215db20(&local_124,*(undefined8 *)PTR_DAT_04bb4890,uVar3);
      local_b8 = local_120;
      uStack_b4 = uStack_11c;
      local_b0 = CONCAT44(uStack_114,local_118);
      local_a0 = local_110;
      local_98 = local_108;
      local_94 = uStack_104;
      local_88 = CONCAT44(uStack_fc,local_100);
    }
    goto LAB_037347d8;
  }
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  local_124 = uVar6;
  local_122 = uVar4;
  local_121 = uVar5;
  local_120 = uVar3;
  uVar8 = FUN_0277d6c4(&local_124);
  lVar14 = *(long *)puVar7;
  if (lVar14 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      uStack_e0 = 0;
      local_dc = 0;
      local_f0 = SUB82(puVar1,0);
      uStack_ee = (undefined2)((ulong)puVar1 >> 0x10);
      uStack_ec = (undefined4)((ulong)puVar1 >> 0x20);
      uStack_e8 = uVar6;
      uStack_e6 = uVar4;
      uStack_e5 = uVar5;
      local_e4 = uVar3;
      uVar8 = FUN_0277d6c4(&uStack_e8);
      if (*(long *)puVar7 == 0) {
LAB_03734560:
        local_70 = 0xbc;
      }
      else {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((*(uint *)(lVar14 + 0x1d8) <= uVar8) ||
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_03734560;
        lVar14 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4(&local_124);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((*(uint *)(lVar14 + 0x1d8) <= uVar8) ||
           (puVar11 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8),
           puVar11 == (uint *)0x0)) goto LAB_03734560;
        local_70 = 0;
        uVar8 = *puVar11;
        if ((uVar8 != 0) && (puVar11 != (uint *)(ulong)uVar8)) {
          puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar8);
          local_70 = 0;
          if (*puVar12 != 0) {
            uVar8 = puVar12[1];
            if ((uVar8 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
              lVar14 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar12 + lVar14 + (ulong)(ushort)puVar12[2] * 8;
              if (lVar14 != 0) {
                uVar2 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar11 - lVar14) / (ulong)uVar8);
                }
                if (*puVar12 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (local_70 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2),
                   local_70 < 0xbd)) goto LAB_0373456c;
              }
            }
            local_70 = 0;
          }
        }
      }
LAB_0373456c:
      local_6c = 0xac;
      if (local_70 == 0xac) {
        if (*(int *)(lVar13 + 0x3c) == 0) {
          if (DAT_053e67f0 != 0) {
            lVar14 = FUN_00ede184(DAT_053e67f0,lVar13 + 0x10);
            if (lVar14 == 0) {
              local_f0 = 0x200d;
            }
            else {
              puVar9 = (undefined2 *)
                       FUN_0079e910(lVar14,0x14,0x870f1e29,*(undefined8 *)PTR_DAT_04bb6960);
              if (puVar9 == (undefined2 *)0x0) {
                local_f0 = 0xfffe;
              }
              else {
                local_f0 = *puVar9;
              }
            }
            uStack_ec = 0;
            uStack_ee = 0;
            FUN_0277d4ac(&local_f0);
            local_a0 = CONCAT44(uStack_ec,CONCAT22(uStack_ee,local_f0));
          }
        }
        else {
          local_a0 = CONCAT44(DAT_0558600c,_DAT_05586008);
        }
      }
    }
  }
  uVar6 = *(undefined2 *)param_2;
  uVar4 = *(undefined1 *)((long)param_2 + 2);
  uVar5 = *(undefined1 *)((long)param_2 + 3);
  uVar3 = param_2[1];
  lVar15 = *(long *)puVar7;
  local_124 = uVar6;
  local_122 = uVar4;
  local_121 = uVar5;
  local_120 = uVar3;
  uVar8 = FUN_0277d6c4(&local_124);
  lVar14 = *(long *)puVar7;
  if (lVar14 == 0) goto LAB_037347d8;
  lVar15 = *(long *)(lVar15 + 0x57e58);
  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
  if ((*(uint *)(lVar15 + 0x1d8) <= uVar8) ||
     (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_037347d8;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  uStack_e0 = 0;
  local_dc = 0;
  local_f0 = SUB82(puVar1,0);
  uStack_ee = (undefined2)((ulong)puVar1 >> 0x10);
  uStack_ec = (undefined4)((ulong)puVar1 >> 0x20);
  uStack_e8 = uVar6;
  uStack_e6 = uVar4;
  uStack_e5 = uVar5;
  local_e4 = uVar3;
  uVar8 = FUN_0277d6c4(&uStack_e8);
  if (*(long *)puVar7 == 0) {
LAB_037347a8:
    uVar10 = 0xbc;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_037347a8;
    lVar14 = *(long *)PTR_DAT_04bc0428;
    uVar8 = FUN_0277d6c4(&local_124);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar8) ||
       (puVar11 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8),
       puVar11 == (uint *)0x0)) goto LAB_037347a8;
    uVar10 = 0;
    uVar8 = *puVar11;
    if ((uVar8 != 0) && (puVar11 != (uint *)(ulong)uVar8)) {
      puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar8);
      uVar10 = 0;
      if (*puVar12 != 0) {
        uVar8 = puVar12[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar12 + lVar14 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar14 != 0) {
            uVar2 = 0;
            if ((ulong)uVar8 != 0) {
              uVar2 = (uint)((ulong)((long)puVar11 - lVar14) / (ulong)uVar8);
            }
            if (*puVar12 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar10 < 0xbd))
            goto LAB_037347b4;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_037347b4:
  if (uVar10 == 0xac) {
    local_b8 = _DAT_05586008;
    uStack_b4 = DAT_0558600c;
  }
LAB_037347d8:
  *(undefined4 *)(lVar13 + 0x40) = local_b8;
  *(undefined4 *)(lVar13 + 0x44) = uStack_b4;
  *(undefined8 *)(lVar13 + 0x48) = local_b0;
  *(ulong *)(lVar13 + 0x50) = CONCAT44(uStack_a4,local_a8);
  *(undefined4 *)(lVar13 + 0x58) = (undefined4)local_a0;
  *(undefined4 *)(lVar13 + 0x5c) = local_a0._4_4_;
  *(undefined2 *)(lVar13 + 0x60) = (undefined2)local_98;
  *(undefined1 *)(lVar13 + 0x62) = local_98._2_1_;
  *(undefined1 *)(lVar13 + 99) = local_98._3_1_;
  *(ulong *)(lVar13 + 100) = CONCAT44(uStack_90,local_94);
  *(undefined4 *)(lVar13 + 0x6c) = uStack_8c;
  *(undefined8 *)(lVar13 + 0x70) = local_88;
  *(ulong *)(lVar13 + 0x78) = CONCAT44(uStack_7c,local_80);
  *(undefined4 *)(lVar13 + 0x80) = local_78;
  *(undefined4 *)(lVar13 + 0x84) = local_74;
  *(ushort *)(lVar13 + 0x114) = *(ushort *)(lVar13 + 0x114) | 2;
  return;
}

