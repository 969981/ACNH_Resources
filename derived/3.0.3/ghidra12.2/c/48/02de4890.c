
void FUN_02de4890(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  long lVar8;
  long *plVar9;
  void *pvVar10;
  byte bVar11;
  long lVar12;
  void *__src;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar2 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar2 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar11 = *(byte *)(param_3 + 0xe);
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar11;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x3e] = -1;
  param_1[0x47] = 0;
  *param_1 = (long)&PTR_LAB_04acbd40;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  puVar1 = PTR_DAT_04bc9ca8 + 0x10;
  param_1[0x4b] = (long)puVar1;
  param_1[0x50] = (long)puVar1;
  puVar1 = PTR_DAT_04bc9be0 + 0x10;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x54] = (long)puVar1;
  memset(param_1 + 0x55,0,0x1bf30);
  lVar12 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar9 = param_1;
  do {
    FUN_03463544(plVar9 + 0x55,0);
    *(undefined4 *)(plVar9 + 0x80) = 0x40;
    lVar12 = lVar12 + -1;
    plVar9[0x7f] = (long)plVar9 + 0x404;
    *(undefined1 *)((long)plVar9 + 0x443) = 0;
    *(undefined1 *)((long)plVar9 + 0x404) = 0;
    plVar9[0x7e] = (long)puVar1;
    *(undefined4 *)(plVar9 + 0x89) = 0;
    plVar9 = plVar9 + 0x35;
  } while (lVar12 != 0);
  *(undefined4 *)(param_1 + 0x383d) = 0;
  puVar2 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x383e) = 0;
  *(undefined4 *)(param_1 + 0x383f) = 0;
  param_1[0x383b] = (long)(puVar2 + 0x10);
  param_1[0x383c] = -1;
  FUN_03135560(param_1 + 0x384c);
  *(undefined4 *)((long)param_1 + 0x1c394) = 0;
  puVar1 = PTR_DAT_04bc5170;
  param_1[0x386f] = 0;
  param_1[0x3870] = 0;
  *(undefined2 *)(param_1 + 0x3873) = 0x100;
  *(undefined2 *)(param_1 + 0x3876) = 0x100;
  *(undefined4 *)((long)param_1 + 0x1c39c) = 0;
  *(undefined1 *)(param_1 + 0x3872) = 1;
  param_1[0x3871] = (long)(puVar1 + 0x10);
  *(undefined1 *)(param_1 + 0x3875) = 1;
  *(undefined4 *)((long)param_1 + 0x1c3ac) = 0;
  param_1[0x3874] = (long)(puVar1 + 0x10);
  *(undefined4 *)((long)param_1 + 0x1c3b4) = 0;
  param_1[0x3877] = 0;
  FUN_03463544(param_1 + 0x3878,0);
  param_1[0x38a1] = (long)(puVar2 + 0x10);
  param_1[0x38a2] = -1;
  *(undefined4 *)(param_1 + 0x38a3) = 0;
  *(undefined4 *)(param_1 + 0x38a4) = 0;
  puVar1 = PTR_DAT_04bc6260 + 0x10;
  param_1[0x38a6] = 0;
  param_1[0x38a7] = 0;
  param_1[0x38a8] = 0;
  pvVar10 = (void *)((long)param_1 + 0x1c564);
  param_1[0x38ab] = (long)pvVar10;
  param_1[0x38a5] = (long)puVar1;
  puVar2 = PTR_DAT_04bb2f70;
  *(undefined4 *)(param_1 + 0x38ac) = 0x40;
  *(undefined1 *)((long)param_1 + 0x1c5a3) = 0;
  puVar1 = PTR_PTR_04bb2238;
  param_1[0x38a9] = 0xffffffff;
  param_1[0x38aa] = (long)(puVar2 + 0x10);
  (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
  __src = *(void **)(puVar1 + 8);
  if (pvVar10 != __src) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    lVar12 = 0;
    do {
      if (*(char *)(*(long *)(puVar1 + 8) + lVar12) == '\0') goto LAB_02de4b90;
      lVar8 = *(long *)(puVar1 + 8) + lVar12;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_02de4b90;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_02de4b90;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_02de4b90:
    iVar3 = (int)lVar12;
    if ((int)param_1[0x38ac] <= (int)lVar12) {
      iVar3 = (int)param_1[0x38ac] + -1;
    }
    memcpy(pvVar10,__src,(long)iVar3);
    *(undefined1 *)((long)pvVar10 + (long)iVar3) = 0;
  }
  *(undefined4 *)(param_1 + 0x38b5) = 0;
  puVar1 = PTR_DAT_04bc4830 + 0x10;
  param_1[0x38aa] = (long)(PTR_DAT_04bb2bc0 + 0x10);
  param_1[0x38b8] = 0;
  param_1[0x38b9] = 0;
  param_1[0x38ba] = 0;
  param_1[0x38bb] = 0;
  param_1[0x38bc] = 0;
  param_1[0x38bd] = 0;
  param_1[0x38be] = 0;
  param_1[0x38bf] = 0;
  puVar2 = PTR_DAT_04bc4880 + 0x10;
  param_1[0x38b6] = (long)puVar1;
  param_1[0x38b7] = (long)puVar2;
  puVar1 = PTR_DAT_04bc4828;
  param_1[0x38dc] = 0;
  param_1[0x38c1] = 0;
  param_1[0x38c2] = 0;
  *(undefined4 *)(param_1 + 0x38dd) = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x38c3] = 0;
  param_1[0x38c4] = 0;
  param_1[0x38c5] = 0;
  param_1[0x38c6] = 0;
  param_1[0x38de] = 0;
  *(undefined4 *)(param_1 + 0x38df) = 0;
  param_1[0x38e0] = 0;
  *(undefined4 *)(param_1 + 0x38e1) = 0;
  param_1[0x38e2] = 0;
  *(undefined4 *)(param_1 + 0x38e3) = 0;
  param_1[0x38e4] = 0;
  *(undefined4 *)(param_1 + 0x38db) = 0;
  param_1[0x38c0] = (long)puVar1;
  param_1[0x38c9] = (long)puVar1;
  param_1[0x38d2] = (long)puVar1;
  param_1[0x38c7] = 0;
  param_1[0x38c8] = 0;
  param_1[0x38ca] = 0;
  param_1[0x38cb] = 0;
  param_1[0x38cc] = 0;
  param_1[0x38cd] = 0;
  param_1[0x38ce] = 0;
  param_1[0x38cf] = 0;
  param_1[0x38d0] = 0;
  param_1[0x38d1] = 0;
  param_1[0x38d9] = 0;
  param_1[0x38da] = 0;
  param_1[0x38d7] = 0;
  param_1[0x38d8] = 0;
  puVar1 = PTR_DAT_04bb37e0;
  uVar7 = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined2 *)(param_1 + 0x38e5) = uVar7;
  uVar5 = puVar1[2];
  *(undefined1 *)((long)param_1 + 0x1c72a) = uVar5;
  uVar6 = puVar1[3];
  *(undefined1 *)((long)param_1 + 0x1c72b) = uVar6;
  uVar4 = *(undefined4 *)(puVar1 + 4);
  param_1[0x38e8] = 0;
  *(undefined2 *)(param_1 + 0x38e6) = uVar7;
  plVar9 = param_1 + 0x38f0;
  *(undefined1 *)((long)param_1 + 0x1c732) = uVar5;
  lVar12 = 0x3a94;
  *(undefined1 *)((long)param_1 + 0x1c733) = uVar6;
  *(undefined4 *)((long)param_1 + 0x1c72c) = uVar4;
  *(undefined4 *)((long)param_1 + 0x1c734) = uVar4;
  param_1[0x38d5] = 0;
  param_1[0x38d6] = 0;
  param_1[0x38d3] = 0;
  param_1[0x38d4] = 0;
  puVar1 = PTR_DAT_04bc5db8 + 0x10;
  param_1[0x38e9] = 0;
  param_1[0x38e7] = (long)puVar1;
  param_1[0x38ea] = (long)(param_1 + 0x38ec);
  while( true ) {
    plVar9[-3] = (long)(plVar9 + -2);
    plVar9[-4] = (long)(plVar9 + -3);
    plVar9[-2] = (long)(plVar9 + -1);
    if (lVar12 == 0) break;
    plVar9[-1] = (long)plVar9;
    plVar9 = plVar9 + 4;
    lVar12 = lVar12 + -4;
  }
  param_1[0x38eb] = (long)(param_1 + 0x38ec);
  param_1[0x7383] = 0;
  if (param_1 + 0x7384 != (long *)0x0) {
    param_1[0x38e9] = (long)(param_1 + 0x7384);
    *(undefined4 *)((long)param_1 + 0x1c744) = 15000;
  }
  puVar1 = PTR_DAT_04bb2698;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  param_1[0xae1c] = 0xffffffff;
  param_1[0xae1d] = 0x100000000;
  *(undefined4 *)(param_1 + 0x38e8) = 0;
  param_1[0xae1e] = 0x10000000000;
  *(undefined4 *)((long)param_1 + 0x1c20c) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x1c1fc) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x1c204) = 0xffffffffffffffff;
  param_1[0x44] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x3842] = 0;
  param_1[0x3843] = 0;
  param_1[0x3844] = 0;
  param_1[0x3845] = 0;
  param_1[0x3846] = 0;
  param_1[0x3847] = 0;
  puVar2 = PTR_DAT_04bb3350;
  param_1[0x3848] = 0;
  param_1[0x3849] = 0;
  param_1[0x384a] = 0;
  param_1[0x384b] = 0;
  if (lVar12 == 0) {
    pvVar10 = malloc(0x400);
joined_r0x02de4de8:
    if (pvVar10 != (void *)0x0) {
      param_1[0x38dc] = (long)pvVar10;
      *(undefined4 *)(param_1 + 0x38db) = 0x200;
    }
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar9 = (long *)(lVar12 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) {
      pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x400,8);
      goto joined_r0x02de4de8;
    }
  }
  lVar12 = *(long *)puVar1;
  if (lVar12 == 0) {
    pvVar10 = malloc(0x400);
joined_r0x02de4e48:
    if (pvVar10 != (void *)0x0) {
      param_1[0x38e0] = (long)pvVar10;
      *(undefined4 *)(param_1 + 0x38df) = 0x200;
    }
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar9 = (long *)(lVar12 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) {
      pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x400,8);
      goto joined_r0x02de4e48;
    }
  }
  lVar12 = *(long *)puVar1;
  if (lVar12 == 0) {
    pvVar10 = malloc(0x400);
joined_r0x02de4ea8:
    if (pvVar10 != (void *)0x0) {
      param_1[0x38de] = (long)pvVar10;
      *(undefined4 *)(param_1 + 0x38dd) = 0x200;
    }
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar9 = (long *)(lVar12 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) {
      pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x400,8);
      goto joined_r0x02de4ea8;
    }
  }
  lVar12 = *(long *)puVar1;
  if (lVar12 == 0) {
    pvVar10 = malloc(0x400);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar9 = (long *)(lVar12 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_02de4f18;
    pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x400,8);
  }
  if (pvVar10 != (void *)0x0) {
    param_1[0x38e2] = (long)pvVar10;
    *(undefined4 *)(param_1 + 0x38e1) = 0x200;
  }
LAB_02de4f18:
  lVar12 = *(long *)puVar1;
  if (lVar12 == 0) {
    pvVar10 = malloc(0x1800);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar9 = (long *)(lVar12 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) {
      return;
    }
    pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x1800,8);
  }
  if (pvVar10 != (void *)0x0) {
    memset(pvVar10,0,0x1800);
    param_1[0x38e4] = (long)pvVar10;
    *(undefined4 *)(param_1 + 0x38e3) = 0x200;
  }
  return;
}

