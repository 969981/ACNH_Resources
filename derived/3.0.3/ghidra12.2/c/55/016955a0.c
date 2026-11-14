
void FUN_016955a0(long param_1,long param_2)

{
  void *__s;
  long lVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint local_4030 [4096];
  
  __s = (void *)(param_1 + 8);
  memset(__s,0,0x4000);
  lVar5 = 0;
  do {
    puVar2 = (uint *)(param_2 + 8 + lVar5);
    uVar3 = ((uint *)((long)__s + lVar5))[1];
    lVar1 = lVar5 + 8;
    uVar4 = puVar2[1];
    *(uint *)((long)local_4030 + lVar5) = *puVar2 | *(uint *)((long)__s + lVar5);
    *(uint *)((long)local_4030 + lVar5 + 4) = uVar4 | uVar3;
    lVar5 = lVar1;
  } while (lVar1 != 0x4000);
  memcpy(__s,local_4030,0x4000);
  return;
}

