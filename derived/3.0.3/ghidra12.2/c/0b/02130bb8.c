
void FUN_02130bb8(long param_1)

{
  long lVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x3b0);
  if ((*(int *)(lVar1 + 0x360) == 4 && *(int *)(lVar1 + 0x4b8) != 0) &&
     (*(int *)(lVar1 + 0x378) == 0x23)) {
    local_14 = 0;
    *(undefined4 *)(param_1 + 0x10) = 2;
    local_18 = 0;
    FUN_01e5a930(0x40000000,lVar1,0,PTR_DAT_04bb2150,&local_14,&local_18,PTR_DAT_04bc1600,6);
  }
  return;
}

