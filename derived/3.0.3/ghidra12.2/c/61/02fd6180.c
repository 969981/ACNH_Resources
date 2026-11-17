
void FUN_02fd6180(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
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
  param_1[0x46] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *param_1 = (long)&PTR_LAB_04aee600;
  puVar1 = PTR_DAT_04bc9ca8 + 0x10;
  param_1[0x3e] = -1;
  param_1[0x48] = (long)puVar1;
  puVar1 = PTR_DAT_04bc9be0 + 0x10;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x4c] = (long)puVar1;
  memset(param_1 + 0x4d,0,0x1bf30);
  lVar5 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  lVar4 = 0;
  do {
    FUN_03463544((long)param_1 + lVar4 + 0x268,0);
    lVar5 = lVar5 + -1;
    *(undefined4 *)((long)param_1 + lVar4 + 0x3c0) = 0x40;
    *(long *)((long)param_1 + lVar4 + 0x3b8) = (long)param_1 + lVar4 + 0x3c4;
    *(undefined1 *)((long)param_1 + lVar4 + 0x403) = 0;
    *(undefined1 *)((long)param_1 + lVar4 + 0x3c4) = 0;
    *(undefined **)((long)param_1 + lVar4 + 0x3b0) = puVar1;
    *(undefined4 *)((long)param_1 + lVar4 + 0x408) = 0;
    lVar4 = lVar4 + 0x1a8;
  } while (lVar5 != 0);
  *(undefined4 *)(param_1 + 0x3835) = 0;
  *(undefined2 *)(param_1 + 0x3838) = 0xffff;
  puVar1 = PTR_DAT_04bc8e10;
  lVar5 = 0;
  *(undefined4 *)(param_1 + 0x3836) = 0;
  param_1[0x3837] = 0;
  *(undefined4 *)((long)param_1 + 0x1c1e4) = 0;
  *(undefined2 *)(param_1 + 0x383d) = 0;
  param_1[0x3833] = (long)(puVar1 + 0x10);
  param_1[0x3834] = -1;
  *(undefined8 *)((long)param_1 + 0x1c1c4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x1c1cc) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x383c) = 1;
  puVar1 = PTR_DAT_04bc5170;
  *(undefined4 *)((long)param_1 + 0x1c1ec) = 0xffffffff;
  param_1[0x383e] = 0;
  *(undefined4 *)(param_1 + 0x383f) = 0;
  param_1[0x383b] = (long)(puVar1 + 0x10);
  param_1[0x3840] = 0;
  param_1[0x3841] = 0;
  param_1[0x3842] = (long)(param_1 + 0x3844);
  do {
    lVar4 = (long)param_1 + lVar5 + 0x1c238;
    *(long *)(lVar4 + -8) = lVar4;
    *(long *)(lVar4 + -0x18) = lVar4 + -0x10;
    *(long *)(lVar4 + -0x10) = lVar4 + -8;
    *(long *)((long)param_1 + lVar5 + 0x1c238) = lVar4 + 8;
    lVar5 = lVar5 + 0x28;
    *(long *)(lVar4 + 8) = lVar4 + 0x10;
  } while (lVar5 != 0x7f8);
  param_1[0x3943] = 0;
  param_1[0x3843] = (long)(param_1 + 0x3844);
  if (param_1 + 0x3944 != (long *)0x0) {
    param_1[0x3840] = 0x10000000000;
    param_1[0x3841] = (long)(param_1 + 0x3944);
  }
  param_1[0x3a44] = (long)&DAT_04aee818;
  param_1[0x3a45] = (long)param_1;
  *(undefined4 *)(param_1 + 0x3a48) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1d244) = 0;
  param_1[0x3a49] = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x1d25c) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)((long)param_1 + 0x1c1e4) = 1;
  param_1[0x3a46] = (long)FUN_02fd6420;
  param_1[0x3a47] = 0;
  if (*(int *)(param_3 + 0x10) == 0x73) {
    *(undefined1 *)((long)param_1 + 0x1d25c) = 1;
  }
  return;
}

