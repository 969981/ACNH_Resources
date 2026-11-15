
void FUN_02480100(long param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined2 local_4c;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined1 local_48;
  byte local_24 [4];
  
  uVar2 = *(uint *)(param_1 + 0x17d0);
  uVar5 = uVar2 & 0xfffffeff;
  *(uint *)(param_1 + 0x17d0) = uVar5;
  if (*(int *)(param_1 + 0x178) == 0) {
    if ((*(uint *)(param_1 + 0x1da8) & 0xfffffffd) == 4) {
      puVar6 = *(undefined8 **)(param_1 + 0x1dc0);
      *(undefined4 *)(param_1 + 0x1da8) = 0;
      *(uint *)(param_1 + 0x17d0) = uVar2 & 0xfffffefd;
      if (puVar6 != &DAT_0407ebb1) {
        iVar1 = 0;
        if (*(int *)(param_1 + 0x1dc8) < 1) {
          iVar1 = *(int *)(param_1 + 0x1dc8) + -1;
        }
        memset(puVar6,0,(long)iVar1);
        *(undefined1 *)((long)puVar6 + (long)iVar1) = 0;
      }
      puVar6 = *(undefined8 **)(param_1 + 0x1e18);
      if (puVar6 != &DAT_0407ebb1) {
        iVar1 = 0;
        if (*(int *)(param_1 + 0x1e20) < 1) {
          iVar1 = *(int *)(param_1 + 0x1e20) + -1;
        }
        memset(puVar6,0,(long)iVar1);
        *(undefined1 *)((long)puVar6 + (long)iVar1) = 0;
      }
      *(undefined8 *)(param_1 + 0x1e68) = 0;
      *(undefined8 *)(param_1 + 0x1e78) = 0;
      *(undefined2 *)(param_1 + 0x1e70) = 0xff;
      uVar5 = *(uint *)(param_1 + 0x17d0);
    }
    *(uint *)(param_1 + 0x17d0) = uVar5 & 0xfffffffb;
  }
  uVar3 = *(ushort *)(param_1 + 0x190a);
  if (*(char *)(param_1 + 0x190c) == '\0') {
    local_58 = PTR_DAT_04bb2020 + 0x10;
    uStack_50 = 0x405da16;
    local_4c = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    FUN_0279a9f0((byte *)(param_1 + 0x1ee8),&local_58,1);
  }
  else {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
    local_24[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    FUN_024802e4(local_24,param_1 + 0x18e0);
    local_58._0_4_ = 0;
    uStack_50 = 6;
    local_58._4_4_ = local_58._4_4_ & 0xffffff00;
    uStack_4a = 0;
    local_4c = 0;
    FUN_02321e44(auStack_60,param_1,&local_58);
  }
  local_58._0_4_ = (uint)uVar3 << 0x10;
  *(undefined4 *)(param_1 + 0x9c0) = 0;
  *(undefined1 *)(param_1 + 0x9c4) = 0;
  local_58._4_4_ = 0x3e99999a;
  uStack_50 = 0x40000000;
  local_48 = 0;
  local_4c = 0;
  uStack_4a = 0xa0;
  uStack_49 = 0x41;
  bVar4 = FUN_023b7bb8(param_1,&local_58);
  *(byte *)(param_1 + 0x9c4) = bVar4 & 1;
  FUN_02332b04(param_1,0,0);
  FUN_0232f5f8(param_1);
  return;
}

