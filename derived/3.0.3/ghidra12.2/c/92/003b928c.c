
undefined4 FUN_003b928c(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  uVar1 = param_2 >> 0x18;
  uVar2 = 0xffffffff;
  switch(uVar1) {
  case 1:
    goto joined_r0x003b9324;
  case 2:
    if (uVar1 != 2) {
      return uVar2;
    }
    puVar3 = (uint *)(param_1 + *(int *)(param_1 + 0xc));
    if (*puVar3 <= (param_2 & 0xffffff)) {
      return uVar2;
    }
    param_2 = *(uint *)((long)puVar3 + (long)(int)puVar3[(ulong)(param_2 & 0xffffff) * 2 + 2]);
    uVar1 = param_2 >> 0x18;
joined_r0x003b9324:
    if (uVar1 == 1) {
      param_2 = param_2 & 0xffffff;
      puVar3 = (uint *)(param_1 + *(int *)(param_1 + 4));
      if (param_2 < *puVar3) {
LAB_003b9388:
        return *(undefined4 *)((long)puVar3 + (long)(int)puVar3[(ulong)param_2 * 2 + 2]);
      }
    }
    break;
  case 3:
    if (uVar1 != 3) {
      return uVar2;
    }
    param_2 = param_2 & 0xffffff;
    puVar3 = (uint *)(param_1 + *(int *)(param_1 + 0x14));
    if (*puVar3 <= param_2) {
      return uVar2;
    }
    goto LAB_003b9388;
  case 5:
    if (uVar1 == 5) {
      param_2 = param_2 & 0xffffff;
      puVar3 = (uint *)(param_1 + *(int *)(param_1 + 0x1c));
      if (param_2 < *puVar3) goto LAB_003b9388;
    }
    break;
  case 6:
    if (uVar1 == 6) {
      param_2 = param_2 & 0xffffff;
      puVar3 = (uint *)(param_1 + *(int *)(param_1 + 0x24));
      if (param_2 < *puVar3) goto LAB_003b9388;
    }
  }
  return uVar2;
}

