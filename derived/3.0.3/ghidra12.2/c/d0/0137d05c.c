
undefined8 FUN_0137d05c(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  uVar4 = FUN_0277da10();
  if (((uVar4 & 1) == 0) ||
     (uVar4 = FUN_0277e024(param_1), puVar1 = PTR_DAT_04bb43c0, (uVar4 & 1) != 0)) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_1);
  lVar5 = DAT_05150358;
  lVar6 = *(long *)puVar1;
  if (lVar6 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_38 = 0;
      local_40 = *param_1;
      uStack_3c = param_1[1];
      local_48 = &PTR_FUN_04a36b50;
      uVar2 = FUN_0277d6c4(&local_40);
      if (*(long *)puVar1 != 0) {
        lVar5 = *(long *)(lVar6 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar5 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_1);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
             (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0)) {
            local_38 = lVar5;
          }
        }
      }
      uVar4 = FUN_01ae59b0(&local_48);
      if ((uVar4 & 1) == 0) {
        return 1;
      }
      uVar4 = FUN_01ae6020(&local_48);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
  if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
      ((*(long *)(DAT_05150358 + 0x488) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
     ((*(long *)(DAT_05150358 + 0x2b0) != 0 && (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)
      ))) {
    uVar2 = FUN_0277d6c4(param_1);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      FUN_0124c030(&local_48,param_1);
      uVar4 = FUN_0124dcb0(&local_48);
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      uVar4 = FUN_0123d890(local_38,4);
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      iVar3 = FUN_0123db50(&local_40,local_38);
      if (iVar3 - 0xbU < 7) {
        return 1;
      }
      iVar3 = FUN_0123db50(&local_40,local_38);
      if (iVar3 == 0x2d) {
        return 1;
      }
      iVar3 = FUN_0123db50(&local_40,local_38);
      if (iVar3 - 0x12U < 6) {
        return 1;
      }
      iVar3 = FUN_0123db50(&local_40,local_38);
      if (iVar3 - 0x18U < 7) {
        return 0;
      }
      iVar3 = FUN_0123db50(&local_40,local_38);
      if (iVar3 == 0x1f) {
        return 0;
      }
      iVar3 = FUN_0123db50(&local_40,local_38);
      if (iVar3 - 0x23U < 9) {
        return 1;
      }
      FUN_0123db50(&local_40,local_38);
      return 1;
    }
  }
  local_48 = (undefined **)(PTR_DAT_04bc35c0 + 0x10);
  local_40 = *param_1;
  uStack_3c = param_1[1];
  FUN_0277d6c4(&local_40);
  return 1;
}

