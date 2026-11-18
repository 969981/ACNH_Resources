
undefined8 FUN_03678e70(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  void *__src;
  
  uVar1 = *param_2;
  lVar2 = 0;
  if (*(long *)(param_2 + 2) != 0) {
    lVar2 = (*DAT_04c61fd0)();
  }
  if (*(uint *)(param_1 + 0x8b18) < *(uint *)(param_1 + 0x8b00)) {
    __src = *(void **)(*(long *)(param_1 + 0x8b08) + (long)(int)*(uint *)(param_1 + 0x8b18) * 8);
  }
  else {
    __src = (void *)0x0;
  }
  memcpy((void *)(lVar2 + (ulong)uVar1),__src,(ulong)param_2[0x10]);
  return 1;
}

