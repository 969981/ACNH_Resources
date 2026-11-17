
void FUN_02dcaa70(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  char cVar2;
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
  param_1[0x46] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *param_1 = (long)&PTR_LAB_04aca110;
  puVar1 = PTR_DAT_04bc9ca8 + 0x10;
  param_1[0x3e] = -1;
  param_1[0x48] = (long)puVar1;
  puVar1 = PTR_DAT_04bc9be0 + 0x10;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x4c] = (long)puVar1;
  memset(param_1 + 0x4d,0,0x1bf30);
  lVar6 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  lVar5 = 0;
  do {
    FUN_03463544((long)param_1 + lVar5 + 0x268,0);
    lVar6 = lVar6 + -1;
    *(undefined4 *)((long)param_1 + lVar5 + 0x3c0) = 0x40;
    *(long *)((long)param_1 + lVar5 + 0x3b8) = (long)param_1 + lVar5 + 0x3c4;
    *(undefined1 *)((long)param_1 + lVar5 + 0x403) = 0;
    *(undefined1 *)((long)param_1 + lVar5 + 0x3c4) = 0;
    *(undefined **)((long)param_1 + lVar5 + 0x3b0) = puVar1;
    *(undefined4 *)((long)param_1 + lVar5 + 0x408) = 0;
    lVar5 = lVar5 + 0x1a8;
  } while (lVar6 != 0);
  *(undefined4 *)(param_1 + 0x3835) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x3836) = 0;
  param_1[0x3833] = (long)(puVar1 + 0x10);
  param_1[0x3834] = -1;
  FUN_03135560(param_1 + 0x383e);
  *(undefined4 *)(param_1 + 0x3861) = 0;
  param_1[0x3862] = 0;
  *(undefined4 *)(param_1 + 0x3863) = 0;
  param_1[0x3864] = 0;
  *(undefined1 *)(param_1 + 0x3866) = 1;
  *(undefined4 *)((long)param_1 + 0x1c334) = 0;
  *(undefined2 *)(param_1 + 0x3867) = 0x101;
  puVar1 = PTR_DAT_04bc5170 + 0x10;
  *(undefined4 *)((long)param_1 + 0x1c33c) = 1;
  *(undefined4 *)(param_1 + 0x386a) = 0xffffffff;
  param_1[0x3865] = (long)puVar1;
  param_1[0x3868] = 0;
  param_1[0x3869] = 0;
  puVar1 = PTR_DAT_04bc4828 + 0x10;
  param_1[0x3890] = 0;
  *(undefined4 *)(param_1 + 0x3891) = 0;
  param_1[0x3892] = 0;
  *(undefined4 *)(param_1 + 0x3893) = 0;
  param_1[0x3894] = 0;
  *(undefined4 *)(param_1 + 0x3895) = 0;
  param_1[0x3896] = 0;
  *(undefined4 *)(param_1 + 0x388f) = 0;
  param_1[0x386b] = (long)puVar1;
  param_1[0x3874] = (long)puVar1;
  param_1[0x387d] = (long)puVar1;
  param_1[0x3886] = (long)puVar1;
  *(undefined2 *)(param_1 + 0x3897) = 0xffff;
  param_1[0x386c] = 0;
  param_1[0x386d] = 0;
  param_1[0x386e] = 0;
  param_1[0x386f] = 0;
  param_1[0x3870] = 0;
  param_1[0x3871] = 0;
  param_1[0x3872] = 0;
  param_1[0x3873] = 0;
  param_1[0x3875] = 0;
  param_1[0x3876] = 0;
  param_1[0x3877] = 0;
  param_1[0x3878] = 0;
  param_1[0x3879] = 0;
  param_1[0x387a] = 0;
  param_1[0x387b] = 0;
  param_1[0x387c] = 0;
  param_1[0x387e] = 0;
  param_1[0x387f] = 0;
  param_1[0x3880] = 0;
  param_1[0x3881] = 0;
  param_1[0x3882] = 0;
  param_1[0x3883] = 0;
  param_1[0x3884] = 0;
  param_1[0x3885] = 0;
  param_1[0x3887] = 0;
  param_1[0x3888] = 0;
  param_1[0x3889] = 0;
  param_1[0x388a] = 0;
  param_1[0x388b] = 0;
  param_1[0x388c] = 0;
  param_1[0x388d] = 0;
  param_1[0x388e] = 0;
  FUN_007ef010((long)param_1 + 0x1c4ba,PTR_DAT_04bb3170);
  *(undefined4 *)((long)param_1 + 0x1c4bc) = 0;
  *(undefined8 *)((long)param_1 + 0x1c1bc) = 0;
  *(undefined8 *)((long)param_1 + 0x1c1c4) = 0;
  *(undefined2 *)(param_1 + 0x3898) = 0;
  *(undefined4 *)((long)param_1 + 0x1c4c4) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined8 *)((long)param_1 + 0x1c1cc) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x1c1d4) = 0xffffffffffffffff;
  lVar6 = *(long *)PTR_DAT_04bb2230;
  *(undefined8 *)((long)param_1 + 0x1c1dc) = 0;
  *(undefined8 *)((long)param_1 + 0x1c1e4) = 0;
  if (lVar6 == 0) {
    lVar6 = 0;
    cVar2 = cRam0000000000000da8;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x28);
    cVar2 = *(char *)(lVar6 + 0xda8);
  }
  if (cVar2 == '\0') {
    bVar4 = 1;
  }
  else {
    bVar4 = (**(code **)(*(long *)(lVar6 + 0xda0) + 0x18))(lVar6 + 0xda0);
    *(undefined1 *)(lVar6 + 0xda8) = 0;
  }
  *(byte *)(lVar6 + 0xda9) = bVar4 & 1;
  *(undefined4 *)((long)param_1 + 0x1c4c4) = *(undefined4 *)(lVar6 + 0xdb8);
  FUN_02dcadb0(param_1);
  FUN_02dcb2c0(param_1);
  return;
}

