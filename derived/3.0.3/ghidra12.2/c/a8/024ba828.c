
void FUN_024ba828(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  byte local_54 [4];
  ulong local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    pbVar1 = (byte *)(param_1 + 0x1ee8);
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_054f0960);
        puVar5 = (uint *)&DAT_054f0958;
        if (iVar4 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar5 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar5 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if ((ulong)*pbVar1 < 8) {
        puVar5 = puVar5 + (ulong)*pbVar1 * 2;
      }
    }
    *puVar5 = *puVar5 & 0xfffffffb;
    *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xf7ffffff;
    puVar2 = PTR_DAT_04bb43c0;
    local_50 = *(ulong *)(param_1 + 0x1d74);
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar2 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        FUN_023277b0(pbVar1,&local_50);
      }
    }
    if ((*(int *)(param_1 + 0x178) == 0) && ((*(byte *)(param_1 + 0x17d2) >> 6 & 1) != 0)) {
      local_28 = 0xfffe;
      FUN_0277d4ac(&local_28);
      local_28 = *(undefined8 *)(param_1 + 0x1902);
      local_50 = 0xfffe;
      FUN_0277d4ac(&local_50);
      FUN_016e49e4(&local_50,&local_28,0);
      lVar6 = *(long *)puVar2;
      uVar3 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar2 != 0) {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          FUN_026738b0(pbVar1,&local_50,1,0);
        }
      }
    }
  }
  uVar3 = *(uint *)(param_1 + 0x17cc);
  *(uint *)(param_1 + 0x17cc) = uVar3 & 0xfffffffe;
  if ((uVar3 & 1) != 0) {
    local_54[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_54[0]) {
      local_54[0] = 0xff;
    }
    local_50 = 0xfffe;
    FUN_0277d4ac(&local_50);
    local_50 = *(ulong *)(param_1 + 0x190b);
    FUN_02326130(local_54,&local_50,1);
    local_48 = 6;
    local_50 = local_50 & 0xffffff0000000000;
    local_42 = 0;
    local_44 = 0;
    FUN_02321e44(&local_28,param_1,&local_50);
  }
  FUN_024b16f0(param_1);
  return;
}

