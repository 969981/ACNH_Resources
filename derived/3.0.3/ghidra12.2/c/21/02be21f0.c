
void FUN_02be21f0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  
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
    bVar4 = *(byte *)(param_3 + 0xe);
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar4;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  puVar3 = PTR_DAT_04bc9ca8;
  *(undefined4 *)(param_1 + 0x43) = 0;
  puVar1 = PTR_DAT_04bc9be0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04aaacf8;
  param_1[0x46] = (long)(puVar3 + 0x10);
  param_1[0x4a] = (long)(puVar1 + 0x10);
  memset(param_1 + 0x4b,0,0x1bf30);
  lVar6 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  lVar5 = 0;
  do {
    FUN_03463544((long)param_1 + lVar5 + 600,0);
    lVar6 = lVar6 + -1;
    *(undefined4 *)((long)param_1 + lVar5 + 0x3b0) = 0x40;
    *(long *)((long)param_1 + lVar5 + 0x3a8) = (long)param_1 + lVar5 + 0x3b4;
    *(undefined1 *)((long)param_1 + lVar5 + 0x3f3) = 0;
    *(undefined1 *)((long)param_1 + lVar5 + 0x3b4) = 0;
    *(undefined **)((long)param_1 + lVar5 + 0x3a0) = puVar1;
    *(undefined4 *)((long)param_1 + lVar5 + 0x3f8) = 0;
    lVar5 = lVar5 + 0x1a8;
  } while (lVar6 != 0);
  *(undefined4 *)(param_1 + 0x3833) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined1 *)(param_1 + 0x3836) = 1;
  param_1[0x3835] = (long)&PTR_LAB_04aaaf10;
  lVar6 = 0;
  *(undefined4 *)(param_1 + 0x3834) = 0;
  *(undefined4 *)((long)param_1 + 0x1c1b4) = 0;
  *(undefined2 *)(param_1 + 0x3837) = 0;
  *(undefined4 *)((long)param_1 + 0x1c1bc) = 0xffffffff;
  param_1[0x3831] = (long)(puVar1 + 0x10);
  param_1[0x3832] = -1;
  param_1[0x383a] = 0;
  param_1[0x383b] = (long)(param_1 + 0x383d);
  param_1[0x3838] = 0;
  param_1[0x3839] = 0;
  do {
    lVar5 = (long)param_1 + lVar6 + 0x1c200;
    *(long *)(lVar5 + -8) = lVar5;
    *(long *)(lVar5 + -0x18) = lVar5 + -0x10;
    *(long *)(lVar5 + -0x10) = lVar5 + -8;
    *(long *)((long)param_1 + lVar6 + 0x1c200) = lVar5 + 8;
    lVar6 = lVar6 + 0x28;
    *(long *)(lVar5 + 8) = lVar5 + 0x10;
  } while (lVar6 != 0x7f8);
  param_1[0x393c] = 0;
  param_1[0x383c] = (long)(param_1 + 0x383d);
  if (param_1 + 0x393d != (long *)0x0) {
    param_1[0x3839] = 0x10000000000;
    param_1[0x383a] = (long)(param_1 + 0x393d);
  }
  puVar1 = PTR_DAT_04bb37e0;
  *(undefined8 *)((long)param_1 + 0x1d23c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x1d244) = 0xffffffffffffffff;
  param_1[0x3a42] = (long)&PTR_LAB_04aaaf50;
  *(undefined2 *)(param_1 + 0x3a47) = 0xffff;
  *(undefined8 *)((long)param_1 + 0x1d254) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x3a3d) = 0xffffffff;
  param_1[0x3a45] = 0;
  param_1[0x3a46] = 0;
  *(undefined4 *)((long)param_1 + 0x1d24c) = 0;
  *(undefined1 *)(param_1 + 0x3a4a) = 0;
  param_1[0x3a43] = (long)param_1;
  param_1[0x3a44] = (long)&LAB_02be24f4;
  *(undefined2 *)((long)param_1 + 0x1d25c) = *(undefined2 *)puVar1;
  *(undefined *)((long)param_1 + 0x1d25e) = puVar1[2];
  *(undefined *)((long)param_1 + 0x1d25f) = puVar1[3];
  uVar2 = *(undefined4 *)(puVar1 + 4);
  *(undefined1 *)((long)param_1 + 0x1d26a) = 0;
  *(undefined4 *)(param_1 + 0x3a4c) = uVar2;
  *(undefined4 *)((long)param_1 + 0x1d264) = 0;
  *(undefined2 *)(param_1 + 0x3a4d) = 0x101;
  *(undefined4 *)((long)param_1 + 0x1d26c) = 3;
  *(undefined8 *)((long)param_1 + 0x1d276) = 0;
  param_1[0x3a4e] = 0;
  param_1[0x3a3e] = (long)&DAT_04aaafa0;
  param_1[0x3a3f] = (long)param_1;
  param_1[0x3a40] = (long)&LAB_02be2504;
  param_1[0x3a41] = 0;
  *(undefined4 *)((long)param_1 + 0x1c1b4) = 1;
  if (*(int *)(param_3 + 0x10) == 0x72) {
    *(undefined1 *)((long)param_1 + 0x1d27c) = 1;
  }
  if (*(long *)(*(long *)PTR_DAT_04bb2718 + 0x428) != 0) {
    *(long **)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x428) + 0x20) = param_1 + 0x3a42;
  }
  return;
}

