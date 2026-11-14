
void FUN_01696270(long param_1,long param_2)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint local_1020 [1024];
  
  lVar6 = 0;
  do {
    puVar2 = (uint *)(param_1 + 8 + lVar6);
    puVar3 = (uint *)(param_2 + 8 + lVar6);
    uVar4 = puVar2[1];
    lVar1 = lVar6 + 8;
    uVar5 = puVar3[1];
    *(uint *)((long)local_1020 + lVar6) = *puVar3 & *puVar2;
    *(uint *)((long)local_1020 + lVar6 + 4) = uVar5 & uVar4;
    lVar6 = lVar1;
  } while (lVar1 != 0x1000);
  memcpy((void *)(param_1 + 8),local_1020,0x1000);
  return;
}

