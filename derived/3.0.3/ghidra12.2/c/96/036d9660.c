
void FUN_036d9660(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  void *pvVar8;
  long lVar9;
  void *__dest;
  undefined8 *puVar10;
  
  param_1[2] = 0;
  *param_1 = 0xffff;
  param_1[1] = 0x500000000;
  param_1[0x12] = 0;
  puVar1 = PTR_DAT_04bb37e0;
  *(undefined4 *)(param_1 + 3) = 0;
  puVar5 = PTR_DAT_04bcad10;
  *(undefined2 *)((long)param_1 + 0x2e) = 0xffff;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[6] = 0xffffffffffffffff;
  param_1[4] = puVar5 + 0x10;
  uVar3 = *(undefined4 *)(puVar1 + 4);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)puVar1;
  *(undefined4 *)((long)param_1 + 0x3c) = uVar3;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xf] = param_1 + 0x12;
  puVar10 = param_1 + 0xc;
  *puVar10 = param_1 + 0xf;
  param_1[10] = puVar10;
  param_1[0xb] = puVar10;
  if (param_1 + 0x15 != (undefined8 *)0x0) {
    param_1[9] = param_1 + 0x15;
    *(undefined4 *)((long)param_1 + 0x44) = 3;
  }
  *(undefined2 *)(param_1 + 0x18) = 0;
  puVar1 = PTR_DAT_04bcac28;
  *(undefined8 *)((long)param_1 + 0xd4) = 0x500000005;
  *(undefined4 *)((long)param_1 + 0xc4) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined2 *)((long)param_1 + 0xdc) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x4a] = 0;
  param_1[0x1e] = param_1 + 0x20;
  param_1[0x19] = puVar1 + 0x10;
  param_1[0x1f] = param_1 + 0x20;
  param_1[0x20] = param_1 + 0x35;
  param_1[0x35] = param_1 + 0x4a;
  if (param_1 + 0x5f != (undefined8 *)0x0) {
    param_1[0x1d] = param_1 + 0x5f;
    *(undefined4 *)((long)param_1 + 0xe4) = 3;
  }
  param_1[99] = 0;
  param_1[0x66] = param_1 + 0x68;
  param_1[0x62] = 0;
  param_1[0x68] = param_1 + 0x6a;
  param_1[100] = param_1 + 0x66;
  param_1[0x6a] = param_1 + 0x6c;
  param_1[0x6c] = 0;
  param_1[0x65] = param_1 + 0x66;
  if (param_1 + 0x6e != (undefined8 *)0x0) {
    param_1[99] = param_1 + 0x6e;
    *(undefined4 *)((long)param_1 + 0x314) = 4;
  }
  *(undefined2 *)((long)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  puVar1 = PTR_DAT_04bcaaf8;
  *(undefined2 *)(param_1 + 0x73) = 0;
  *(undefined1 *)((long)param_1 + 0x39e) = 0;
  param_1[0x74] = 0;
  *(undefined4 *)((long)param_1 + 0x39a) = 0x101;
  *(undefined8 *)((long)param_1 + 0x3a5) = 0;
  param_1[0x72] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bbfe60 + 0x10;
  param_1[0x76] = puVar1;
  memset(param_1 + 0x77,0,0x754);
  uVar7 = nn::os::GetSystemTick();
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0xb0c) = uVar7;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0x162) = uVar7;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0xb14) = uVar7;
  *(uint *)(param_1 + 0x163) = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 4;
  pvVar8 = (void *)(**(code **)(param_1[0x76] + 0x18))(param_1 + 0x76);
  memset(pvVar8,0,0x754);
  param_1[0x164] = puVar1;
  memset(param_1 + 0x165,0,0x754);
  uVar7 = nn::os::GetSystemTick();
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0x127c) = uVar7;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0x250) = uVar7;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x1284) = uVar7;
  *(uint *)(param_1 + 0x251) = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 4;
  pvVar8 = (void *)(**(code **)(param_1[0x164] + 0x18))(param_1 + 0x164);
  memset(pvVar8,0,0x754);
  param_1[0x252] = puVar1;
  memset(param_1 + 0x253,0,0x754);
  uVar7 = nn::os::GetSystemTick();
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0x19ec) = uVar7;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0x33e) = uVar7;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x19f4) = uVar7;
  *(uint *)(param_1 + 0x33f) = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 4;
  pvVar8 = (void *)(**(code **)(param_1[0x252] + 0x18))(param_1 + 0x252);
  memset(pvVar8,0,0x754);
  *(undefined4 *)((long)param_1 + 0x1a1c) = 0;
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  *(undefined8 *)((long)param_1 + 0x1a0c) = 0;
  *(undefined8 *)((long)param_1 + 0x1a14) = 0;
  puVar5 = PTR_DAT_04bb2010;
  param_1[0x346] = 0;
  param_1[0x348] = 0;
  *(undefined4 *)(param_1 + 0x349) = 0;
  param_1[0x344] = puVar1;
  param_1[0x34b] = (undefined1 *)((long)param_1 + 0x1a64);
  *(undefined4 *)(param_1 + 0x34c) = 8;
  *(undefined1 *)((long)param_1 + 0x1a6b) = 0;
  *(undefined1 *)((long)param_1 + 0x1a64) = 0;
  param_1[0x345] = puVar5 + 0x10;
  param_1[0x347] = puVar5 + 0x10;
  puVar1 = PTR_DAT_04bb3768 + 0x10;
  param_1[0x34e] = 0;
  param_1[0x34f] = 0;
  param_1[0x34a] = puVar1;
  uVar3 = *(undefined4 *)PTR_DAT_04bb3238;
  *(undefined4 *)((long)param_1 + 0x1a8c) = 3;
  *(undefined4 *)((long)param_1 + 0x1a84) = uVar3;
  puVar1 = PTR_DAT_04bb2a08;
  *(undefined1 *)((long)param_1 + 0x1ac3) = 0;
  *(undefined4 *)(param_1 + 0x350) = 0;
  __dest = (void *)((long)param_1 + 0x1aa4);
  param_1[0x352] = puVar1 + 0x10;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  lVar9 = DAT_05ab5248;
  param_1[0x353] = __dest;
  (**(code **)(lVar9 + 0x18))(&DAT_05ab5248);
  pvVar8 = DAT_05ab5250;
  if (__dest != DAT_05ab5250) {
    (**(code **)(DAT_05ab5248 + 0x18))(&DAT_05ab5248);
    lVar9 = 0;
    do {
      if (*(char *)((long)DAT_05ab5250 + lVar9) == '\0') goto LAB_036d9a70;
      if (*(char *)((long)DAT_05ab5250 + lVar9 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_036d9a70;
      }
      if (*(char *)((long)DAT_05ab5250 + lVar9 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_036d9a70;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_036d9a70:
    iVar2 = (int)lVar9;
    if (*(int *)(param_1 + 0x354) <= (int)lVar9) {
      iVar2 = *(int *)(param_1 + 0x354) + -1;
    }
    memcpy(__dest,pvVar8,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  param_1[0x35a] = 0xffffffffffffffff;
  puVar1 = PTR_DAT_04bb2028;
  *(undefined8 *)((long)param_1 + 0x2a) = 0xffffffffffffffff;
  param_1[6] = 0xffffffffffffffff;
  uVar6 = DAT_05ab5280;
  puVar5 = PTR_DAT_04bb37e0;
  param_1[0x352] = puVar1 + 0x10;
  uVar3 = *(undefined4 *)puVar5;
  uVar4 = *(undefined4 *)(puVar5 + 4);
  *(undefined4 *)(param_1 + 0x359) = uVar6;
  *(undefined4 *)(param_1 + 7) = uVar3;
  *(undefined4 *)((long)param_1 + 0x3c) = uVar4;
  if (0 < *(int *)(param_1 + 8)) {
    lVar9 = 0;
    do {
      puVar10 = *(undefined8 **)(param_1[9] + lVar9 * 8);
      (**(code **)*puVar10)(puVar10);
      lVar9 = lVar9 + 1;
      *puVar10 = param_1[10];
      param_1[10] = puVar10;
    } while (lVar9 < *(int *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined2 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0x500000005;
  if (0 < *(int *)(param_1 + 0x1c)) {
    lVar9 = 0;
    do {
      puVar10 = *(undefined8 **)(param_1[0x1d] + lVar9 * 8);
      (**(code **)*puVar10)(puVar10);
      lVar9 = lVar9 + 1;
      *puVar10 = param_1[0x1e];
      param_1[0x1e] = puVar10;
    } while (lVar9 < *(int *)(param_1 + 0x1c));
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x351) = 0xffffffff;
  return;
}

