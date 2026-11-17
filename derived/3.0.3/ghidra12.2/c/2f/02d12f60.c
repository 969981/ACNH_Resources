
void FUN_02d12f60(long *param_1,undefined8 param_2,long param_3)

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
  *param_1 = (long)&PTR_LAB_04abca70;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(param_1 + 0x45,0,0x1bf30);
  lVar4 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar5 = param_1;
  do {
    FUN_03463544(plVar5 + 0x45,0);
    *(undefined4 *)(plVar5 + 0x70) = 0x40;
    lVar4 = lVar4 + -1;
    plVar5[0x6f] = (long)plVar5 + 900;
    *(undefined1 *)((long)plVar5 + 0x3c3) = 0;
    *(undefined1 *)((long)plVar5 + 900) = 0;
    plVar5[0x6e] = (long)puVar1;
    *(undefined4 *)(plVar5 + 0x79) = 0;
    plVar5 = plVar5 + 0x35;
  } while (lVar4 != 0);
  *(undefined4 *)(param_1 + 0x382d) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x382e) = 0;
  *(undefined4 *)(param_1 + 0x382f) = 0xffffffff;
  param_1[0x382b] = (long)(puVar1 + 0x10);
  param_1[0x382c] = -1;
  FUN_02cde8f4(param_1 + 0x3830);
  param_1[0x384b] = 0xffffffff;
  param_1[0x384c] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x384c);
  return;
}

