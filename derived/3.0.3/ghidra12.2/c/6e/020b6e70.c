
void FUN_020b6e70(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined *puVar2;
  byte *pbVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 ****ppppuVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  undefined8 ***pppuVar16;
  undefined *local_128;
  char *pcStack_120;
  undefined *local_118;
  char *pcStack_110;
  undefined8 local_108;
  undefined8 ****local_100;
  undefined8 local_f8;
  undefined8 ****ppppuStack_f0;
  undefined8 local_e8;
  undefined8 ****local_e0;
  undefined8 ****local_d8;
  undefined8 ****local_d0;
  undefined8 ****local_c8;
  undefined8 ***local_c0;
  undefined8 **local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 ****local_a0 [9];
  undefined4 local_54;
  
  puVar5 = PTR_DAT_04bb2020;
  local_e0 = &local_d8;
  local_a8 = 0;
  local_d8 = &local_d0;
  local_d0 = &local_c8;
  ppppuStack_f0 = (undefined8 ****)&local_e8;
  local_c8 = &local_c0;
  local_c0 = &local_b8;
  local_b8 = &local_b0;
  local_b0 = &local_a8;
  ppppuVar11 = local_a0;
  local_108._4_4_ = 0;
  local_100 = (undefined8 ****)0x0;
  local_f8 = ppppuStack_f0;
  local_e8 = &local_e0;
  if (ppppuVar11 != (undefined8 ****)0x0) {
    local_e8 = (undefined8 ****)CONCAT44((int)((ulong)&local_e0 >> 0x20),1);
    local_108._4_4_ = 9;
    local_100 = ppppuVar11;
    local_f8 = &local_e0;
    local_a0[0] = ppppuStack_f0;
  }
  local_108._0_4_ = (uint)(ppppuVar11 != (undefined8 ****)0x0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_110 = "RcmTalked1stAfterPrologue";
  local_118 = puVar2;
  local_54 = param_1;
  iVar6 = FUN_0274ce10(&local_54,&local_118);
  ppppuVar11 = local_f8;
  if (iVar6 != 0) {
    if ((int)(uint)local_108 < local_108._4_4_) {
      if (local_f8 != (undefined8 ****)0x0) {
        local_f8 = (undefined8 ****)*local_f8;
      }
      *(undefined4 *)ppppuVar11 = 2;
      if ((int)(uint)local_108 < local_108._4_4_) {
        local_100[(int)(uint)local_108] = ppppuVar11;
        local_108._0_4_ = (uint)local_108 + 1;
      }
    }
    ppppuVar11 = local_f8;
    if ((int)(uint)local_108 < local_108._4_4_) {
      if (local_f8 != (undefined8 ****)0x0) {
        local_f8 = (undefined8 ****)*local_f8;
      }
      *(undefined4 *)ppppuVar11 = 3;
      if ((int)(uint)local_108 < local_108._4_4_) {
        local_100[(int)(uint)local_108] = ppppuVar11;
        local_108._0_4_ = (uint)local_108 + 1;
      }
    }
  }
  pcStack_110 = "SzaTaled1stTime";
  local_118 = puVar2;
  iVar6 = FUN_0274ce10(&local_54,&local_118);
  ppppuVar11 = local_f8;
  if ((iVar6 != 0) && ((int)(uint)local_108 < local_108._4_4_)) {
    if (local_f8 != (undefined8 ****)0x0) {
      local_f8 = (undefined8 ****)*local_f8;
    }
    *(undefined4 *)ppppuVar11 = 4;
    if ((int)(uint)local_108 < local_108._4_4_) {
      local_100[(int)(uint)local_108] = ppppuVar11;
      local_108._0_4_ = (uint)local_108 + 1;
    }
  }
  pcStack_110 = "OwlFinished1stTalk";
  local_118 = puVar5 + 0x10;
  iVar6 = FUN_0274ce10(&local_54,&local_118);
  ppppuVar11 = local_f8;
  if ((iVar6 != 0) && ((int)(uint)local_108 < local_108._4_4_)) {
    if (local_f8 != (undefined8 ****)0x0) {
      local_f8 = (undefined8 ****)*local_f8;
    }
    *(undefined4 *)ppppuVar11 = 5;
    if ((int)(uint)local_108 < local_108._4_4_) {
      local_100[(int)(uint)local_108] = ppppuVar11;
      local_108._0_4_ = (uint)local_108 + 1;
    }
  }
  pcStack_110 = "KinuyoTalkBoforeFlag";
  local_118 = puVar5 + 0x10;
  iVar6 = FUN_0274ce10(&local_54,&local_118);
  ppppuVar11 = local_f8;
  if ((iVar6 != 0) && ((int)(uint)local_108 < local_108._4_4_)) {
    if (local_f8 != (undefined8 ****)0x0) {
      local_f8 = (undefined8 ****)*local_f8;
    }
    *(undefined4 *)ppppuVar11 = 6;
    if ((int)(uint)local_108 < local_108._4_4_) {
      local_100[(int)(uint)local_108] = ppppuVar11;
      local_108._0_4_ = (uint)local_108 + 1;
    }
  }
  pcStack_110 = "HgsCloseness";
  local_118 = puVar5 + 0x10;
  iVar6 = FUN_0274ce10(&local_54,&local_118);
  if (iVar6 < 6) {
    pcStack_120 = "HgsTalkTodayFlag";
    local_128 = puVar5 + 0x10;
    iVar6 = FUN_0274ce10(&local_54,&local_128);
    if (iVar6 != 0) goto LAB_020b7128;
  }
  else {
LAB_020b7128:
    ppppuVar11 = local_f8;
    if ((int)(uint)local_108 < local_108._4_4_) {
      if (local_f8 != (undefined8 ****)0x0) {
        local_f8 = (undefined8 ****)*local_f8;
      }
      *(undefined4 *)ppppuVar11 = 7;
      if ((int)(uint)local_108 < local_108._4_4_) {
        local_100[(int)(uint)local_108] = ppppuVar11;
        local_108._0_4_ = (uint)local_108 + 1;
      }
    }
  }
  pcStack_110 = "OdekakeFirstTalk";
  local_118 = puVar5 + 0x10;
  iVar6 = FUN_0274ce10(&local_54,&local_118);
  ppppuVar11 = local_f8;
  if ((iVar6 != 0) && ((int)(uint)local_108 < local_108._4_4_)) {
    if (local_f8 != (undefined8 ****)0x0) {
      local_f8 = (undefined8 ****)*local_f8;
    }
    *(undefined4 *)ppppuVar11 = 8;
    if ((int)(uint)local_108 < local_108._4_4_) {
      local_100[(int)(uint)local_108] = ppppuVar11;
      local_108._0_4_ = (uint)local_108 + 1;
    }
  }
  pcStack_110 = "DocMysterytourExplain1st";
  local_118 = puVar5 + 0x10;
  iVar6 = FUN_0274ce10(&local_54,&local_118);
  ppppuVar11 = local_f8;
  if ((iVar6 != 0) && ((int)(uint)local_108 < local_108._4_4_)) {
    if (local_f8 != (undefined8 ****)0x0) {
      local_f8 = (undefined8 ****)*local_f8;
    }
    *(undefined4 *)ppppuVar11 = 9;
    if ((int)(uint)local_108 < local_108._4_4_) {
      local_100[(int)(uint)local_108] = ppppuVar11;
      local_108._0_4_ = (uint)local_108 + 1;
    }
  }
  puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar12 = (ulong)(uint)local_108;
  if ((int)(uint)local_108 < 2) {
    ppppuVar11 = local_100;
    puVar14 = param_2;
  }
  else {
    do {
      uVar4 = puVar8[3];
      uVar7 = *puVar8 ^ *puVar8 << 0xb;
      *puVar8 = puVar8[1];
      puVar8[1] = puVar8[2];
      uVar7 = uVar7 >> 8 ^ uVar4 >> 0x13 ^ uVar7 ^ uVar4;
      puVar8[2] = uVar4;
      puVar8[3] = uVar7;
      uVar15 = uVar12 - 1 & 0xffffffff;
      pppuVar16 = local_100[uVar15];
      uVar13 = uVar12 * uVar7 >> 0x1d & 0x7fffffff8;
      local_100[uVar15] = *(undefined8 ****)((long)local_100 + uVar13);
      *(undefined8 ****)((long)local_100 + uVar13) = pppuVar16;
      bVar1 = 2 < uVar12;
      uVar12 = uVar12 - 1;
    } while (bVar1);
    *param_2 = *(undefined4 *)*local_100;
    if ((int)(uint)local_108 < 2) goto LAB_020b72f8;
    ppppuVar11 = local_100 + 1;
    puVar14 = param_2 + 1;
  }
  *puVar14 = *(undefined4 *)*ppppuVar11;
LAB_020b72f8:
  local_118 = (undefined *)CONCAT44(local_118._4_4_,param_1);
  iVar6 = FUN_020b7510(&local_118,0xffffffff);
  puVar5 = PTR_DAT_04bb3768;
  if (iVar6 == -1) {
    *(undefined2 *)(param_2 + 2) = 0x23;
    *(undefined1 *)((long)param_2 + 10) = 8;
  }
  else {
    ppppuStack_f0._0_4_ = (uint)(uint3)ppppuStack_f0;
    local_100 = (undefined8 ****)((long)&local_f8 + 4);
    local_f8 = (undefined8 ****)CONCAT35(local_f8._5_3_,8);
    local_108 = PTR_DAT_04bb3768 + 0x10;
    lVar9 = FUN_0265c2a0();
    if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar10 == (undefined8 *)0x0)) {
      uVar7 = 1;
    }
    else {
      uVar7 = (**(code **)*puVar10)();
      uVar7 = uVar7 ^ 1;
    }
    pbVar3 = (byte *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
    FUN_038d1270(&local_108,"-----");
    uVar12 = (ulong)*pbVar3;
    if (uVar12 < 0x23) {
      FUN_038d1270(&local_108,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar12 * 8 + 0xb0),
                   pbVar3[1]);
    }
    FUN_020fd3a0(param_2 + 2,&local_108);
    if ((((uVar7 & 1) == 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
    iVar6 = FUN_020b7510(&local_118,iVar6);
    if (iVar6 == -1) {
      *(undefined2 *)((long)param_2 + 0xb) = 0x23;
      *(undefined1 *)((long)param_2 + 0xd) = 8;
    }
    else {
      local_108 = puVar5 + 0x10;
      ppppuStack_f0._0_4_ = (uint)(uint3)ppppuStack_f0;
      local_100 = (undefined8 ****)((long)&local_f8 + 4);
      local_f8 = (undefined8 ****)CONCAT35(local_f8._5_3_,8);
      lVar9 = FUN_0265c2a0();
      if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
         (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar10 == (undefined8 *)0x0)) {
        uVar7 = 1;
      }
      else {
        uVar7 = (**(code **)*puVar10)();
        uVar7 = uVar7 ^ 1;
      }
      pbVar3 = (byte *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
      FUN_038d1270(&local_108,"-----");
      uVar12 = (ulong)*pbVar3;
      if (uVar12 < 0x23) {
        FUN_038d1270(&local_108,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar12 * 8 + 0xb0),
                     pbVar3[1]);
      }
      FUN_020fd3a0((long)param_2 + 0xb,&local_108);
      if ((((uVar7 & 1) == 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
        (**(code **)*puVar10)();
      }
    }
  }
  return;
}

