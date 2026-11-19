
bool FUN_038f77e0(long *param_1,uint *param_2,long *param_3,undefined4 param_4,long *param_5,
                 undefined8 param_6,uint param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  undefined **local_110;
  undefined **local_108;
  uint local_100;
  undefined *local_f8;
  undefined8 uStack_f0;
  long *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  char local_b8;
  uint local_b4;
  undefined *local_b0;
  long *local_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  char local_70 [4];
  uint local_6c [3];
  
  local_70[0] = '\0';
  if ((char)param_5[0xf] == '\0') {
    return false;
  }
  uVar5 = (**(code **)(*param_5 + 0xc0))(param_5,local_70,param_6);
  puVar2 = PTR_DAT_04bb60d8;
  if ((uVar5 & 1) == 0) {
    return false;
  }
  if (local_70[0] == '\0') {
    return false;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  puVar1 = PTR_DAT_04bb60d8 + 0x10;
  local_a0 = (long *)0x0;
  uStack_98 = 0;
  local_78 = 0;
  local_a8 = (long *)0x0;
  if ((char)param_5[0xf] != '\0') {
    local_b0 = puVar1;
    (**(code **)(*param_5 + 0x20))(param_5);
    local_78 = 0;
    local_a8 = (long *)(**(code **)(*param_5 + 0x68))(param_5,&local_b0,param_6,0);
    if (local_a8 != (long *)0x0) {
      local_100 = 0;
      local_f8 = puVar2 + 0x10;
      uStack_f0 = 0;
      local_e8 = (long *)0x0;
      uStack_e0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = '\0';
      local_b4 = 0;
      local_6c[0] = 0;
      local_110 = &PTR_LAB_04b64f68;
      local_108 = (undefined **)0x0;
      local_d8 = 0;
      uStack_d0 = 0;
      uVar7 = (uint)*(byte *)(param_5 + 0xf);
      local_a0 = param_5;
      if (*(byte *)(param_5 + 0xf) != 0) {
        (**(code **)(*param_5 + 0xb8))(param_5,local_6c,&local_b0);
        uVar7 = local_6c[0];
      }
      if (param_7 <= uVar7 && -1 < (int)param_7) {
        uVar7 = param_7;
      }
      *param_2 = uVar7;
      lVar6 = (**(code **)(*param_3 + 0x30))(param_3,uVar7,param_4);
      *param_1 = lVar6;
      if (lVar6 != 0) {
        if (local_108 != (undefined **)0x0) {
          (**(code **)(PTR_PTR_04c4b9a0 + 0xe0))(&PTR_PTR_04c4b9a0,&local_110);
        }
        plVar8 = local_a8;
        local_108 = &local_b0;
        if (local_a8 == (long *)0x0) {
          uVar7 = 0;
          local_100 = 0;
        }
        else {
          local_6c[0] = 0;
          uVar7 = (uint)*(byte *)(local_a8 + 0xf);
          if (*(byte *)(local_a8 + 0xf) != 0) {
            uVar5 = (**(code **)(*local_a8 + 0x48))(local_a8,&local_b0);
            if ((uVar5 & 1) == 0) {
              uVar7 = 0;
            }
            else {
              (**(code **)(*plVar8 + 0xa8))(plVar8,local_6c,&local_b0);
              uVar7 = local_6c[0];
            }
          }
          local_100 = uVar7;
          if (local_a8 == (long *)0x0) {
            uVar7 = 0;
          }
          else {
            local_6c[0] = 0;
            uVar7 = (uint)*(byte *)(local_a8 + 0xf);
            if (*(byte *)(local_a8 + 0xf) != 0) {
              (**(code **)(*local_a8 + 0xb8))(local_a8,local_6c,&local_b0);
              uVar7 = local_6c[0];
            }
          }
        }
        local_b4 = uVar7;
        (**(code **)(PTR_PTR_04c4b9a0 + 0x58))(&PTR_PTR_04c4b9a0,&local_110,*param_1,*param_2);
      }
      if ((((char)param_5[0xf] != '\0') &&
          (uVar5 = (**(code **)(*param_5 + 0x48))(param_5,&local_b0), (uVar5 & 1) != 0)) &&
         (uVar5 = (**(code **)(*param_5 + 0x70))(param_5,&local_b0), (uVar5 & 1) != 0)) {
        local_a8 = (long *)0x0;
        local_a0 = (long *)0x0;
      }
      ppuVar3 = local_108;
      bVar4 = *param_1 != 0;
      local_110 = &PTR_LAB_04b64f68;
      if ((((local_b8 != '\0') && (local_108 != (undefined **)0x0)) &&
          ((plVar8 = (long *)local_108[2], plVar8 != (long *)0x0 &&
           (((char)plVar8[0xf] != '\0' &&
            (uVar5 = (**(code **)(*plVar8 + 0x48))(plVar8,local_108), (uVar5 & 1) != 0)))))) &&
         (uVar5 = (**(code **)(*plVar8 + 0x70))(plVar8,ppuVar3), (uVar5 & 1) != 0)) {
        ppuVar3[1] = (undefined *)0x0;
        ppuVar3[2] = (undefined *)0x0;
      }
      plVar8 = local_e8;
      local_f8 = puVar2 + 0x10;
      if ((local_e8 != (long *)0x0) && ((char)local_e8[0xf] != '\0')) {
        uVar5 = (**(code **)(*local_e8 + 0x48))(local_e8,&local_f8);
        if ((uVar5 & 1) != 0) {
          (**(code **)(*plVar8 + 0x70))(plVar8,&local_f8);
        }
      }
      goto LAB_038f79e4;
    }
  }
  bVar4 = false;
LAB_038f79e4:
  plVar8 = local_a0;
  if (((local_a0 != (long *)0x0) && ((char)local_a0[0xf] != '\0')) &&
     (local_b0 = puVar1, uVar5 = (**(code **)(*local_a0 + 0x48))(local_a0,&local_b0),
     (uVar5 & 1) != 0)) {
    (**(code **)(*plVar8 + 0x70))(plVar8,&local_b0);
  }
  return bVar4;
}

