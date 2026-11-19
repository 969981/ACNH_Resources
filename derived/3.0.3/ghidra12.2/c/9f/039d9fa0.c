
long FUN_039d9fa0(long *param_1,long param_2,undefined8 param_3,int *param_4)

{
  undefined *puVar1;
  MutexType *pMVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  uint local_88 [2];
  undefined *local_80;
  long lStack_78;
  long local_70;
  uint local_68 [2];
  undefined *local_60;
  long lStack_58;
  
  local_70 = 0;
  lVar7 = *(long *)(param_2 + 0x60);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  uVar5 = (uint)*(byte *)(lVar7 + 2);
  if (*(byte *)(lVar7 + 2) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0xffffffff;
    pbVar8 = (byte *)(lVar7 + 3);
    do {
      uVar6 = crc32b(uVar6,uVar5,0x4c11db7);
      uVar5 = (uint)*pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (uVar5 != 0);
    uVar6 = ~uVar6;
  }
  pMVar2 = (MutexType *)(param_1 + 0x70);
  local_88[0] = uVar6;
  local_80 = puVar1;
  lStack_78 = lVar7 + 2;
  nn::os::LockMutex(pMVar2);
  local_60 = puVar1;
  lStack_58 = lVar7 + 2;
  local_68[0] = uVar6;
  for (lVar9 = *param_1; lVar9 != 0; lVar9 = *(long *)(lVar9 + 8)) {
    while (iVar3 = FUN_039dace0(local_68,lVar9 + 0x20), -1 < iVar3) {
      if (iVar3 == 0) {
        lVar7 = *(long *)(lVar9 + 0x38);
        if (lVar7 != 0) {
          FUN_039d9b80(param_1,lVar7,param_3);
          nn::os::UnlockMutex(pMVar2);
          if (param_4 == (int *)0x0) {
            return lVar7 + 0x48;
          }
          *param_4 = 2;
          return lVar7 + 0x48;
        }
        goto LAB_039da0a4;
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if (lVar9 == 0) goto LAB_039da0a4;
    }
  }
LAB_039da0a4:
  nn::os::UnlockMutex(pMVar2);
  uVar4 = FUN_039da140(param_2);
  local_70 = FUN_039d9df0(param_1,uVar4);
  if (local_70 == 0) {
    local_70 = 0;
    if (param_4 != (int *)0x0) {
      *param_4 = -1;
    }
  }
  else {
    iVar3 = FUN_039da2d0(param_1,&local_70,param_2,**(undefined8 **)(param_2 + 0x70),local_88,
                         param_3);
    if (param_4 != (int *)0x0) {
      *param_4 = iVar3;
    }
    if (iVar3 < 1) {
      local_70 = 0;
    }
    else {
      local_70 = local_70 + 0x48;
    }
  }
  return local_70;
}

