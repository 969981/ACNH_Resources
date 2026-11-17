
void FUN_03066dc0(long param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 local_18;
  
  if (*(long *)(*(long *)(param_1 + 0x210) + 0x580) == 0) {
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 0x1c334);
  if (*(int *)(param_1 + 0x1c3e4) != 3) {
    if (*(int *)(param_1 + 0x1c3e4) != 2) goto LAB_03066f7c;
    if (DAT_05292338 == 0) {
      *puVar1 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1c338) = 0xffffffff;
      goto LAB_03066f7c;
    }
    iVar2 = *(int *)(DAT_05292338 + 0xf9c);
    if (*(int *)(DAT_05292338 + 0xf90) == -1) {
LAB_03066ef8:
      uVar5 = 0xffffffff;
    }
    else {
      local_18 = 0;
      uVar4 = FUN_03582920(param_1 + 0x340,(long)&local_18 + 4,&local_18);
      if ((uVar4 & 1) == 0) goto LAB_03066ef8;
      uVar3 = *(uint *)(param_1 + 0x24c);
      uVar5 = 0xffffffff;
      if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x358))) {
        uVar5 = (undefined4)local_18;
        if (local_18._4_4_ != **(int **)(*(long *)(param_1 + 0x360) + (ulong)uVar3 * 8)) {
          uVar5 = 0xffffffff;
        }
      }
    }
    *puVar1 = uVar5;
    if (iVar2 != -1) {
      local_18 = 0;
      uVar4 = FUN_03582920(param_1 + 0x340,(long)&local_18 + 4,&local_18,iVar2);
      if ((uVar4 & 1) != 0) {
        uVar3 = *(uint *)(param_1 + 0x24c);
        uVar5 = 0xffffffff;
        if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x358))) {
          uVar5 = (undefined4)local_18;
          if (local_18._4_4_ != **(int **)(*(long *)(param_1 + 0x360) + (ulong)uVar3 * 8)) {
            uVar5 = 0xffffffff;
          }
        }
        *(undefined4 *)(param_1 + 0x1c338) = uVar5;
        goto LAB_03066f7c;
      }
    }
    *(undefined4 *)(param_1 + 0x1c338) = 0xffffffff;
    goto LAB_03066f7c;
  }
  if ((DAT_05292338 == 0) || (*(int *)(DAT_05292338 + 0xfa8) == -1)) {
LAB_03066eec:
    uVar5 = 0xffffffff;
  }
  else {
    local_18 = 0;
    uVar4 = FUN_03582920(param_1 + 0x340,(long)&local_18 + 4,&local_18);
    if ((uVar4 & 1) == 0) goto LAB_03066eec;
    uVar3 = *(uint *)(param_1 + 0x24c);
    uVar5 = 0xffffffff;
    if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x358))) {
      uVar5 = (undefined4)local_18;
      if (local_18._4_4_ != **(int **)(*(long *)(param_1 + 0x360) + (ulong)uVar3 * 8)) {
        uVar5 = 0xffffffff;
      }
    }
  }
  *puVar1 = uVar5;
LAB_03066f7c:
  FUN_03069df0(param_1);
  return;
}

