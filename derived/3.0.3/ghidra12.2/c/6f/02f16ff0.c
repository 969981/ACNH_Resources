
void FUN_02f16ff0(long *param_1,undefined8 param_2,long param_3)

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
  param_1[0x42] = 0;
  *param_1 = (long)&PTR_LAB_04ae15d8;
  param_1[0x49] = (long)(param_1 + 0x4c);
  param_1[0x4c] = (long)(param_1 + 0x4f);
  param_1[0x3e] = -1;
  param_1[0x4f] = (long)(param_1 + 0x52);
  param_1[0x43] = 0;
  param_1[0x52] = (long)(param_1 + 0x55);
  param_1[0x44] = 0;
  param_1[0x55] = (long)(param_1 + 0x58);
  param_1[0x45] = 0;
  param_1[0x58] = (long)(param_1 + 0x5b);
  param_1[0x46] = 0;
  param_1[0x5b] = (long)(param_1 + 0x5e);
  param_1[0x47] = (long)(param_1 + 0x49);
  param_1[0x5e] = (long)(param_1 + 0x61);
  param_1[0x7c] = 0;
  param_1[0x61] = (long)(param_1 + 100);
  param_1[0x48] = (long)(param_1 + 0x49);
  param_1[100] = (long)(param_1 + 0x67);
  param_1[0x67] = (long)(param_1 + 0x6a);
  param_1[0x6a] = (long)(param_1 + 0x6d);
  param_1[0x6d] = (long)(param_1 + 0x70);
  param_1[0x70] = (long)(param_1 + 0x73);
  param_1[0x73] = (long)(param_1 + 0x76);
  param_1[0x76] = (long)(param_1 + 0x79);
  param_1[0x79] = (long)(param_1 + 0x7c);
  if (param_1 + 0x7f != (long *)0x0) {
    param_1[0x46] = (long)(param_1 + 0x7f);
    param_1[0x45] = 0x1200000000;
  }
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x95] = (long)(param_1 + 0x98);
  param_1[0x98] = (long)(param_1 + 0x9b);
  param_1[0x9b] = (long)(param_1 + 0x9e);
  param_1[0x93] = (long)(param_1 + 0x95);
  param_1[0x9e] = (long)(param_1 + 0xa1);
  param_1[0xc2] = 0;
  param_1[0xa1] = (long)(param_1 + 0xa4);
  param_1[0x94] = (long)(param_1 + 0x95);
  param_1[0xa4] = (long)(param_1 + 0xa7);
  param_1[0xa7] = (long)(param_1 + 0xaa);
  param_1[0xaa] = (long)(param_1 + 0xad);
  param_1[0xad] = (long)(param_1 + 0xb0);
  param_1[0xb0] = (long)(param_1 + 0xb3);
  param_1[0xb3] = (long)(param_1 + 0xb6);
  param_1[0xb6] = (long)(param_1 + 0xb9);
  param_1[0xb9] = (long)(param_1 + 0xbc);
  param_1[0xbc] = (long)(param_1 + 0xbf);
  param_1[0xbf] = (long)(param_1 + 0xc2);
  if (param_1 + 0xc5 != (long *)0x0) {
    param_1[0x92] = (long)(param_1 + 0xc5);
    param_1[0x91] = 0x1000000000;
  }
  param_1[0xd5] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(param_1 + 0xd6,0,0x1bf30);
  lVar4 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar5 = param_1;
  do {
    FUN_03463544(plVar5 + 0xd6,0);
    *(undefined4 *)(plVar5 + 0x101) = 0x40;
    lVar4 = lVar4 + -1;
    plVar5[0x100] = (long)plVar5 + 0x80c;
    *(undefined1 *)((long)plVar5 + 0x84b) = 0;
    *(undefined1 *)((long)plVar5 + 0x80c) = 0;
    plVar5[0xff] = (long)puVar1;
    *(undefined4 *)(plVar5 + 0x10a) = 0;
    plVar5 = plVar5 + 0x35;
  } while (lVar4 != 0);
  param_1[0x38d6] = 0;
  param_1[0x38d4] = (long)(param_1 + 0x38d6);
  param_1[0x38d2] = (long)(param_1 + 0x38d4);
  param_1[0x38d0] = (long)(param_1 + 0x38d2);
  param_1[0x38ce] = (long)(param_1 + 0x38d0);
  param_1[0x38cc] = (long)(param_1 + 0x38ce);
  param_1[0x38ca] = (long)(param_1 + 0x38cc);
  param_1[0x38c8] = (long)(param_1 + 0x38ca);
  puVar1 = PTR_DAT_04bc8e10 + 0x10;
  param_1[0x38c6] = (long)(param_1 + 0x38c8);
  *(undefined4 *)(param_1 + 0x38be) = 0;
  param_1[0x38c0] = 0;
  param_1[0x38c1] = 0;
  plVar5 = param_1 + 0x38c4;
  *plVar5 = (long)(param_1 + 0x38c6);
  param_1[0x38c2] = (long)plVar5;
  param_1[0x38c3] = (long)plVar5;
  param_1[0x38bc] = (long)puVar1;
  param_1[0x38bd] = -1;
  *(undefined4 *)(param_1 + 0x38bf) = 0;
  if (param_1 + 0x38d8 != (long *)0x0) {
    param_1[0x38c1] = (long)(param_1 + 0x38d8);
    *(undefined4 *)((long)param_1 + 0x1c604) = 10;
  }
  param_1[0x38e2] = (long)puVar1;
  param_1[0x38e3] = -1;
  *(undefined4 *)(param_1 + 0x38e4) = 0;
  *(undefined4 *)(param_1 + 0x38e5) = 0;
  param_1[0x38e6] = 0;
  *(undefined1 *)(param_1 + 0x38e7) = 0;
  return;
}

