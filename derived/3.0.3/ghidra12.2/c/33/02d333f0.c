
void FUN_02d333f0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  void *pvVar6;
  long lVar7;
  byte bVar8;
  long *plVar9;
  long lVar10;
  undefined **local_80;
  long *plStack_78;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar4 = PTR_DAT_04bd4738;
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
  param_1[0x35] = (long)(puVar4 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar8 = *(byte *)(param_3 + 0xe);
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar8;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x45] = 0;
  param_1[0x42] = 0;
  puVar4 = PTR_DAT_04bc9ca8;
  *param_1 = (long)&PTR_LAB_04abe928;
  puVar1 = PTR_DAT_04bc9be0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x3e] = -1;
  param_1[0x47] = (long)(puVar4 + 0x10);
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x4b] = (long)(puVar1 + 0x10);
  memset(param_1 + 0x4c,0,0x1bf30);
  lVar10 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar9 = param_1;
  do {
    FUN_03463544(plVar9 + 0x4c,0);
    *(undefined4 *)(plVar9 + 0x77) = 0x40;
    lVar10 = lVar10 + -1;
    plVar9[0x76] = (long)plVar9 + 0x3bc;
    *(undefined1 *)((long)plVar9 + 0x3fb) = 0;
    *(undefined1 *)((long)plVar9 + 0x3bc) = 0;
    plVar9[0x75] = (long)puVar1;
    *(undefined4 *)(plVar9 + 0x80) = 0;
    plVar9 = plVar9 + 0x35;
  } while (lVar10 != 0);
  *(undefined2 *)(param_1 + 0x3838) = 0xffff;
  param_1[0x3836] = 0;
  param_1[0x3837] = 0;
  param_1[0x3832] = (long)(PTR_DAT_04bc8e10 + 0x10);
  param_1[0x3833] = -1;
  puVar1 = PTR_DAT_04bbfe60;
  *(undefined8 *)((long)param_1 + 0x1c1c4) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x3834) = 0;
  *(undefined4 *)(param_1 + 0x3835) = 0;
  *(undefined4 *)((long)param_1 + 0x1c1cc) = 0xffffffff;
  plVar9 = param_1 + 0x383a;
  *plVar9 = (long)(puVar1 + 0x10);
  memset(param_1 + 0x383b,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  uVar3 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)((long)param_1 + 0x1c92c) = uVar5;
  *(uint *)(param_1 + 0x3926) = uVar3;
  uVar5 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x1c934) = uVar5;
  *(uint *)(param_1 + 0x3927) = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
  pvVar6 = (void *)(**(code **)(*plVar9 + 0x18))(plVar9);
  memset(pvVar6,0,0x754);
  param_1[0x392a] = 0;
  puVar1 = PTR_DAT_04bc5db8;
  *(undefined1 *)(param_1 + 0x3928) = 0;
  param_1[0x3929] = (long)(puVar1 + 0x10);
  plVar9 = param_1 + 0x3932;
  lVar10 = 0x3a94;
  param_1[0x392b] = 0;
  param_1[0x392c] = (long)(param_1 + 0x392e);
  while( true ) {
    plVar9[-3] = (long)(plVar9 + -2);
    plVar9[-4] = (long)(plVar9 + -3);
    plVar9[-2] = (long)(plVar9 + -1);
    if (lVar10 == 0) break;
    plVar9[-1] = (long)plVar9;
    plVar9 = plVar9 + 4;
    lVar10 = lVar10 + -4;
  }
  param_1[0x392d] = (long)(param_1 + 0x392e);
  param_1[0x73c5] = 0;
  if (param_1 + 0x73c6 != (long *)0x0) {
    param_1[0x392b] = (long)(param_1 + 0x73c6);
    *(undefined4 *)((long)param_1 + 0x1c954) = 15000;
  }
  puVar1 = PTR_DAT_04bcb4d0;
  *(undefined4 *)(param_1 + 0x392a) = 0;
  *(undefined4 *)(param_1 + 0xae5e) = 0;
  param_1[0xae5f] = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)param_1 + 0x57324) = 0xffffffff00000000;
  param_1[0xae60] = 0;
  param_1[0xae61] = 0;
  param_1[0xae62] = 0;
  param_1[0xae63] = 0;
  *(undefined1 *)(param_1 + 0xae64) = 0;
  param_1[0xae66] = 0;
  param_1[0xae67] = 0;
  *(undefined4 *)(param_1 + 0xae6a) = 0;
  param_1[0xae68] = 0;
  param_1[0xae69] = 0;
  bVar8 = *PTR_DAT_04bb32e0;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  *(byte *)((long)param_1 + 0x57354) = bVar8;
  *(undefined1 *)((long)param_1 + 0x57355) = 1;
  FUN_033fc620(param_1 + 0xae5f,0);
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    pvVar6 = malloc(0x1f0);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar10 + 8);
    if (lVar7 != 0) {
      puVar2 = (undefined8 *)(lVar7 + 0xa8);
    }
    pvVar6 = (void *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x1f0,8);
  }
  local_80 = &PTR_LAB_04abeb40;
  plStack_78 = param_1;
  FUN_0340c9e0(pvVar6,&local_80);
  param_1[0xae6b] = (long)pvVar6;
  param_1[0x42] = 0;
  return;
}

