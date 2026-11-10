
void FUN_002a6530(long *param_1)

{
  void *__s;
  undefined2 *puVar1;
  long lVar2;
  
  __s = (void *)((long)param_1 + 0xac);
  *param_1 = (long)(PTR_DAT_04bce088 + 0x10);
  memset(__s,0,0x10);
  memset((void *)((long)param_1 + 0xbc),0,0x10);
  memset((void *)((long)param_1 + 0xcc),0,0x10);
  memset((void *)((long)param_1 + 0xdc),0,0x10);
  memset((void *)((long)param_1 + 0xec),0,0x10);
  memset((void *)((long)param_1 + 0xfc),0,0x10);
  memset((void *)((long)param_1 + 0x10c),0,0x10);
  memset((void *)((long)param_1 + 0x11c),0,0x10);
  memset((void *)((long)param_1 + 300),0,0x10);
  memset((void *)((long)param_1 + 0x13c),0,0x10);
  memset((void *)((long)param_1 + 0x14c),0,0x10);
  memset((void *)((long)param_1 + 0x15c),0,0x10);
  memset((void *)((long)param_1 + 0x16c),0,0x10);
  memset((void *)((long)param_1 + 0x17c),0,0x10);
  memset((void *)((long)param_1 + 0x18c),0,0x10);
  memset((void *)((long)param_1 + 0x19c),0,0x10);
  memset((void *)((long)param_1 + 0x1ac),0,0x10);
  memset((void *)((long)param_1 + 0x1bc),0,0x10);
  memset((void *)((long)param_1 + 0x1cc),0,0x10);
  memset((void *)((long)param_1 + 0x1dc),0,0x10);
  memset((void *)((long)param_1 + 0x1ec),0,0x10);
  memset((void *)((long)param_1 + 0x1fc),0,0x10);
  memset((void *)((long)param_1 + 0x20c),0,0x10);
  memset((void *)((long)param_1 + 0x21c),0,0x10);
  memset((void *)((long)param_1 + 0x22c),0,0x10);
  memset((void *)((long)param_1 + 0x23c),0,0x10);
  memset((void *)((long)param_1 + 0x24c),0,0x10);
  memset((void *)((long)param_1 + 0x25c),0,0x10);
  memset((void *)((long)param_1 + 0x26c),0,0x10);
  memset((void *)((long)param_1 + 0x27c),0,0x10);
  memset((void *)((long)param_1 + 0x28c),0,0x10);
  memset((void *)((long)param_1 + 0x29c),0,0x10);
  lVar2 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  puVar1 = (undefined2 *)((long)param_1 + 0x6a);
  do {
    *(undefined1 *)((long)param_1 + lVar2 + 10) = 0;
    puVar1[-0x20] = 0;
    *puVar1 = 0;
    memset(__s,0,0x10);
    lVar2 = lVar2 + 1;
    __s = (void *)((long)__s + 0x10);
    puVar1 = puVar1 + 1;
  } while (lVar2 != 0x20);
  return;
}

