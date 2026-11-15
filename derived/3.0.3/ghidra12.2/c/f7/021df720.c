
float FUN_021df720(undefined4 *param_1,int *param_2,uint param_3,uint param_4,uint param_5,
                  uint param_6)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint local_d0;
  int iStack_cc;
  long local_c8;
  uint local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  long local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  uint *local_98;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4();
  if (*(long *)puVar1 == 0) {
    return 0.0;
  }
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if (*(uint *)(lVar11 + 0x1d8) <= uVar3) {
    return 0.0;
  }
  if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return 0.0;
  }
  if ((char)param_2[0x12] == '\0') {
    uVar3 = 0;
    if ((param_6 & 1) == 0) goto LAB_021df7e8;
LAB_021df7d0:
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_0277d7b4(param_1,param_2 + 7);
    if ((param_6 & 1) != 0) goto LAB_021df7d0;
LAB_021df7e8:
    uVar4 = FUN_0268a9c8(param_1,param_2 + 6);
  }
  if ((((uVar3 | param_4) & 1) == 0) &&
     (uVar8 = FUN_0268a884(param_1,(char)param_2[0xb]), ((uVar4 | uVar8) & 1) != 0)) {
    return 0.0;
  }
  local_a0 = *param_1;
  uStack_9c = param_1[1];
  lVar11 = *(long *)puVar1;
  local_98 = (uint *)0x0;
  local_a8 = PTR_DAT_04bc0510 + 0x10;
  uVar4 = FUN_0277d6c4(&local_a0);
  if (*(long *)puVar1 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if (uVar4 < *(uint *)(lVar11 + 0x1d8)) {
        puVar10 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8);
        if (puVar10 != (uint *)0x0) {
          local_98 = puVar10;
        }
      }
    }
  }
  local_b8 = *param_1;
  uStack_b4 = param_1[1];
  lVar12 = *(long *)puVar1;
  local_b0 = 0;
  uVar4 = FUN_0277d6c4(&local_b8);
  lVar11 = DAT_04ca7a08;
  if (*(long *)puVar1 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if (((uVar4 < *(uint *)(lVar12 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) && (DAT_04ca7a08 != 0))
    {
      uVar9 = FUN_0277d6c4(param_1);
      local_b0 = lVar11 + (uVar9 & 0xffffffff) * 0x23;
      if (0x752 < ((uint)(uVar9 >> 3) & 0x1fffffff)) {
        local_b0 = lVar11;
      }
    }
  }
  local_bc = FUN_007b0ea4(&local_b8,param_2 + 1);
  if (((param_3 & 1) != 0) && (local_bc == 4)) {
    return 0.0;
  }
  if (*param_2 == 0x13) {
    local_d0 = FUN_01ae3210(&local_a8);
    local_c0 = FUN_01ae3bc0(&local_a8);
    if (((local_d0 != param_2[0xc]) && (local_d0 != param_2[0xd])) &&
       ((local_c0 != param_2[0xc] && (local_c0 != param_2[0xd])))) {
      return 0.0;
    }
  }
  param_4 = param_4 ^ 1;
  if (((param_4 & 1) == 0) && ((param_5 & 1) != 0)) {
    if (DAT_05594b4c == '\x01') {
      uVar4 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar4 = uVar4 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar4 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar4;
    }
    else {
      uVar4 = nn::os::GetSystemTick();
      uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
      uVar8 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
      uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
      uVar4 = uVar4 ^ uVar4 * 0x800 ^ (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 4;
    }
    if (-1 < (int)uVar4) {
      fVar17 = 6.0;
      fVar14 = 6.0;
      fVar15 = 8.0;
      goto LAB_021e00cc;
    }
  }
  fVar14 = 0.0;
  if (local_bc < 3) {
    fVar14 = *(float *)(&DAT_04179cb8 + (long)(int)local_bc * 4);
  }
  if ((uVar3 & 1) == 0) {
    if (((param_4 | param_5) & 1) == 0) {
      if (DAT_05594b4c == '\x01') {
        uVar4 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        DAT_05582b70 = DAT_05582b74;
        DAT_05582b74 = DAT_05582b78;
        uVar4 = uVar4 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar4 ^ DAT_05582b7c;
        DAT_05582b78 = DAT_05582b7c;
        DAT_05582b7c = uVar4;
      }
      else {
        uVar4 = nn::os::GetSystemTick();
        uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
        uVar8 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
        uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
        uVar4 = uVar4 ^ uVar4 * 0x800 ^ (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 4;
      }
      if (-1 < (int)uVar4) goto LAB_021dfb20;
    }
  }
  else {
LAB_021dfb20:
    fVar14 = 6.0;
  }
  switch(param_2[6]) {
  case 0:
    local_d0 = 0;
    break;
  case 1:
    local_d0 = 1;
    break;
  case 2:
    local_d0 = 2;
    break;
  case 3:
    local_d0 = 3;
    break;
  default:
    local_d0 = 4;
    goto LAB_021dfb7c;
  }
  local_d0 = FUN_021e0120(param_1,&local_d0);
LAB_021dfb7c:
  fVar17 = 0.0;
  if (local_d0 < 3) {
    fVar17 = *(float *)(&DAT_04179cb8 + (long)(int)local_d0 * 4);
  }
  iVar5 = FUN_01ae58b0(&local_a8);
  if ((char)param_2[0xb] == '\0') {
    if (iVar5 == 0) goto LAB_021dfbe4;
    if (iVar5 == 1) {
      return 0.0;
    }
LAB_021dfbc0:
    fVar15 = 3.0;
    if (param_2[9] != 1) {
      fVar15 = 0.0;
    }
    fVar13 = 6.0;
    if (param_2[9] != 0) {
      fVar13 = fVar15;
    }
  }
  else {
    if (iVar5 != 0) {
      if (iVar5 == 2) {
        return 0.0;
      }
      goto LAB_021dfbc0;
    }
LAB_021dfbe4:
    fVar13 = 4.0;
  }
  uVar4 = param_2[0xc];
  uVar8 = param_2[0xd];
  uVar6 = FUN_01ae3210(&local_a8);
  local_d0 = uVar6;
  uVar7 = FUN_01ae3bc0(&local_a8);
  if (uVar6 == uVar7) {
    if (uVar4 == uVar6) {
      bVar2 = uVar4 == uVar8;
      fVar16 = 4.0;
      fVar15 = 6.0;
    }
    else {
      bVar2 = uVar8 == uVar6;
      fVar16 = 0.0;
      fVar15 = 3.0;
    }
LAB_021dfca4:
    if (!bVar2) {
      fVar15 = fVar16;
    }
  }
  else {
    if (uVar6 != uVar4) {
      if (uVar6 == uVar8) {
        bVar2 = uVar7 == uVar4;
        fVar16 = 2.5;
        fVar15 = 5.0;
      }
      else if (uVar7 == uVar4) {
        bVar2 = uVar7 == uVar8;
        fVar16 = 2.5;
        fVar15 = 3.0;
      }
      else {
        fVar16 = 0.0;
        fVar15 = 2.0;
        bVar2 = uVar7 == uVar8;
      }
      goto LAB_021dfca4;
    }
    if (uVar6 != uVar8) {
      bVar2 = uVar7 == uVar8;
      fVar16 = 3.5;
      fVar15 = 5.5;
      goto LAB_021dfca4;
    }
    fVar15 = 4.0;
  }
  uVar4 = param_2[0xe];
  uVar8 = param_2[0xf];
  if (local_98 == (uint *)0x0) {
    local_c0 = 1;
    local_d0 = 1;
  }
  else {
    uVar6 = *local_98;
    local_d0 = 0;
    if ((uVar6 != 0) && (local_98 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)local_98 - (long)(ulong)uVar6);
      local_d0 = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)local_98 - lVar11) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05326c78) &&
               (local_d0 = (uint)*(ushort *)(DAT_05326c80 + (long)(int)uVar7 * 2), local_d0 < 7))
            goto LAB_021dfd44;
          }
        }
        local_d0 = 0;
      }
    }
LAB_021dfd44:
    local_c0 = 0;
    uVar6 = *local_98;
    if ((uVar6 != 0) && (local_98 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)local_98 - (long)(ulong)uVar6);
      local_c0 = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)local_98 - lVar11) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05326c78) &&
               (local_c0 = (uint)*(ushort *)(DAT_05326c80 + (long)(int)uVar7 * 2), local_c0 < 7))
            goto LAB_021dfde8;
          }
        }
        local_c0 = 0;
      }
    }
  }
LAB_021dfde8:
  if (local_d0 == local_c0) {
    if (uVar4 == local_d0) {
      bVar2 = uVar4 == uVar8;
      fVar19 = 4.0;
      fVar16 = 6.0;
    }
    else {
      bVar2 = uVar8 == local_d0;
      fVar19 = 0.0;
      fVar16 = 3.0;
    }
LAB_021dfe84:
    if (!bVar2) {
      fVar16 = fVar19;
    }
  }
  else {
    if (local_d0 != uVar4) {
      if (local_d0 == uVar8) {
        bVar2 = local_c0 == uVar4;
        fVar19 = 2.5;
        fVar16 = 5.0;
      }
      else if (local_c0 == uVar4) {
        bVar2 = local_c0 == uVar8;
        fVar19 = 2.5;
        fVar16 = 3.0;
      }
      else {
        fVar19 = 0.0;
        fVar16 = 2.0;
        bVar2 = local_c0 == uVar8;
      }
      goto LAB_021dfe84;
    }
    if (local_d0 != uVar8) {
      bVar2 = local_c0 == uVar8;
      fVar19 = 3.5;
      fVar16 = 5.5;
      goto LAB_021dfe84;
    }
    fVar16 = 4.0;
  }
  fVar18 = 0.0;
  fVar19 = 0.0;
  if (param_2[0x10] != 9) {
    local_d0 = FUN_007b0ea4(&local_b8);
    if (local_d0 < 3) {
      fVar19 = *(float *)(&DAT_04179cb8 + (long)(int)local_d0 * 4);
    }
  }
  if (param_2[0x11] != 9) {
    uVar4 = FUN_007b0ea4(&local_b8);
    if (uVar4 < 3) {
      fVar18 = *(float *)(&DAT_04179cb8 + (long)(int)uVar4 * 4);
    }
  }
  lVar11 = *(long *)puVar1;
  local_d0 = param_2[7];
  iStack_cc = param_2[8];
  local_c8 = 0;
  if (fVar19 <= fVar18) {
    fVar19 = fVar18;
  }
  uVar4 = FUN_0277d6c4(&local_d0);
  lVar12 = DAT_04ca7a08;
  if (*(long *)puVar1 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if (((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) && (DAT_04ca7a08 != 0))
    {
      uVar9 = FUN_0277d6c4(param_2 + 7);
      local_c8 = lVar12 + (uVar9 & 0xffffffff) * 0x23;
      if (0x752 < ((uint)(uVar9 >> 3) & 0x1fffffff)) {
        local_c8 = lVar12;
      }
    }
  }
  uVar4 = 0;
  do {
    local_c0 = uVar4;
    iVar5 = FUN_007b1100(&local_c0);
    fVar18 = fVar19;
    if ((iVar5 == 1) && (iVar5 = FUN_007b0ea4(&local_d0,&local_c0), iVar5 != 4)) {
      uVar8 = FUN_007b0ea4(&local_b8,&local_c0);
      fVar18 = 0.0;
      if (uVar8 < 3) {
        fVar18 = *(float *)(&DAT_04179cb8 + (long)(int)uVar8 * 4);
      }
      if (fVar18 <= fVar19) {
        fVar18 = fVar19;
      }
    }
    fVar19 = fVar18;
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x33);
  if (fVar16 <= fVar19) {
    fVar16 = fVar19;
  }
  fVar13 = (fVar15 + fVar16 + fVar16 + fVar13 * 3.0) / 3.0 + -4.0;
  fVar15 = 8.0;
  if (fVar13 <= 8.0) {
    fVar15 = fVar13;
  }
  fVar16 = 0.0;
  if (0.0 <= fVar13) {
    fVar16 = fVar15;
  }
  fVar15 = 8.0;
  if ((uVar3 & 1) == 0) {
    if (((param_4 | param_5) & 1) == 0) {
      if (DAT_05594b4c == '\x01') {
        uVar3 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        DAT_05582b70 = DAT_05582b74;
        DAT_05582b74 = DAT_05582b78;
        uVar3 = uVar3 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar3 ^ DAT_05582b7c;
        DAT_05582b78 = DAT_05582b7c;
        DAT_05582b7c = uVar3;
      }
      else {
        uVar3 = nn::os::GetSystemTick();
        uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
        uVar4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
        uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
        uVar3 = uVar3 ^ uVar3 * 0x800 ^ (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
      }
      if (-1 < (int)uVar3) goto LAB_021e00cc;
    }
    fVar15 = fVar16;
  }
LAB_021e00cc:
  fVar14 = powf(fVar17 * (float)param_2[3] + (float)param_2[2] * fVar14 + (float)param_2[4] * fVar15
                ,(float)param_2[5]);
  return fVar14;
}

