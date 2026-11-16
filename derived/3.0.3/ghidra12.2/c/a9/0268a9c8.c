
bool FUN_0268a9c8(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4();
  lVar4 = *(long *)puVar1;
  if (lVar4 == 0) {
    return true;
  }
  lVar5 = *(long *)(lVar5 + 0x57e58);
  uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
  if (*(uint *)(lVar5 + 0x1d8) <= uVar2) {
    return true;
  }
  if (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) == 0) {
    return true;
  }
  local_50 = *param_1;
  uStack_4c = param_1[1];
  local_48 = 0;
  uVar2 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar1 != 0) {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0 && DAT_04ca7a08 != 0)) {
      FUN_0277d6c4(param_1);
    }
  }
  switch(*param_2) {
  case 0:
    local_24 = 0;
    break;
  case 1:
    local_24 = 1;
    iVar3 = FUN_021e0120(param_1,&local_24);
    if (iVar3 != 4) {
      return false;
    }
    local_28 = 3;
    goto LAB_0268ab80;
  case 2:
    local_24 = 2;
    break;
  case 3:
    local_24 = 3;
    iVar3 = FUN_021e0120(param_1,&local_24);
    if (iVar3 != 4) {
      return false;
    }
    local_28 = 1;
LAB_0268ab80:
    iVar3 = FUN_021e0120(param_1,&local_28);
    return iVar3 != 4;
  default:
    goto switchD_0268aab8_default;
  }
  iVar3 = FUN_021e0120(param_1,&local_24);
  if (iVar3 != 4) {
    return false;
  }
  local_28 = 1;
  iVar3 = FUN_021e0120(param_1,&local_28);
  if (1 < iVar3) {
    local_54 = 3;
    iVar3 = FUN_021e0120(param_1,&local_54);
    if (1 < iVar3) {
      return false;
    }
  }
switchD_0268aab8_default:
  return true;
}

