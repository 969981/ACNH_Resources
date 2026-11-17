
void FUN_02cd12f8(long *param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  ulong local_15c;
  int local_154;
  undefined2 local_150;
  undefined1 local_14e;
  undefined1 local_14d;
  undefined4 local_14c;
  undefined2 local_148;
  undefined1 local_146;
  undefined1 local_145;
  undefined4 local_144;
  undefined2 local_140;
  undefined1 local_13e;
  undefined1 local_13d;
  undefined4 local_13c;
  undefined2 local_138;
  undefined1 local_136;
  undefined1 local_135;
  undefined4 local_134;
  undefined2 local_130;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined4 local_12c;
  undefined2 local_128;
  undefined1 local_126;
  undefined1 local_125;
  undefined4 local_124;
  undefined2 local_120;
  undefined1 local_11e;
  undefined1 local_11d;
  undefined4 local_11c;
  undefined2 local_118;
  undefined1 local_116;
  undefined1 local_115;
  undefined4 local_114;
  undefined2 local_110;
  undefined1 local_10e;
  undefined1 local_10d;
  undefined4 local_10c;
  undefined2 local_108;
  undefined1 local_106;
  undefined1 local_105;
  undefined4 local_104;
  undefined2 local_100;
  undefined1 local_fe;
  undefined1 local_fd;
  undefined4 local_fc;
  undefined2 local_f8;
  undefined1 local_f6;
  undefined1 local_f5;
  undefined4 local_f4;
  undefined2 local_f0;
  undefined1 local_ee;
  undefined1 local_ed;
  undefined4 local_ec;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined4 local_e4;
  undefined2 local_e0;
  undefined1 local_de;
  undefined1 local_dd;
  undefined4 local_dc;
  undefined2 local_d8;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined4 local_d4;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined4 local_cc;
  undefined2 local_c8;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined1 local_be;
  undefined1 local_bd;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined4 local_ac;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined2 local_98;
  undefined1 local_96;
  undefined1 local_95;
  undefined4 local_94;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  uint local_78;
  undefined8 local_74;
  int local_6c;
  
  local_74 = 0xfffe;
  FUN_0277d4ac(&local_74);
  (**(code **)(*param_1 + 0x3d0))(param_1,&local_74,param_2);
  local_78 = FUN_02cd9040(&local_74);
  if (local_78 == 0xffffffff) {
    return;
  }
  if ((local_78 == 9) && (uVar5 = (**(code **)(*param_1 + 0x450))(param_1), (uVar5 & 1) == 0)) {
    return;
  }
  puVar1 = PTR_DAT_04bb37e0;
  local_c0 = *(undefined2 *)PTR_DAT_04bb37e0;
  local_be = PTR_DAT_04bb37e0[2];
  local_bd = PTR_DAT_04bb37e0[3];
  local_bc = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_b8 = local_c0;
  local_b6 = local_be;
  local_b5 = local_bd;
  local_b4 = local_bc;
  local_b0 = local_c0;
  local_ae = local_be;
  local_ad = local_bd;
  local_ac = local_bc;
  local_a8 = local_c0;
  local_a6 = local_be;
  local_a5 = local_bd;
  local_a4 = local_bc;
  local_a0 = local_c0;
  local_9e = local_be;
  local_9d = local_bd;
  local_9c = local_bc;
  local_98 = local_c0;
  local_96 = local_be;
  local_95 = local_bd;
  local_94 = local_bc;
  local_90 = local_c0;
  local_8e = local_be;
  local_8d = local_bd;
  local_8c = local_bc;
  local_88 = local_c0;
  local_86 = local_be;
  local_85 = local_bd;
  local_84 = local_bc;
  local_80 = local_c0;
  local_7e = local_be;
  local_7d = local_bd;
  local_7c = local_bc;
  FUN_02ccabdc(param_1,&local_c0);
  local_150 = *(undefined2 *)puVar1;
  local_14e = puVar1[2];
  local_14d = puVar1[3];
  local_14c = *(undefined4 *)(puVar1 + 4);
  local_108 = local_150;
  local_106 = local_14e;
  local_105 = local_14d;
  local_104 = local_14c;
  local_100 = local_150;
  local_fe = local_14e;
  local_fd = local_14d;
  local_fc = local_14c;
  local_f8 = local_150;
  local_f6 = local_14e;
  local_f5 = local_14d;
  local_f4 = local_14c;
  local_f0 = local_150;
  local_ee = local_14e;
  local_ed = local_14d;
  local_ec = local_14c;
  local_e8 = local_150;
  local_e6 = local_14e;
  local_e5 = local_14d;
  local_e4 = local_14c;
  local_e0 = local_150;
  local_de = local_14e;
  local_dd = local_14d;
  local_dc = local_14c;
  local_d8 = local_150;
  local_d6 = local_14e;
  local_d5 = local_14d;
  local_d4 = local_14c;
  local_d0 = local_150;
  local_ce = local_14e;
  local_cd = local_14d;
  local_cc = local_14c;
  local_c8 = local_150;
  uStack_c6 = local_14e;
  uStack_c5 = local_14d;
  local_c4 = local_14c;
  if (local_78 < 10) {
    puVar8 = (undefined4 *)&local_100;
    switch(local_78) {
    case 0:
      puVar8 = (undefined4 *)&local_108;
      break;
    case 1:
      break;
    case 2:
      puVar8 = (undefined4 *)&local_f8;
      break;
    default:
      puVar8 = (undefined4 *)&local_f0;
      break;
    case 5:
      puVar8 = (undefined4 *)&local_e8;
      break;
    case 6:
      puVar8 = (undefined4 *)&local_e0;
      break;
    case 7:
      puVar8 = (undefined4 *)&local_d8;
      break;
    case 8:
      puVar8 = (undefined4 *)&local_d0;
      break;
    case 9:
      puVar8 = (undefined4 *)&local_c8;
    }
    *puVar8 = (undefined4)local_74;
    puVar8[1] = local_74._4_4_;
  }
  local_148 = local_150;
  local_146 = local_14e;
  local_145 = local_14d;
  local_144 = local_14c;
  local_140 = local_150;
  local_13e = local_14e;
  local_13d = local_14d;
  local_13c = local_14c;
  local_138 = local_150;
  local_136 = local_14e;
  local_135 = local_14d;
  local_134 = local_14c;
  local_130 = local_150;
  local_12e = local_14e;
  local_12d = local_14d;
  local_12c = local_14c;
  local_128 = local_150;
  local_126 = local_14e;
  local_125 = local_14d;
  local_124 = local_14c;
  local_120 = local_150;
  local_11e = local_14e;
  local_11d = local_14d;
  local_11c = local_14c;
  local_118 = local_150;
  local_116 = local_14e;
  local_115 = local_14d;
  local_114 = local_14c;
  local_110 = local_150;
  local_10e = local_14e;
  local_10d = local_14d;
  local_10c = local_14c;
  FUN_025403d0(&local_150,&local_c0,&local_108);
  puVar1 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_150);
  lVar9 = *(long *)puVar1;
  if (lVar9 == 0) {
LAB_02cd1650:
    uVar2 = FUN_0277d6c4(&local_138);
    if (*(long *)puVar1 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        uVar5 = FUN_02cd92f0(&local_138);
        pcVar7 = *(code **)(*param_1 + 0x3a8);
        if ((uVar5 & 1) == 0) {
          uVar6 = 4;
        }
        else {
          uVar6 = 3;
        }
        goto LAB_02cd16b8;
      }
    }
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_02cd1650;
    uVar6 = 0;
    pcVar7 = *(code **)(*param_1 + 0x3a8);
LAB_02cd16b8:
    (*pcVar7)(param_1,uVar6);
  }
  lVar9 = *(long *)puVar1;
  uVar2 = FUN_0277d6c4(&local_148);
  lVar10 = *(long *)puVar1;
  if (lVar10 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if (((uVar2 < *(uint *)(lVar9 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) && (local_78 != 1)) {
      iVar3 = (**(code **)(*param_1 + 0x3e0))(param_1,1);
      local_15c = CONCAT44(local_15c._4_4_,1);
      lVar9 = (**(code **)(*param_1 + 0x278))(param_1);
      if (((lVar9 != 0) && (-1 < iVar3)) && (iVar3 < *(int *)(lVar9 + 0x3cc))) {
        if ((uint)local_15c < 10) {
          *(undefined4 *)((long)param_1 + (local_15c & 0xffffffff) * 4 + 0x1c3ec) = 0xffffffff;
        }
        FUN_02bc30b0(param_1 + 0x387b,lVar9);
      }
      FUN_02cd0f3c(param_1,iVar3,1);
      (**(code **)(*param_1 + 0x400))(param_1,1);
      lVar10 = *(long *)puVar1;
    }
  }
  uVar2 = FUN_0277d6c4(&local_140);
  lVar9 = *(long *)puVar1;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if (((uVar2 < *(uint *)(lVar10 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) && (local_78 != 2)) {
      iVar3 = (**(code **)(*param_1 + 0x3e0))(param_1,2);
      local_15c = CONCAT44(local_15c._4_4_,2);
      lVar9 = (**(code **)(*param_1 + 0x278))(param_1);
      if (((lVar9 != 0) && (-1 < iVar3)) && (iVar3 < *(int *)(lVar9 + 0x3cc))) {
        if ((uint)local_15c < 10) {
          *(undefined4 *)((long)param_1 + (local_15c & 0xffffffff) * 4 + 0x1c3ec) = 0xffffffff;
        }
        FUN_02bc30b0(param_1 + 0x387b,lVar9);
      }
      FUN_02cd0f3c(param_1,iVar3,1);
      (**(code **)(*param_1 + 0x400))(param_1,2);
      lVar9 = *(long *)puVar1;
    }
  }
  uVar2 = FUN_0277d6c4(&local_150);
  lVar10 = *(long *)puVar1;
  if (lVar10 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if (((uVar2 < *(uint *)(lVar9 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) && (local_78 != 0)) {
      iVar3 = (**(code **)(*param_1 + 0x3e0))(param_1,0);
      local_15c = local_15c & 0xffffffff00000000;
      lVar9 = (**(code **)(*param_1 + 0x278))(param_1);
      if (((lVar9 != 0) && (-1 < iVar3)) && (iVar3 < *(int *)(lVar9 + 0x3cc))) {
        if ((uint)local_15c < 10) {
          *(undefined4 *)((long)param_1 + (local_15c & 0xffffffff) * 4 + 0x1c3ec) = 0xffffffff;
        }
        FUN_02bc30b0(param_1 + 0x387b,lVar9);
      }
      FUN_02cd0f3c(param_1,iVar3,1);
      (**(code **)(*param_1 + 0x400))(param_1,0);
      lVar10 = *(long *)puVar1;
    }
  }
  uVar2 = FUN_0277d6c4(&local_128);
  lVar9 = *(long *)puVar1;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if (((uVar2 < *(uint *)(lVar10 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) && (local_78 != 6)) {
      iVar3 = (**(code **)(*param_1 + 0x3e0))(param_1,6);
      local_15c = CONCAT44(local_15c._4_4_,6);
      lVar9 = (**(code **)(*param_1 + 0x278))(param_1);
      if (((lVar9 != 0) && (-1 < iVar3)) && (iVar3 < *(int *)(lVar9 + 0x3cc))) {
        if ((uint)local_15c < 10) {
          *(undefined4 *)((long)param_1 + (local_15c & 0xffffffff) * 4 + 0x1c3ec) = 0xffffffff;
        }
        FUN_02bc30b0(param_1 + 0x387b,lVar9);
      }
      FUN_02cd0f3c(param_1,iVar3,1);
      (**(code **)(*param_1 + 0x400))(param_1,6);
      lVar9 = *(long *)puVar1;
    }
  }
  uVar2 = FUN_0277d6c4(&local_120);
  lVar10 = *(long *)puVar1;
  if (lVar10 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if (((uVar2 < *(uint *)(lVar9 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) && (local_78 != 7)) {
      iVar3 = (**(code **)(*param_1 + 0x3e0))(param_1,6);
      local_15c = CONCAT44(local_15c._4_4_,6);
      lVar9 = (**(code **)(*param_1 + 0x278))(param_1);
      if (((lVar9 != 0) && (-1 < iVar3)) && (iVar3 < *(int *)(lVar9 + 0x3cc))) {
        if ((uint)local_15c < 10) {
          *(undefined4 *)((long)param_1 + (local_15c & 0xffffffff) * 4 + 0x1c3ec) = 0xffffffff;
        }
        FUN_02bc30b0(param_1 + 0x387b,lVar9);
      }
      FUN_02cd0f3c(param_1,iVar3,1);
      (**(code **)(*param_1 + 0x400))(param_1,6);
      lVar10 = *(long *)puVar1;
    }
  }
  uVar2 = FUN_0277d6c4(&local_138);
  if (*(long *)puVar1 != 0) {
    lVar9 = *(long *)(lVar10 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      uVar5 = FUN_02cd92f0(&local_138);
      if ((uVar5 & 1) == 0) {
        if (local_78 != 4) {
          iVar3 = (**(code **)(*param_1 + 0x3e0))(param_1,4);
          local_15c = CONCAT44(local_15c._4_4_,4);
          lVar9 = (**(code **)(*param_1 + 0x278))(param_1);
          if (((lVar9 != 0) && (-1 < iVar3)) && (iVar3 < *(int *)(lVar9 + 0x3cc))) {
            if ((uint)local_15c < 10) {
              *(undefined4 *)((long)param_1 + (local_15c & 0xffffffff) * 4 + 0x1c3ec) = 0xffffffff;
            }
            FUN_02bc30b0(param_1 + 0x387b,lVar9);
          }
          uVar6 = 4;
          goto LAB_02cd1ca4;
        }
      }
      else if (local_78 != 3) {
        iVar3 = (**(code **)(*param_1 + 0x3e0))(param_1,3);
        local_15c = CONCAT44(local_15c._4_4_,3);
        lVar9 = (**(code **)(*param_1 + 0x278))(param_1);
        if (((lVar9 != 0) && (-1 < iVar3)) && (iVar3 < *(int *)(lVar9 + 0x3cc))) {
          if ((uint)local_15c < 10) {
            *(undefined4 *)((long)param_1 + (local_15c & 0xffffffff) * 4 + 0x1c3ec) = 0xffffffff;
          }
          FUN_02bc30b0(param_1 + 0x387b,lVar9);
        }
        uVar6 = 3;
LAB_02cd1ca4:
        FUN_02cd0f3c(param_1,iVar3,1);
        (**(code **)(*param_1 + 0x400))(param_1,uVar6);
      }
    }
  }
  lVar10 = *(long *)puVar1;
  uVar2 = FUN_0277d6c4(&local_130);
  lVar9 = *(long *)puVar1;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if (((uVar2 < *(uint *)(lVar10 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) && (local_78 != 5)) {
      iVar3 = (**(code **)(*param_1 + 0x3e0))(param_1,5);
      local_15c = CONCAT44(local_15c._4_4_,5);
      lVar9 = (**(code **)(*param_1 + 0x278))(param_1);
      if (((lVar9 != 0) && (-1 < iVar3)) && (iVar3 < *(int *)(lVar9 + 0x3cc))) {
        if ((uint)local_15c < 10) {
          *(undefined4 *)((long)param_1 + (local_15c & 0xffffffff) * 4 + 0x1c3ec) = 0xffffffff;
        }
        FUN_02bc30b0(param_1 + 0x387b,lVar9);
      }
      FUN_02cd0f3c(param_1,iVar3,1);
      (**(code **)(*param_1 + 0x400))(param_1,5);
      lVar9 = *(long *)puVar1;
    }
  }
  uVar2 = FUN_0277d6c4(&local_118);
  lVar10 = *(long *)puVar1;
  if (lVar10 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if (((uVar2 < *(uint *)(lVar9 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) && (local_78 != 8)) {
      iVar3 = (**(code **)(*param_1 + 0x3e0))(param_1,8);
      local_15c = CONCAT44(local_15c._4_4_,8);
      lVar9 = (**(code **)(*param_1 + 0x278))(param_1);
      if (((lVar9 != 0) && (-1 < iVar3)) && (iVar3 < *(int *)(lVar9 + 0x3cc))) {
        if ((uint)local_15c < 10) {
          *(undefined4 *)((long)param_1 + (local_15c & 0xffffffff) * 4 + 0x1c3ec) = 0xffffffff;
        }
        FUN_02bc30b0(param_1 + 0x387b,lVar9);
      }
      FUN_02cd0f3c(param_1,iVar3,1);
      (**(code **)(*param_1 + 0x400))(param_1,8);
      lVar10 = *(long *)puVar1;
    }
  }
  uVar2 = FUN_0277d6c4(&local_110);
  if (*(long *)puVar1 == 0) {
LAB_02cd1f8c:
    local_15c = CONCAT44(local_15c._4_4_,local_78);
    if (local_78 == 0xffffffff) goto LAB_02cd1fd8;
  }
  else {
    lVar9 = *(long *)(lVar10 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_02cd1f8c;
    if (local_78 != 9) {
      iVar3 = (**(code **)(*param_1 + 0x3e0))(param_1,9);
      local_15c = CONCAT44(local_15c._4_4_,9);
      lVar9 = (**(code **)(*param_1 + 0x278))(param_1);
      if (((lVar9 != 0) && (-1 < iVar3)) && (iVar3 < *(int *)(lVar9 + 0x3cc))) {
        if ((uint)local_15c < 10) {
          *(undefined4 *)((long)param_1 + (local_15c & 0xffffffff) * 4 + 0x1c3ec) = 0xffffffff;
        }
        FUN_02bc30b0(param_1 + 0x387b,lVar9);
      }
      FUN_02cd0f3c(param_1,iVar3,1);
      (**(code **)(*param_1 + 0x400))(param_1,9);
      goto LAB_02cd1f8c;
    }
    local_15c = CONCAT44(local_15c._4_4_,9);
  }
  lVar9 = (**(code **)(*param_1 + 0x278))(param_1);
  if (((lVar9 != 0) && (-1 < param_2)) && (param_2 < *(int *)(lVar9 + 0x3cc))) {
    FUN_02cd10a0(param_1 + 0x387b,lVar9,local_15c & 0xffffffff,param_2);
  }
LAB_02cd1fd8:
  FUN_02cd0f3c(param_1,param_2,0);
  uVar4 = (**(code **)(*param_1 + 0x3e0))(param_1,local_78);
  FUN_02cd0f3c(param_1,uVar4,1);
  (**(code **)(*param_1 + 0x3f8))(param_1,local_78,param_2);
  (**(code **)(*param_1 + 0x480))(param_1,&local_74);
  uVar5 = (**(code **)(*param_1 + 0x458))(param_1);
  if ((((uVar5 & 1) != 0) && (local_78 == 5)) &&
     (uVar5 = (**(code **)(*param_1 + 0x428))(param_1,4), (uVar5 & 1) == 0)) {
    local_154 = -1;
    local_15c = 0xfffe;
    FUN_0277d4ac(&local_15c);
    (**(code **)(*param_1 + 0x460))(param_1,&local_154,&local_15c);
    if (-1 < local_154) {
      local_6c = FUN_02cd9040(&local_15c);
      iVar3 = local_154;
      if ((((local_6c != -1) && (lVar9 = (**(code **)(*param_1 + 0x278))(param_1), lVar9 != 0)) &&
          (-1 < iVar3)) && (iVar3 < *(int *)(lVar9 + 0x3cc))) {
        FUN_02cd10a0(param_1 + 0x387b,lVar9,local_6c,iVar3);
      }
      FUN_02cd0f3c(param_1,local_154,0);
    }
    (**(code **)(*param_1 + 0x480))(param_1,&local_15c);
  }
  uVar5 = (**(code **)(*param_1 + 0x448))(param_1);
  if ((uVar5 & 1) != 0) {
    (**(code **)(*param_1 + 0x490))(param_1);
  }
  (**(code **)(*param_1 + 0x3c0))(param_1,local_78);
  return;
}

