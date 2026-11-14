
undefined8 FUN_01a463d4(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40;
  int local_38;
  int local_34;
  
  uVar4 = FUN_0277e294(param_2);
  puVar1 = PTR_DAT_04bb43c0;
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  local_40 = 0;
  local_50 = PTR_DAT_04bc0510 + 0x10;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_48);
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
        local_40 = lVar5;
      }
    }
  }
  switch(**(undefined4 **)(param_1 + 8)) {
  case 0:
    uVar4 = FUN_01ae7a70(&local_50);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    uVar2 = FUN_01ae7550(&local_50);
    if (uVar2 < 10) {
      return 1;
    }
    return 0;
  case 1:
    uVar4 = FUN_01ae7a70(&local_50);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    local_34 = 10;
    local_38 = FUN_01ae7550(&local_50);
    if (local_38 == local_34) {
      return 1;
    }
    local_34 = 0xb;
    local_38 = FUN_01ae7550(&local_50);
    if (local_38 == local_34) {
      return 1;
    }
    local_34 = 0xc;
    break;
  case 2:
    local_34 = 0xe;
    break;
  case 3:
    local_34 = 0xd;
    break;
  default:
    goto switchD_01a464c8_default;
  }
  iVar3 = FUN_01ae7550(&local_50);
  if (iVar3 == local_34) {
    return 1;
  }
switchD_01a464c8_default:
  return 0;
}

