
void FUN_03a4d2f0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  undefined1 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined1 *__dest;
  int iVar20;
  long local_cb0;
  undefined8 local_ca8;
  undefined *local_898;
  undefined1 *local_890;
  undefined4 local_888;
  undefined1 local_884 [31];
  undefined1 local_865;
  undefined *local_480;
  byte *local_478;
  undefined4 local_470;
  undefined1 local_46c [1023];
  undefined1 local_6d;
  
  puVar5 = PTR_DAT_04bb2020;
  local_478 = (byte *)0x40ad93d;
  local_480 = PTR_DAT_04bb2020 + 0x10;
  FUN_03955370(param_1,&local_480,0);
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  puVar11 = PTR_DAT_04bd1070;
  puVar1 = PTR_DAT_04bd1068;
  *param_1 = &PTR_FUN_04b6e0a8;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = puVar11 + 0x10;
  param_1[0x3a] = puVar1 + 0x10;
  param_1[0x3b] = 0;
  puVar11 = PTR_DAT_04bd1140;
  lVar12 = *(long *)PTR_DAT_04bd1140;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  puVar1 = PTR_PTR_04bb2238;
  param_1[0x47] = 0;
  uVar13 = 0;
  if (lVar12 != 0) {
    uVar13 = FUN_03954f70(lVar12,PTR_PTR_04bb2238);
  }
  param_1[0x48] = uVar13;
  (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
  pbVar16 = *(byte **)(puVar1 + 8);
  uVar14 = (uint)*pbVar16;
  if (*pbVar16 != 0) {
    uVar15 = 0xffffffff;
    do {
      pbVar16 = pbVar16 + 1;
      uVar15 = crc32b(uVar15,uVar14,0x4c11db7);
      uVar14 = (uint)*pbVar16;
    } while (uVar14 != 0);
    uVar14 = ~uVar15;
  }
  *(uint *)(param_1 + 0x45) = uVar14;
  param_1[0x40] = &PTR_LAB_04b6e120;
  plVar9 = param_1 + 0x41;
  *(undefined1 *)(param_1 + 0x49) = 0;
  FUN_03a46bb0();
  FUN_03a46bb0(param_1 + 0x5f9);
  FUN_03a46bb0(param_1 + 0xba8);
  FUN_03a46bb0(param_1 + 0x1157);
  FUN_03a46bb0(param_1 + 0x1706);
  FUN_03a46bb0(param_1 + 0x1cb5);
  FUN_03a46bb0(param_1 + 0x2264);
  FUN_03a46bb0(param_1 + 0x2813);
  FUN_03a46bb0(param_1 + 0x2dc2);
  FUN_03a46bb0(param_1 + 0x3371);
  FUN_03a46bb0(param_1 + 0x3920);
  FUN_03a46bb0(param_1 + 0x3ecf);
  FUN_03a46bb0(param_1 + 0x447e);
  FUN_03a46bb0(param_1 + 0x4a2d);
  FUN_03a46bb0(param_1 + 0x4fdc);
  FUN_03a46bb0(param_1 + 0x558b);
  FUN_03a46bb0(param_1 + 0x5b3a);
  FUN_03a46bb0(param_1 + 0x60e9);
  FUN_03a46bb0(param_1 + 0x6698);
  FUN_03a46bb0(param_1 + 0x6c47);
  FUN_03a46bb0(param_1 + 0x71f6);
  FUN_03a46bb0(param_1 + 0x77a5);
  FUN_03a46bb0(param_1 + 0x7d54);
  FUN_03a46bb0(param_1 + 0x8303);
  FUN_03a46bb0(param_1 + 0x88b2);
  FUN_03a46bb0(param_1 + 0x8e61);
  FUN_03a46bb0(param_1 + 0x9410);
  FUN_03a46bb0(param_1 + 0x99bf);
  FUN_03a46bb0(param_1 + 0x9f6e);
  FUN_03a46bb0(param_1 + 0xa51d);
  FUN_03a46bb0(param_1 + 0xaacc);
  FUN_03a46bb0(param_1 + 0xb07b);
  uVar6 = crc32b(0xffffffff,100,0x4c11db7);
  uVar6 = crc32b(uVar6,0x65,0x4c11db7);
  uVar6 = crc32b(uVar6,0x66,0x4c11db7);
  uVar6 = crc32b(uVar6,0x61,0x4c11db7);
  uVar6 = crc32b(uVar6,0x75,0x4c11db7);
  uVar6 = crc32b(uVar6,0x6c,0x4c11db7);
  puVar1 = PTR_DAT_04bd11d0 + 0x10;
  uVar14 = crc32b(uVar6,0x74,0x4c11db7);
  puVar2 = PTR_DAT_04bb2028 + 0x10;
  lVar12 = 0;
  do {
    *(undefined4 *)((long)param_1 + lVar12 + 0x5b178) = 0x20;
    lVar3 = lVar12 + 0x50;
    *(uint *)((long)param_1 + lVar12 + 0x5b158) = ~uVar14;
    puVar17 = (undefined1 *)((long)param_1 + lVar12 + 0x5b17c);
    *puVar17 = 0;
    *(undefined **)((long)param_1 + lVar12 + 0x5b150) = puVar1;
    *(undefined1 *)((long)param_1 + lVar12 + 0x5b19b) = 0;
    *(undefined8 *)((long)param_1 + lVar12 + 0x5b160) = 0;
    *(undefined **)((long)param_1 + lVar12 + 0x5b168) = puVar2;
    *(undefined1 **)((long)param_1 + lVar12 + 0x5b170) = puVar17;
    lVar12 = lVar3;
  } while (lVar3 != 0xa00);
  puVar19 = param_1 + 0xb76a;
  FUN_03a4cf10(puVar19);
  puVar10 = param_1 + 0xb796;
  FUN_03a4cf10(puVar10);
  puVar4 = param_1 + 0xb7c2;
  FUN_03a4cf10(puVar4);
  FUN_03a4cf10();
  FUN_03a4cf10();
  FUN_03a4cf10();
  FUN_03a4cf10();
  FUN_03a4cf10();
  *(undefined4 *)(param_1 + 0xb8ca) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x5c654) = 1;
  puVar1 = PTR_DAT_04bb4e50;
  param_1[0xb8cb] = 0;
  if (*(long *)(*(long *)puVar1 + 0x58) != 0) {
    FUN_006e9454(&local_cb0,"%s_%s","appli","setting");
    local_6d = 0;
    local_478 = local_46c;
    local_470 = 0x400;
    local_46c[0] = 0;
    local_480 = PTR_DAT_04bb2f40 + 0x10;
    (**(code **)(local_cb0 + 0x18))(&local_cb0);
    FUN_006e9454(&local_898,"%s\\%s","appli",local_ca8);
    (**(code **)(local_898 + 0x18))(&local_898);
    FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",local_890);
  }
  local_480 = puVar5 + 0x10;
  local_478 = (byte *)0x408ed7e;
  uVar13 = 0;
  if (*(long *)puVar11 != 0) {
    uVar13 = FUN_03954f70(*(long *)puVar11,&local_480);
  }
  param_1[0x3f] = uVar13;
  (**(code **)(local_480 + 0x18))(&local_480);
  uVar14 = (uint)*local_478;
  if (*local_478 != 0) {
    uVar15 = 0xffffffff;
    do {
      local_478 = local_478 + 1;
      uVar15 = crc32b(uVar15,uVar14,0x4c11db7);
      uVar14 = (uint)*local_478;
    } while (uVar14 != 0);
    uVar14 = ~uVar15;
  }
  *(uint *)((long)param_1 + 0x1ec) = uVar14;
  lVar12 = *(long *)puVar11;
  local_480 = puVar5 + 0x10;
  local_478 = (byte *)0x40b2e8d;
  plVar8 = param_1 + 1;
  if (param_1[2] != 0) {
    plVar8 = (long *)(param_1[2] + 0x20);
  }
  *plVar8 = (long)(param_1 + 0x3a);
  param_1[2] = param_1 + 0x3a;
  uVar13 = 0;
  if (lVar12 != 0) {
    uVar13 = FUN_03954f70(lVar12,&local_480);
  }
  param_1[0x48] = uVar13;
  (**(code **)(local_480 + 0x18))(&local_480);
  uVar14 = (uint)*local_478;
  if (*local_478 != 0) {
    uVar15 = 0xffffffff;
    pbVar16 = local_478;
    do {
      pbVar16 = pbVar16 + 1;
      uVar15 = crc32b(uVar15,uVar14,0x4c11db7);
      uVar14 = (uint)*pbVar16;
    } while (uVar14 != 0);
    uVar14 = ~uVar15;
  }
  *(uint *)(param_1 + 0x45) = uVar14;
  plVar8 = param_1 + 3;
  if (param_1[4] != 0) {
    plVar8 = (long *)(param_1[4] + 0x30);
  }
  *plVar8 = (long)(param_1 + 0x40);
  param_1[4] = param_1 + 0x40;
  param_1[0x47] = param_1;
  FUN_006d8678(&local_480,"env_obj_set_template_%02d",0);
  uVar13 = 0;
  if (*(long *)puVar11 != 0) {
    uVar13 = FUN_03954f70(*(long *)puVar11,&local_480);
  }
  param_1[0xb76f] = uVar13;
  (**(code **)(local_480 + 0x18))(&local_480);
  uVar14 = (uint)*local_478;
  if (*local_478 != 0) {
    uVar15 = 0xffffffff;
    pbVar16 = local_478;
    do {
      pbVar16 = pbVar16 + 1;
      uVar15 = crc32b(uVar15,uVar14,0x4c11db7);
      uVar14 = (uint)*pbVar16;
    } while (uVar14 != 0);
    uVar14 = ~uVar15;
  }
  *(uint *)((long)param_1 + 0x5bb6c) = uVar14;
  plVar8 = plVar9;
  if (param_1[0x42] != 0) {
    plVar8 = (long *)(param_1[0x42] + 0x20);
  }
  *plVar8 = (long)puVar19;
  param_1[0x42] = puVar19;
  FUN_006d8678(&local_480,"env_obj_set_template_%02d",1);
  uVar13 = 0;
  if (*(long *)puVar11 != 0) {
    uVar13 = FUN_03954f70(*(long *)puVar11,&local_480);
  }
  param_1[0xb79b] = uVar13;
  (**(code **)(local_480 + 0x18))(&local_480);
  uVar14 = (uint)*local_478;
  if (*local_478 != 0) {
    uVar15 = 0xffffffff;
    pbVar16 = local_478;
    do {
      pbVar16 = pbVar16 + 1;
      uVar15 = crc32b(uVar15,uVar14,0x4c11db7);
      uVar14 = (uint)*pbVar16;
    } while (uVar14 != 0);
    uVar14 = ~uVar15;
  }
  *(uint *)((long)param_1 + 0x5bccc) = uVar14;
  plVar8 = plVar9;
  if (param_1[0x42] != 0) {
    plVar8 = (long *)(param_1[0x42] + 0x20);
  }
  *plVar8 = (long)puVar10;
  param_1[0x42] = puVar10;
  FUN_006d8678(&local_480,"env_obj_set_template_%02d",2);
  uVar13 = 0;
  if (*(long *)puVar11 != 0) {
    uVar13 = FUN_03954f70(*(long *)puVar11,&local_480);
  }
  param_1[0xb7c7] = uVar13;
  (**(code **)(local_480 + 0x18))(&local_480);
  uVar14 = (uint)*local_478;
  if (*local_478 != 0) {
    uVar15 = 0xffffffff;
    pbVar16 = local_478;
    do {
      pbVar16 = pbVar16 + 1;
      uVar15 = crc32b(uVar15,uVar14,0x4c11db7);
      uVar14 = (uint)*pbVar16;
    } while (uVar14 != 0);
    uVar14 = ~uVar15;
  }
  *(uint *)((long)param_1 + 0x5be2c) = uVar14;
  plVar8 = plVar9;
  if (param_1[0x42] != 0) {
    plVar8 = (long *)(param_1[0x42] + 0x20);
  }
  *plVar8 = (long)puVar4;
  param_1[0x42] = puVar4;
  FUN_006d8678(&local_480,"env_obj_set_template_%02d",3);
  uVar13 = 0;
  if (*(long *)puVar11 != 0) {
    uVar13 = FUN_03954f70(*(long *)puVar11,&local_480);
  }
  param_1[0xb7f3] = uVar13;
  (**(code **)(local_480 + 0x18))(&local_480);
  uVar14 = (uint)*local_478;
  if (*local_478 != 0) {
    uVar15 = 0xffffffff;
    pbVar16 = local_478;
    do {
      pbVar16 = pbVar16 + 1;
      uVar15 = crc32b(uVar15,uVar14,0x4c11db7);
      uVar14 = (uint)*pbVar16;
    } while (uVar14 != 0);
    uVar14 = ~uVar15;
  }
  *(uint *)((long)param_1 + 0x5bf8c) = uVar14;
  plVar8 = plVar9;
  if (param_1[0x42] != 0) {
    plVar8 = (long *)(param_1[0x42] + 0x20);
  }
  *plVar8 = (long)(param_1 + 0xb7ee);
  param_1[0x42] = param_1 + 0xb7ee;
  FUN_006d8678(&local_480,"env_obj_set_template_%02d",4);
  uVar13 = 0;
  if (*(long *)puVar11 != 0) {
    uVar13 = FUN_03954f70(*(long *)puVar11,&local_480);
  }
  param_1[0xb81f] = uVar13;
  (**(code **)(local_480 + 0x18))(&local_480);
  uVar14 = (uint)*local_478;
  if (*local_478 != 0) {
    uVar15 = 0xffffffff;
    pbVar16 = local_478;
    do {
      pbVar16 = pbVar16 + 1;
      uVar15 = crc32b(uVar15,uVar14,0x4c11db7);
      uVar14 = (uint)*pbVar16;
    } while (uVar14 != 0);
    uVar14 = ~uVar15;
  }
  *(uint *)((long)param_1 + 0x5c0ec) = uVar14;
  plVar8 = plVar9;
  if (param_1[0x42] != 0) {
    plVar8 = (long *)(param_1[0x42] + 0x20);
  }
  *plVar8 = (long)(param_1 + 0xb81a);
  param_1[0x42] = param_1 + 0xb81a;
  FUN_006d8678(&local_480,"env_obj_set_template_%02d",5);
  uVar13 = 0;
  if (*(long *)puVar11 != 0) {
    uVar13 = FUN_03954f70(*(long *)puVar11,&local_480);
  }
  param_1[0xb84b] = uVar13;
  (**(code **)(local_480 + 0x18))(&local_480);
  uVar14 = (uint)*local_478;
  if (*local_478 != 0) {
    uVar15 = 0xffffffff;
    pbVar16 = local_478;
    do {
      pbVar16 = pbVar16 + 1;
      uVar15 = crc32b(uVar15,uVar14,0x4c11db7);
      uVar14 = (uint)*pbVar16;
    } while (uVar14 != 0);
    uVar14 = ~uVar15;
  }
  *(uint *)((long)param_1 + 0x5c24c) = uVar14;
  plVar8 = plVar9;
  if (param_1[0x42] != 0) {
    plVar8 = (long *)(param_1[0x42] + 0x20);
  }
  *plVar8 = (long)(param_1 + 0xb846);
  param_1[0x42] = param_1 + 0xb846;
  FUN_006d8678(&local_480,"env_obj_set_template_%02d",6);
  uVar13 = 0;
  if (*(long *)puVar11 != 0) {
    uVar13 = FUN_03954f70(*(long *)puVar11,&local_480);
  }
  param_1[0xb877] = uVar13;
  (**(code **)(local_480 + 0x18))(&local_480);
  uVar14 = (uint)*local_478;
  if (*local_478 != 0) {
    uVar15 = 0xffffffff;
    pbVar16 = local_478;
    do {
      pbVar16 = pbVar16 + 1;
      uVar15 = crc32b(uVar15,uVar14,0x4c11db7);
      uVar14 = (uint)*pbVar16;
    } while (uVar14 != 0);
    uVar14 = ~uVar15;
  }
  *(uint *)((long)param_1 + 0x5c3ac) = uVar14;
  plVar8 = plVar9;
  if (param_1[0x42] != 0) {
    plVar8 = (long *)(param_1[0x42] + 0x20);
  }
  *plVar8 = (long)(param_1 + 0xb872);
  param_1[0x42] = param_1 + 0xb872;
  FUN_006d8678(&local_480,"env_obj_set_template_%02d",7);
  uVar13 = 0;
  if (*(long *)puVar11 != 0) {
    uVar13 = FUN_03954f70(*(long *)puVar11,&local_480);
  }
  param_1[0xb8a3] = uVar13;
  (**(code **)(local_480 + 0x18))(&local_480);
  uVar14 = (uint)*local_478;
  if (*local_478 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = 0xffffffff;
    pbVar16 = local_478;
    do {
      pbVar16 = pbVar16 + 1;
      uVar15 = crc32b(uVar15,uVar14,0x4c11db7);
      uVar14 = (uint)*pbVar16;
    } while (uVar14 != 0);
    uVar15 = ~uVar15;
  }
  *(uint *)((long)param_1 + 0x5c50c) = uVar15;
  uVar18 = 0;
  puVar5 = PTR_DAT_04bb2028 + 0x10;
  if (param_1[0x42] != 0) {
    plVar9 = (long *)(param_1[0x42] + 0x20);
  }
  *plVar9 = (long)(param_1 + 0xb89e);
  param_1[0x42] = param_1 + 0xb89e;
  *(undefined1 *)(param_1 + 0xb773) = 1;
  iVar20 = 0;
  do {
    FUN_006d8678(&local_480,"config_%02d",uVar18 & 0xffffffff);
    puVar19 = param_1 + uVar18 * 10 + 0xb62a;
    local_865 = 0;
    local_888 = 0x20;
    local_884[0] = 0;
    puVar19[2] = 0;
    local_898 = puVar5;
    local_890 = local_884;
    (**(code **)(local_480 + 0x18))(&local_480);
    uVar14 = (uint)*local_478;
    if (*local_478 != 0) {
      uVar15 = 0xffffffff;
      pbVar16 = local_478;
      do {
        pbVar16 = pbVar16 + 1;
        uVar15 = crc32b(uVar15,uVar14,0x4c11db7);
        uVar14 = (uint)*pbVar16;
      } while (uVar14 != 0);
      uVar14 = ~uVar15;
    }
    *(uint *)(puVar19 + 1) = uVar14;
    puVar10 = param_1 + 0x3b;
    if (param_1[0x3c] != 0) {
      puVar10 = (undefined8 *)(param_1[0x3c] + 0x10);
    }
    *puVar10 = puVar19;
    param_1[0x3c] = puVar19;
    *(int *)(param_1 + 0x3d) = *(int *)(param_1 + 0x3d) + 1;
    __dest = (undefined1 *)param_1[uVar18 * 10 + 0xb62e];
    (**(code **)(local_898 + 0x18))(&local_898);
    puVar17 = local_890;
    if (__dest != local_890) {
      (**(code **)(local_898 + 0x18))(&local_898);
      lVar12 = 0;
      do {
        if (local_890[lVar12] == '\0') goto LAB_03a4dcd4;
        if (local_890[lVar12 + 1] == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_03a4dcd4;
        }
        if (local_890[lVar12 + 2] == '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_03a4dcd4;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      lVar12 = 0;
LAB_03a4dcd4:
      iVar7 = (int)lVar12;
      if (*(int *)(param_1 + uVar18 * 10 + 0xb62f) <= (int)lVar12) {
        iVar7 = *(int *)(param_1 + uVar18 * 10 + 0xb62f) + -1;
      }
      memcpy(__dest,puVar17,(long)iVar7);
      __dest[iVar7] = 0;
    }
    uVar18 = uVar18 + 1;
    param_1[(long)iVar20 * 0x5af + 0x228] = param_1;
    iVar20 = iVar20 + 1;
    if (uVar18 == 0x20) {
      return;
    }
  } while( true );
}

