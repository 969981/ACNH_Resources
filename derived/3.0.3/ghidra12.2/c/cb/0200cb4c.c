
undefined8 FUN_0200cb4c(long *param_1,int *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_48 = 0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_50 = *param_3;
  uStack_4c = param_3[1];
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar1 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_3);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
         (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8), lVar6 != 0)) {
        local_48 = lVar6;
      }
    }
  }
  if (((*param_2 == 0x14) && (iVar3 = FUN_01b0ef90(&local_58), iVar3 == 0xc)) ||
     (iVar3 = *param_2, iVar4 = FUN_01b0ef90(&local_58), iVar3 + -0xd == iVar4)) {
    lVar6 = (**(code **)(*param_1 + 0x28))(param_1);
    if ((*(byte *)(lVar6 + 0xad54) >> 2 & 1) == 0) {
      return 1;
    }
    uVar5 = FUN_01b0f3b8(&local_58);
    if ((int)uVar5 == 1) {
      return uVar5;
    }
  }
  return 0;
}

