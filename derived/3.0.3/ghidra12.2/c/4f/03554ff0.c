
void FUN_03554ff0(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  void *__s;
  byte bVar7;
  long *plVar8;
  long lVar9;
  
  plVar1 = param_1 + 0xad6e;
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar2 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar5 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar5 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar7 = *(byte *)(param_3 + 0xe);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar7;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x48] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_FUN_04b38a28;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  puVar2 = PTR_DAT_04bc9ca8 + 0x10;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x4a] = (long)puVar2;
  puVar2 = PTR_DAT_04bc9be0 + 0x10;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4e] = (long)puVar2;
  memset(param_1 + 0x4f,0,0x1bf30);
  lVar9 = 0x10e;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  plVar8 = param_1;
  do {
    FUN_03463544(plVar8 + 0x4f,0);
    *(undefined4 *)(plVar8 + 0x7a) = 0x40;
    lVar9 = lVar9 + -1;
    plVar8[0x79] = (long)plVar8 + 0x3d4;
    *(undefined1 *)((long)plVar8 + 0x413) = 0;
    *(undefined1 *)((long)plVar8 + 0x3d4) = 0;
    plVar8[0x78] = (long)puVar2;
    *(undefined4 *)(plVar8 + 0x83) = 0;
    plVar8 = plVar8 + 0x35;
  } while (lVar9 != 0);
  *(undefined4 *)(param_1 + 0x3837) = 0;
  puVar5 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x3838) = 0;
  param_1[0x383a] = 0;
  puVar2 = PTR_DAT_04bc5db8;
  param_1[0x3835] = (long)(puVar5 + 0x10);
  param_1[0x3836] = -1;
  plVar8 = param_1 + 0x3842;
  param_1[0x3839] = (long)(puVar2 + 0x10);
  lVar9 = 0x3a94;
  param_1[0x383b] = 0;
  param_1[0x383c] = (long)(param_1 + 0x383e);
  while( true ) {
    plVar8[-3] = (long)(plVar8 + -2);
    plVar8[-4] = (long)(plVar8 + -3);
    plVar8[-2] = (long)(plVar8 + -1);
    if (lVar9 == 0) break;
    plVar8[-1] = (long)plVar8;
    plVar8 = plVar8 + 4;
    lVar9 = lVar9 + -4;
  }
  param_1[0x383d] = (long)(param_1 + 0x383e);
  param_1[0x72d5] = 0;
  if (param_1 + 0x72d6 != (long *)0x0) {
    param_1[0x383b] = (long)(param_1 + 0x72d6);
    *(undefined4 *)((long)param_1 + 0x1c1d4) = 15000;
  }
  *(undefined4 *)(param_1 + 0x383a) = 0;
  *plVar1 = (long)(PTR_DAT_04bbfe60 + 0x10);
  memset(param_1 + 0xad6f,0,0x754);
  uVar6 = nn::os::GetSystemTick();
  uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
  uVar4 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)((long)param_1 + 0x572cc) = uVar6;
  *(uint *)(param_1 + 0xae5a) = uVar4;
  uVar6 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x572d4) = uVar6;
  *(uint *)(param_1 + 0xae5b) = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)(**(code **)(*plVar1 + 0x18))(plVar1);
  memset(__s,0,0x754);
  *(undefined8 *)((long)param_1 + 0x572fc) = 0xffffffffffffffff;
  puVar2 = PTR_DAT_04bb37e0;
  *(undefined4 *)((long)param_1 + 0x57304) = 0xffffffff;
  puVar5 = PTR_DAT_04bd4738;
  param_1[0xae62] = 0xffffffff;
  param_1[0xae63] = 0xffffffff;
  param_1[0xae64] = 0xffffffff;
  *(undefined2 *)(param_1 + 0xae5f) = 0xffff;
  *(undefined2 *)(param_1 + 0xae65) = 0;
  *(undefined4 *)(param_1 + 0xae66) = 0;
  param_1[0xae67] = 0;
  *(undefined4 *)(param_1 + 0xae68) = 0;
  param_1[0xae69] = 0;
  *(undefined4 *)(param_1 + 0xae6a) = 0;
  param_1[0xae61] = (long)(puVar5 + 0x10);
  *(undefined1 *)((long)param_1 + 0x57354) = 0xff;
  *(undefined2 *)(param_1 + 0xae6b) = *(undefined2 *)puVar2;
  *(undefined *)((long)param_1 + 0x5735a) = puVar2[2];
  param_1[0xae5c] = 0;
  param_1[0xae5d] = 0;
  param_1[0xae5e] = 0;
  *(undefined *)((long)param_1 + 0x5735b) = puVar2[3];
  uVar3 = *(undefined4 *)(puVar2 + 4);
  param_1[0xae6f] = 0;
  param_1[0xae70] = 0;
  *(undefined4 *)(param_1 + 0xae71) = 0;
  param_1[0xae6c] = 0;
  param_1[0xae6d] = 0;
  param_1[0xae6e] = 0;
  *(undefined4 *)((long)param_1 + 0x5735c) = uVar3;
  *(undefined2 *)(param_1 + 0xae6f) = 0xfffe;
  FUN_0277d4ac();
  *(undefined1 *)(param_1 + 0xae70) = 0xff;
  *(undefined8 *)((long)param_1 + 0x57384) = 0;
  *(undefined4 *)((long)param_1 + 0x5738c) = 0;
  FUN_03454a44(param_1 + 0xae61);
  param_1[0xae73] = (long)(PTR_DAT_04bcb4d0 + 0x10);
  *(undefined8 *)((long)param_1 + 0x573c4) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0xae72) = 0;
  param_1[0xae74] = 0;
  param_1[0xae75] = 0;
  *(undefined1 *)(param_1 + 0xae78) = 0;
  param_1[0xae76] = 0;
  param_1[0xae77] = 0;
  *(undefined4 *)(param_1 + 0xae7e) = 0;
  param_1[0xae7a] = 0;
  param_1[0xae7b] = 0;
  param_1[0xae7c] = 0;
  param_1[0xae7d] = 0;
  bVar7 = *PTR_DAT_04bb32e0;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  *(byte *)((long)param_1 + 0x573f4) = bVar7;
  *(undefined1 *)((long)param_1 + 0x573f5) = 1;
  FUN_033fc620(param_1 + 0xae73,0);
  *(undefined1 *)(param_1 + 0xae7f) = 0;
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0xae5d) = *(undefined4 *)(param_3 + 0x14);
  }
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x42] = 0;
  return;
}

