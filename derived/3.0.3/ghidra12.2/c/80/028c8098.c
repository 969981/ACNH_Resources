
void FUN_028c8098(undefined1 *param_1,undefined8 *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined4 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  long local_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (((((param_1 != (undefined1 *)0x0) && (param_2 != (undefined8 *)0x0)) && (param_3 != 0)) &&
      ((param_4 != 0 && (iVar3 = FUN_027b78b0(param_3,DAT_05573f4c), iVar3 != -1)))) &&
     (FUN_03ea9348(&local_68,param_3 + 8,iVar3), lVar2 = local_60, lVar1 = local_68, local_68 != 0))
  {
    local_50 = 0;
    local_48 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    uVar4 = (**(code **)(*(long *)*param_2 + 0x18))();
    if (*(int *)(param_3 + 0x2c) == 1) {
      local_60 = lVar1;
      local_48 = 0;
      local_58 = lVar2;
      local_68 = param_3;
      local_50 = uVar4;
    }
    local_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0x6e7b0a58;
    local_78 = 0;
    uStack_70 = 0;
    local_b8 = 0x8b37691;
    local_b0 = (undefined4 *)DAT_0417bcec;
    local_c8 = 3;
    local_c0 = &local_b8;
    local_98 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uVar5 = FUN_0272d760(&local_68,&local_90,&local_c8);
    if ((uVar5 & 1) != 0) {
      uVar5 = FUN_028c90c0(&local_90);
      if ((uVar5 & 1) != 0) {
        *param_1 = 1;
      }
      iVar3 = FUN_027b78b0(param_4,DAT_05573f58);
      if (iVar3 != -1) {
        FUN_03ea9348(&local_68,param_4 + 8,iVar3);
        lVar2 = local_60;
        lVar1 = local_68;
        if (local_68 != 0) {
          local_50 = 0;
          local_48 = 0;
          local_68 = 0;
          local_60 = 0;
          local_58 = 0;
          uVar4 = (**(code **)(*(long *)param_2[3] + 0x18))();
          local_88 = 0;
          local_90 = 0;
          if (*(int *)(param_4 + 0x2c) == 1) {
            local_48 = 0;
            local_60 = lVar1;
            local_58 = lVar2;
            local_88 = lVar2;
            local_90 = lVar1;
            local_68 = param_4;
            local_50 = uVar4;
          }
          iVar3 = FUN_0272e334(&local_90,0x72d77700);
          if (iVar3 != -1) {
            iVar3 = FUN_0272da84(&local_68,iVar3);
            uVar6 = iVar3 - 1;
            if (0 < iVar3) {
              local_90 = 0;
              if (1 < uVar6) {
                uVar6 = 2;
              }
              local_c8 = 0x72d77700;
              local_b8 = CONCAT44(local_b8._4_4_,1);
              local_b0 = &local_c8;
              uStack_c4 = 0;
              local_c0._0_4_ = 0;
              local_78 = 0;
              uStack_70 = 0;
              local_88 = 0;
              uStack_80 = 0;
              uVar5 = FUN_0272d760(&local_68,&local_90,&local_b8);
              if (((uVar5 & 1) != 0) && (uVar5 = FUN_028c90c0(&local_90), (uVar5 & 1) != 0)) {
                param_1[1] = 1;
              }
              if (uVar6 != 0) {
                local_90 = 0;
                uStack_c4 = 1;
                local_c0._0_4_ = 0;
                local_b8 = CONCAT44(local_b8._4_4_,1);
                local_b0 = &local_c8;
                local_c8 = 0x72d77700;
                local_78 = 0;
                uStack_70 = 0;
                local_88 = 0;
                uStack_80 = 0;
                uVar5 = FUN_0272d760(&local_68,&local_90,&local_b8);
                if (((uVar5 & 1) != 0) && (uVar5 = FUN_028c90c0(&local_90), (uVar5 & 1) != 0)) {
                  param_1[2] = 1;
                }
                if (uVar6 != 1) {
                  local_90 = 0;
                  uStack_c4 = 2;
                  local_c0._0_4_ = 0;
                  local_b8 = CONCAT44(local_b8._4_4_,1);
                  local_b0 = &local_c8;
                  local_78 = 0;
                  uStack_70 = 0;
                  local_c8 = 0x72d77700;
                  local_88 = 0;
                  uStack_80 = 0;
                  uVar5 = FUN_0272d760(&local_68,&local_90,&local_b8);
                  if (((uVar5 & 1) != 0) && (uVar5 = FUN_028c90c0(&local_90), (uVar5 & 1) != 0)) {
                    param_1[3] = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

