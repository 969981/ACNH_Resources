
void FUN_03097350(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  void *pvVar6;
  byte bVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  plVar1 = param_1 + 0xadab;
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar2 = PTR_DAT_04bc5668;
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
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar4 + 0x10);
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
  param_1[0x46] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *param_1 = (long)&PTR_LAB_04afa3a0;
  puVar2 = PTR_DAT_04bc9ca8 + 0x10;
  param_1[0x3e] = -1;
  param_1[0x48] = (long)puVar2;
  puVar2 = PTR_DAT_04bc9be0 + 0x10;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x4c] = (long)puVar2;
  memset(param_1 + 0x4d,0,0x1bf30);
  lVar11 = 0x10e;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  lVar10 = 0;
  do {
    FUN_03463544((long)param_1 + lVar10 + 0x268,0);
    lVar11 = lVar11 + -1;
    *(undefined4 *)((long)param_1 + lVar10 + 0x3c0) = 0x40;
    *(long *)((long)param_1 + lVar10 + 0x3b8) = (long)param_1 + lVar10 + 0x3c4;
    *(undefined1 *)((long)param_1 + lVar10 + 0x403) = 0;
    *(undefined1 *)((long)param_1 + lVar10 + 0x3c4) = 0;
    *(undefined **)((long)param_1 + lVar10 + 0x3b0) = puVar2;
    *(undefined4 *)((long)param_1 + lVar10 + 0x408) = 0;
    puVar4 = PTR_DAT_04bc8e10;
    lVar10 = lVar10 + 0x1a8;
  } while (lVar11 != 0);
  *(undefined4 *)(param_1 + 0x3835) = 0;
  *(undefined4 *)(param_1 + 0x3836) = 0;
  *(undefined4 *)((long)param_1 + 0x1c1dc) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x1c204) = 0;
  param_1[0x3833] = (long)(puVar4 + 0x10);
  param_1[0x3834] = -1;
  FUN_03135560(param_1 + 0x3841);
  param_1[0x3866] = 0;
  param_1[0x3867] = 0;
  param_1[0x3864] = 0;
  param_1[0x3865] = 0;
  lVar11 = 0x3a94;
  *(undefined4 *)(param_1 + 0x386a) = 0x31;
  *(undefined2 *)((long)param_1 + 0x1c354) = 0;
  puVar2 = PTR_DAT_04bb7418 + 0x10;
  *(undefined2 *)((long)param_1 + 0x1c3b4) = 0;
  plVar12 = param_1 + 0x3877;
  *plVar12 = 0;
  param_1[0x3868] = (long)puVar2;
  param_1[0x3869] = (long)param_1 + 0x1c354;
  plVar8 = param_1 + 0x387f;
  param_1[0x3878] = 0;
  param_1[0x3879] = (long)(param_1 + 0x387b);
  while( true ) {
    plVar8[-3] = (long)(plVar8 + -2);
    plVar8[-4] = (long)(plVar8 + -3);
    plVar8[-2] = (long)(plVar8 + -1);
    if (lVar11 == 0) break;
    plVar8[-1] = (long)plVar8;
    plVar8 = plVar8 + 4;
    lVar11 = lVar11 + -4;
  }
  param_1[0x387a] = (long)(param_1 + 0x387b);
  param_1[0x7312] = 0;
  if (param_1 + 0x7313 != (long *)0x0) {
    param_1[0x3877] = 0x3a9800000000;
    param_1[0x3878] = (long)(param_1 + 0x7313);
  }
  *plVar1 = (long)(PTR_DAT_04bbfe60 + 0x10);
  memset(param_1 + 0xadac,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  uVar3 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)((long)param_1 + 0x574b4) = uVar5;
  *(uint *)(param_1 + 0xae97) = uVar3;
  uVar5 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x574bc) = uVar5;
  *(uint *)(param_1 + 0xae98) = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
  pvVar6 = (void *)(**(code **)(*plVar1 + 0x18))(plVar1);
  memset(pvVar6,0,0x754);
  param_1[0xae9c] = (long)&LAB_03097704;
  param_1[0xae9a] = (long)&PTR_LAB_04afa5e8;
  param_1[0x3837] = 0;
  param_1[0x3838] = 0;
  param_1[0x3839] = 0;
  param_1[0x383a] = 0;
  *(undefined4 *)(param_1 + 0x383b) = 0;
  param_1[0x383c] = 0;
  param_1[0x383d] = 0;
  *(undefined4 *)(param_1 + 0xae99) = 0xffffffff;
  param_1[0xae9b] = (long)param_1;
  param_1[0xae9d] = 0;
  param_1[0xae9e] = -1;
  *(undefined4 *)(param_1 + 0xae9f) = 0;
  *(undefined1 *)((long)param_1 + 0x574fc) = 0;
  *(undefined4 *)(param_1 + 0x3840) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x383e] = 0;
  param_1[0x383f] = 0;
  if (0 < (int)*plVar12) {
    lVar11 = 0;
    plVar8 = (long *)param_1[0x3879];
    do {
      plVar9 = *(long **)(param_1[0x3878] + lVar11 * 8);
      lVar11 = lVar11 + 1;
      *plVar9 = (long)plVar8;
      param_1[0x3879] = (long)plVar9;
      plVar8 = plVar9;
    } while (lVar11 < (int)param_1[0x3877]);
  }
  *(undefined4 *)plVar12 = 0;
  pvVar6 = (void *)(**(code **)(*plVar1 + 0x18))(plVar1);
  memset(pvVar6,0,0x754);
  return;
}

