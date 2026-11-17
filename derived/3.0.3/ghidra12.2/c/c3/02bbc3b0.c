
void FUN_02bbc3b0(long *param_1,undefined8 param_2,long param_3)

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
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  puVar2 = PTR_DAT_04bc9ca8;
  puVar1 = PTR_DAT_04bc9be0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04aa7b80;
  param_1[0x44] = (long)(puVar2 + 0x10);
  param_1[0x48] = (long)(puVar1 + 0x10);
  memset(param_1 + 0x49,0,0x1bf30);
  lVar5 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar4 = param_1;
  do {
    FUN_03463544(plVar4 + 0x49,0);
    *(undefined4 *)(plVar4 + 0x74) = 0x40;
    lVar5 = lVar5 + -1;
    plVar4[0x73] = (long)plVar4 + 0x3a4;
    *(undefined1 *)((long)plVar4 + 0x3e3) = 0;
    *(undefined1 *)((long)plVar4 + 0x3a4) = 0;
    plVar4[0x72] = (long)puVar1;
    *(undefined4 *)(plVar4 + 0x7d) = 0;
    plVar4 = plVar4 + 0x35;
  } while (lVar5 != 0);
  *(undefined4 *)(param_1 + 0x3831) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x3832) = 0;
  param_1[0x382f] = (long)(puVar1 + 0x10);
  param_1[0x3830] = -1;
  FUN_03135560(param_1 + 0x3833);
  lVar5 = 399;
  param_1[0x3856] = 0;
  *(undefined2 *)(param_1 + 0x3857) = 0xffff;
  *(undefined8 *)((long)param_1 + 0x1c2bc) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0x1c2c4) = 0xffffffff;
  param_1[0x385c] = (long)(param_1 + 0x385e);
  param_1[0x385a] = 0;
  param_1[0x385b] = 0;
  plVar4 = param_1 + 0x3888;
  do {
    plVar4[-0xe] = (long)plVar4;
    plVar4[-0x1c] = (long)(plVar4 + -0xe);
    lVar5 = lVar5 + -3;
    plVar4[-0x2a] = (long)(plVar4 + -0x1c);
    plVar4 = plVar4 + 0x2a;
  } while (lVar5 != 0);
  param_1[0x385d] = (long)(param_1 + 0x385e);
  param_1[0x4e30] = 0;
  if (param_1 + 0x4e3e != (long *)0x0) {
    param_1[0x385a] = 0x19000000000;
    param_1[0x385b] = (long)(param_1 + 0x4e3e);
  }
  *(undefined4 *)(param_1 + 0x4fce) = 0;
  param_1[0x4fcf] = 0;
  *(undefined4 *)(param_1 + 0x4fd0) = 0;
  param_1[0x4fd1] = 0;
  param_1[0x3859] = 0;
  return;
}

