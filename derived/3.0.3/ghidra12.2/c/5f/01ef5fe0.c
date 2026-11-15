
void FUN_01ef5fe0(long param_1)

{
  long lVar1;
  undefined4 local_28;
  undefined4 local_24;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x7c60) + 0x3b0);
  if (*(int *)(lVar1 + 0x360) != 0x13) {
    local_24 = 0;
    local_28 = 0;
    FUN_01e5a930(0x40000000,lVar1,0x13,PTR_DAT_04bb2150,&local_24,&local_28,PTR_DAT_04bc1600,6);
  }
  *(undefined1 *)(param_1 + 0x7d0f) = 1;
  *(byte *)(param_1 + 0x7928) = *(byte *)(param_1 + 0x7928) | 1;
  FUN_0212eca8(param_1 + 0xaa50,1,0);
  return;
}

