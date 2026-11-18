
void FUN_03371858(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  byte bVar4;
  
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
  *(undefined2 *)((long)param_1 + 0x22c) = 0;
  param_1[0x3e] = -1;
  param_1[0x44] = (long)param_1 + 0x22c;
  *param_1 = (long)&PTR_LAB_04b21700;
  *(undefined4 *)(param_1 + 0x45) = 500;
  *(undefined2 *)((long)param_1 + 0x612) = 0;
  puVar1 = PTR_DAT_04bb6d90 + 0x10;
  *(undefined2 *)((long)param_1 + 0x62c) = 0;
  param_1[0xc4] = (long)param_1 + 0x62c;
  *(undefined4 *)(param_1 + 0xc5) = 500;
  *(undefined2 *)((long)param_1 + 0xa12) = 0;
  param_1[0x43] = (long)puVar1;
  param_1[0xc3] = (long)puVar1;
  if (param_3 == 0) {
    *(undefined1 *)((long)param_1 + 0xa22) = 0;
    param_1[0x143] = 0x3000000030;
    *(undefined2 *)(param_1 + 0x144) = 0x101;
  }
  else {
    uVar2 = *(undefined4 *)(param_3 + 0x14);
    *(undefined1 *)((long)param_1 + 0xa22) = 0;
    *(undefined4 *)(param_1 + 0x143) = uVar2;
    *(undefined4 *)((long)param_1 + 0xa1c) = 0x30;
    *(undefined2 *)(param_1 + 0x144) = 0x101;
    bVar4 = *(byte *)(param_3 + 0xe);
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar4;
  }
  return;
}

