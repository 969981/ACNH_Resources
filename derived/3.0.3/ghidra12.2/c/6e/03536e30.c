
void FUN_03536e30(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  void *pvVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar3 = PTR_DAT_04bd4738;
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
  param_1[0x35] = (long)(puVar3 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar6 = *(byte *)(param_3 + 0xe);
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar6;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x45] = 0;
  param_1[0x42] = 0;
  puVar3 = PTR_DAT_04bc9ca8;
  *param_1 = (long)&PTR_LAB_04b375b8;
  puVar1 = PTR_DAT_04bc9be0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x3e] = -1;
  param_1[0x47] = (long)(puVar3 + 0x10);
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x4b] = (long)(puVar1 + 0x10);
  memset(param_1 + 0x4c,0,0x1bf30);
  lVar8 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar7 = param_1;
  do {
    FUN_03463544(plVar7 + 0x4c,0);
    *(undefined4 *)(plVar7 + 0x77) = 0x40;
    lVar8 = lVar8 + -1;
    plVar7[0x76] = (long)plVar7 + 0x3bc;
    *(undefined1 *)((long)plVar7 + 0x3fb) = 0;
    *(undefined1 *)((long)plVar7 + 0x3bc) = 0;
    plVar7[0x75] = (long)puVar1;
    *(undefined4 *)(plVar7 + 0x80) = 0;
    puVar3 = PTR_DAT_04bc8e10;
    plVar7 = plVar7 + 0x35;
  } while (lVar8 != 0);
  *(undefined4 *)(param_1 + 0x3834) = 0;
  *(undefined4 *)(param_1 + 0x3835) = 0;
  param_1[0x3832] = (long)(puVar3 + 0x10);
  param_1[0x3833] = -1;
  param_1[0x3837] = 0;
  param_1[0x3838] = 0;
  param_1[0x3839] = 0;
  param_1[0x383a] = 0;
  *(undefined2 *)(param_1 + 0x383b) = 0xffff;
  puVar1 = PTR_DAT_04bbfe60;
  *(undefined4 *)(param_1 + 0x3836) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x1c1dc) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0x1c1e4) = 0xffffffff;
  plVar7 = param_1 + 0x383d;
  *plVar7 = (long)(puVar1 + 0x10);
  memset(param_1 + 0x383e,0,0x754);
  uVar4 = nn::os::GetSystemTick();
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  uVar2 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)((long)param_1 + 0x1c944) = uVar4;
  *(uint *)(param_1 + 0x3929) = uVar2;
  uVar4 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x1c94c) = uVar4;
  *(uint *)(param_1 + 0x392a) = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
  pvVar5 = (void *)(**(code **)(*plVar7 + 0x18))(plVar7);
  memset(pvVar5,0,0x754);
  plVar7 = param_1 + 0x392b;
  *plVar7 = (long)(puVar1 + 0x10);
  memset(param_1 + 0x392c,0,0x754);
  uVar4 = nn::os::GetSystemTick();
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0x1d0b4) = uVar4;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0x3a17) = uVar4;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x1d0bc) = uVar4;
  *(uint *)(param_1 + 0x3a18) = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
  pvVar5 = (void *)(**(code **)(*plVar7 + 0x18))(plVar7);
  memset(pvVar5,0,0x754);
  puVar1 = PTR_DAT_04bc5db8 + 0x10;
  param_1[0x3a1a] = 0;
  param_1[0x3a19] = (long)puVar1;
  plVar7 = param_1 + 0x3a22;
  lVar8 = 0x3a94;
  param_1[0x3a1b] = 0;
  param_1[0x3a1c] = (long)(param_1 + 0x3a1e);
  while( true ) {
    plVar7[-3] = (long)(plVar7 + -2);
    plVar7[-4] = (long)(plVar7 + -3);
    plVar7[-2] = (long)(plVar7 + -1);
    if (lVar8 == 0) break;
    plVar7[-1] = (long)plVar7;
    plVar7 = plVar7 + 4;
    lVar8 = lVar8 + -4;
  }
  param_1[0x3a1d] = (long)(param_1 + 0x3a1e);
  param_1[0x74b5] = 0;
  if (param_1 + 0x74b6 != (long *)0x0) {
    param_1[0x3a1b] = (long)(param_1 + 0x74b6);
    *(undefined4 *)((long)param_1 + 0x1d0d4) = 15000;
  }
  puVar1 = PTR_DAT_04bcb4d0;
  *(undefined4 *)(param_1 + 0x3a1a) = 0;
  *(undefined4 *)(param_1 + 0xaf4e) = 0;
  param_1[0xaf4f] = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)param_1 + 0x57aa4) = 0xffffffff00000000;
  param_1[0xaf50] = 0;
  param_1[0xaf51] = 0;
  param_1[0xaf52] = 0;
  param_1[0xaf53] = 0;
  *(undefined1 *)(param_1 + 0xaf54) = 0;
  param_1[0xaf56] = 0;
  param_1[0xaf57] = 0;
  *(undefined4 *)(param_1 + 0xaf5a) = 0;
  param_1[0xaf58] = 0;
  param_1[0xaf59] = 0;
  bVar6 = *PTR_DAT_04bb32e0;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  *(byte *)((long)param_1 + 0x57ad4) = bVar6;
  *(undefined1 *)((long)param_1 + 0x57ad5) = 1;
  FUN_033fc620(param_1 + 0xaf4f,0);
  param_1[0x42] = 0;
  return;
}

