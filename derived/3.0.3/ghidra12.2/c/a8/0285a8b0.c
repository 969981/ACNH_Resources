
void FUN_0285a8b0(long param_1,short *param_2)

{
  undefined *puVar1;
  uint uVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  if (*param_2 == -2) {
    sVar3 = -2;
  }
  else {
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(param_2);
    lVar4 = *(long *)puVar1;
    if (lVar4 == 0) {
      return;
    }
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if (*(uint *)(lVar5 + 0x1d8) <= uVar2) {
      return;
    }
    if (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) == 0) {
      return;
    }
    local_48 = 0;
    local_50 = *(undefined4 *)param_2;
    uStack_4c = *(undefined4 *)(param_2 + 2);
    local_58 = &PTR_FUN_04a36b50;
    uVar2 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar1 != 0) {
      lVar4 = *(long *)(lVar4 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        lVar4 = *(long *)PTR_DAT_04bc0428;
        uVar2 = FUN_0277d6c4(param_2);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
           (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8), lVar4 != 0)) {
          local_48 = lVar4;
        }
      }
    }
    uVar2 = FUN_01b01f10(&local_58);
    lVar4 = *(long *)PTR_DAT_04bb46d0;
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x400);
    if (*(uint *)(lVar4 + 0x3e0) <= uVar2) {
      return;
    }
    if (*(long *)(*(long *)(lVar4 + 1000) + (long)(int)uVar2 * 8) == 0) {
      return;
    }
    sVar3 = *param_2;
  }
  *(short *)(param_1 + 8) = sVar3;
  *(char *)(param_1 + 10) = (char)param_2[1];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 2);
  return;
}

