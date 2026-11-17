
void FUN_02e03270(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  
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
    bVar3 = *(byte *)(param_3 + 0xe);
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar3;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_FUN_04aced68;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(param_1 + 0x46,0,0x1bf30);
  lVar4 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar5 = param_1;
  do {
    FUN_03463544(plVar5 + 0x46,0);
    *(undefined4 *)(plVar5 + 0x71) = 0x40;
    lVar4 = lVar4 + -1;
    plVar5[0x70] = (long)plVar5 + 0x38c;
    *(undefined1 *)((long)plVar5 + 0x3cb) = 0;
    *(undefined1 *)((long)plVar5 + 0x38c) = 0;
    plVar5[0x6f] = (long)puVar1;
    *(undefined4 *)(plVar5 + 0x7a) = 0;
    puVar2 = PTR_DAT_04bc8e10;
    plVar5 = plVar5 + 0x35;
  } while (lVar4 != 0);
  *(undefined4 *)(param_1 + 0x382e) = 0;
  *(undefined4 *)(param_1 + 0x382f) = 0;
  puVar2 = puVar2 + 0x10;
  param_1[0x382c] = (long)puVar2;
  param_1[0x382d] = -1;
  memset(param_1 + 0x3832,0,0x180);
  param_1[0x3830] = (long)puVar2;
  param_1[0x3831] = -1;
  *(undefined2 *)((long)param_1 + 0x1c192) = 0;
  puVar1 = PTR_DAT_04bc6260 + 0x10;
  param_1[0x3835] = 0;
  param_1[0x3836] = 0;
  param_1[0x3837] = 0;
  *(undefined4 *)(param_1 + 0x3838) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3839) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x1c1e2) = 0;
  param_1[0x3841] = 0;
  *(undefined4 *)(param_1 + 0x3842) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3843) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x1c232) = 0;
  param_1[0x384b] = 0;
  param_1[0x3834] = (long)puVar1;
  param_1[0x383e] = (long)puVar1;
  param_1[0x3848] = (long)puVar1;
  param_1[0x3852] = (long)puVar1;
  param_1[0x385c] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x384c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x384d) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x1c282) = 0;
  param_1[0x3855] = 0;
  *(undefined4 *)(param_1 + 0x3856) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3857) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x1c2d2) = 0;
  param_1[0x385f] = 0;
  *(undefined4 *)(param_1 + 0x3860) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3861) = 0xffffffff;
  param_1[0x383a] = (long)puVar2;
  param_1[0x383b] = -1;
  param_1[0x383f] = 0;
  param_1[0x3840] = 0;
  param_1[0x3844] = (long)puVar2;
  param_1[0x3845] = -1;
  param_1[0x3849] = 0;
  param_1[0x384a] = 0;
  param_1[0x384e] = (long)puVar2;
  param_1[0x384f] = -1;
  param_1[0x3853] = 0;
  param_1[0x3854] = 0;
  param_1[0x3858] = (long)puVar2;
  param_1[0x3859] = -1;
  param_1[0x385d] = 0;
  param_1[0x385e] = 0;
  param_1[0x3862] = -0x100000000;
  param_1[0x3863] = -0x100000000;
  return;
}

