
void FUN_02e0b700(long *param_1,undefined8 param_2,long param_3)

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
  param_1[0x43] = 0;
  puVar2 = PTR_DAT_04bc9ca8;
  *param_1 = (long)&PTR_LAB_04acf7e0;
  puVar1 = PTR_DAT_04bc9be0;
  param_1[0x44] = 0;
  param_1[0x3e] = -1;
  param_1[0x46] = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x4a] = (long)(puVar1 + 0x10);
  memset(param_1 + 0x4b,0,0x1bf30);
  lVar5 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar4 = param_1;
  do {
    FUN_03463544(plVar4 + 0x4b,0);
    *(undefined4 *)(plVar4 + 0x76) = 0x40;
    lVar5 = lVar5 + -1;
    plVar4[0x75] = (long)plVar4 + 0x3b4;
    *(undefined1 *)((long)plVar4 + 0x3f3) = 0;
    *(undefined1 *)((long)plVar4 + 0x3b4) = 0;
    plVar4[0x74] = (long)puVar1;
    *(undefined4 *)(plVar4 + 0x7f) = 0;
    plVar4 = plVar4 + 0x35;
  } while (lVar5 != 0);
  *(undefined4 *)(param_1 + 0x3833) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x3834) = 0;
  param_1[0x3846] = (long)(param_1 + 0x3851);
  param_1[0x3838] = 0;
  param_1[0x3836] = 0;
  param_1[0x3837] = 0;
  param_1[0x3851] = (long)(param_1 + 0x385c);
  param_1[0x385c] = (long)(param_1 + 0x3867);
  param_1[0x3867] = (long)(param_1 + 0x3872);
  param_1[0x3872] = (long)(param_1 + 0x387d);
  param_1[0x387d] = (long)(param_1 + 0x3888);
  *(undefined4 *)(param_1 + 0x3835) = 0;
  param_1[0x3888] = (long)(param_1 + 0x3893);
  param_1[0x3a2a] = (long)(param_1 + 0x3a35);
  param_1[0x3893] = (long)(param_1 + 0x389e);
  param_1[0x3a56] = 0;
  param_1[0x389e] = (long)(param_1 + 0x38a9);
  param_1[0x38a9] = (long)(param_1 + 0x38b4);
  param_1[0x38b4] = (long)(param_1 + 0x38bf);
  param_1[0x38bf] = (long)(param_1 + 0x38ca);
  param_1[0x38ca] = (long)(param_1 + 0x38d5);
  param_1[0x38d5] = (long)(param_1 + 0x38e0);
  param_1[0x38e0] = (long)(param_1 + 0x38eb);
  param_1[0x38eb] = (long)(param_1 + 0x38f6);
  param_1[0x38f6] = (long)(param_1 + 0x3901);
  param_1[0x3901] = (long)(param_1 + 0x390c);
  param_1[0x390c] = (long)(param_1 + 0x3917);
  param_1[0x3917] = (long)(param_1 + 0x3922);
  param_1[0x3922] = (long)(param_1 + 0x392d);
  param_1[0x392d] = (long)(param_1 + 0x3938);
  param_1[0x3938] = (long)(param_1 + 0x3943);
  param_1[0x3943] = (long)(param_1 + 0x394e);
  param_1[0x394e] = (long)(param_1 + 0x3959);
  param_1[0x3959] = (long)(param_1 + 0x3964);
  param_1[0x3964] = (long)(param_1 + 0x396f);
  param_1[0x396f] = (long)(param_1 + 0x397a);
  param_1[0x397a] = (long)(param_1 + 0x3985);
  param_1[0x3985] = (long)(param_1 + 0x3990);
  param_1[0x3990] = (long)(param_1 + 0x399b);
  param_1[0x399b] = (long)(param_1 + 0x39a6);
  param_1[0x39a6] = (long)(param_1 + 0x39b1);
  param_1[0x39b1] = (long)(param_1 + 0x39bc);
  param_1[0x39bc] = (long)(param_1 + 0x39c7);
  param_1[0x39c7] = (long)(param_1 + 0x39d2);
  param_1[0x39d2] = (long)(param_1 + 0x39dd);
  param_1[0x39dd] = (long)(param_1 + 0x39e8);
  param_1[0x39e8] = (long)(param_1 + 0x39f3);
  param_1[0x39f3] = (long)(param_1 + 0x39fe);
  param_1[0x39fe] = (long)(param_1 + 0x3a09);
  param_1[0x3a09] = (long)(param_1 + 0x3a14);
  param_1[0x3831] = (long)(puVar1 + 0x10);
  param_1[0x3832] = -1;
  plVar4 = param_1 + 0x383b;
  *plVar4 = (long)(param_1 + 0x3846);
  param_1[0x3839] = (long)plVar4;
  param_1[0x383a] = (long)plVar4;
  param_1[0x3a4b] = (long)(param_1 + 0x3a56);
  param_1[0x3a14] = (long)(param_1 + 0x3a1f);
  param_1[0x3a1f] = (long)(param_1 + 0x3a2a);
  param_1[0x3a40] = (long)(param_1 + 0x3a4b);
  param_1[0x3a35] = (long)(param_1 + 0x3a40);
  if (param_1 + 0x3a61 != (long *)0x0) {
    param_1[0x3837] = 0x3200000000;
    param_1[0x3838] = (long)(param_1 + 0x3a61);
  }
  param_1[0x3a93] = 0;
  *(undefined2 *)(param_1 + 0x3a94) = 0xffff;
  *(undefined8 *)((long)param_1 + 0x1d4a4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x1d4ac) = 0xffffffffffffffff;
  FUN_03135560(param_1 + 14999);
  *(undefined4 *)(param_1 + 0x3aba) = 0;
  param_1[0x3abb] = 0;
  *(undefined4 *)(param_1 + 0x3abc) = 0xffffffff;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  return;
}

