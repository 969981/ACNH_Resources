
bool FUN_01688270(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined **local_2048;
  uint local_2040 [1024];
  undefined8 local_1040;
  undefined8 local_1038;
  int local_1030;
  int local_102c;
  undefined *local_1028;
  int local_1020;
  int local_101c;
  
  if (param_2 == 0) {
    bVar3 = false;
  }
  else {
    FUN_01684bcc();
    local_2048 = &PTR_LAB_049bb2c8;
    memset(local_2040,0,0x1000);
    lVar5 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 0x19058 + lVar5 + 4);
      lVar1 = lVar5 + 8;
      *(uint *)((long)local_2040 + lVar5 + 0x1000) =
           *(uint *)(param_1 + 0x19058 + lVar5) | *(uint *)((long)local_2040 + lVar5);
      *(uint *)((long)local_2040 + lVar5 + 0x1004) = uVar2 | *(uint *)((long)local_2040 + lVar5 + 4)
      ;
      lVar5 = lVar1;
    } while (lVar1 != 0x1000);
    memcpy(local_2040,&local_1040,0x1000);
    lVar5 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 0x2b0e8 + lVar5 + 4);
      lVar1 = lVar5 + 8;
      *(uint *)((long)local_2040 + lVar5 + 0x1000) =
           *(uint *)(param_1 + 0x2b0e8 + lVar5) & *(uint *)((long)local_2040 + lVar5);
      *(uint *)((long)local_2040 + lVar5 + 0x1004) = uVar2 & *(uint *)((long)local_2040 + lVar5 + 4)
      ;
      lVar5 = lVar1;
    } while (lVar1 != 0x1000);
    memcpy(local_2040,&local_1040,0x1000);
    lVar5 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 0x2e100 + lVar5 + 4);
      lVar1 = lVar5 + 8;
      *(uint *)((long)local_2040 + lVar5 + 0x1000) =
           *(uint *)(param_1 + 0x2e100 + lVar5) & *(uint *)((long)local_2040 + lVar5);
      *(uint *)((long)local_2040 + lVar5 + 0x1004) = uVar2 & *(uint *)((long)local_2040 + lVar5 + 4)
      ;
      lVar5 = lVar1;
    } while (lVar1 != 0x1000);
    memcpy(local_2040,&local_1040,0x1000);
    iVar4 = 0;
    lVar5 = 2;
    do {
      uVar2 = *(uint *)((long)&local_2048 + lVar5 * 4);
      lVar5 = lVar5 + 1;
      uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
      uVar2 = uVar2 + (uVar2 >> 8);
      iVar4 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + iVar4;
    } while (lVar5 != 0x402);
    bVar3 = iVar4 != 0;
    if (iVar4 != 0) {
      FUN_01696be0(&local_1040,&local_2048);
      *(int *)(param_2 + 8) = (int)local_1038;
      *(int *)(param_2 + 0xc) = local_1038._4_4_;
      local_1030 = (int)local_1038;
      local_102c = local_1038._4_4_;
      local_1020 = (int)local_1038 + 1;
      local_101c = local_1038._4_4_ + 1;
      local_1040 = PTR_DAT_04bbc1a0 + 0x10;
      local_1038 = PTR_DAT_04bb2010 + 0x10;
      local_1028 = local_1038;
      FUN_01686550(param_1,&local_1040);
    }
  }
  return bVar3;
}

