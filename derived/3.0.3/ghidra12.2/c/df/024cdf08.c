
void FUN_024cdf08(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined1 auStack_4c [8];
  byte local_44 [4];
  ulong local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  uVar2 = *(uint *)(param_1 + 0x17cc);
  *(uint *)(param_1 + 0x17cc) = uVar2 & 0xfffffffe;
  if ((uVar2 & 1) != 0) {
    local_44[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
    if (*(char *)(param_1 + 0x1900) != '\0') {
      local_40 = 0xfffe;
      FUN_0277d4ac(&local_40);
      puVar1 = PTR_DAT_04bb43c0;
      local_40 = *(ulong *)(param_1 + 0x1902);
      lVar3 = *(long *)PTR_DAT_04bb43c0;
      uVar2 = FUN_0277d6c4(&local_40);
      if (*(long *)puVar1 != 0) {
        lVar3 = *(long *)(lVar3 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          FUN_02326130(local_44,&local_40,1);
        }
      }
      if (*(char *)(param_1 + 0x1900) != '\0') {
        local_38 = 6;
        local_40 = local_40 & 0xffffff0000000000;
        local_32 = 0;
        local_34 = 0;
        FUN_02321e44(auStack_4c,param_1,&local_40);
      }
    }
  }
  return;
}

