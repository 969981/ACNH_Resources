
void FUN_020939a8(long param_1,undefined4 param_2,ulong param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  
  iVar5 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar5 < iVar3) {
LAB_020939f8:
    iVar2 = *(int *)(param_1 + 0x2c) + iVar5;
    *(int *)(param_1 + 0x30) = iVar5 + 1;
    iVar5 = 0;
    if (iVar3 <= iVar2) {
      iVar5 = iVar3;
    }
    puVar1 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)(iVar2 - iVar5) * 0x10);
    *puVar1 = 0;
    puVar1[1] = param_2;
    puVar1[2] = 0;
    *(undefined2 *)(puVar1 + 3) = 0;
  }
  else {
    if (0 < iVar5) {
      iVar2 = 0;
      if (*(int *)(param_1 + 0x2c) + 1 < iVar3) {
        iVar2 = *(int *)(param_1 + 0x2c) + 1;
      }
      *(int *)(param_1 + 0x2c) = iVar2;
      *(int *)(param_1 + 0x30) = iVar5 + -1;
      iVar5 = iVar5 + -1;
    }
    if (iVar5 < iVar3) goto LAB_020939f8;
  }
  if ((param_3 & 1) == 0) {
    return;
  }
  local_2c = param_2;
  local_24 = param_2;
  switch(param_2) {
  case 0:
    break;
  case 1:
    local_2c = 8;
    break;
  case 2:
    lVar4 = FUN_021c9770(*(undefined4 *)(param_1 + 0xc),1);
    local_28 = *(int *)(lVar4 + 0x1fc);
    if (local_28 == 5) {
      local_2c = 6;
      break;
    }
    if (local_28 == 2) {
      local_2c = 4;
      break;
    }
    if (local_28 == 0) {
      local_2c = 5;
      break;
    }
  default:
    local_2c = 7;
  }
  FUN_021dc210((undefined4 *)(param_1 + 0xc),&local_2c,0,(param_4 ^ 0xffffffff) & 1);
  return;
}

