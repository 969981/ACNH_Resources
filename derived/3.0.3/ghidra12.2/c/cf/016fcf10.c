
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016fcf10(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  uint uVar18;
  long lVar19;
  void *pvVar20;
  long lVar21;
  void *pvVar22;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  undefined *local_c8;
  undefined8 *puStack_c0;
  undefined4 local_b8;
  undefined1 local_95;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70;
  undefined4 local_6c;
  
  FUN_00739870(param_1,0,0,0);
  param_1[0x23f] = 0;
  puVar1 = PTR_DAT_04bb37e0;
  *(undefined4 *)((long)param_1 + 0x121c) = 0x3f800000;
  *param_1 = &PTR_LAB_049bca08;
  param_1[0x240] = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x1224) = 0x3f80000000000000;
  uVar9 = _UNK_04102208;
  uVar8 = _DAT_04102200;
  uVar5 = puVar1[2];
  uVar6 = *(undefined2 *)puVar1;
  param_1[0x24c] = 0;
  *(undefined8 *)((long)param_1 + 0x120c) = 0;
  *(undefined8 *)((long)param_1 + 0x1212) = 0;
  *(undefined8 *)((long)param_1 + 0x1265) = 0;
  *(undefined4 *)(param_1 + 0x24e) = 0;
  *(undefined4 *)(param_1 + 0x255) = 0;
  *(undefined4 *)(param_1 + 0x253) = 0;
  param_1[0x252] = 0;
  param_1[0x251] = 0;
  param_1[0x250] = 0;
  *(undefined1 *)((long)param_1 + 0x11f2) = uVar5;
  uVar5 = puVar1[3];
  *(undefined2 *)(param_1 + 0x23e) = uVar6;
  uVar13 = _UNK_04102888;
  uVar12 = _DAT_04102880;
  uVar11 = _UNK_041023d8;
  uVar10 = _DAT_041023d0;
  param_1[0x24f] = 0;
  *(undefined1 *)((long)param_1 + 0x11f3) = uVar5;
  uVar4 = *(undefined4 *)(puVar1 + 4);
  *(undefined2 *)(param_1 + 0x241) = 0xff00;
  *(undefined1 *)(param_1 + 0x244) = 0;
  *(undefined1 *)((long)param_1 + 0x125c) = 0;
  *(undefined2 *)((long)param_1 + 0x1274) = 0;
  *(undefined8 *)((long)param_1 + 0x12ac) = 0x7fffffff80000000;
  *(undefined4 *)((long)param_1 + 0x11f4) = uVar4;
  *(undefined8 *)((long)param_1 + 0x1234) = uVar9;
  *(undefined8 *)((long)param_1 + 0x122c) = uVar8;
  *(undefined8 *)((long)param_1 + 0x1244) = uVar13;
  *(undefined8 *)((long)param_1 + 0x123c) = uVar12;
  puVar1 = PTR_DAT_04bbe2e0 + 0x10;
  *(undefined2 *)((long)param_1 + 0x12b4) = 0;
  *(undefined4 *)(param_1 + 599) = 0;
  param_1[0x254] = puVar1;
  *(undefined8 *)((long)param_1 + 0x1254) = uVar11;
  *(undefined8 *)((long)param_1 + 0x124c) = uVar10;
  FUN_0172f940(param_1 + 600);
  param_1[0x286] = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined1 *)((long)param_1 + 0x1444) = 0;
  param_1[0x289] = 0;
  param_1[0x28a] = 0;
  *(undefined4 *)(param_1 + 0x28b) = 0;
  param_1[0x28c] = 0;
  puVar1 = PTR_DAT_04bb2698;
  param_1[0x28d] = 0;
  *(undefined1 *)(param_1 + 0x28f) = 0;
  puVar14 = PTR_DAT_04bb3350;
  lVar21 = *(long *)puVar1;
  param_1[0x28e] = 0x200000000;
  if (lVar21 == 0) {
    pvVar20 = malloc(0x208);
  }
  else {
    lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar14 + 0x68));
    puVar3 = (undefined8 *)(lVar21 + 8);
    if (lVar19 != 0) {
      puVar3 = (undefined8 *)(lVar19 + 0xa8);
    }
    pvVar20 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x208,8);
  }
  FUN_0173198c(pvVar20,0,1);
  param_1[0x290] = pvVar20;
  lVar21 = *(long *)puVar1;
  if (lVar21 == 0) {
    pvVar20 = malloc(0x208);
  }
  else {
    lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar14 + 0x68));
    puVar3 = (undefined8 *)(lVar21 + 8);
    if (lVar19 != 0) {
      puVar3 = (undefined8 *)(lVar19 + 0xa8);
    }
    pvVar20 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x208,8);
  }
  FUN_0173198c(pvVar20,0,1);
  param_1[0x291] = pvVar20;
  lVar21 = *(long *)puVar1;
  if (lVar21 == 0) {
    pvVar20 = malloc(0x208);
  }
  else {
    lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar14 + 0x68));
    puVar3 = (undefined8 *)(lVar21 + 8);
    if (lVar19 != 0) {
      puVar3 = (undefined8 *)(lVar19 + 0xa8);
    }
    pvVar20 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x208,8);
  }
  FUN_0173198c(pvVar20,0,1);
  param_1[0x292] = pvVar20;
  param_1[0x293] = 0;
  param_1[0x294] = 0;
  *(undefined8 *)((long)param_1 + 0x15fc) = 0;
  *(undefined1 *)(param_1 + 0x2bf) = 0;
  param_1[0x295] = 0xffffffffffffffff;
  param_1[0x2c1] = 0x3a83126f3f800000;
  param_1[0x296] = 0xffffffffffffffff;
  param_1[0x297] = 0xffffffffffffffff;
  param_1[0x298] = 0xffffffffffffffff;
  param_1[0x299] = 0xffffffffffffffff;
  param_1[0x29a] = 0xffffffffffffffff;
  param_1[0x29b] = 0xffffffffffffffff;
  param_1[0x29c] = 0xffffffffffffffff;
  param_1[0x29d] = 0xffffffffffffffff;
  param_1[0x29e] = 0xffffffffffffffff;
  param_1[0x2bd] = 0;
  param_1[0x2be] = 0;
  *(undefined4 *)((long)param_1 + 0x1604) = 0;
  param_1[0x2c2] = 0x3a83126f3a83126f;
  puVar1 = PTR_DAT_04bcb438 + 0x10;
  param_1[0x2c3] = &DAT_3f8000003f800000;
  param_1[0x2c5] = 0;
  param_1[0x2c6] = 0;
  pvVar20 = (void *)((long)param_1 + 0x164c);
  param_1[0x2c4] = puVar1;
  puVar1 = PTR_DAT_04bb2f70 + 0x10;
  *(undefined1 *)((long)param_1 + 0x168b) = 0;
  param_1[0x2c7] = puVar1;
  puVar1 = PTR_PTR_04bb2238;
  lVar21 = *(long *)PTR_PTR_04bb2238;
  param_1[0x2c8] = pvVar20;
  *(undefined4 *)(param_1 + 0x2c9) = 0x40;
  (**(code **)(lVar21 + 0x18))(puVar1);
  pvVar22 = *(void **)(puVar1 + 8);
  if (pvVar20 != pvVar22) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    lVar21 = 0;
    do {
      if (*(char *)(*(long *)(puVar1 + 8) + lVar21) == '\0') goto LAB_016fd2ec;
      lVar19 = *(long *)(puVar1 + 8) + lVar21;
      if (*(char *)(lVar19 + 1) == '\0') {
        lVar21 = lVar21 + 1;
        goto LAB_016fd2ec;
      }
      if (*(char *)(lVar19 + 2) == '\0') {
        lVar21 = lVar21 + 2;
        goto LAB_016fd2ec;
      }
      lVar21 = lVar21 + 3;
    } while (lVar21 != 0x80001);
    lVar21 = 0;
LAB_016fd2ec:
    iVar2 = (int)lVar21;
    if (*(int *)(param_1 + 0x2c9) <= (int)lVar21) {
      iVar2 = *(int *)(param_1 + 0x2c9) + -1;
    }
    memcpy(pvVar20,pvVar22,(long)iVar2);
    *(undefined1 *)((long)pvVar20 + (long)iVar2) = 0;
  }
  *(undefined1 *)((long)param_1 + 0x16bc) = 0;
  *(undefined4 *)(param_1 + 0x2d2) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x1694) = 0;
  puVar14 = PTR_DAT_04bb2bc0;
  *(undefined8 *)((long)param_1 + 0x169c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x16a4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x16ac) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x16b4) = 0xffffffffffffffff;
  param_1[0x2c7] = puVar14 + 0x10;
  puVar15 = PTR_DAT_04bbe1d8;
  param_1[0x2d8] = 0;
  *(undefined4 *)(param_1 + 0x2d9) = 0;
  param_1[0x2c4] = puVar15 + 0x10;
  uVar18 = nn::os::GetSystemTick();
  local_e8 = PTR_DAT_04bb2020;
  uVar18 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 1;
  uVar7 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)((long)param_1 + 0x16cc) = uVar18;
  local_b8 = 0;
  *(uint *)(param_1 + 0x2da) = uVar7;
  uVar18 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
  local_e8 = local_e8 + 0x10;
  *(uint *)((long)param_1 + 0x16d4) = uVar18;
  puStack_e0 = &DAT_040ca27e;
  puStack_d0 = &DAT_0407ebb1;
  puStack_c0 = &DAT_0407ebb1;
  *(uint *)(param_1 + 0x2db) = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 4;
  local_d8 = local_e8;
  local_c8 = local_e8;
  FUN_016fd770(param_1 + 0x2dc,&local_e8,0);
  puVar15 = PTR_DAT_04bb37e0;
  param_1[0xb89] = 0;
  *(undefined2 *)(param_1 + 0xb86) = *(undefined2 *)puVar15;
  *(undefined *)((long)param_1 + 0x5c32) = puVar15[2];
  *(undefined *)((long)param_1 + 0x5c33) = puVar15[3];
  puVar17 = PTR_DAT_04bdf1d8;
  puVar16 = PTR_DAT_04bdf0c8;
  param_1[0xb8b] = 0;
  param_1[0xb8c] = 0;
  param_1[0xb8d] = 0;
  param_1[0xb87] = puVar16 + 0x10;
  param_1[0xb8a] = puVar17 + 0x10;
  uVar4 = *(undefined4 *)(puVar15 + 4);
  *(undefined1 *)(param_1 + 0xb88) = 1;
  *(undefined4 *)((long)param_1 + 0x5c44) = 0;
  *(undefined4 *)(param_1 + 0xb8e) = 0;
  *(undefined4 *)((long)param_1 + 0x5c34) = uVar4;
  FUN_01732d80(param_1 + 0xb8f);
  local_95 = 0;
  puStack_e0 = (undefined *)((long)&local_d8 + 4);
  local_d8 = (undefined *)CONCAT35(local_d8._5_3_,0x40);
  local_70 = 0;
  local_80 = 0;
  local_78 = 0;
  local_6c = 0xffffffff;
  local_90 = 0;
  uStack_88 = 0;
  local_e8 = puVar14 + 0x10;
  FUN_01732e80(param_1 + 0xb8f,&local_e8);
  *(undefined1 *)(param_1 + 0xbcf) = 0;
  *(undefined4 *)((long)param_1 + 0x5e7c) = 0;
  *(undefined1 *)(param_1 + 0xbd0) = 1;
  *(undefined4 *)((long)param_1 + 0x5e84) = 0;
  *(undefined1 *)(param_1 + 0xbd1) = 0;
  uVar6 = *(undefined2 *)puVar15;
  param_1[0xbd3] = 0;
  param_1[0xbd5] = 0;
  param_1[0xbd6] = 0;
  param_1[0xbd7] = 0;
  *(undefined2 *)((long)param_1 + 0x5e8c) = uVar6;
  *(undefined *)((long)param_1 + 0x5e8e) = puVar15[2];
  *(undefined *)((long)param_1 + 0x5e8f) = puVar15[3];
  uVar4 = *(undefined4 *)(puVar15 + 4);
  *(undefined2 *)((long)param_1 + 0x5e94) = 0;
  *(undefined1 *)((long)param_1 + 0x5e96) = 0;
  *(undefined1 *)((long)param_1 + 0x5edb) = 0;
  *(undefined4 *)(param_1 + 0xbd2) = uVar4;
  *(undefined8 *)((long)param_1 + 0x5e9d) = 0;
  pvVar20 = (void *)((long)param_1 + 0x5ed4);
  param_1[0xbd9] = pvVar20;
  *(undefined4 *)(param_1 + 0xbda) = 8;
  param_1[0xbd8] = PTR_DAT_04bb6a30 + 0x10;
  (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
  pvVar22 = *(void **)(puVar1 + 8);
  if (pvVar20 != pvVar22) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    lVar21 = 0;
    do {
      if (*(char *)(*(long *)(puVar1 + 8) + lVar21) == '\0') goto LAB_016fd5bc;
      lVar19 = *(long *)(puVar1 + 8) + lVar21;
      if (*(char *)(lVar19 + 1) == '\0') {
        lVar21 = lVar21 + 1;
        goto LAB_016fd5bc;
      }
      if (*(char *)(lVar19 + 2) == '\0') {
        lVar21 = lVar21 + 2;
        goto LAB_016fd5bc;
      }
      lVar21 = lVar21 + 3;
    } while (lVar21 != 0x80001);
    lVar21 = 0;
LAB_016fd5bc:
    iVar2 = (int)lVar21;
    if (*(int *)(param_1 + 0xbda) <= (int)lVar21) {
      iVar2 = *(int *)(param_1 + 0xbda) + -1;
    }
    memcpy(pvVar20,pvVar22,(long)iVar2);
    *(undefined1 *)((long)pvVar20 + (long)iVar2) = 0;
  }
  *(undefined4 *)(param_1 + 0xbdf) = 7;
  param_1[0xbe0] = 0x100000000;
  puVar1 = PTR_DAT_04bb3768;
  *(undefined1 *)(param_1 + 0xbe7) = 1;
  param_1[0xbdc] = 0;
  *(undefined4 *)(param_1 + 0xbdd) = 0;
  param_1[0xbde] = 0;
  param_1[699] = 0;
  param_1[700] = 0;
  *(undefined4 *)((long)param_1 + 0x1604) = 0;
  param_1[0xbd8] = puVar1 + 0x10;
  param_1[0x2b9] = 0;
  param_1[0x2ba] = 0;
  param_1[0x2b7] = 0;
  param_1[0x2b8] = 0;
  param_1[0x2b5] = 0;
  param_1[0x2b6] = 0;
  param_1[0x2b3] = 0;
  param_1[0x2b4] = 0;
  param_1[0x2b1] = 0;
  param_1[0x2b2] = 0;
  param_1[0x2af] = 0;
  param_1[0x2b0] = 0;
  param_1[0x295] = 0xffffffffffffffff;
  param_1[0x296] = 0xffffffffffffffff;
  param_1[0x297] = 0xffffffffffffffff;
  param_1[0x298] = 0xffffffffffffffff;
  param_1[0x299] = 0xffffffffffffffff;
  param_1[0x29a] = 0xffffffffffffffff;
  param_1[0x29b] = 0xffffffffffffffff;
  param_1[0x29c] = 0xffffffffffffffff;
  param_1[0x29d] = 0xffffffffffffffff;
  param_1[0x29e] = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x15fc) = 0;
  param_1[0x2ad] = 0;
  param_1[0x2ae] = 0;
  param_1[0x2ab] = 0;
  param_1[0x2ac] = 0;
  param_1[0x2a9] = 0;
  param_1[0x2aa] = 0;
  param_1[0x2a7] = 0;
  param_1[0x2a8] = 0;
  param_1[0x2a5] = 0;
  param_1[0x2a6] = 0;
  param_1[0x2a3] = 0;
  param_1[0x2a4] = 0;
  param_1[0x2a1] = 0;
  param_1[0x2a2] = 0;
  param_1[0x29f] = 0;
  param_1[0x2a0] = 0;
  *(uint *)((long)param_1 + 0x15f4) = *(uint *)((long)param_1 + 0x15f4) | 0x10;
  local_e8 = (undefined *)CONCAT44(local_e8._4_4_,5);
  *(uint *)((long)param_1 + 0x15f4) = *(uint *)((long)param_1 + 0x15f4) | 0x20;
  uVar18 = nn::os::GetSystemTick();
  *(undefined1 *)((long)param_1 + 0x5f07) = 0;
  uVar18 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0x16cc) = uVar18;
  uVar18 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 2;
  param_1[0xbe2] = uVar9;
  param_1[0xbe1] = uVar8;
  param_1[0xbe4] = uVar13;
  param_1[0xbe3] = uVar12;
  *(uint *)(param_1 + 0x2da) = uVar18;
  *(uint *)(param_1 + 0x234) = *(uint *)(param_1 + 0x234) | 0x8000;
  param_1[0xbe6] = uVar11;
  param_1[0xbe5] = uVar10;
  uVar18 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x16d4) = uVar18;
  *(uint *)(param_1 + 0x2db) = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 4;
  return;
}

