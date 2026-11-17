
void FUN_02e7c360(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar3 = PTR_DAT_04bc5668;
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
  *param_1 = (long)(puVar3 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar4 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar5 = *(byte *)(param_3 + 0xe);
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar5;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04ad9bd0;
  FUN_03135560(param_1 + 0x43);
  param_1[0x68] = 0;
  param_1[0x6b] = (long)(param_1 + 0x6c);
  param_1[0x67] = 0;
  param_1[0x6c] = (long)(param_1 + 0x6d);
  param_1[0x66] = 0;
  param_1[0x6d] = (long)(param_1 + 0x6e);
  param_1[0x69] = (long)(param_1 + 0x6b);
  param_1[0x6e] = (long)(param_1 + 0x6f);
  param_1[0x72] = 0;
  param_1[0x6f] = (long)(param_1 + 0x70);
  param_1[0x6a] = (long)(param_1 + 0x6b);
  param_1[0x70] = (long)(param_1 + 0x71);
  param_1[0x71] = (long)(param_1 + 0x72);
  if (param_1 + 0x73 != (long *)0x0) {
    param_1[0x68] = (long)(param_1 + 0x73);
    *(undefined4 *)((long)param_1 + 0x33c) = 8;
  }
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x8a] = (long)(param_1 + 0x96);
  *(undefined1 *)((long)param_1 + 0x3dc) = 0;
  param_1[0x96] = (long)(param_1 + 0xa2);
  param_1[0x7c] = 0;
  param_1[0xa2] = (long)(param_1 + 0xae);
  *(undefined4 *)(param_1 + 0x7d) = 0xffffffff;
  param_1[0xae] = (long)(param_1 + 0xba);
  param_1[0x7e] = 0;
  param_1[0xba] = (long)(param_1 + 0xc6);
  param_1[0x7f] = 0;
  param_1[0xc6] = (long)(param_1 + 0xd2);
  param_1[0x80] = 0;
  param_1[0xd2] = (long)(param_1 + 0xde);
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = (long)(param_1 + 0x8a);
  param_1[0xde] = 0;
  param_1[0x89] = (long)(param_1 + 0x8a);
  if (param_1 + 0xea != (long *)0x0) {
    param_1[0x87] = (long)(param_1 + 0xea);
    *(undefined4 *)((long)param_1 + 0x434) = 8;
  }
  param_1[0xf3] = 0;
  plVar1 = param_1 + 0x3a3c;
  param_1[0xf2] = 0;
  plVar6 = param_1 + 0x39e9;
  param_1[0xf6] = (long)(param_1 + 0x102);
  param_1[0x102] = (long)(param_1 + 0x10e);
  param_1[0x10e] = (long)(param_1 + 0x11a);
  param_1[0x11a] = (long)(param_1 + 0x126);
  plVar2 = param_1 + 0x3989;
  param_1[0x126] = (long)(param_1 + 0x132);
  param_1[0x132] = (long)(param_1 + 0x13e);
  param_1[0xf4] = (long)(param_1 + 0xf6);
  param_1[0x13e] = (long)(param_1 + 0x14a);
  param_1[0x14a] = 0;
  param_1[0xf5] = (long)(param_1 + 0xf6);
  if (param_1 + 0x156 != (long *)0x0) {
    param_1[0xf3] = (long)(param_1 + 0x156);
    *(undefined4 *)((long)param_1 + 0x794) = 8;
  }
  param_1[0x15e] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(param_1 + 0x15f,0,0x1bf30);
  lVar8 = 0x10e;
  puVar3 = PTR_DAT_04bb2bc0 + 0x10;
  plVar7 = param_1;
  do {
    FUN_03463544(plVar7 + 0x15f,0);
    *(undefined4 *)(plVar7 + 0x18a) = 0x40;
    lVar8 = lVar8 + -1;
    plVar7[0x189] = (long)plVar7 + 0xc54;
    *(undefined1 *)((long)plVar7 + 0xc93) = 0;
    *(undefined1 *)((long)plVar7 + 0xc54) = 0;
    plVar7[0x188] = (long)puVar3;
    *(undefined4 *)(plVar7 + 0x193) = 0;
    plVar7 = plVar7 + 0x35;
  } while (lVar8 != 0);
  *(undefined4 *)(param_1 + 0x3947) = 0;
  param_1[0x395f] = (long)(param_1 + 0x3965);
  param_1[0x3959] = (long)(param_1 + 0x395f);
  param_1[0x3953] = (long)(param_1 + 0x3959);
  puVar3 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x3948) = 0;
  param_1[0x3977] = 0;
  plVar7 = param_1 + 0x394d;
  *plVar7 = (long)(param_1 + 0x3953);
  param_1[0x394b] = (long)plVar7;
  param_1[0x394c] = (long)plVar7;
  param_1[0x3945] = (long)(puVar3 + 0x10);
  param_1[0x3946] = -1;
  param_1[0x3949] = 0;
  param_1[0x394a] = 0;
  param_1[0x3965] = (long)(param_1 + 0x396b);
  param_1[0x396b] = (long)(param_1 + 0x3971);
  param_1[0x3971] = (long)(param_1 + 0x3977);
  if (param_1 + 0x397d != (long *)0x0) {
    param_1[0x394a] = (long)(param_1 + 0x397d);
    *(undefined4 *)((long)param_1 + 0x1ca4c) = 8;
  }
  param_1[0x3987] = (long)plVar2;
  param_1[0x39a7] = (long)(param_1 + 0x39ad);
  param_1[0x39b3] = 0;
  param_1[0x39a1] = (long)(param_1 + 0x39a7);
  param_1[0x3988] = (long)plVar2;
  param_1[0x399b] = (long)(param_1 + 0x39a1);
  param_1[0x3995] = (long)(param_1 + 0x399b);
  param_1[0x3985] = 0;
  param_1[0x3986] = 0;
  param_1[0x398f] = (long)(param_1 + 0x3995);
  param_1[0x39ad] = (long)(param_1 + 0x39b3);
  *plVar2 = (long)(param_1 + 0x398f);
  if (param_1 + 0x39b9 != (long *)0x0) {
    param_1[0x3986] = (long)(param_1 + 0x39b9);
    *(undefined4 *)((long)param_1 + 0x1cc2c) = 8;
  }
  memset(param_1 + 0x39c3,0,0x110);
  *(undefined2 *)((long)param_1 + 0x1ce1a) = 0;
  param_1[0x3a07] = (long)(param_1 + 0x3a0c);
  *(undefined2 *)((long)param_1 + 0x1ce3a) = 0;
  param_1[0x3a02] = (long)(param_1 + 0x3a07);
  *(undefined2 *)((long)param_1 + 0x1ce5a) = 0;
  *(undefined2 *)((long)param_1 + 0x1ce7a) = 0;
  param_1[0x39fd] = (long)(param_1 + 0x3a02);
  *(undefined2 *)((long)param_1 + 0x1ce9a) = 0;
  *(undefined2 *)((long)param_1 + 0x1ceba) = 0;
  param_1[0x39f8] = (long)(param_1 + 0x39fd);
  *(undefined2 *)((long)param_1 + 0x1ceda) = 0;
  *(undefined2 *)((long)param_1 + 0x1cefa) = 0;
  param_1[0x39f3] = (long)(param_1 + 0x39f8);
  puVar3 = puVar3 + 0x10;
  *(undefined2 *)((long)param_1 + 0x1cf1a) = 0;
  param_1[0x3a0c] = 0;
  param_1[0x39ee] = (long)(param_1 + 0x39f3);
  *plVar6 = (long)(param_1 + 0x39ee);
  param_1[0x39e5] = 0;
  param_1[0x39e6] = 0;
  param_1[0x39c1] = (long)puVar3;
  param_1[0x39c2] = -1;
  param_1[0x39c5] = (long)puVar3;
  param_1[0x39c6] = -1;
  param_1[0x39c9] = (long)puVar3;
  param_1[0x39ca] = -1;
  param_1[0x39cd] = (long)puVar3;
  param_1[0x39ce] = -1;
  param_1[0x39d1] = (long)puVar3;
  param_1[0x39d2] = -1;
  param_1[0x39d5] = (long)puVar3;
  param_1[0x39d6] = -1;
  param_1[0x39d9] = (long)puVar3;
  param_1[0x39da] = -1;
  param_1[0x39dd] = (long)puVar3;
  param_1[0x39de] = -1;
  param_1[0x39e1] = (long)puVar3;
  param_1[0x39e2] = -1;
  param_1[0x39e7] = (long)plVar6;
  param_1[0x39e8] = (long)plVar6;
  if (param_1 + 0x3a11 != (long *)0x0) {
    param_1[0x39e6] = (long)(param_1 + 0x3a11);
    *(undefined4 *)((long)param_1 + 0x1cf2c) = 8;
  }
  param_1[0x3a1d] = 0;
  param_1[0x3a1e] = 0;
  param_1[0x3a1b] = 0;
  param_1[0x3a1c] = 0;
  param_1[0x3a19] = 0;
  param_1[0x3a1a] = 0;
  *(undefined4 *)(param_1 + 0x3a1a) = 0xffffffff;
  param_1[0x3a1b] = (long)puVar3;
  param_1[0x3a1c] = -1;
  plVar6 = param_1 + 0x3a28;
  *plVar6 = (long)(param_1 + 0x3a29);
  param_1[0x3a26] = (long)plVar6;
  param_1[0x3a27] = (long)plVar6;
  param_1[0x3a2f] = 0;
  param_1[0x3a2e] = (long)(param_1 + 0x3a2f);
  param_1[0x3a2d] = (long)(param_1 + 0x3a2e);
  param_1[0x3a1f] = (long)(PTR_DAT_04bc6260 + 0x10);
  *(undefined4 *)(param_1 + 0x3a23) = 0xffffffff;
  param_1[0x3a2c] = (long)(param_1 + 0x3a2d);
  param_1[0x3a2b] = (long)(param_1 + 0x3a2c);
  param_1[0x3a2a] = (long)(param_1 + 0x3a2b);
  *(undefined2 *)((long)param_1 + 0x1d0ea) = 0;
  param_1[0x3a22] = 0;
  *(undefined8 *)((long)param_1 + 0x1d11c) = 0;
  *(undefined8 *)((long)param_1 + 0x1d124) = 0;
  *(undefined4 *)((long)param_1 + 0x1d12c) = 0;
  param_1[0x3a29] = (long)(param_1 + 0x3a2a);
  param_1[0x3a20] = 0;
  param_1[0x3a21] = 0;
  if (param_1 + 0x3a30 != (long *)0x0) {
    param_1[0x3a25] = (long)(param_1 + 0x3a30);
    *(undefined4 *)((long)param_1 + 0x1d124) = 8;
  }
  param_1[0x3a43] = 0;
  param_1[0x3a42] = (long)(param_1 + 0x3a43);
  param_1[0x3a3a] = (long)plVar1;
  param_1[0x3a3b] = (long)plVar1;
  param_1[0x3a41] = (long)(param_1 + 0x3a42);
  param_1[0x3a40] = (long)(param_1 + 0x3a41);
  param_1[0x3a3f] = (long)(param_1 + 0x3a40);
  param_1[0x3a3e] = (long)(param_1 + 0x3a3f);
  param_1[0x3a3d] = (long)(param_1 + 0x3a3e);
  *plVar1 = (long)(param_1 + 0x3a3d);
  param_1[0x3a38] = 0;
  param_1[0x3a39] = 0;
  if (param_1 + 0x3a44 != (long *)0x0) {
    param_1[0x3a39] = (long)(param_1 + 0x3a44);
    *(undefined4 *)((long)param_1 + 0x1d1c4) = 8;
  }
  puVar3 = PTR_DAT_04bbdde8;
  *(undefined2 *)(param_1 + 0x3a4c) = 0;
  *(undefined8 *)((long)param_1 + 0x1d264) = *(undefined8 *)puVar3;
  return;
}

