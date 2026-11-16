
void FUN_026129ac(undefined2 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  *param_1 = 0x4c7b;
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  if (*(long *)puVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if (((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
       (iVar3 = FUN_0277d6c4(param_2), iVar3 == 0x16a2)) {
      local_40 = *param_2;
      uStack_3c = param_2[1];
      lVar5 = *(long *)puVar1;
      local_38 = 0;
      local_48 = PTR_DAT_04bc0510 + 0x10;
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
      uVar4 = FUN_01b0d26c(&local_48);
      if ((((uint)uVar4 & 0xffff) < 0x800) &&
         ((*(byte *)(*(long *)PTR_DAT_04bb46f0 + ((uVar4 & 0xfff8) >> 3) + 0xe99e0) >>
           (ulong)((uint)uVar4 & 7) & 1) != 0)) {
        *param_1 = (short)uVar4;
      }
    }
  }
  return;
}

