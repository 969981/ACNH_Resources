
undefined8 FUN_002200e4(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = memcmp((void *)(param_1 + 8),(void *)(param_2 + 8),0x10);
  if ((iVar1 == 0) && (*(short *)(param_1 + 0x18) == *(short *)(param_2 + 0x18))) {
    return 1;
  }
  return 0;
}

