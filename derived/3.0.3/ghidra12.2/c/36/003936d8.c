
void FUN_003936d8(long *param_1,long param_2,long param_3,long param_4)

{
  void *__s;
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  long lVar4;
  
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x1c) = 1;
  puVar3 = PTR_DAT_04bd0948;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[1] = (long)(param_1 + 1);
  param_1[2] = (long)(param_1 + 1);
  param_1[6] = param_3;
  param_1[7] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  FUN_00391ee0(param_1 + 8,param_4);
  param_1[0x11] = param_4;
  param_1[0x12] = (long)(param_1 + 0x12);
  param_1[0x13] = (long)(param_1 + 0x12);
  *param_1 = (long)&PTR_FUN_0484dcf0;
  lVar4 = *(long *)(param_2 + 0xb0);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = lVar4;
  param_1[0x15] = 0;
  uVar1 = *(undefined4 *)(param_2 + 0xa8);
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)((long)param_1 + 0xc4) = 0x3dcccccd00000000;
  uVar2 = *(ushort *)(param_2 + 0xac);
  if (uVar2 != 0) {
    *(uint *)((long)param_1 + 0xc4) = (uint)uVar2;
    param_1[0x16] = *(long *)(param_2 + 0xa0);
    __s = (void *)(*(long *)(param_4 + 0x10) + 0xfU & 0xfffffffffffffff0);
    *(void **)(param_4 + 0x10) = (void *)((long)__s + (ulong)uVar2 * 0x40);
    if (__s != (void *)0x0) {
      memset(__s,0,(ulong)uVar2 * 0x40);
    }
    param_1[0x17] = (long)__s;
  }
  return;
}

