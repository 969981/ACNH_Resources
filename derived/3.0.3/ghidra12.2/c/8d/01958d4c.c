
void FUN_01958d4c(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  long lVar10;
  char *local_a0;
  char *pcStack_98;
  undefined4 local_90;
  void *local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined4 local_70;
  void *local_68;
  undefined4 local_60;
  void *local_58;
  undefined *local_50;
  undefined8 local_48;
  
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_a0 = "InsectFieldMgr";
  pcStack_98 = "Insect";
  lVar10 = *(long *)PTR_DAT_04bb2698;
  local_58 = (void *)0x0;
  local_48 = 0;
  if (lVar10 == 0) {
    pvVar7 = malloc(0x200);
    pvVar4 = local_88;
joined_r0x01958f40:
    local_88 = pvVar7;
    if (local_88 != (void *)0x0) {
      local_90 = 0x20;
      memcpy(local_88,&DAT_049e12a0,0x200);
      pvVar4 = local_88;
    }
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar10 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    pvVar4 = local_88;
    if (plVar6 != (long *)0x0) {
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x200,8);
      pvVar4 = local_88;
      goto joined_r0x01958f40;
    }
  }
  local_88 = pvVar4;
  lVar10 = *(long *)puVar2;
  if (lVar10 == 0) {
    puVar8 = malloc(0x40);
    puVar1 = PTR_s_Bcsv_InsectAppearParam_bcsv_049e14c8;
joined_r0x01958f50:
    PTR_s_Bcsv_InsectAppearParam_bcsv_049e14c8 = puVar1;
    if (puVar8 != (undefined8 *)0x0) {
      local_80 = 2;
      puVar8[4] = DAT_049e14c0;
      puVar8[5] = puVar1;
      puVar1 = PTR_LAB_049e14d8;
      puVar8[6] = PTR_LAB_049e14d0;
      puVar8[7] = puVar1;
      puVar1 = PTR_s_Bcsv_InsectAppearParam_bcsv_049e14a8;
      *puVar8 = DAT_049e14a0;
      puVar8[1] = puVar1;
      puVar1 = PTR_LAB_049e14b8;
      puVar8[2] = PTR_LAB_049e14b0;
      puVar8[3] = puVar1;
      local_78 = puVar8;
    }
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar6 = (long *)(lVar10 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) {
      puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x40,8);
      puVar1 = PTR_s_Bcsv_InsectAppearParam_bcsv_049e14c8;
      goto joined_r0x01958f50;
    }
  }
  lVar10 = *(long *)puVar2;
  local_50 = &DAT_040a658f;
  if (lVar10 == 0) {
    pvVar7 = malloc(0x420);
    pvVar4 = local_68;
joined_r0x01958f60:
    local_68 = pvVar7;
    if (local_68 != (void *)0x0) {
      local_70 = 0x21;
      memcpy(local_68,&DAT_049e14e0,0x420);
      pvVar4 = local_68;
    }
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar6 = (long *)(lVar10 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    pvVar4 = local_68;
    if (plVar6 != (long *)0x0) {
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x420,8);
      pvVar4 = local_68;
      goto joined_r0x01958f60;
    }
  }
  local_68 = pvVar4;
  FUN_00993500(param_1,&local_a0,param_2);
  pvVar4 = local_88;
  if (local_88 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(local_88);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar2,local_88);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar4);
      }
    }
    local_88 = (void *)0x0;
    local_90 = 0;
  }
  puVar8 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(local_78);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar2,local_78);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,puVar8);
      }
    }
    local_78 = (undefined8 *)0x0;
    local_80 = 0;
  }
  pvVar4 = local_68;
  if (local_68 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(local_68);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar2,local_68);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar4);
      }
    }
    local_68 = (void *)0x0;
    local_70 = 0;
  }
  pvVar4 = local_58;
  if (local_58 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(local_58);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar2,local_58);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar4);
      }
    }
    local_58 = (void *)0x0;
    local_60 = 0;
  }
  lVar10 = *(long *)puVar2;
  if (lVar10 == 0) {
    puVar9 = malloc(0x100);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      puVar8 = (undefined8 *)(lVar10 + 8);
      if (lVar5 != 0) {
        puVar8 = (undefined8 *)(lVar5 + 0xa8);
      }
      param_2 = (long *)*puVar8;
      if (param_2 == (long *)0x0) goto code_r0x019596fc;
    }
    puVar9 = (undefined2 *)(**(code **)(*param_2 + 0x30))(param_2,0x100,8);
  }
  if (puVar9 != (undefined2 *)0x0) {
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 0;
    puVar9[4] = 0;
    *(undefined4 *)(puVar9 + 6) = 0;
    puVar9[8] = 0;
    *(undefined4 *)(puVar9 + 10) = 0;
    puVar9[0xc] = 0;
    *(undefined4 *)(puVar9 + 0xe) = 0;
    puVar9[0x10] = 0;
    *(undefined4 *)(puVar9 + 0x12) = 0;
    puVar9[0x14] = 0;
    *(undefined4 *)(puVar9 + 0x16) = 0;
    puVar9[0x18] = 0;
    *(undefined4 *)(puVar9 + 0x1a) = 0;
    puVar9[0x1c] = 0;
    *(undefined4 *)(puVar9 + 0x1e) = 0;
    puVar9[0x20] = 0;
    *(undefined4 *)(puVar9 + 0x22) = 0;
    puVar9[0x24] = 0;
    *(undefined4 *)(puVar9 + 0x26) = 0;
    puVar9[0x28] = 0;
    *(undefined4 *)(puVar9 + 0x2a) = 0;
    puVar9[0x2c] = 0;
    *(undefined4 *)(puVar9 + 0x2e) = 0;
    puVar9[0x30] = 0;
    *(undefined4 *)(puVar9 + 0x32) = 0;
    puVar9[0x34] = 0;
    *(undefined4 *)(puVar9 + 0x36) = 0;
    puVar9[0x38] = 0;
    *(undefined4 *)(puVar9 + 0x3a) = 0;
    puVar9[0x3c] = 0;
    *(undefined4 *)(puVar9 + 0x3e) = 0;
    puVar9[0x40] = 0;
    *(undefined4 *)(puVar9 + 0x42) = 0;
    puVar9[0x44] = 0;
    *(undefined4 *)(puVar9 + 0x46) = 0;
    puVar9[0x48] = 0;
    *(undefined4 *)(puVar9 + 0x4a) = 0;
    puVar9[0x4c] = 0;
    *(undefined4 *)(puVar9 + 0x4e) = 0;
    puVar9[0x50] = 0;
    *(undefined4 *)(puVar9 + 0x52) = 0;
    puVar9[0x54] = 0;
    *(undefined4 *)(puVar9 + 0x56) = 0;
    puVar9[0x58] = 0;
    *(undefined4 *)(puVar9 + 0x5a) = 0;
    puVar9[0x5c] = 0;
    *(undefined4 *)(puVar9 + 0x5e) = 0;
    puVar9[0x60] = 0;
    *(undefined4 *)(puVar9 + 0x62) = 0;
    puVar9[100] = 0;
    *(undefined4 *)(puVar9 + 0x66) = 0;
    puVar9[0x68] = 0;
    *(undefined4 *)(puVar9 + 0x6a) = 0;
    puVar9[0x6c] = 0;
    *(undefined4 *)(puVar9 + 0x6e) = 0;
    puVar9[0x70] = 0;
    *(undefined4 *)(puVar9 + 0x72) = 0;
    puVar9[0x74] = 0;
    *(undefined4 *)(puVar9 + 0x76) = 0;
    puVar9[0x78] = 0;
    *(undefined4 *)(puVar9 + 0x7a) = 0;
    puVar9[0x7c] = 0;
    *(undefined4 *)(puVar9 + 0x7e) = 0;
    *(undefined4 *)(param_1 + 0x5f0) = 0x20;
    *(undefined2 **)(param_1 + 0x5f8) = puVar9;
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 8) = 0;
    *(undefined4 *)(lVar10 + 0xc) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0x10) = 0;
    *(undefined4 *)(lVar10 + 0x14) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0x18) = 0;
    *(undefined4 *)(lVar10 + 0x1c) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0x20) = 0;
    *(undefined4 *)(lVar10 + 0x24) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0x28) = 0;
    *(undefined4 *)(lVar10 + 0x2c) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0x30) = 0;
    *(undefined4 *)(lVar10 + 0x34) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0x38) = 0;
    *(undefined4 *)(lVar10 + 0x3c) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0x40) = 0;
    *(undefined4 *)(lVar10 + 0x44) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0x48) = 0;
    *(undefined4 *)(lVar10 + 0x4c) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0x50) = 0;
    *(undefined4 *)(lVar10 + 0x54) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0x58) = 0;
    *(undefined4 *)(lVar10 + 0x5c) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0x60) = 0;
    *(undefined4 *)(lVar10 + 100) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0x68) = 0;
    *(undefined4 *)(lVar10 + 0x6c) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0x70) = 0;
    *(undefined4 *)(lVar10 + 0x74) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0x78) = 0;
    *(undefined4 *)(lVar10 + 0x7c) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0x80) = 0;
    *(undefined4 *)(lVar10 + 0x84) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0x88) = 0;
    *(undefined4 *)(lVar10 + 0x8c) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0x90) = 0;
    *(undefined4 *)(lVar10 + 0x94) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0x98) = 0;
    *(undefined4 *)(lVar10 + 0x9c) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0xa0) = 0;
    *(undefined4 *)(lVar10 + 0xa4) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0xa8) = 0;
    *(undefined4 *)(lVar10 + 0xac) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0xb0) = 0;
    *(undefined4 *)(lVar10 + 0xb4) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0xb8) = 0;
    *(undefined4 *)(lVar10 + 0xbc) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0xc0) = 0;
    *(undefined4 *)(lVar10 + 0xc4) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 200) = 0;
    *(undefined4 *)(lVar10 + 0xcc) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0xd0) = 0;
    *(undefined4 *)(lVar10 + 0xd4) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0xd8) = 0;
    *(undefined4 *)(lVar10 + 0xdc) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0xe0) = 0;
    *(undefined4 *)(lVar10 + 0xe4) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0xe8) = 0;
    *(undefined4 *)(lVar10 + 0xec) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0xf0) = 0;
    *(undefined4 *)(lVar10 + 0xf4) = 0;
    lVar10 = *(long *)(param_1 + 0x5f8);
    *(undefined2 *)(lVar10 + 0xf8) = 0;
    *(undefined4 *)(lVar10 + 0xfc) = 0;
    puVar9 = *(undefined2 **)(param_1 + 0x5f8);
    *puVar9 = 1;
    *(undefined4 *)(puVar9 + 2) = 2;
    puVar9 = (undefined2 *)
             (*(long *)(param_1 + 0x5f8) + (ulong)(1 < *(uint *)(param_1 + 0x5f0)) * 8);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 0;
    puVar9 = (undefined2 *)
             (*(long *)(param_1 + 0x5f8) + (ulong)(2 < *(uint *)(param_1 + 0x5f0)) * 0x10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 1;
    lVar10 = 0x18;
    if (*(uint *)(param_1 + 0x5f0) < 4) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 0;
    puVar9 = (undefined2 *)
             (*(long *)(param_1 + 0x5f8) + (ulong)(4 < *(uint *)(param_1 + 0x5f0)) * 0x20);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 0;
    lVar10 = 0x28;
    if (*(uint *)(param_1 + 0x5f0) < 6) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 1;
    lVar10 = 0x30;
    if (*(uint *)(param_1 + 0x5f0) < 7) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 1;
    lVar10 = 0x38;
    if (*(uint *)(param_1 + 0x5f0) < 8) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 1;
    puVar9 = (undefined2 *)
             (*(long *)(param_1 + 0x5f8) + (ulong)(8 < *(uint *)(param_1 + 0x5f0)) * 0x40);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 0;
    lVar10 = 0x48;
    if (*(uint *)(param_1 + 0x5f0) < 10) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 0;
    lVar10 = 0x50;
    if (*(uint *)(param_1 + 0x5f0) < 0xb) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 1;
    lVar10 = 0x58;
    if (*(uint *)(param_1 + 0x5f0) < 0xc) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 2;
    lVar10 = 0x60;
    if (*(uint *)(param_1 + 0x5f0) < 0xd) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 1;
    lVar10 = 0x68;
    if (*(uint *)(param_1 + 0x5f0) < 0xe) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 1;
    *(undefined4 *)(puVar9 + 2) = 1;
    lVar10 = 0x70;
    if (*(uint *)(param_1 + 0x5f0) < 0xf) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 2;
    lVar10 = 0x78;
    if (*(uint *)(param_1 + 0x5f0) < 0x10) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 2;
    puVar9 = (undefined2 *)
             (*(long *)(param_1 + 0x5f8) + (ulong)(0x10 < *(uint *)(param_1 + 0x5f0)) * 0x80);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 3;
    lVar10 = 0x88;
    if (*(uint *)(param_1 + 0x5f0) < 0x12) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 1;
    lVar10 = 0x90;
    if (*(uint *)(param_1 + 0x5f0) < 0x13) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 1;
    lVar10 = 0x98;
    if (*(uint *)(param_1 + 0x5f0) < 0x14) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 2;
    lVar10 = 0xa0;
    if (*(uint *)(param_1 + 0x5f0) < 0x15) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 2;
    lVar10 = 0xa8;
    if (*(uint *)(param_1 + 0x5f0) < 0x16) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 2;
    lVar10 = 0xb0;
    if (*(uint *)(param_1 + 0x5f0) < 0x17) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 1;
    lVar10 = 0xb8;
    if (*(uint *)(param_1 + 0x5f0) < 0x18) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 0;
    lVar10 = 0xc0;
    if (*(uint *)(param_1 + 0x5f0) < 0x19) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 0;
    lVar10 = 200;
    if (*(uint *)(param_1 + 0x5f0) < 0x1a) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 2;
    lVar10 = 0xd0;
    if (*(uint *)(param_1 + 0x5f0) < 0x1b) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 2;
    lVar10 = 0xd8;
    if (*(uint *)(param_1 + 0x5f0) < 0x1c) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0x100;
    *(undefined4 *)(puVar9 + 2) = 4;
    lVar10 = 0xe0;
    if (*(uint *)(param_1 + 0x5f0) < 0x1d) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0x100;
    *(undefined4 *)(puVar9 + 2) = 4;
    lVar10 = 0xe8;
    if (*(uint *)(param_1 + 0x5f0) < 0x1e) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 1;
    lVar10 = 0xf0;
    if (*(uint *)(param_1 + 0x5f0) < 0x1f) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 1;
    lVar10 = 0xf8;
    if (*(uint *)(param_1 + 0x5f0) < 0x20) {
      lVar10 = 0;
    }
    puVar9 = (undefined2 *)(*(long *)(param_1 + 0x5f8) + lVar10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 1;
  }
code_r0x019596fc:
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined1 **)(param_1 + 0x170) = &LAB_0196a220;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined1 **)(param_1 + 0x180) = &LAB_0196a360;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined1 **)(param_1 + 0x1a0) = &LAB_0196a5e0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined8 *)(param_1 + 0x488) = 0;
  *(undefined8 *)(param_1 + 0x498) = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined8 *)(param_1 + 0x518) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined8 *)(param_1 + 0x538) = 0;
  *(undefined8 *)(param_1 + 0x548) = 0;
  *(undefined8 *)(param_1 + 0x558) = 0;
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined8 *)(param_1 + 0x578) = 0;
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  *(undefined8 *)(param_1 + 0x5b8) = 0;
  *(undefined8 *)(param_1 + 0x5c8) = 0;
  *(undefined8 *)(param_1 + 0x5d8) = 0;
  *(undefined8 *)(param_1 + 0x5e8) = 0;
  *(undefined1 **)(param_1 + 0x1b0) = &LAB_0196a720;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined1 **)(param_1 + 0x1d0) = &LAB_0196a9a0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined1 **)(param_1 + 0x1e0) = &LAB_0196aae0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined1 **)(param_1 + 0x200) = &LAB_0196ad60;
  *(undefined1 **)(param_1 + 0x210) = &LAB_0196aea0;
  *(undefined1 **)(param_1 + 0x220) = &LAB_0196afe0;
  *(undefined1 **)(param_1 + 0x230) = &LAB_0196b120;
  *(undefined1 **)(param_1 + 0x240) = &LAB_0196b260;
  *(undefined1 **)(param_1 + 0x250) = &LAB_0196b3a0;
  *(undefined1 **)(param_1 + 0x260) = &LAB_0196b4e0;
  *(undefined1 **)(param_1 + 0x270) = &LAB_0196b620;
  *(undefined1 **)(param_1 + 0x280) = &LAB_0196b760;
  *(undefined1 **)(param_1 + 0x290) = &LAB_0196b8a0;
  *(undefined1 **)(param_1 + 0x2a0) = &LAB_0196b9e0;
  *(undefined1 **)(param_1 + 0x2b0) = &LAB_0196bb20;
  *(undefined1 **)(param_1 + 0x2c0) = &LAB_0196bc60;
  *(undefined1 **)(param_1 + 0x2d0) = &LAB_0196bda0;
  *(undefined1 **)(param_1 + 0x2e0) = &LAB_0196bee0;
  *(undefined1 **)(param_1 + 0x2f0) = &LAB_0196c020;
  *(undefined1 **)(param_1 + 0x300) = &LAB_0196c160;
  *(undefined1 **)(param_1 + 0x310) = &LAB_0196c2a0;
  *(undefined1 **)(param_1 + 800) = &LAB_0196c3e0;
  *(undefined1 **)(param_1 + 0x330) = &LAB_0196c520;
  *(undefined1 **)(param_1 + 0x340) = &LAB_0196c660;
  *(undefined1 **)(param_1 + 0x350) = &LAB_0196c7a0;
  *(undefined1 **)(param_1 + 0x360) = &LAB_0196c8e0;
  *(undefined1 **)(param_1 + 0x370) = &LAB_0196ca20;
  *(undefined1 **)(param_1 + 0x380) = &LAB_0196cb60;
  *(undefined1 **)(param_1 + 0x390) = &LAB_0196cca0;
  *(undefined1 **)(param_1 + 0x3a0) = &LAB_0196cde0;
  *(undefined1 **)(param_1 + 0x3b0) = &LAB_0196cf20;
  *(undefined1 **)(param_1 + 0x3c0) = &LAB_0196d060;
  *(undefined1 **)(param_1 + 0x3d0) = &LAB_0196d1a0;
  *(undefined1 **)(param_1 + 0x3e0) = &LAB_0196d2e0;
  *(undefined1 **)(param_1 + 0x3f0) = &LAB_0196d420;
  *(undefined1 **)(param_1 + 0x400) = &LAB_0196d560;
  *(undefined1 **)(param_1 + 0x410) = &LAB_0196d6a0;
  *(undefined1 **)(param_1 + 0x420) = &LAB_0196d7e0;
  *(undefined1 **)(param_1 + 0x430) = &LAB_0196d920;
  *(undefined1 **)(param_1 + 0x440) = &LAB_0196da60;
  *(undefined1 **)(param_1 + 0x450) = &LAB_0196dba0;
  *(undefined1 **)(param_1 + 0x460) = &LAB_0196dce0;
  *(undefined1 **)(param_1 + 0x470) = &LAB_0196de20;
  *(undefined1 **)(param_1 + 0x480) = &LAB_0196df60;
  *(undefined1 **)(param_1 + 0x490) = &LAB_0196e0a0;
  *(undefined1 **)(param_1 + 0x4a0) = &LAB_0196e1e0;
  *(undefined1 **)(param_1 + 0x4b0) = &LAB_0196e320;
  *(undefined1 **)(param_1 + 0x4c0) = &LAB_0196e460;
  *(undefined1 **)(param_1 + 0x4d0) = &LAB_0196e5a0;
  *(undefined1 **)(param_1 + 0x4e0) = &LAB_0196e6e0;
  *(undefined1 **)(param_1 + 0x4f0) = &LAB_0196e820;
  *(undefined1 **)(param_1 + 0x500) = &LAB_0196e960;
  *(undefined1 **)(param_1 + 0x510) = &LAB_0196eaa0;
  *(undefined1 **)(param_1 + 0x520) = &LAB_0196ebe0;
  *(undefined1 **)(param_1 + 0x530) = &LAB_0196ed20;
  *(undefined1 **)(param_1 + 0x540) = &LAB_0196ee60;
  *(undefined1 **)(param_1 + 0x550) = &LAB_0196efa0;
  *(undefined1 **)(param_1 + 0x560) = &LAB_0196f0e0;
  *(undefined1 **)(param_1 + 0x570) = &LAB_0196f220;
  *(undefined1 **)(param_1 + 0x580) = &LAB_0196f360;
  *(undefined1 **)(param_1 + 0x590) = &LAB_0196f4a0;
  *(undefined1 **)(param_1 + 0x5a0) = &LAB_0196f5e0;
  *(undefined1 **)(param_1 + 0x5b0) = &LAB_0196f720;
  *(undefined1 **)(param_1 + 0x5c0) = &LAB_0196f860;
  *(undefined1 **)(param_1 + 0x5d0) = &LAB_0196f9a0;
  *(undefined1 **)(param_1 + 0x5e0) = &LAB_0196fae0;
  *(undefined1 **)(param_1 + 400) = &LAB_0196a4a0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined1 **)(param_1 + 0x1c0) = &LAB_0196a860;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined1 **)(param_1 + 0x1f0) = &LAB_0196ac20;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  return;
}

