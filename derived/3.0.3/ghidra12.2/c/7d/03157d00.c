
void FUN_03157d00(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  byte bVar7;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar4 = PTR_DAT_04bd4738;
  param_1[0x3b] = 0;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  param_1[0x35] = (long)(puVar4 + 0x10);
  param_1[0x36] = 0xffffffff;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  if (param_3 != 0) {
    bVar7 = *(byte *)(param_3 + 0xe);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar7;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x3e] = -1;
  *(undefined1 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  *param_1 = (long)&PTR_FUN_04b04df8;
  param_1[0x47] = 0;
  param_1[0x44] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x46] = (long)param_1 + 0x23c;
  puVar1 = PTR_DAT_04bb2ab0;
  *(undefined4 *)(param_1 + 0x47) = 0x10;
  param_1[0x4a] = 0xfffe;
  param_1[0x45] = (long)(puVar1 + 0x10);
  FUN_0277d4ac(param_1 + 0x4a);
  param_1[0x4b] = (long)(puVar4 + 0x10);
  *(undefined2 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x4c] = 0xffffffff;
  param_1[0x4d] = 0xffffffff;
  param_1[0x4e] = 0xffffffff;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)((long)param_1 + 0x2a4) = 0xff;
  uVar2 = *(undefined4 *)PTR_DAT_04bb37e0;
  uVar3 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  *(undefined2 *)(param_1 + 0x59) = 0xfffe;
  *(undefined4 *)(param_1 + 0x55) = uVar2;
  *(undefined4 *)((long)param_1 + 0x2ac) = uVar3;
  FUN_0277d4ac(param_1 + 0x59);
  *(undefined1 *)(param_1 + 0x5a) = 0xff;
  *(undefined8 *)((long)param_1 + 0x2d4) = 0;
  *(undefined4 *)((long)param_1 + 0x2dc) = 0;
  FUN_03454a44(param_1 + 0x4b);
  puVar1 = PTR_DAT_04bc5db8;
  param_1[0x5f] = 0;
  *(undefined1 *)(param_1 + 0x5f) = 1;
  plVar5 = param_1 + 0x69;
  lVar6 = 0x3a94;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  *(undefined1 *)((long)param_1 + 0x2fc) = 0xff;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[0x60] = (long)(puVar1 + 0x10);
  param_1[99] = (long)(param_1 + 0x65);
  while( true ) {
    plVar5[-3] = (long)(plVar5 + -2);
    plVar5[-4] = (long)(plVar5 + -3);
    plVar5[-2] = (long)(plVar5 + -1);
    if (lVar6 == 0) break;
    plVar5[-1] = (long)plVar5;
    plVar5 = plVar5 + 4;
    lVar6 = lVar6 + -4;
  }
  param_1[100] = (long)(param_1 + 0x65);
  param_1[0x3afc] = 0;
  if (param_1 + 0x3afd != (long *)0x0) {
    param_1[0x62] = (long)(param_1 + 0x3afd);
    *(undefined4 *)((long)param_1 + 0x30c) = 15000;
  }
  puVar1 = PTR_DAT_04bc9b68 + 0x10;
  param_1[0x7595] = (long)(PTR_DAT_04bbba78 + 0x10);
  puVar4 = PTR_DAT_04bdf1d8;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x7599] = (long)puVar1;
  param_1[0x759a] = (long)(param_1 + 0x7595);
  puVar1 = PTR_FUN_04bc9b60;
  param_1[0x7596] = 0;
  param_1[0x7597] = 0;
  param_1[0x7598] = 0;
  param_1[0x759e] = 0;
  param_1[0x759f] = 0;
  param_1[0x75a0] = 0;
  param_1[0x759b] = (long)puVar1;
  param_1[0x759c] = 0;
  param_1[0x759d] = (long)(puVar4 + 0x10);
  return;
}

