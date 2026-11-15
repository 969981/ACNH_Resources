
void FUN_02093ad0(long param_1,undefined4 param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 local_24;
  
  if ((*(int *)(param_1 + 0x30) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    iVar2 = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c) + -1;
    iVar1 = 0;
    if (*(int *)(param_1 + 0x28) <= iVar2) {
      iVar1 = *(int *)(param_1 + 0x28);
    }
    *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)(iVar2 - iVar1) * 0x10 + 4) = param_2;
  }
  if ((param_3 & 1) == 0) {
    return;
  }
  local_24 = param_2;
  switch(param_2) {
  case 0:
    break;
  case 1:
    local_24 = 8;
    break;
  case 2:
    lVar3 = FUN_021c9770(*(undefined4 *)(param_1 + 0xc),1);
    iVar1 = *(int *)(lVar3 + 0x1fc);
    if (iVar1 == 5) {
      local_24 = 6;
      break;
    }
    if (iVar1 == 2) {
      local_24 = 4;
      break;
    }
    if (iVar1 == 0) {
      local_24 = 5;
      break;
    }
  default:
    local_24 = 7;
  }
  FUN_021dc210((undefined4 *)(param_1 + 0xc),&local_24,0,1);
  return;
}

