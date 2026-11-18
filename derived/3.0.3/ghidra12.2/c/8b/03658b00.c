
uint FUN_03658b00(long param_1,long *param_2)

{
  uint *puVar1;
  ushort *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  undefined2 *puVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  short sVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  ulong uVar16;
  uint *puVar17;
  uint extraout_w8;
  uint uVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  short *psVar22;
  undefined4 *puVar23;
  uint local_4070;
  undefined4 local_406c;
  undefined2 uStack_4068;
  undefined2 local_4064;
  undefined2 uStack_4060;
  undefined2 local_405c;
  undefined2 uStack_4058;
  undefined2 local_4054;
  undefined2 uStack_4050;
  undefined2 local_404c;
  undefined2 uStack_4048;
  undefined2 local_4044;
  undefined2 uStack_4040;
  undefined2 local_403c;
  undefined2 uStack_4038;
  undefined2 local_4034;
  undefined2 uStack_4030;
  undefined2 local_402c;
  undefined2 uStack_4028;
  undefined2 local_4024;
  undefined2 uStack_4020;
  undefined2 local_401c;
  undefined2 uStack_4018;
  undefined2 local_4014;
  undefined2 uStack_4010;
  undefined2 local_400c;
  undefined2 uStack_4008;
  undefined2 local_4004;
  undefined2 uStack_4000;
  undefined2 local_3ffc;
  undefined2 uStack_3ff8;
  undefined2 local_3ff4;
  undefined2 uStack_3ff0;
  undefined2 local_3fec;
  undefined2 uStack_3fe8;
  undefined2 local_3fe4;
  undefined2 uStack_3fe0;
  undefined2 local_3fdc;
  undefined2 uStack_3fd8;
  undefined2 local_3fd4;
  undefined2 uStack_3fd0;
  undefined2 local_3fcc;
  undefined2 uStack_3fc8;
  undefined2 local_3fc4;
  undefined2 uStack_3fc0;
  undefined2 local_3fbc;
  undefined2 uStack_3fb8;
  undefined2 local_3fb4;
  undefined2 uStack_3fb0;
  undefined2 local_3fac;
  undefined2 uStack_3fa8;
  undefined2 local_3fa4;
  undefined2 uStack_3fa0;
  undefined2 local_3f9c;
  undefined2 uStack_3f98;
  undefined2 local_3f94;
  undefined2 uStack_3f90;
  undefined2 local_3f8c;
  undefined2 uStack_3f88;
  undefined2 local_3f84;
  undefined2 uStack_3f80;
  undefined2 local_3f7c;
  undefined2 local_3f78;
  undefined2 local_3f74;
  undefined2 local_3f70;
  undefined1 auStack_3f6c [16128];
  uint local_6c [3];
  
  uVar14 = FUN_04002180(param_2,0xf,8,&local_4070);
  if ((uVar14 & 1) == 0) goto LAB_0365af24;
  uVar19 = *(uint *)(param_1 + 0x2030);
  iVar9 = (int)param_2[1];
  if (uVar19 < 0x800) {
    memset((void *)((ulong)uVar19 * 2 + param_1 + 0x30),0,(ulong)uVar19 * -2 + 0x1000);
  }
  uVar19 = local_4070;
  if (local_4070 < 10) {
    lVar21 = 0;
    do {
      puVar2 = (ushort *)(param_1 + 0x30 + lVar21);
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,puVar2,2);
      }
      else if ((int)param_2[1] == 1) {
        uVar11 = *puVar2;
        uVar8 = uVar11 >> 8 | uVar11 << 8;
        if ((int)param_2[2] != 0xff00) {
          uVar8 = uVar11;
        }
        local_406c = CONCAT22(local_406c._2_2_,uVar8);
        (**(code **)(*param_2 + 0x30))(param_2,&local_406c);
      }
      else {
        local_406c = (uint)local_406c._2_2_ << 0x10;
        (**(code **)(*param_2 + 0x20))(param_2,&local_406c,2);
        uVar8 = (ushort)local_406c >> 8 | (ushort)local_406c << 8;
        if ((int)param_2[2] != 0xff00) {
          uVar8 = (ushort)local_406c;
        }
        *puVar2 = uVar8;
      }
      lVar21 = lVar21 + 2;
    } while (lVar21 != 0x1000);
  }
  else {
    FUN_03611b50(param_2,param_1 + 0x30,param_1 + 0x1030);
  }
  puVar1 = (uint *)(param_1 + 0x2030);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar1;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar1 = uVar18;
  }
  puVar3 = (uint *)(param_1 + 0x2034);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar3,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar3;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar3 = uVar18;
  }
  puVar3 = (uint *)(param_1 + 0x203c);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar3,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar3;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar3 = uVar18;
  }
  puVar4 = (uint *)(param_1 + 0x2040);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar4;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar4 = uVar18;
  }
  puVar17 = (uint *)(param_1 + 0x2044);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  puVar5 = (uint *)(param_1 + 0x2038);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar17;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar17 = uVar18;
  }
  local_406c._0_1_ = *(char *)(param_1 + 0x2048);
  (**(code **)(*param_2 + 0x28))(param_2,&local_406c);
  *(char *)(param_1 + 0x2048) = (char)local_406c != '\0';
  local_406c = CONCAT31(local_406c._1_3_,*(undefined1 *)(param_1 + 0x2049));
  (**(code **)(*param_2 + 0x28))(param_2,&local_406c);
  *(bool *)(param_1 + 0x2049) = (char)local_406c != '\0';
  if (uVar19 == 0) {
    *puVar5 = 0;
  }
  else {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_406c = CONCAT31(local_406c._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
    }
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar5,4);
    }
    else if ((int)param_2[1] == 1) {
      uVar18 = *puVar5;
      uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
      local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_406c = uVar18;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
    }
    else {
      local_406c = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
      uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
      uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar18 = local_406c;
      }
      *puVar5 = uVar18;
    }
  }
  uVar15 = FUN_0365af60(param_2,param_1 + 0x204c,uVar19);
  uVar15 = FUN_0365af60(uVar15,param_1 + 0x2098,uVar19);
  FUN_0365d0d0(uVar15,param_1 + 0x20e4,uVar19);
  puVar17 = (uint *)(param_1 + 0x20f0);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar17;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar17 = uVar18;
  }
  puVar17 = (uint *)(param_1 + 0x20f4);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar17;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar17 = uVar18;
  }
  local_406c._0_1_ = *(char *)(param_1 + 0x20f8);
  (**(code **)(*param_2 + 0x28))(param_2,&local_406c);
  *(bool *)(param_1 + 0x20f8) = (char)local_406c != '\0';
  local_406c = CONCAT31(local_406c._1_3_,*(undefined1 *)(param_1 + 0x20f9));
  (**(code **)(*param_2 + 0x28))(param_2,&local_406c);
  *(bool *)(param_1 + 0x20f9) = (char)local_406c != '\0';
  FUN_0365d710(param_2,param_1 + 0x20fc,uVar19);
  puVar17 = (uint *)(param_1 + 0x2108);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar17;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar17 = uVar18;
  }
  if (0xb < uVar19) {
    puVar17 = (uint *)(param_1 + 0x210c);
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_406c._1_3_ = (undefined3)(local_406c >> 8);
      local_406c = CONCAT31(local_406c._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
    }
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
    }
    else if ((int)param_2[1] == 1) {
      uVar18 = *puVar17;
      uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
      local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_406c = uVar18;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
    }
    else {
      local_406c = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
      uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
      uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar18 = local_406c;
      }
      *puVar17 = uVar18;
    }
    puVar17 = (uint *)(param_1 + 0x2110);
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_406c = CONCAT31(local_406c._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
    }
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
    }
    else if ((int)param_2[1] == 1) {
      uVar18 = *puVar17;
      uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
      local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_406c = uVar18;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
    }
    else {
      local_406c = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
      uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
      uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar18 = local_406c;
      }
      *puVar17 = uVar18;
    }
  }
  uVar15 = FUN_0365d0d0(param_2,param_1 + 0x2114,uVar19);
  uVar15 = FUN_0365d310(uVar15,param_1 + 0x2120);
  FUN_0365d710(uVar15,param_1 + 0x2134,uVar19);
  puVar17 = (uint *)(&DAT_00002140 + param_1);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar17;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar17 = uVar18;
  }
  puVar17 = (uint *)(param_1 + 0x2144);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar17;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar17 = uVar18;
  }
  if (0xb < uVar19) {
    puVar17 = (uint *)(param_1 + 0x2148);
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_406c._1_3_ = (undefined3)(local_406c >> 8);
      local_406c = CONCAT31(local_406c._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
    }
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
    }
    else if ((int)param_2[1] == 1) {
      uVar18 = *puVar17;
      uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
      local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_406c = uVar18;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
    }
    else {
      local_406c = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
      uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
      uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar18 = local_406c;
      }
      *puVar17 = uVar18;
    }
    puVar17 = (uint *)(param_1 + 0x214c);
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_406c = CONCAT31(local_406c._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
    }
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
    }
    else if ((int)param_2[1] == 1) {
      uVar18 = *puVar17;
      uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
      local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_406c = uVar18;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
    }
    else {
      local_406c = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
      uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
      uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar18 = local_406c;
      }
      *puVar17 = uVar18;
    }
  }
  puVar17 = (uint *)(param_1 + 0x2150);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar17;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar17 = uVar18;
  }
  puVar17 = (uint *)(param_1 + 0x2154);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar17;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar17 = uVar18;
  }
  puVar17 = (uint *)(param_1 + 0x2158);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar17;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar17 = uVar18;
  }
  puVar17 = (uint *)(param_1 + 0x215c);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar17;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar17 = uVar18;
  }
  puVar17 = (uint *)(param_1 + 0x2160);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar17;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar17 = uVar18;
  }
  local_406c = CONCAT31(local_406c._1_3_,*(undefined1 *)(param_1 + 0x2164));
  (**(code **)(*param_2 + 0x28))(param_2,&local_406c);
  *(bool *)(param_1 + 0x2164) = (char)local_406c != '\0';
  FUN_0365d710(param_2,param_1 + 0x2168,uVar19);
  puVar17 = (uint *)(param_1 + 0x2174);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar17;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar17 = uVar18;
  }
  puVar17 = (uint *)(param_1 + 0x2178);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar17;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar17 = uVar18;
  }
  puVar17 = (uint *)(param_1 + 0x217c);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar17;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar17 = uVar18;
  }
  local_406c._0_1_ = *(char *)(param_1 + 0x2180);
  (**(code **)(*param_2 + 0x28))(param_2,&local_406c);
  *(bool *)(param_1 + 0x2180) = (char)local_406c != '\0';
  local_406c._0_1_ = *(char *)(param_1 + 0x2184);
  (**(code **)(*param_2 + 0x28))(param_2,&local_406c);
  *(bool *)(param_1 + 0x2184) = (char)local_406c != '\0';
  local_406c._0_1_ = *(char *)(param_1 + 0x2185);
  (**(code **)(*param_2 + 0x28))(param_2,&local_406c);
  *(bool *)(param_1 + 0x2185) = (char)local_406c != '\0';
  local_406c = CONCAT31(local_406c._1_3_,*(undefined1 *)(param_1 + 0x2186));
  (**(code **)(*param_2 + 0x28))(param_2,&local_406c);
  *(bool *)(param_1 + 0x2186) = (char)local_406c != '\0';
  puVar17 = (uint *)(param_1 + 0x2188);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar17;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar17 = uVar18;
  }
  iVar10 = (int)param_2[1];
  if (iVar10 == 2) {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_406c = CONCAT31(local_406c._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) {
LAB_0365a330:
          local_406c = 0;
          goto LAB_0365a334;
        }
        goto LAB_0365a2e0;
      }
    }
LAB_0365a334:
    lVar21 = *param_2;
    puVar17 = &local_406c;
LAB_0365a33c:
    (**(code **)(lVar21 + 0x20))(param_2,puVar17,4);
  }
  else if (iVar10 == 1) {
    uVar18 = *(uint *)(param_1 + 0x21a0);
    local_6c[0] = uVar18;
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_406c = CONCAT31(local_406c._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) goto LAB_0365a330;
        goto LAB_0365a2c8;
      }
      lVar21 = *param_2;
      puVar17 = local_6c;
      goto LAB_0365a33c;
    }
LAB_0365a2c8:
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
LAB_0365a2e0:
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else if (iVar10 == 0) {
    if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_0365a2f8:
      local_406c = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
      uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
      uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar18 = local_406c;
      }
    }
    else {
      local_406c = CONCAT31(local_406c._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,local_6c,4);
        uVar18 = local_6c[0];
      }
      else {
        if ((int)param_2[1] != 1) goto LAB_0365a2f8;
        (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
        uVar18 = extraout_w8;
      }
    }
    *(uint *)(param_1 + 0x21a0) = uVar18;
  }
  puVar17 = (uint *)(param_1 + 0x218c);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar17;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar17 = uVar18;
  }
  if ((iVar9 == 0) && (uVar19 < 0xf)) {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_406c._1_3_ = (undefined3)(local_406c >> 8);
      local_406c = CONCAT31(local_406c._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
    }
    if ((int)param_2[1] == 2) {
      lVar21 = *param_2;
      puVar17 = local_6c;
    }
    else {
      if ((int)param_2[1] == 1) {
        uVar18 = (local_6c[0] & 0xff00ff00) >> 8 | (local_6c[0] & 0xff00ff) << 8;
        local_406c = uVar18 >> 0x10 | uVar18 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          local_406c = local_6c[0];
        }
        (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
        goto LAB_0365a4f0;
      }
      lVar21 = *param_2;
      local_406c = 0;
      puVar17 = &local_406c;
    }
    (**(code **)(lVar21 + 0x20))(param_2,puVar17,4);
  }
LAB_0365a4f0:
  puVar17 = (uint *)(param_1 + 0x2190);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar17;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar17 = uVar18;
  }
  puVar17 = (uint *)(param_1 + 0x2194);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 0) {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar17 = uVar18;
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar17;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
  }
  puVar17 = (uint *)(param_1 + 0x2198);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 0) {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar18 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = local_406c;
    }
    *puVar17 = uVar18;
  }
  else if ((int)param_2[1] == 1) {
    uVar18 = *puVar17;
    uVar13 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    local_406c = uVar13 >> 0x10 | uVar13 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar18;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    (**(code **)(*param_2 + 0x20))(param_2,puVar17,4);
  }
  if ((iVar9 == 0) && (uVar19 < 0xc)) {
    *(undefined4 *)(param_1 + 0x2034) = 0;
    *(undefined8 *)(param_1 + 0x218c) = 0x800000000000;
    *(undefined4 *)(param_1 + 0x21a0) = 0;
    uVar19 = *(int *)(param_1 + 0x2170) * 0x400;
    *(uint *)(param_1 + 0x2194) = uVar19;
    if (uVar19 < 0x8001) {
      *(undefined4 *)(param_1 + 0x21a0) = 1;
    }
    *puVar4 = 0;
    uVar19 = 0x1d24;
    if ((*puVar5 & 0x7ff) == 0) {
      uVar19 = 0x1d25;
    }
    *puVar3 = uVar19;
    *puVar17 = uVar19 << 10;
  }
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x21a4);
  local_406c = CONCAT31(local_406c._1_3_,*(undefined1 *)(param_1 + 0x21a5));
  (**(code **)(*param_2 + 0x28))(param_2,&local_406c);
  *(bool *)(param_1 + 0x21a5) = (char)local_406c != '\0';
  puVar3 = (uint *)(param_1 + 0x21a8);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_406c = CONCAT31(local_406c._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar3,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar19 = *puVar3;
    uVar18 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
    local_406c = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = uVar19;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
  }
  else {
    local_406c = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
    uVar19 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
    uVar19 = uVar19 >> 0x10 | uVar19 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar19 = local_406c;
    }
    *puVar3 = uVar19;
  }
  local_406c = CONCAT31(local_406c._1_3_,*(undefined1 *)(param_1 + 0x21ac));
  (**(code **)(*param_2 + 0x28))(param_2,&local_406c);
  *(bool *)(param_1 + 0x21ac) = (char)local_406c != '\0';
  puVar3 = (uint *)(param_1 + 0x21b0);
  if (local_4070 < 0xe) {
    *puVar3 = 1;
    if (10 < local_4070) goto LAB_0365a9f0;
    if (local_4070 < 9) goto LAB_0365af24;
    FUN_03ffd0a0(param_1 + 0x21b8,param_2);
  }
  else {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_406c = CONCAT31(local_406c._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
    }
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar3,4);
    }
    else if ((int)param_2[1] == 1) {
      uVar19 = *puVar3;
      uVar18 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
      local_406c = uVar18 >> 0x10 | uVar18 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_406c = uVar19;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
    }
    else {
      local_406c = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
      uVar19 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
      uVar19 = uVar19 >> 0x10 | uVar19 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar19 = local_406c;
      }
      *puVar3 = uVar19;
    }
LAB_0365a9f0:
    local_406c = CONCAT31(local_406c._1_3_,*(undefined1 *)(param_1 + 0x21b4));
    (**(code **)(*param_2 + 0x28))(param_2,&local_406c);
    if ((iVar9 == 0) && ((bool)*(char *)(param_1 + 0x21b4) != ((char)local_406c != '\0'))) {
      *(bool *)(param_1 + 0x21b4) = (char)local_406c != '\0';
    }
    FUN_03ffd0a0(param_1 + 0x21b8,param_2);
    FUN_03ffd744(param_1 + 0x21d8,param_2);
  }
  local_406c = CONCAT31(local_406c._1_3_,*(undefined1 *)(param_1 + 0x21e0));
  (**(code **)(*param_2 + 0x28))(param_2,&local_406c);
  *(bool *)(param_1 + 0x21e0) = (char)local_406c != '\0';
  uVar16 = FUN_04002180(param_2,4,0,local_6c);
  if ((uVar16 & 1) != 0) {
    iVar10 = (int)param_2[1];
    puVar3 = (uint *)(param_1 + 0x2570);
    iVar20 = iVar10;
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_406c = CONCAT31(local_406c._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_406c,1);
      iVar20 = (int)param_2[1];
    }
    if (iVar20 == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar3,4);
    }
    else if (iVar20 == 1) {
      uVar19 = *puVar3;
      uVar18 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
      local_406c = uVar18 >> 0x10 | uVar18 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_406c = uVar19;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_406c);
    }
    else {
      local_406c = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
      uVar19 = (local_406c & 0xff00ff00) >> 8 | (local_406c & 0xff00ff) << 8;
      uVar19 = uVar19 >> 0x10 | uVar19 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar19 = local_406c;
      }
      *puVar3 = uVar19;
    }
    uVar19 = local_6c[0];
    if (local_6c[0] < 3) {
      FUN_03611e60(param_2,&local_406c,auStack_3f6c);
      *(undefined2 *)(param_1 + 0x21f0) = (short)local_406c;
      *(undefined2 *)(param_1 + 0x21f2) = uStack_4068;
      *(undefined2 *)(param_1 + 0x21f4) = local_4064;
      *(undefined2 *)(param_1 + 0x21f6) = uStack_4060;
      *(undefined2 *)(param_1 + 0x21f8) = local_405c;
      *(undefined2 *)(param_1 + 0x21fa) = uStack_4058;
      *(undefined2 *)(param_1 + 0x21fc) = local_4054;
      *(undefined2 *)(param_1 + 0x21fe) = uStack_4050;
      *(undefined2 *)(param_1 + 0x2200) = local_404c;
      *(undefined2 *)(param_1 + 0x2202) = uStack_4048;
      *(undefined2 *)(param_1 + 0x2204) = local_4044;
      *(undefined2 *)(param_1 + 0x2206) = uStack_4040;
      *(undefined2 *)(param_1 + 0x2208) = local_403c;
      *(undefined2 *)(param_1 + 0x220a) = uStack_4038;
      *(undefined2 *)(param_1 + 0x220c) = local_4034;
      *(undefined2 *)(param_1 + 0x220e) = uStack_4030;
      *(undefined2 *)(param_1 + 0x2210) = local_402c;
      *(undefined2 *)(param_1 + 0x2212) = uStack_4028;
      *(undefined2 *)(param_1 + 0x2214) = local_4024;
      *(undefined2 *)(param_1 + 0x2216) = uStack_4020;
      *(undefined2 *)(param_1 + 0x2218) = local_401c;
      *(undefined2 *)(param_1 + 0x221a) = uStack_4018;
      *(undefined2 *)(param_1 + 0x221c) = local_4014;
      *(undefined2 *)(param_1 + 0x221e) = uStack_4010;
      *(undefined2 *)(param_1 + 0x2220) = local_400c;
      *(undefined2 *)(param_1 + 0x2222) = uStack_4008;
      *(undefined2 *)(param_1 + 0x2224) = local_4004;
      *(undefined2 *)(param_1 + 0x2226) = uStack_4000;
      *(undefined2 *)(param_1 + 0x2228) = local_3ffc;
      *(undefined2 *)(param_1 + 0x222a) = uStack_3ff8;
      *(undefined2 *)(param_1 + 0x222c) = local_3ff4;
      *(undefined2 *)(param_1 + 0x222e) = uStack_3ff0;
      *(undefined2 *)(param_1 + 0x2230) = local_3fec;
      *(undefined2 *)(param_1 + 0x2232) = uStack_3fe8;
      *(undefined2 *)(param_1 + 0x2234) = local_3fe4;
      *(undefined2 *)(param_1 + 0x2236) = uStack_3fe0;
      *(undefined2 *)(param_1 + 0x2238) = local_3fdc;
      *(undefined2 *)(param_1 + 0x223a) = uStack_3fd8;
      *(undefined2 *)(param_1 + 0x223c) = local_3fd4;
      *(undefined2 *)(param_1 + 0x223e) = uStack_3fd0;
      *(undefined2 *)(param_1 + 0x2240) = local_3fcc;
      *(undefined2 *)(param_1 + 0x2242) = uStack_3fc8;
      *(undefined2 *)(param_1 + 0x2244) = local_3fc4;
      *(undefined2 *)(param_1 + 0x2246) = uStack_3fc0;
      *(undefined2 *)(param_1 + 0x2248) = local_3fbc;
      *(undefined2 *)(param_1 + 0x224a) = uStack_3fb8;
      *(undefined2 *)(param_1 + 0x224c) = local_3fb4;
      *(undefined2 *)(param_1 + 0x224e) = uStack_3fb0;
      *(undefined2 *)(param_1 + 0x2250) = local_3fac;
      *(undefined2 *)(param_1 + 0x2252) = uStack_3fa8;
      *(undefined2 *)(param_1 + 0x2254) = local_3fa4;
      *(undefined2 *)(param_1 + 0x2256) = uStack_3fa0;
      *(undefined2 *)(param_1 + 0x2258) = local_3f9c;
      *(undefined2 *)(param_1 + 0x225a) = uStack_3f98;
      *(undefined2 *)(param_1 + 0x225c) = local_3f94;
      *(undefined2 *)(param_1 + 0x225e) = uStack_3f90;
      *(undefined2 *)(param_1 + 0x2260) = local_3f8c;
      *(undefined2 *)(param_1 + 0x2262) = uStack_3f88;
      *(undefined2 *)(param_1 + 0x2264) = local_3f84;
      *(undefined2 *)(param_1 + 0x2266) = uStack_3f80;
      *(undefined2 *)(param_1 + 0x2268) = local_3f7c;
      *(undefined2 *)(param_1 + 0x226a) = local_3f78;
      *(undefined2 *)(param_1 + 0x226c) = local_3f74;
      *(undefined2 *)(param_1 + 0x226e) = local_3f70;
      if (uVar19 == 2) goto LAB_0365ad90;
      FUN_03611e60(param_2,&local_406c,local_6c);
      memcpy((void *)(param_1 + 0x2370),&local_406c,0x100);
      if (iVar10 == 0) {
        lVar21 = 0;
        puVar23 = (undefined4 *)(param_1 + 0x2374);
        do {
          puVar7 = (undefined2 *)(param_1 + 0x2270 + lVar21);
          lVar21 = lVar21 + 4;
          *puVar7 = (short)puVar23[-1];
          puVar7[1] = (short)*puVar23;
          puVar23 = puVar23 + 2;
        } while (lVar21 != 0x80);
      }
LAB_0365ae50:
      if (iVar10 == 0) {
        lVar21 = 0;
        puVar23 = (undefined4 *)(param_1 + 0x2470);
        do {
          puVar7 = (undefined2 *)(param_1 + 0x22f0 + lVar21);
          lVar21 = lVar21 + 2;
          *puVar23 = puVar23[-0x40];
          *puVar7 = puVar7[-0x40];
          puVar23 = puVar23 + 1;
        } while (lVar21 != 0x80);
      }
      if (uVar19 == 0) {
        *(undefined1 *)(param_1 + 0x2574) = 0;
        goto LAB_0365aecc;
      }
    }
    else {
      FUN_03611b50(param_2,(undefined2 *)(param_1 + 0x21f0),param_1 + 0x2270);
      if (uVar19 == 3) {
LAB_0365ad90:
        FUN_03611e60(param_2,param_1 + 0x2370,param_1 + 0x2470);
        if (iVar10 == 0) {
          lVar21 = 0;
          puVar23 = (undefined4 *)(param_1 + 0x2374);
          do {
            puVar7 = (undefined2 *)(param_1 + 0x2270 + lVar21);
            lVar21 = lVar21 + 4;
            *puVar7 = (short)puVar23[-1];
            puVar7[1] = (short)*puVar23;
            puVar23 = puVar23 + 2;
          } while (lVar21 != 0x80);
          goto LAB_0365ae50;
        }
      }
      else {
        FUN_03611b50(param_2,param_1 + 0x2270,param_1 + 0x22f0);
        if (iVar10 == 0) {
          lVar21 = 0;
          psVar22 = (short *)(param_1 + 0x2272);
          do {
            piVar6 = (int *)(param_1 + 0x2370 + lVar21);
            lVar21 = lVar21 + 8;
            *piVar6 = (int)psVar22[-1];
            sVar12 = *psVar22;
            psVar22 = psVar22 + 2;
            piVar6[1] = (int)sVar12;
          } while (lVar21 != 0x100);
          goto LAB_0365ae50;
        }
      }
    }
    local_406c = CONCAT31(local_406c._1_3_,*(undefined1 *)(param_1 + 0x2574));
    (**(code **)(*param_2 + 0x28))(param_2,&local_406c);
    *(undefined1 *)(param_1 + 0x2574) = (char)local_406c != '\0';
  }
LAB_0365aecc:
  if (0xb < local_4070) {
    FUN_03611b50(param_2,param_1 + 0x1030,puVar1);
    if (local_4070 == 0xc) {
      if (iVar9 == 0) {
        *(undefined8 *)(param_1 + 0x2580) = 0;
        *(undefined4 *)(param_1 + 0x2590) = 0;
        *(undefined8 *)(param_1 + 0x29e0) = 0;
        *(undefined8 *)(param_1 + 0x29e8) = 0;
        *(undefined8 *)(param_1 + 0x29f0) = 0;
        *(undefined8 *)(param_1 + 0x29f8) = 0;
      }
    }
    else {
      FUN_03ffc310(param_1 + 0x2580,param_2);
    }
  }
LAB_0365af24:
  return uVar14 & 1;
}

