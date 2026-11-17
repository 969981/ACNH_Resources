
void FUN_03016e30(long *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar2 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar3 = PTR_DAT_04bd4738;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  param_1[0x35] = (long)(puVar3 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  if (param_3 != 0) {
    bVar4 = *(byte *)(param_3 + 0xe);
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar4;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04af3130;
  param_1[0x43] = -1;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_02ff7294(param_1 + 0x4c,&DAT_041830c8);
  FUN_030190c0(param_1 + 0x45,0xf,0,8);
  uVar1 = *(uint *)(param_1 + 0x45);
  if (uVar1 != 0) {
    lVar5 = param_1[0x46];
    uVar6 = 0;
    do {
      memcpy((void *)(lVar5 + ((long)((ulong)uVar6 << 0x20) >> 0x18)),&DAT_04183258,0x100);
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  return;
}

