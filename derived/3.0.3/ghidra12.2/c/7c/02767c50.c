
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02767c50(long *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  undefined *local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  long local_210;
  undefined **local_208;
  undefined *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  long local_1d8;
  undefined4 local_1d0 [2];
  undefined4 *local_1c8;
  undefined4 local_1bc;
  int iStack_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0 [2];
  undefined4 *local_1a8;
  undefined4 local_19c;
  int local_198;
  undefined4 local_194;
  undefined **local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  long local_160;
  undefined *local_158;
  undefined *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  long local_128;
  undefined4 local_120 [2];
  undefined4 *local_118;
  undefined4 local_10c;
  int iStack_108;
  undefined4 local_104;
  undefined **local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar7 = (**(code **)(*(long *)*param_1 + 0x18))();
  if (lVar7 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_c8 = *(undefined **)(lVar7 + 8);
    local_c0 = *(undefined8 *)(lVar7 + 0x10);
    uVar1 = FUN_0272e334(&local_c8,param_2);
  }
  lVar7 = (**(code **)(*(long *)param_1[1] + 0x18))();
  if (lVar7 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_c8 = *(undefined **)(lVar7 + 8);
    local_c0 = *(undefined8 *)(lVar7 + 0x10);
    uVar2 = FUN_0272e334(&local_c8,param_2);
  }
  lVar7 = (**(code **)(*(long *)*param_1 + 0x18))();
  if (lVar7 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0272da84(lVar7,uVar1);
  }
  lVar7 = (**(code **)(*(long *)param_1[1] + 0x18))();
  iVar4 = 0;
  if (lVar7 != 0) {
    iVar4 = FUN_0272da84(lVar7,uVar2);
  }
  if (iVar4 <= iVar3) {
    iVar3 = iVar4;
  }
  if (0 < iVar3) {
    iVar4 = 0;
    do {
      local_1d0[0] = 1;
      local_1c8 = &local_1bc;
      local_1b4 = 0;
      local_c8 = (undefined *)0x0;
      local_208 = &PTR_LAB_04a91510;
      local_200 = (undefined *)0x0;
      local_1f8 = 0;
      local_1f0 = 0;
      local_1e8 = 0;
      lVar7 = *param_1;
      local_1e0 = 0;
      local_1d8 = 0;
      local_238 = (undefined *)0x0;
      local_230 = 0;
      local_228 = 0;
      local_220 = 0;
      local_218 = 0;
      local_210 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_1bc = param_2;
      iStack_1b8 = iVar4;
      FUN_0272d760(lVar7 + 8,&local_c8,local_1d0);
      local_1f0 = local_b8;
      local_1f8 = local_c0;
      if (((local_c8 != (undefined *)0x0) && (*(int *)(local_c8 + 0x2c) == 1)) &&
         (local_1d8 = *(long *)(lVar7 + 0x30), local_1d8 != 0)) {
        local_200 = local_c8;
        local_c8 = (undefined *)0x0;
        local_c0 = 0;
        local_b8 = 0;
        lVar7 = param_1[1];
        local_1e8 = local_b0;
        local_1e0 = local_a8;
        local_b0 = 0;
        local_a8 = 0;
        FUN_0272d760(lVar7 + 8,&local_c8,local_1d0);
        if (((local_c8 != (undefined *)0x0) && (*(int *)(local_c8 + 0x2c) == 1)) &&
           (local_210 = *(long *)(lVar7 + 0x30), local_210 != 0)) {
          local_238 = local_c8;
          local_230 = local_c0;
          local_228 = local_b8;
          local_220 = local_b0;
          local_218 = local_a8;
          uVar1 = FUN_00b08880("Memory",0,0);
          lVar7 = (*(code *)local_208[3])(&local_208);
          if (lVar7 == 0) {
            uVar1 = 0xffffffff;
          }
          else {
            local_c8 = *(undefined **)(lVar7 + 8);
            local_c0 = *(undefined8 *)(lVar7 + 0x10);
            uVar1 = FUN_0272e334(&local_c8,uVar1);
          }
          lVar7 = (*(code *)local_208[3])(&local_208);
          if (lVar7 != 0) {
            iVar5 = FUN_0272da84(lVar7,uVar1);
            if (0 < iVar5) {
              iVar8 = 0;
              do {
                local_150 = (undefined *)0x0;
                local_148 = 0;
                local_140 = 0;
                local_138 = 0;
                local_158 = PTR_DAT_04bc3850 + 0x10;
                local_130 = 0;
                local_128 = 0;
                local_188 = (undefined *)0x0;
                local_180 = 0;
                local_178 = 0;
                local_170 = 0;
                local_194 = 0;
                local_c8 = (undefined *)0x0;
                local_190 = &PTR_LAB_04a91548;
                local_19c = 0xbe57df0c;
                local_1b0[0] = 1;
                local_1a8 = &local_19c;
                local_168 = 0;
                local_160 = 0;
                local_b0 = 0;
                local_a8 = 0;
                local_c0 = 0;
                local_b8 = 0;
                local_198 = iVar8;
                FUN_0272d760(&local_200,&local_c8,local_1b0);
                if (((local_c8 != (undefined *)0x0) && (*(int *)(local_c8 + 0x2c) == 1)) &&
                   (local_1d8 != 0)) {
                  local_150 = local_c8;
                  local_128 = local_1d8;
                  local_148 = local_c0;
                  local_140 = local_b8;
                  local_138 = local_b0;
                  local_130 = local_a8;
                }
                local_c8 = (undefined *)0x0;
                local_b0 = 0;
                local_a8 = 0;
                local_c0 = 0;
                local_b8 = 0;
                FUN_0272d760(&local_238,&local_c8,local_1b0);
                if (((local_c8 != (undefined *)0x0) && (*(int *)(local_c8 + 0x2c) == 1)) &&
                   (local_210 != 0)) {
                  local_188 = local_c8;
                  local_160 = local_210;
                  local_180 = local_c0;
                  local_178 = local_b8;
                  local_170 = local_b0;
                  local_168 = local_a8;
                }
                uVar1 = FUN_00b08880("MailReceiveInfoStock",0,0);
                lVar7 = (**(code **)(local_158 + 0x18))(&local_158);
                if (lVar7 == 0) {
                  uVar1 = 0xffffffff;
                }
                else {
                  local_c8 = *(undefined **)(lVar7 + 8);
                  local_c0 = *(undefined8 *)(lVar7 + 0x10);
                  uVar1 = FUN_0272e334(&local_c8,uVar1);
                }
                lVar7 = (**(code **)(local_158 + 0x18))(&local_158);
                if ((lVar7 != 0) && (iVar6 = FUN_0272da84(lVar7,uVar1), 0 < iVar6)) {
                  iVar9 = 0;
                  do {
                    local_c0 = 0;
                    local_b8 = 0;
                    local_b0 = 0;
                    local_a8 = 0;
                    local_c8 = PTR_DAT_04bc3850 + 0x10;
                    local_a0 = 0;
                    local_98 = 0;
                    local_f8 = 0;
                    local_f0 = 0;
                    local_e8 = 0;
                    local_e0 = 0;
                    local_104 = 0;
                    local_90 = 0;
                    local_100 = &PTR_LAB_04a91548;
                    local_10c = 0x54e818b8;
                    local_120[0] = 1;
                    local_118 = &local_10c;
                    local_d8 = 0;
                    local_d0 = 0;
                    local_78 = 0;
                    uStack_70 = 0;
                    local_88 = 0;
                    uStack_80 = 0;
                    iStack_108 = iVar9;
                    FUN_0272d760(&local_150,&local_90,local_120);
                    if (((local_90 != 0) && (*(int *)(local_90 + 0x2c) == 1)) && (local_128 != 0)) {
                      local_c0 = local_90;
                      local_98 = local_128;
                      local_b8 = local_88;
                      local_b0 = uStack_80;
                      local_a8 = local_78;
                      local_a0 = uStack_70;
                    }
                    local_90 = 0;
                    local_78 = 0;
                    uStack_70 = 0;
                    local_88 = 0;
                    uStack_80 = 0;
                    FUN_0272d760(&local_188,&local_90,local_120);
                    if (((local_90 != 0) && (*(int *)(local_90 + 0x2c) == 1)) && (local_160 != 0)) {
                      local_f8 = local_90;
                      local_d0 = local_160;
                      local_f0 = local_88;
                      local_e8 = uStack_80;
                      local_e0 = local_78;
                      local_d8 = uStack_70;
                    }
                    FUN_027690d8(&local_c8,&local_100,&local_90);
                    iVar9 = iVar9 + 1;
                  } while (iVar6 != iVar9);
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 != iVar5);
            }
          }
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != iVar3);
  }
  return;
}

