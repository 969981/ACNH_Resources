
void FUN_038febe0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  void *pvVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined8 uStack_58;
  
  puVar4 = PTR_DAT_04bb2698;
  plVar10 = (long *)*param_1;
  plVar12 = plVar10;
  if (plVar10 == (long *)0x0) {
    lVar11 = *(long *)PTR_DAT_04bb2698;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar3 = (undefined8 *)(lVar11 + 8);
    if (lVar8 != 0) {
      puVar3 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar12 = (long *)*puVar3;
  }
  (**(code **)(*plVar12 + 0x78))(plVar12);
  puVar5 = PTR_DAT_04bd0fa8;
  plVar13 = *(long **)PTR_DAT_04bd0fa8;
  if (plVar13 == (long *)0x0) {
    if (*(long *)puVar4 == 0) {
      plVar13 = malloc(0x88);
    }
    else {
      plVar13 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0x88,8);
    }
    FUN_038c69f0(plVar13 + 0xd,plVar12,3);
    puVar2 = PTR_DAT_04bd0ff8;
    puVar1 = PTR_DAT_04bd0fe8 + 0x10;
    *(long **)PTR_DAT_04bd0ff0 = plVar13 + 0xd;
    plVar13[0xd] = (long)puVar1;
    *plVar13 = (long)(puVar2 + 0x10);
    FUN_038e18e4(plVar13 + 1);
    plVar13[9] = 0;
    plVar13[10] = 0;
    plVar13[0xb] = 0x1000;
    *(undefined4 *)((long)plVar13 + 100) = 1;
    *(long **)puVar5 = plVar13;
    *(undefined1 *)(plVar13 + 0xc) = 2;
    lVar8 = *(long *)puVar4;
  }
  else {
    lVar8 = *(long *)puVar4;
  }
  if (lVar8 == 0) {
    pvVar9 = malloc(0x8000);
  }
  else {
    pvVar9 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,0x8000,8);
  }
  if (pvVar9 != (void *)0x0) {
    plVar13[10] = (long)pvVar9;
    *(undefined4 *)((long)plVar13 + 0x4c) = 0x1000;
  }
  *(undefined4 *)(plVar13 + 9) = 0;
  *(undefined8 *)(*(long *)puVar5 + 0x58) = param_1[0xd];
  plVar12 = plVar10;
  if (plVar10 == (long *)0x0) {
    lVar11 = *(long *)puVar4;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar3 = (undefined8 *)(lVar11 + 8);
    if (lVar8 != 0) {
      puVar3 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar12 = (long *)*puVar3;
  }
  (**(code **)(*plVar12 + 0x78))(plVar12);
  FUN_038fda34(plVar12);
  FUN_038f9fc0(*(undefined8 *)PTR_DAT_04bc1010,plVar12);
  puVar5 = PTR_DAT_04bd1050;
  if (*(long *)PTR_DAT_04bd1050 == 0) {
    if (*(long *)puVar4 == 0) {
      plVar13 = malloc(0x38);
    }
    else {
      plVar13 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0x38,8);
    }
    FUN_038c69f0(plVar13 + 3,plVar12,3);
    puVar2 = PTR_DAT_04bd1048;
    puVar1 = PTR_DAT_04bd1040;
    *(undefined4 *)(plVar13 + 1) = 0;
    *(long **)puVar2 = plVar13 + 3;
    puVar2 = PTR_DAT_04bd1058;
    plVar13[3] = (long)(puVar1 + 0x10);
    *plVar13 = (long)(puVar2 + 0x10);
    *(long **)puVar5 = plVar13;
    *(code **)((long)plVar13 + 0xc) = _init;
  }
  local_88 = (long *)0x0;
  local_80 = 0x3f80000000000000;
  (**(code **)PTR_DAT_04bcf3c8)(*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x30),&local_88,0x29);
  plVar12 = plVar10;
  if (plVar10 == (long *)0x0) {
    lVar11 = *(long *)puVar4;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar3 = (undefined8 *)(lVar11 + 8);
    if (lVar8 != 0) {
      puVar3 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar12 = (long *)*puVar3;
  }
  (**(code **)(*plVar12 + 0x78))(plVar12);
  puVar5 = PTR_DAT_04bb4e50;
  plVar13 = *(long **)PTR_DAT_04bb4e50;
  if (plVar13 == (long *)0x0) {
    if (*(long *)puVar4 == 0) {
      plVar13 = malloc(0xd0);
    }
    else {
      plVar13 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0xd0,8);
    }
    FUN_038c69f0(plVar13 + 0x16,plVar12,3);
    *(long **)PTR_DAT_04bd1578 = plVar13 + 0x16;
    puVar1 = PTR_DAT_04bd1570;
    *(undefined4 *)(plVar13 + 7) = 0;
    puVar2 = PTR_DAT_04bd1580;
    *(undefined2 *)((long)plVar13 + 0x9a) = 0;
    plVar13[1] = 0;
    plVar13[2] = 0;
    plVar13[0x12] = 0;
    plVar13[8] = 0;
    plVar13[9] = 0;
    plVar13[10] = 0;
    plVar13[0xb] = 0;
    plVar13[0x16] = (long)(puVar1 + 0x10);
    plVar13[0xc] = 0;
    plVar13[0xd] = 0;
    *plVar13 = (long)(puVar2 + 0x10);
    plVar13[0x10] = 0;
    plVar13[0x11] = 0;
    puVar1 = PTR_DAT_04bb2cc8 + 0x10;
    *(undefined1 *)(plVar13 + 0x13) = 0;
    *(long **)puVar5 = plVar13;
    plVar13[0xe] = (long)puVar1;
    plVar13[0xf] = 0;
    plVar13[0x14] = 0;
    plVar13[0x15] = (long)&LAB_03985770;
  }
  FUN_039858ec(plVar13,plVar12,param_1[2],param_1[1],param_1[3],1);
  puVar5 = PTR_DAT_04bb3350;
  if (plVar10 == (long *)0x0) {
    lVar11 = *(long *)puVar4;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar3 = (undefined8 *)(lVar11 + 8);
    if (lVar8 != 0) {
      puVar3 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar12 = (long *)*puVar3;
    (**(code **)(*plVar12 + 0x78))(plVar12);
    puVar1 = PTR_DAT_04bd1010;
    if (*(long *)PTR_DAT_04bd1010 == 0) {
      if (*(long *)puVar4 == 0) {
        plVar13 = malloc(0x30);
      }
      else {
        plVar13 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0x30,8);
      }
      FUN_038c69f0(plVar13 + 2,plVar12,3);
      puVar2 = PTR_DAT_04bd1000;
      *(long **)PTR_DAT_04bd1008 = plVar13 + 2;
      puVar6 = PTR_DAT_04bd1018;
      plVar13[1] = 1;
      plVar13[2] = (long)(puVar2 + 0x10);
      *plVar13 = (long)(puVar6 + 0x10);
      *(long **)puVar1 = plVar13;
    }
    lVar11 = *(long *)puVar4;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar11 + 8);
    if (lVar8 != 0) {
      puVar3 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar12 = (long *)*puVar3;
  }
  else {
    (**(code **)(*plVar10 + 0x78))(plVar10);
    puVar5 = PTR_DAT_04bd1010;
    plVar12 = plVar10;
    if (*(long *)PTR_DAT_04bd1010 == 0) {
      if (*(long *)puVar4 == 0) {
        plVar13 = malloc(0x30);
      }
      else {
        plVar13 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x30,8);
      }
      FUN_038c69f0(plVar13 + 2,plVar10,3);
      puVar1 = PTR_DAT_04bd1000 + 0x10;
      *(long **)PTR_DAT_04bd1008 = plVar13 + 2;
      plVar13[2] = (long)puVar1;
      *plVar13 = (long)(PTR_DAT_04bd1018 + 0x10);
      plVar13[1] = 1;
      *(long **)puVar5 = plVar13;
    }
  }
  (**(code **)(*plVar12 + 0x78))(plVar12);
  FUN_03985f80(plVar12);
  FUN_039861d0(*(undefined8 *)PTR_DAT_04bd1158,plVar12,param_1 + 0xf);
  puVar5 = PTR_DAT_04bb3350;
  if (plVar10 == (long *)0x0) {
    lVar11 = *(long *)puVar4;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar3 = (undefined8 *)(lVar11 + 8);
    if (lVar8 != 0) {
      puVar3 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar12 = (long *)*puVar3;
    (**(code **)(*plVar12 + 0x78))(plVar12);
    FUN_03986a74(plVar12);
    lVar11 = *(long *)puVar4;
    *(undefined1 *)(*(long *)PTR_DAT_04bbdd18 + 0xab8) = *(undefined1 *)(param_1 + 0x32);
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar11 + 8);
    if (lVar8 != 0) {
      puVar3 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar12 = (long *)*puVar3;
  }
  else {
    (**(code **)(*plVar10 + 0x78))(plVar10);
    FUN_03986a74(plVar10);
    *(undefined1 *)(*(long *)PTR_DAT_04bbdd18 + 0xab8) = *(undefined1 *)(param_1 + 0x32);
    plVar12 = plVar10;
  }
  (**(code **)(*plVar12 + 0x78))(plVar12);
  puVar5 = PTR_DAT_04bbd510;
  pvVar9 = *(void **)PTR_DAT_04bbd510;
  if (pvVar9 == (void *)0x0) {
    if (*(long *)puVar4 == 0) {
      pvVar9 = malloc(0xb48);
    }
    else {
      pvVar9 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,0xb48,8);
    }
    FUN_038c69f0((long)pvVar9 + 0xb28,plVar12,3);
    *(undefined **)((long)pvVar9 + 0xb28) = PTR_DAT_04bd12d8 + 0x10;
    *(long *)PTR_DAT_04bd12e0 = (long)pvVar9 + 0xb28;
    FUN_039478ac(pvVar9);
    *(void **)puVar5 = pvVar9;
  }
  local_70 = param_1[7];
  uStack_68 = param_1[8];
  local_88 = (long *)CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 4));
  local_80 = param_1[5];
  local_78 = param_1[6];
  uStack_58 = param_1[2];
  local_60 = plVar12;
  FUN_03948160(pvVar9,&local_88);
  puVar5 = PTR_DAT_04bb3350;
  if (plVar10 == (long *)0x0) {
    lVar11 = *(long *)puVar4;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar3 = (undefined8 *)(lVar11 + 8);
    if (lVar8 != 0) {
      puVar3 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar13 = (long *)*puVar3;
    (**(code **)(*plVar13 + 0x78))(plVar13);
    puVar1 = PTR_DAT_04bd0fc8;
    plVar12 = *(long **)PTR_DAT_04bd0fc8;
    if (plVar12 == (long *)0x0) {
      if (*(long *)puVar4 == 0) {
        plVar12 = malloc(0x98);
      }
      else {
        plVar12 = (long *)(**(code **)(*plVar13 + 0x30))(plVar13,0x98,8);
      }
      FUN_038c69f0(plVar12 + 0xf,plVar13,3);
      plVar12[7] = 0;
      puVar6 = PTR_DAT_04bd0fb8;
      *(undefined2 *)((long)plVar12 + 0x32) = 0;
      *(long **)PTR_DAT_04bd0fc0 = plVar12 + 0xf;
      puVar7 = PTR_DAT_04bd0fd0;
      *(undefined1 *)(plVar12 + 6) = 0;
      plVar12[2] = 0;
      plVar12[3] = 0;
      plVar12[4] = 0;
      plVar12[5] = 0;
      puVar2 = PTR_DAT_04bb2cc8;
      plVar12[0xe] = 0;
      plVar12[0xf] = (long)(puVar6 + 0x10);
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[1] = (long)(puVar2 + 0x10);
      *(long **)puVar1 = plVar12;
    }
    FUN_039004a0(plVar12,plVar13);
    lVar11 = *(long *)puVar4;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar11 + 8);
    if (lVar8 != 0) {
      puVar3 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar12 = (long *)*puVar3;
  }
  else {
    (**(code **)(*plVar10 + 0x78))(plVar10);
    puVar5 = PTR_DAT_04bd0fc8;
    plVar12 = *(long **)PTR_DAT_04bd0fc8;
    if (plVar12 == (long *)0x0) {
      if (*(long *)puVar4 == 0) {
        plVar12 = malloc(0x98);
      }
      else {
        plVar12 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x98,8);
      }
      FUN_038c69f0(plVar12 + 0xf,plVar10,3);
      plVar12[7] = 0;
      puVar2 = PTR_DAT_04bd0fb8;
      *(undefined2 *)((long)plVar12 + 0x32) = 0;
      *(long **)PTR_DAT_04bd0fc0 = plVar12 + 0xf;
      puVar6 = PTR_DAT_04bd0fd0;
      *(undefined1 *)(plVar12 + 6) = 0;
      plVar12[2] = 0;
      plVar12[3] = 0;
      plVar12[4] = 0;
      plVar12[5] = 0;
      puVar1 = PTR_DAT_04bb2cc8;
      plVar12[0xe] = 0;
      plVar12[0xf] = (long)(puVar2 + 0x10);
      *plVar12 = (long)(puVar6 + 0x10);
      plVar12[1] = (long)(puVar1 + 0x10);
      *(long **)puVar5 = plVar12;
    }
    FUN_039004a0(plVar12,plVar10);
    plVar12 = plVar10;
  }
  (**(code **)(*plVar12 + 0x78))(plVar12);
  puVar5 = PTR_DAT_04bd1128;
  plVar13 = *(long **)PTR_DAT_04bd1128;
  if (plVar13 == (long *)0x0) {
    if (*(long *)puVar4 == 0) {
      plVar13 = malloc(0xa0);
    }
    else {
      plVar13 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0xa0,8);
    }
    FUN_038c69f0(plVar13 + 0x10,plVar12,3);
    *(long **)PTR_DAT_04bd1120 = plVar13 + 0x10;
    puVar1 = PTR_DAT_04bd1118;
    plVar13[7] = 0;
    puVar2 = PTR_DAT_04bd1130;
    *(undefined2 *)((long)plVar13 + 0x32) = 0;
    plVar13[2] = 0;
    plVar13[3] = 0;
    *(undefined1 *)(plVar13 + 6) = 0;
    plVar13[4] = 0;
    plVar13[5] = 0;
    plVar13[0x10] = (long)(puVar1 + 0x10);
    puVar1 = PTR_DAT_04bb2cc8;
    *(undefined4 *)(plVar13 + 8) = 0;
    plVar13[9] = 0;
    plVar13[0xc] = 0;
    plVar13[0xd] = 0;
    plVar13[0xe] = 0;
    *(undefined1 *)(plVar13 + 0xf) = 0;
    *plVar13 = (long)(puVar2 + 0x10);
    plVar13[1] = (long)(puVar1 + 0x10);
    *(long **)puVar5 = plVar13;
  }
  local_78 = param_1[9];
  local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(param_1 + 10));
  local_88 = plVar12;
  FUN_039008b0(plVar13,&local_88);
  plVar12 = plVar10;
  if (plVar10 == (long *)0x0) {
    lVar11 = *(long *)puVar4;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar3 = (undefined8 *)(lVar11 + 8);
    if (lVar8 != 0) {
      puVar3 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar12 = (long *)*puVar3;
  }
  (**(code **)(*plVar12 + 0x78))(plVar12);
  puVar5 = PTR_DAT_04bd1108;
  plVar13 = *(long **)PTR_DAT_04bd1108;
  if (plVar13 == (long *)0x0) {
    if (*(long *)puVar4 == 0) {
      plVar13 = malloc(0xa0);
    }
    else {
      plVar13 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0xa0,8);
    }
    FUN_038c69f0(plVar13 + 0x10,plVar12,3);
    plVar13[7] = 0;
    *(long **)PTR_DAT_04bd1100 = plVar13 + 0x10;
    puVar1 = PTR_DAT_04bd10f8;
    *(undefined2 *)((long)plVar13 + 0x32) = 0;
    puVar2 = PTR_DAT_04bd1110;
    plVar13[2] = 0;
    plVar13[3] = 0;
    *(undefined1 *)(plVar13 + 6) = 0;
    plVar13[4] = 0;
    plVar13[5] = 0;
    plVar13[0x10] = (long)(puVar1 + 0x10);
    puVar1 = PTR_DAT_04bb2cc8;
    *(undefined4 *)(plVar13 + 8) = 0;
    *(undefined1 *)(plVar13 + 0xf) = 0;
    plVar13[9] = 0;
    plVar13[10] = 0;
    plVar13[0xb] = 0;
    plVar13[0xc] = 0;
    plVar13[0xd] = 0;
    plVar13[0xe] = 0;
    *plVar13 = (long)(puVar2 + 0x10);
    plVar13[1] = (long)(puVar1 + 0x10);
    *(long **)puVar5 = plVar13;
  }
  local_78 = param_1[0xb];
  local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(param_1 + 0xc));
  local_88 = plVar12;
  FUN_03901030(plVar13,&local_88);
  if (param_1[2] != 0) {
    FUN_0393dfa0();
    FUN_0393e2b0(*(undefined8 *)PTR_DAT_04bd1160,param_1[2]);
  }
  puVar5 = PTR_DAT_04bb3350;
  if (plVar10 == (long *)0x0) {
    lVar11 = *(long *)puVar4;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar3 = (undefined8 *)(lVar11 + 8);
    if (lVar8 != 0) {
      puVar3 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar13 = (long *)*puVar3;
    (**(code **)(*plVar13 + 0x78))(plVar13);
    puVar1 = PTR_DAT_04bb31c8;
    plVar12 = *(long **)PTR_DAT_04bb31c8;
    if (plVar12 == (long *)0x0) {
      if (*(long *)puVar4 == 0) {
        plVar12 = malloc(0x340);
      }
      else {
        plVar12 = (long *)(**(code **)(*plVar13 + 0x30))(plVar13,0x340,8);
      }
      FUN_038c69f0(plVar12 + 100,plVar13,3);
      puVar6 = PTR_DAT_04bd1388;
      puVar2 = PTR_DAT_04bd1378 + 0x10;
      *(long **)PTR_DAT_04bd1380 = plVar12 + 100;
      plVar12[100] = (long)puVar2;
      *plVar12 = (long)(puVar6 + 0x10);
      FUN_03941294(plVar12 + 0x1c);
      plVar12[1] = 0;
      plVar12[2] = 0;
      *(undefined2 *)(plVar12 + 99) = 4;
      plVar12[0x1b] = 0;
      *(long **)puVar1 = plVar12;
      plVar12[3] = 0;
      plVar12[4] = 0;
      plVar12[5] = 0;
      plVar12[6] = 0;
      plVar12[7] = 0;
      plVar12[8] = 0;
      plVar12[9] = 0;
      plVar12[10] = 0;
      plVar12[0xb] = 0;
      plVar12[0xc] = 0;
      plVar12[0xd] = 0;
      plVar12[0xe] = 0;
      plVar12[0xf] = 0;
      plVar12[0x10] = 0;
      plVar12[0x11] = 0;
      plVar12[0x12] = 0;
      plVar12[0x13] = 0;
      plVar12[0x14] = 0;
      plVar12[0x15] = 0;
      plVar12[0x16] = 0;
      plVar12[0x17] = 0;
      plVar12[0x18] = 0;
      plVar12[0x19] = 0;
      plVar12[0x1a] = 0;
    }
    FUN_03962ea0(plVar12,plVar13);
    lVar11 = *(long *)puVar4;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar11 + 8);
    if (lVar8 != 0) {
      puVar3 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar12 = (long *)*puVar3;
  }
  else {
    (**(code **)(*plVar10 + 0x78))(plVar10);
    puVar5 = PTR_DAT_04bb31c8;
    plVar12 = *(long **)PTR_DAT_04bb31c8;
    if (plVar12 == (long *)0x0) {
      if (*(long *)puVar4 == 0) {
        plVar12 = malloc(0x340);
      }
      else {
        plVar12 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x340,8);
      }
      FUN_038c69f0(plVar12 + 100,plVar10,3);
      puVar2 = PTR_DAT_04bd1388;
      puVar1 = PTR_DAT_04bd1378 + 0x10;
      *(long **)PTR_DAT_04bd1380 = plVar12 + 100;
      plVar12[100] = (long)puVar1;
      *plVar12 = (long)(puVar2 + 0x10);
      FUN_03941294(plVar12 + 0x1c);
      plVar12[1] = 0;
      plVar12[2] = 0;
      *(undefined2 *)(plVar12 + 99) = 4;
      plVar12[0x1b] = 0;
      *(long **)puVar5 = plVar12;
      plVar12[3] = 0;
      plVar12[4] = 0;
      plVar12[5] = 0;
      plVar12[6] = 0;
      plVar12[7] = 0;
      plVar12[8] = 0;
      plVar12[9] = 0;
      plVar12[10] = 0;
      plVar12[0xb] = 0;
      plVar12[0xc] = 0;
      plVar12[0xd] = 0;
      plVar12[0xe] = 0;
      plVar12[0xf] = 0;
      plVar12[0x10] = 0;
      plVar12[0x11] = 0;
      plVar12[0x12] = 0;
      plVar12[0x13] = 0;
      plVar12[0x14] = 0;
      plVar12[0x15] = 0;
      plVar12[0x16] = 0;
      plVar12[0x17] = 0;
      plVar12[0x18] = 0;
      plVar12[0x19] = 0;
      plVar12[0x1a] = 0;
    }
    FUN_03962ea0(plVar12,plVar10);
    plVar12 = plVar10;
  }
  (**(code **)(*plVar12 + 0x78))(plVar12);
  puVar5 = PTR_DAT_04bbd7e8;
  pvVar9 = *(void **)PTR_DAT_04bbd7e8;
  if (pvVar9 == (void *)0x0) {
    if (*(long *)puVar4 == 0) {
      pvVar9 = malloc(0x31f8);
    }
    else {
      pvVar9 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,0x31f8,8);
    }
    FUN_038c69f0((long)pvVar9 + 0x31d8,plVar12,3);
    *(undefined **)((long)pvVar9 + 0x31d8) = PTR_DAT_04bd1368 + 0x10;
    *(long *)PTR_DAT_04bd1370 = (long)pvVar9 + 0x31d8;
    FUN_03956c24(pvVar9);
    *(void **)puVar5 = pvVar9;
  }
  FUN_03959934(pvVar9,plVar12);
  puVar5 = PTR_DAT_04bb3350;
  if (plVar10 == (long *)0x0) {
    lVar11 = *(long *)puVar4;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar3 = (undefined8 *)(lVar11 + 8);
    if (lVar8 != 0) {
      puVar3 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar12 = (long *)*puVar3;
    (**(code **)(*plVar12 + 0x78))(plVar12);
    puVar1 = PTR_DAT_04bbd7e0;
    pvVar9 = *(void **)PTR_DAT_04bbd7e0;
    if (pvVar9 == (void *)0x0) {
      if (*(long *)puVar4 == 0) {
        pvVar9 = malloc(0x19e0);
      }
      else {
        pvVar9 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,0x19e0,8);
      }
      FUN_038c69f0((long)pvVar9 + 0x19c0,plVar12,3);
      *(undefined **)((long)pvVar9 + 0x19c0) = PTR_DAT_04bd13b0 + 0x10;
      *(long *)PTR_DAT_04bd13b8 = (long)pvVar9 + 0x19c0;
      FUN_03968408(pvVar9);
      *(void **)puVar1 = pvVar9;
    }
    FUN_039686d0(pvVar9,plVar12);
    lVar11 = *(long *)puVar4;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar11 + 8);
    if (lVar8 != 0) {
      puVar3 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar12 = (long *)*puVar3;
  }
  else {
    (**(code **)(*plVar10 + 0x78))(plVar10);
    puVar5 = PTR_DAT_04bbd7e0;
    pvVar9 = *(void **)PTR_DAT_04bbd7e0;
    if (pvVar9 == (void *)0x0) {
      if (*(long *)puVar4 == 0) {
        pvVar9 = malloc(0x19e0);
      }
      else {
        pvVar9 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x19e0,8);
      }
      FUN_038c69f0((long)pvVar9 + 0x19c0,plVar10,3);
      *(undefined **)((long)pvVar9 + 0x19c0) = PTR_DAT_04bd13b0 + 0x10;
      *(long *)PTR_DAT_04bd13b8 = (long)pvVar9 + 0x19c0;
      FUN_03968408(pvVar9);
      *(void **)puVar5 = pvVar9;
    }
    FUN_039686d0(pvVar9,plVar10);
    plVar12 = plVar10;
  }
  (**(code **)(*plVar12 + 0x78))(plVar12);
  FUN_03963750(plVar12);
  FUN_03963b3c(*(undefined8 *)PTR_DAT_04bd1168,plVar12);
  local_88 = (long *)CONCAT71(local_88._1_7_,*(undefined1 *)((long)param_1 + 0x191));
  FUN_03984844(plVar10);
  FUN_03984ac0(*(undefined8 *)PTR_DAT_04bd0fe0,&local_88,param_1[2]);
  return;
}

