
void FUN_01ee42e4(long param_1)

{
  long lVar1;
  undefined4 local_28;
  undefined4 local_24;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((*(int *)(lVar1 + 0x360) == 0xd && *(int *)(lVar1 + 0x4b8) != 0) &&
     (*(int *)(lVar1 + 0x378) == 0x23)) {
    local_24 = 0;
    local_28 = 0;
    FUN_01e5a930(0x40000000,lVar1,0xc,PTR_DAT_04bb2150,&local_24,&local_28,PTR_DAT_04bc1600,6);
    *(undefined4 *)(lVar1 + 0x3ac) = 0x2d;
    *(uint *)(*(long *)(param_1 + 8) + 0x69c) =
         *(uint *)(*(long *)(param_1 + 8) + 0x69c) & 0xffffffef;
  }
  return;
}

