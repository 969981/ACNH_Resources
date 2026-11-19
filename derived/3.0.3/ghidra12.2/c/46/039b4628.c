
void FUN_039b4628(long param_1,long *param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  void *pvVar11;
  uint uVar12;
  long lVar13;
  undefined *local_8f0;
  char *local_8e8;
  undefined4 local_8e0;
  undefined1 local_8dc [63];
  undefined1 local_89d;
  undefined *local_898;
  char *local_890;
  undefined8 local_888;
  undefined1 auStack_880 [59];
  undefined1 local_845;
  undefined1 local_485;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_78;
  undefined8 local_70;
  
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    puVar8 = malloc(0x5d228);
  }
  else {
    plVar7 = param_3;
    if (param_3 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar13 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        puVar8 = (undefined8 *)0x0;
        goto LAB_039b46bc;
      }
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x5d228,8);
  }
LAB_039b46bc:
  FUN_039b58f0(puVar8);
  *puVar8 = &PTR_FUN_04b6a660;
  FUN_03a4d2f0(puVar8 + 0x9b);
  puVar8[0xb969] = 0;
  puVar8[0xb96a] = 0;
  puVar8[0xb967] = &PTR_LAB_04b6a680;
  puVar8[0xb968] = 0;
  FUN_03aeeef0(puVar8 + 0xb96b);
  *(undefined4 *)(puVar8 + 0xba43) = 0;
  puVar8[0xba44] = 0;
  plVar7 = *(long **)(param_1 + 0x10);
  *(undefined8 **)(param_1 + 8) = puVar8;
  FUN_039b5fc0(puVar8,param_2,param_3);
  (**(code **)(puVar8[0x44] + 0x18))(puVar8 + 0x44);
  local_89d = 0;
  local_8e0 = 0x40;
  local_845 = 0;
  local_8e8 = local_8dc;
  local_8dc[0] = 0;
  local_8f0 = PTR_DAT_04bb2bc0 + 0x10;
  local_888 = (undefined1 *)CONCAT35(local_888._5_3_,0x40);
  local_890 = (char *)((long)&local_888 + 4);
  local_898 = local_8f0;
  (**(code **)(PTR_PTR_04c4bb48 + 0x18))(&PTR_PTR_04c4bb48);
  puVar2 = PTR_DAT_04c4bb50;
  (**(code **)(PTR_PTR_04c4bb58 + 0x18))(&PTR_PTR_04c4bb58);
  FUN_038d1270(&local_898,"%s.%s",puVar2,PTR_s_gmsconf_04c4bb60);
  FUN_039b6c20(&local_8f0,&local_898);
  uVar9 = (**(code **)(*param_2 + 0x30))(param_2,&local_8f0,0);
  puVar8[0xb966] = uVar9;
  FUN_03964240(&local_898,uVar9);
  (**(code **)(puVar8[0x9b] + 0x50))(puVar8 + 0x9b,local_898);
  puVar1 = puVar8 + 0xb967;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    pvVar11 = malloc(0x400);
joined_r0x039b4cd8:
    if (pvVar11 != (void *)0x0) {
      puVar8[0xb968] = 0x8000000000;
      puVar8[0xb969] = pvVar11;
    }
  }
  else {
    plVar10 = param_3;
    if (param_3 != (long *)0x0) {
LAB_039b48bc:
      pvVar11 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x400,8);
      goto joined_r0x039b4cd8;
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar10 = (long *)(lVar13 + 8);
    if (lVar6 != 0) {
      plVar10 = (long *)(lVar6 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 != (long *)0x0) goto LAB_039b48bc;
  }
  FUN_039a6448(puVar1,0,2,param_4);
  local_89d = 0;
  local_8e0 = 0x40;
  local_8e8 = local_8dc;
  local_8dc[0] = 0;
  local_8f0 = PTR_DAT_04bb2bc0 + 0x10;
  local_845 = 0;
  local_888 = (undefined1 *)CONCAT35(local_888._5_3_,0x40);
  local_898 = local_8f0;
  local_890 = (char *)((long)&local_888 + 4);
  (**(code **)(PTR_PTR_04c4bb48 + 0x18))(&PTR_PTR_04c4bb48);
  puVar2 = PTR_DAT_04c4bb50;
  (**(code **)(PTR_PTR_04c4bb68 + 0x18))(&PTR_PTR_04c4bb68);
  FUN_038d1270(&local_898,"%s.%s",puVar2,PTR_s_ptclconf_04c4bb70);
  FUN_039b6c20(&local_8f0,&local_898);
  lVar13 = (**(code **)(*param_2 + 0x30))(param_2,&local_8f0,0);
  if (param_4 != 0) {
    local_485 = 0;
    local_888 = (undefined1 *)CONCAT35(local_888._5_3_,0x400);
    local_898 = PTR_DAT_04bb2f40 + 0x10;
    local_890 = (char *)((long)&local_888 + 4);
    FUN_038d1270(&local_898,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_0409e447);
  }
  if (lVar13 != 0) {
    FUN_03964240(&local_898,lVar13);
    (**(code **)(puVar8[0xb96b] + 0x50))(puVar8 + 0xb96b,local_898);
  }
  uVar5 = *(uint *)(puVar8 + 0x52);
  if (0 < (int)uVar5) {
    uVar12 = 0;
    do {
      uVar4 = uVar12;
      if (*(uint *)(puVar8 + 0x95) <= uVar12) {
        uVar4 = 0;
      }
      lVar13 = (**(code **)(*param_2 + 0x30))(param_2,puVar8[0x96] + (ulong)uVar4 * 0x110 + 0x48,0);
      if (lVar13 != 0) {
        FUN_039b57d4(puVar1,lVar13,param_3,param_4);
      }
      uVar12 = uVar12 + 1;
    } while (uVar5 != uVar12);
  }
  local_898 = PTR_DAT_04bb2020 + 0x10;
  local_890 = "gsys_minimum.bfsha";
  lVar13 = (**(code **)(*plVar7 + 0x30))(plVar7,&local_898,0);
  if (lVar13 != 0) {
    uVar9 = FUN_039b57d4(puVar1,lVar13,param_3,param_4);
    puVar8[0xb96a] = uVar9;
  }
  uVar5 = *(uint *)(puVar8 + 0x56);
  if (0 < (int)uVar5) {
    uVar12 = 0;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      uVar4 = uVar12;
      if (*(uint *)(puVar8 + 0x97) <= uVar12) {
        uVar4 = 0;
      }
      local_8e8 = *(char **)(puVar8[0x98] + (ulong)uVar4 * 0xa0 + 0x50);
      local_8f0 = puVar2;
      local_898 = (undefined *)(**(code **)(*param_2 + 0x30))(param_2,&local_8f0,0);
      local_890 = (char *)0x10000000000;
      local_80 = 0x10001;
      local_7c = 0;
      local_78 = 0xffffffff;
      local_70 = 0;
      local_888 = auStack_880;
      FUN_039fb680(&local_898,param_3,0);
      uVar12 = uVar12 + 1;
    } while (uVar5 != uVar12);
  }
  uVar5 = *(uint *)(puVar8 + 0x5a);
  if ((int)uVar5 < 1) {
    return;
  }
  puVar3 = (uint *)(puVar8 + 0xba43);
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    pvVar11 = malloc((ulong)uVar5 << 4);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_3 = (long *)(lVar13 + 8);
      if (lVar6 != 0) {
        param_3 = (long *)(lVar6 + 0xa8);
      }
      param_3 = (long *)*param_3;
      if (param_3 == (long *)0x0) goto LAB_039b4be0;
    }
    pvVar11 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(ulong)uVar5 << 4,8);
  }
  if (pvVar11 != (void *)0x0) {
    *puVar3 = uVar5;
    puVar8[0xba44] = pvVar11;
  }
LAB_039b4be0:
  uVar12 = 0;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  do {
    uVar4 = uVar12;
    if (*(uint *)(puVar8 + 0x99) <= uVar12) {
      uVar4 = 0;
    }
    lVar13 = puVar8[0x9a] + (ulong)uVar4 * 0x110;
    local_890 = *(char **)(lVar13 + 0x50);
    local_8e8 = *(char **)(lVar13 + 0xc0);
    local_8f0 = puVar2;
    local_898 = puVar2;
    if (*local_890 == '\0') {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)(*param_2 + 0x30))(param_2,&local_898,0);
    }
    uVar4 = uVar12;
    if (*puVar3 <= uVar12) {
      uVar4 = 0;
    }
    *(undefined8 *)(puVar8[0xba44] + (ulong)uVar4 * 0x10) = uVar9;
    if (*local_8e8 == '\0') {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)(*param_2 + 0x30))(param_2,&local_8f0,0);
    }
    uVar4 = uVar12;
    if (*puVar3 <= uVar12) {
      uVar4 = 0;
    }
    uVar12 = uVar12 + 1;
    *(undefined8 *)(puVar8[0xba44] + (ulong)uVar4 * 0x10 + 8) = uVar9;
  } while (uVar5 != uVar12);
  return;
}

