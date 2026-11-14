
void FUN_016b9e10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_1d0;
  undefined1 *local_1c8;
  undefined4 local_1c0;
  undefined1 local_1bc [63];
  undefined1 local_17d;
  long local_178 [35];
  
  puVar2 = PTR_DAT_04bb2bc0;
  if (0 < *(int *)(param_1 + 8)) {
    uVar5 = 0;
    puVar1 = PTR_DAT_04bb2bc0 + 0x10;
    do {
      FUN_006e9528(local_178,&DAT_040ab779,uVar5 & 0xffffffff);
      if (uVar5 < *(uint *)(param_1 + 8)) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x10) + uVar5 * 8);
      }
      else {
        lVar4 = 0;
      }
      local_1c0 = 0x40;
      local_17d = 0;
      local_1bc[0] = 0;
      local_1d0 = puVar1;
      local_1c8 = local_1bc;
      uVar3 = FUN_016ba000(&local_1d0,lVar4 + 0xb8);
      if ((uVar3 & 1) != 0) {
        (**(code **)(local_1d0 + 0x18))(&local_1d0);
        FUN_038d1270(local_178,&DAT_040fedde,local_1c8);
      }
      (**(code **)(local_178[0] + 0x18))(local_178);
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 8));
  }
  if (0 < *(int *)(param_1 + 0x90)) {
    uVar5 = 0;
    do {
      FUN_006e9528(local_178,&DAT_0405c8bd,uVar5 & 0xffffffff);
      if (uVar5 < *(uint *)(param_1 + 0x90)) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x98) + uVar5 * 8);
      }
      else {
        lVar4 = 0;
      }
      local_1c0 = 0x40;
      local_17d = 0;
      local_1bc[0] = 0;
      local_1d0 = puVar2 + 0x10;
      local_1c8 = local_1bc;
      uVar3 = FUN_016ba000(&local_1d0,lVar4 + 0xb8);
      if ((uVar3 & 1) != 0) {
        (**(code **)(local_1d0 + 0x18))(&local_1d0);
        FUN_038d1270(local_178,&DAT_04072010,local_1c8);
      }
      (**(code **)(local_178[0] + 0x18))(local_178);
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x90));
  }
  return;
}

