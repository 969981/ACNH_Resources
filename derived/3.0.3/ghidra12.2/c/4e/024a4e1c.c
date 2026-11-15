
void FUN_024a4e1c(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  byte local_54 [4];
  undefined8 local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined8 local_28;
  
  if ((*(int *)(param_1 + 0x178) == 0) && ((*(byte *)(param_1 + 0x17d2) >> 6 & 1) != 0)) {
    local_28 = 0xfffe;
    FUN_0277d4ac(&local_28);
    local_28 = *(undefined8 *)(param_1 + 0x1902);
    local_50 = 0xfffe;
    FUN_0277d4ac(&local_50);
    FUN_016e49e4(&local_50,&local_28,0);
    puVar1 = PTR_DAT_04bb43c0;
    lVar4 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(&local_50);
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar4 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        FUN_026738b0(param_1 + 0x1ee8,&local_50,1,0);
        lVar3 = *(long *)puVar1;
      }
    }
    *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xf7ffffff;
    local_50 = CONCAT44(*(undefined4 *)(param_1 + 0x1d78),*(undefined4 *)(param_1 + 0x1d74));
    uVar2 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar1 != 0) {
      lVar3 = *(long *)(lVar3 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        FUN_023277b0(param_1 + 0x1ee8,&local_50);
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 0x17cc);
  *(uint *)(param_1 + 0x17cc) = uVar2 & 0xfffffffe;
  if ((uVar2 & 1) != 0) {
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
  return;
}

