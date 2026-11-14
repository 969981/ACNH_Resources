
uint FUN_018b4bb0(void)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined *local_2038;
  uint local_2030 [2048];
  
  if (((*(byte *)(*DAT_0537d558 + 0x476) < 2) &&
      (((*(uint *)(DAT_052cc470 + 0x160) < 2 || *(long *)(DAT_052cc470 + 0x168) == 0 ||
        (*(char *)(*(long *)(DAT_052cc470 + 0x168) + 1) == '\0')) &&
       (uVar3 = FUN_00a86724(DAT_04da7238), (uVar3 & 0xfffffffe) != 4)))) && (DAT_05146e18 != '\0'))
  {
    local_2038 = PTR_DAT_04bbdd38 + 0x10;
    memset(local_2030,0,0x1000);
    puVar2 = PTR_DAT_04bbbb68;
    lVar4 = 0;
    do {
      lVar1 = lVar4 + 8;
      uVar3 = *(uint *)((long)(PTR_DAT_04bbbb68 + lVar4 + 0xf080) + 4);
      *(uint *)((long)local_2030 + lVar4 + 0x1000) =
           *(uint *)(PTR_DAT_04bbbb68 + lVar4 + 0xf080) | *(uint *)((long)local_2030 + lVar4);
      *(uint *)((long)local_2030 + lVar4 + 0x1004) = uVar3 | *(uint *)((long)local_2030 + lVar4 + 4)
      ;
      lVar4 = lVar1;
    } while (lVar1 != 0x1000);
    memcpy(local_2030,local_2030 + 0x400,0x1000);
    lVar4 = 0;
    do {
      lVar1 = lVar4 + 8;
      uVar3 = *(uint *)((long)(puVar2 + lVar4 + 0x10088) + 4);
      *(uint *)((long)local_2030 + lVar4 + 0x1000) =
           *(uint *)(puVar2 + lVar4 + 0x10088) | *(uint *)((long)local_2030 + lVar4);
      *(uint *)((long)local_2030 + lVar4 + 0x1004) = uVar3 | *(uint *)((long)local_2030 + lVar4 + 4)
      ;
      lVar4 = lVar1;
    } while (lVar1 != 0x1000);
    memcpy(local_2030,local_2030 + 0x400,0x1000);
    uVar3 = FUN_011e09c0(local_2030 + 0x400,&local_2038,1,0);
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}

