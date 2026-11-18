
void FUN_03597c30(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  
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
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04b3d928;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0xffffffff;
  FUN_03135560(param_1 + 0x47);
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x35c) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  param_1[0x6d] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(param_1 + 0x6e,0,0x1bf30);
  lVar5 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar4 = param_1;
  do {
    FUN_03463544(plVar4 + 0x6e,0);
    *(undefined4 *)(plVar4 + 0x99) = 0x40;
    lVar5 = lVar5 + -1;
    plVar4[0x98] = (long)plVar4 + 0x4cc;
    *(undefined1 *)((long)plVar4 + 0x50b) = 0;
    *(undefined1 *)((long)plVar4 + 0x4cc) = 0;
    plVar4[0x97] = (long)puVar1;
    *(undefined4 *)(plVar4 + 0xa2) = 0;
    puVar2 = PTR_DAT_04bc8e10;
    plVar4 = plVar4 + 0x35;
  } while (lVar5 != 0);
  *(undefined4 *)(param_1 + 0x3856) = 0;
  *(undefined4 *)(param_1 + 0x3857) = 0;
  puVar1 = PTR_DAT_04bc9ca8;
  *(undefined4 *)(param_1 + 0x3858) = 0;
  *(undefined4 *)(param_1 + 0x385d) = 0;
  param_1[0x3854] = (long)(puVar2 + 0x10);
  param_1[0x3855] = -1;
  param_1[0x3859] = (long)(puVar1 + 0x10);
  return;
}

