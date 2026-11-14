
bool FUN_01a49008(undefined8 param_1,undefined4 *param_2)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar1 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
         (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8), lVar6 != 0)) {
        local_38 = lVar6;
      }
    }
  }
  uVar5 = FUN_01ae6420(&local_48);
  if ((uVar5 & 1) == 0) {
    bVar2 = false;
  }
  else {
    iVar4 = FUN_02622054(*(undefined8 *)PTR_DAT_04bb46f0,param_2);
    bVar2 = iVar4 == 9;
  }
  return bVar2;
}

