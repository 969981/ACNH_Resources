
void FUN_03033590(long *param_1,undefined8 param_2,long param_3)

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
  param_1[0x43] = 0;
  *param_1 = (long)&PTR_FUN_04af50f0;
  plVar4 = param_1 + 0x67;
  lVar5 = 99;
  param_1[0x3e] = -1;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = (long)(param_1 + 0x48);
  do {
    plVar4[-0x1f] = (long)plVar4;
    plVar4[0x1f] = (long)(plVar4 + 0x3e);
    *plVar4 = (long)(plVar4 + 0x1f);
    lVar5 = lVar5 + -3;
    plVar4 = plVar4 + 0x5d;
  } while (lVar5 != 0);
  param_1[0x47] = (long)(param_1 + 0x48);
  param_1[0xc45] = 0;
  if (param_1 + 0xc64 != (long *)0x0) {
    param_1[0x45] = (long)(param_1 + 0xc64);
    param_1[0x44] = 0x6400000000;
  }
  *(undefined8 *)((long)param_1 + 0x664c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x6654) = 0xffffffff;
  param_1[0xcd0] = 0xffffffff;
  *(undefined2 *)(param_1 + 0xcc9) = 0xffff;
  *(undefined4 *)(param_1 + 0xcd3) = 0;
  *(undefined4 *)(param_1 + 0xcd7) = 0;
  param_1[0xcce] = (long)FUN_03033710;
  param_1[0xcc8] = 0;
  *(undefined1 *)((long)param_1 + 0x669c) = 2;
  param_1[0xcd1] = 0;
  param_1[0xcd2] = 0;
  param_1[0x42] = 0;
  param_1[0xcd4] = 0;
  param_1[0xcd5] = 0;
  param_1[0xcd6] = 0;
  param_1[0xccd] = (long)param_1;
  param_1[0xccf] = 0;
  param_1[0xccc] = (long)&PTR_LAB_04af5308;
  return;
}

