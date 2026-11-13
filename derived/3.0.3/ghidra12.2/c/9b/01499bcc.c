
bool FUN_01499bcc(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  uVar3 = FUN_0277e294(param_2);
  puVar1 = PTR_DAT_04bb43c0;
  if ((uVar3 & 1) == 0) {
    iVar4 = 0;
  }
  else {
    local_38 = 0;
    local_48 = PTR_DAT_04bc0510 + 0x10;
    local_40 = *param_2;
    uStack_3c = param_2[1];
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(&local_40);
    if (*(long *)puVar1 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        lVar5 = *(long *)PTR_DAT_04bc0428;
        uVar2 = FUN_0277d6c4(param_2);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
           (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0)) {
          local_38 = lVar5;
        }
      }
    }
    uVar2 = FUN_01aee3b4(&local_48);
    if (0x1b < uVar2) {
      uVar2 = 0;
    }
    iVar4 = (&DAT_041756a8)[(int)uVar2];
  }
  return 600 < *(int *)(param_1 + 0xc0280) + iVar4;
}

