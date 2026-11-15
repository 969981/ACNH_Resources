
void FUN_021e2300(undefined4 *param_1,long param_2,int *param_3,byte param_4,ulong param_5,
                 undefined4 *param_6,byte param_7)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *__s;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  undefined2 uVar13;
  float fVar14;
  float fVar15;
  undefined4 local_86c;
  undefined8 local_860;
  undefined4 *local_840;
  long lStack_838;
  byte local_830;
  byte local_82f;
  undefined *local_828;
  undefined1 auStack_820 [1876];
  uint local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined **local_a8;
  undefined4 **local_a0;
  uint local_98;
  byte local_94;
  undefined1 auStack_78 [8];
  
  puVar3 = PTR_DAT_04bb43c0;
  local_ac = 0;
  if (*param_3 == 0x12) {
    local_ac = 0xfe000;
  }
  else if (*param_3 == 0x10) {
    local_ac = 0x1ffe;
  }
  uVar13 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar12 = PTR_DAT_04bb37e0[2];
  uVar1 = PTR_DAT_04bb37e0[3];
  local_86c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_b4 = uVar13;
  local_b2 = uVar12;
  local_b1 = uVar1;
  local_b0 = local_86c;
  if ((param_5 & 1) != 0) {
    local_828 = PTR_DAT_04bbfe60 + 0x10;
    memset(auStack_820,0,0x754);
    uVar4 = nn::os::GetSystemTick();
    local_cc = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
    local_c8 = (local_cc ^ local_cc >> 0x1e) * 0x6c078965 + 2;
    local_c4 = (local_c8 ^ local_c8 >> 0x1e) * 0x6c078965 + 3;
    local_c0 = (local_c4 ^ local_c4 >> 0x1e) * 0x6c078965 + 4;
    __s = (void *)FUN_01a451fc(&local_828);
    memset(__s,0,0x754);
    local_830 = param_4 & 1;
    local_840 = &local_ac;
    local_82f = param_7 & 1;
    local_860._0_4_ = *param_3;
    lStack_838 = param_2;
    if ((int)local_860 == 0x12) {
      local_860 = (undefined **)CONCAT44(local_860._4_4_,0x12);
      local_a0 = (undefined4 **)&local_860;
      local_a8 = &PTR_FUN_049ff448;
      FUN_008a1ba0(&local_828,&local_a8);
      uVar4 = 0;
      local_a0 = &local_840;
      local_a8 = &PTR_FUN_04a77090;
      do {
        (**(code **)(local_828 + 0x10))(&local_860,&local_828,uVar4);
        lVar7 = (**(code **)(local_828 + 0x20))(&local_828);
        uVar6 = 1 << (ulong)(uVar4 & 0x1f);
        if ((*(uint *)(lVar7 + (ulong)(uVar4 >> 5) * 4) & uVar6) != 0) {
          lVar7 = *(long *)puVar3;
          uVar5 = FUN_0277d6c4(&local_860);
          if (*(long *)puVar3 != 0) {
            lVar7 = *(long *)(lVar7 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if (((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
               (uVar8 = (*(code *)*local_a8)(&local_a8,&local_860), (uVar8 & 1) != 0))
            goto LAB_021e2630;
          }
          lVar7 = (**(code **)(local_828 + 0x18))(&local_828);
          lVar10 = (ulong)(uVar4 >> 5) * 4;
          *(uint *)(lVar7 + lVar10) = *(uint *)(lVar7 + lVar10) & (uVar6 ^ 0xffffffff);
        }
LAB_021e2630:
        uVar4 = uVar4 + 1;
      } while (uVar4 != 15000);
    }
    else if ((int)local_860 == 0x10) {
      local_860 = (undefined **)CONCAT44(local_860._4_4_,0x10);
      local_a0 = (undefined4 **)&local_860;
      local_a8 = &PTR_FUN_049ff448;
      FUN_008a1ba0(&local_828,&local_a8);
      uVar4 = 0;
      local_a0 = &local_840;
      local_a8 = &PTR_FUN_04a77068;
      do {
        (**(code **)(local_828 + 0x10))(&local_860,&local_828,uVar4);
        lVar7 = (**(code **)(local_828 + 0x20))(&local_828);
        uVar6 = 1 << (ulong)(uVar4 & 0x1f);
        if ((*(uint *)(lVar7 + (ulong)(uVar4 >> 5) * 4) & uVar6) != 0) {
          lVar7 = *(long *)puVar3;
          uVar5 = FUN_0277d6c4(&local_860);
          if (*(long *)puVar3 != 0) {
            lVar7 = *(long *)(lVar7 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if (((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
               (uVar8 = (*(code *)*local_a8)(&local_a8,&local_860), (uVar8 & 1) != 0))
            goto LAB_021e2740;
          }
          lVar7 = (**(code **)(local_828 + 0x18))(&local_828);
          lVar10 = (ulong)(uVar4 >> 5) * 4;
          *(uint *)(lVar7 + lVar10) = *(uint *)(lVar7 + lVar10) & (uVar6 ^ 0xffffffff);
        }
LAB_021e2740:
        uVar4 = uVar4 + 1;
      } while (uVar4 != 15000);
    }
    else {
      if ((int)local_860 != 9) {
        uVar9 = *param_6;
        uVar11 = param_6[1];
        goto LAB_021e2bfc;
      }
      local_a8 = &PTR_FUN_049ff448;
      local_a0 = (undefined4 **)&local_860;
      FUN_008a1ba0(&local_828,&local_a8);
      local_860._0_4_ = 10;
      local_a8 = &PTR_FUN_049ff448;
      local_a0 = (undefined4 **)&local_860;
      FUN_008a1ba0(&local_828,&local_a8);
      if (*(int *)(param_2 + 4) == 0x2e) {
        local_860._0_4_ = 0xb;
        local_a8 = &PTR_FUN_049ff448;
        local_a0 = (undefined4 **)&local_860;
        FUN_008a1ba0(&local_828,&local_a8);
      }
      uVar4 = 0;
      local_a0 = &local_840;
      local_a8 = &PTR_FUN_04a77018;
      do {
        (**(code **)(local_828 + 0x10))(&local_860,&local_828,uVar4);
        lVar7 = (**(code **)(local_828 + 0x20))(&local_828);
        uVar6 = 1 << (ulong)(uVar4 & 0x1f);
        if ((*(uint *)(lVar7 + (ulong)(uVar4 >> 5) * 4) & uVar6) != 0) {
          lVar7 = *(long *)puVar3;
          uVar5 = FUN_0277d6c4(&local_860);
          if (*(long *)puVar3 != 0) {
            lVar7 = *(long *)(lVar7 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if (((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
               (uVar8 = (*(code *)*local_a8)(&local_a8,&local_860), (uVar8 & 1) != 0))
            goto LAB_021e2520;
          }
          lVar7 = (**(code **)(local_828 + 0x18))(&local_828);
          lVar10 = (ulong)(uVar4 >> 5) * 4;
          *(uint *)(lVar7 + lVar10) = *(uint *)(lVar7 + lVar10) & (uVar6 ^ 0xffffffff);
        }
LAB_021e2520:
        uVar4 = uVar4 + 1;
      } while (uVar4 != 15000);
      uVar4 = 0;
      local_860 = &PTR_FUN_04a77040;
      do {
        (**(code **)(local_828 + 0x10))(auStack_78,&local_828,uVar4);
        lVar7 = (**(code **)(local_828 + 0x20))(&local_828);
        uVar6 = 1 << (ulong)(uVar4 & 0x1f);
        if ((*(uint *)(lVar7 + (ulong)(uVar4 >> 5) * 4) & uVar6) != 0) {
          lVar7 = *(long *)puVar3;
          uVar5 = FUN_0277d6c4(auStack_78);
          if (*(long *)puVar3 != 0) {
            lVar7 = *(long *)(lVar7 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if (((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
               (uVar8 = (*(code *)*local_860)(&local_860,auStack_78), (uVar8 & 1) != 0))
            goto LAB_021e2830;
          }
          lVar7 = (**(code **)(local_828 + 0x18))(&local_828);
          lVar10 = (ulong)(uVar4 >> 5) * 4;
          *(uint *)(lVar7 + lVar10) = *(uint *)(lVar7 + lVar10) & (uVar6 ^ 0xffffffff);
        }
LAB_021e2830:
        uVar4 = uVar4 + 1;
      } while (uVar4 != 15000);
    }
    local_a0 = (undefined4 **)(**(code **)(local_828 + 0x20))(&local_828);
    uVar8 = 0;
    local_94 = 1;
    local_98 = 0;
    do {
      uVar4 = (uint)uVar8;
      if ((*(uint *)((long)local_a0 + (uVar8 >> 5) * 4) >> (ulong)(uVar4 & 0x1f) & 1) != 0) {
        local_98 = uVar4;
        break;
      }
      uVar8 = (ulong)(uVar4 + 1);
    } while (uVar4 + 1 != 15000);
    uVar6 = local_98;
    local_a8 = (undefined **)(PTR_DAT_04bb5860 + 0x10);
    lVar7 = (**(code **)(local_828 + 0x20))(&local_828);
    uVar4 = 15000;
    do {
      if ((*(uint *)(lVar7 + (ulong)(uVar4 - 1 >> 5) * 4) >> (ulong)(uVar4 - 1 & 0x1f) & 1) != 0)
      break;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    if (uVar4 != uVar6) {
      fVar15 = 0.0;
LAB_021e29b4:
      (*(code *)*local_a8)(&local_860,&local_a8);
      fVar14 = (float)FUN_021df720(&local_860,param_2,param_4 & 1,param_7 & 1,0,0);
      if (DAT_05594b4c == '\x01') {
        uVar6 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        DAT_05582b70 = DAT_05582b74;
        DAT_05582b74 = DAT_05582b78;
        uVar6 = uVar6 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar6 ^ DAT_05582b7c;
        DAT_05582b78 = DAT_05582b7c;
        DAT_05582b7c = uVar6;
      }
      else {
        uVar6 = nn::os::GetSystemTick();
        uVar5 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
        uVar6 = uVar5 ^ uVar5 * 0x800;
        uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
        uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
        uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
        uVar6 = uVar6 >> 8 ^ uVar5 >> 0x13 ^ uVar6 ^ uVar5;
      }
      fVar15 = fVar15 + fVar14;
      if (fVar15 * ((float)(uVar6 >> 9 | 0x3f800000) + -1.0) < fVar14) {
        local_86c = local_860._4_4_;
        uVar12 = local_860._2_1_;
        uVar1 = local_860._3_1_;
        uVar13 = (undefined2)local_860;
      }
      do {
        local_98 = local_98 + 1;
        uVar6 = (uint)local_94;
        if (0x752 < local_98 >> 3) {
          local_98 = 0x3a95;
          goto LAB_021e2ae4;
        }
      } while (uVar6 != (*(uint *)((long)local_a0 + (ulong)(local_98 >> 5) * 4) >>
                         (ulong)(local_98 & 0x1f) & 1));
      goto LAB_021e29a8;
    }
  }
LAB_021e2b84:
  puVar2 = PTR_DAT_04bb37e0;
  lVar7 = *(long *)puVar3;
  uVar4 = FUN_0277d6c4(&local_b4);
  if (*(long *)puVar3 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      *(undefined2 *)param_1 = uVar13;
      *(undefined1 *)((long)param_1 + 2) = uVar12;
      *(undefined1 *)((long)param_1 + 3) = uVar1;
      param_1[1] = local_86c;
      return;
    }
  }
  if (*param_3 == 9) {
    uVar9 = *(undefined4 *)(param_2 + 0x1c);
    uVar11 = *(undefined4 *)(param_2 + 0x20);
  }
  else {
    uVar9 = *(undefined4 *)puVar2;
    uVar11 = *(undefined4 *)(puVar2 + 4);
  }
LAB_021e2bfc:
  *param_1 = uVar9;
  param_1[1] = uVar11;
  return;
  while( true ) {
    uVar5 = local_98 + 1;
    if ((uint)(uVar6 != 0) ==
        (*(uint *)((long)local_a0 + (ulong)(uVar5 >> 5) * 4) >> (ulong)(uVar5 & 0x1f) & 1))
    goto LAB_021e29a0;
    if ((uint)(uVar6 != 0) ==
        (*(uint *)((long)local_a0 + (ulong)(local_98 >> 5) * 4) >> (ulong)(local_98 & 0x1f) & 1))
    goto LAB_021e29a4;
    local_98 = local_98 - 3;
    if (local_98 == 0xfffffffd) break;
LAB_021e2ae4:
    uVar5 = local_98 + 2;
    if ((((uint)(uVar6 != 0) ^
         *(uint *)((long)local_a0 + (ulong)(uVar5 >> 5) * 4) >> (ulong)(uVar5 & 0x1f)) & 1) == 0) {
LAB_021e29a0:
      local_98 = uVar5;
LAB_021e29a4:
      local_98 = local_98 + 1;
      goto LAB_021e29a8;
    }
  }
  local_98 = 0;
LAB_021e29a8:
  if (uVar4 == local_98) goto LAB_021e2b5c;
  goto LAB_021e29b4;
LAB_021e2b5c:
  local_b0 = local_86c;
  local_b4 = uVar13;
  local_b2 = uVar12;
  local_b1 = uVar1;
  goto LAB_021e2b84;
}

