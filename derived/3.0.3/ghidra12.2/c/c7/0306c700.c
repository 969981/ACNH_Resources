
void FUN_0306c700(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  
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
  puVar4 = PTR_DAT_04bc9ca8;
  *(undefined4 *)(param_1 + 0x42) = 0;
  puVar3 = PTR_DAT_04bc9bd8;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04af8510;
  param_1[0x45] = (long)(puVar4 + 0x10);
  param_1[0x49] = (long)(puVar3 + 0x10);
  memset(param_1 + 0x4a,0,0x12c0);
  uVar2 = *(undefined2 *)PTR_DAT_04bb3170;
  lVar6 = -0x12c0;
  do {
    lVar1 = lVar6 + 0x30;
    *(undefined2 *)((long)param_1 + lVar6 + 0x1510) = uVar2;
    *(undefined8 *)((long)param_1 + lVar6 + 0x1518) = 0;
    *(undefined2 *)((long)param_1 + lVar6 + 0x1520) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x1528) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x1530) = 0;
    *(undefined2 *)((long)param_1 + lVar6 + 0x1538) = uVar2;
    *(undefined4 *)((long)param_1 + lVar6 + 0x153c) = 0;
    lVar6 = lVar1;
  } while (lVar1 != 0);
  param_1[0x2a3] = -1;
  puVar3 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2a5) = 0;
  param_1[0x2a6] = 0;
  *(undefined2 *)(param_1 + 0x2a7) = 0xffff;
  *(undefined8 *)((long)param_1 + 0x153c) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0x1544) = 0xffffffff;
  param_1[0x2a2] = (long)(puVar3 + 0x10);
  FUN_03135560(param_1 + 0x2a9);
  param_1[0x2cc] = 0;
  FUN_007ef010(param_1 + 0x2cd,PTR_DAT_04bb3170);
  return;
}

