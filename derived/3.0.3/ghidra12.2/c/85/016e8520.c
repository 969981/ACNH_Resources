
undefined8 FUN_016e8520(float *param_1,short param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  char local_28 [4];
  char local_24 [4];
  char local_8 [4];
  char local_4 [4];
  
  bVar1 = DAT_055c1b60 == &DAT_055c1b58;
  puVar4 = DAT_055c1b60 + -8;
  if ((param_2 != 0) && (puVar3 = DAT_055c1b60, puVar4 != &DAT_055c1b18)) {
    do {
      puVar3 = (undefined8 *)puVar3[1];
      param_2 = param_2 + -1;
      bVar1 = puVar3 == &DAT_055c1b58;
    } while (!bVar1 && param_2 != 0);
    puVar4 = puVar3 + -8;
  }
  local_4[0] = '\0';
  local_8[0] = '\0';
  local_24[0] = '\0';
  puVar3 = &DAT_055c04a0;
  if (!bVar1) {
    puVar3 = puVar4;
  }
  local_c8 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_c0 = PTR_DAT_04bb2010 + 0x10;
  local_28[0] = '\0';
  local_40 = 0;
  local_68 = 0;
  local_30 = 0;
  local_90 = 0;
  local_b8 = 0;
  local_58 = 0;
  local_80 = 0;
  local_a8 = 0;
  local_b0 = puStack_c0;
  local_a0 = local_c8;
  puStack_98 = puStack_c0;
  local_88 = puStack_c0;
  local_78 = local_c8;
  puStack_70 = puStack_c0;
  local_60 = puStack_c0;
  local_50 = local_c8;
  puStack_48 = puStack_c0;
  local_38 = puStack_c0;
  uVar2 = FUN_0180ff90(*(undefined4 *)(puVar3 + 7),local_4,&local_50,local_24,&local_78,local_28,
                       &local_a0,local_8,&local_c8);
  if ((uVar2 & 1) != 0) {
    if (local_4[0] != '\0') {
      if (((float)(int)local_40 * 5.0 <= *param_1) && (*param_1 < (float)(int)local_30 * 5.0 + 5.0))
      {
        if (((float)local_40._4_4_ * 5.0 <= param_1[2]) &&
           (param_1[2] < (float)local_30._4_4_ * 5.0 + 5.0)) {
          return 1;
        }
      }
    }
    if (local_24[0] != '\0') {
      if (((float)(int)local_68 * 5.0 <= *param_1) && (*param_1 < (float)(int)local_58 * 5.0 + 5.0))
      {
        if (((float)local_68._4_4_ * 5.0 <= param_1[2]) &&
           (param_1[2] < (float)local_58._4_4_ * 5.0 + 5.0)) {
          return 1;
        }
      }
    }
    if (local_28[0] != '\0') {
      if (((float)(int)local_90 * 5.0 <= *param_1) && (*param_1 < (float)(int)local_80 * 5.0 + 5.0))
      {
        if (((float)local_90._4_4_ * 5.0 <= param_1[2]) &&
           (param_1[2] < (float)local_80._4_4_ * 5.0 + 5.0)) {
          return 1;
        }
      }
    }
    if (local_8[0] != '\0') {
      if (((float)(int)local_b8 * 5.0 <= *param_1) && (*param_1 < (float)(int)local_a8 * 5.0 + 5.0))
      {
        if (((float)local_b8._4_4_ * 5.0 <= param_1[2]) &&
           (param_1[2] < (float)local_a8._4_4_ * 5.0 + 5.0)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

