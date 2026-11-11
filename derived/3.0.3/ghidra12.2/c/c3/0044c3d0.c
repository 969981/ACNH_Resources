
void FUN_0044c3d0(undefined8 *param_1,long param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long local_50;
  long lStack_48;
  long local_40;
  long local_38;
  
  lVar2 = FUN_00427270(*(undefined8 *)(param_2 + 8));
  uVar3 = FUN_00427270(*(undefined8 *)(param_2 + 8));
  iVar1 = FUN_0043a660(uVar3,0x3a);
  local_38 = lVar2 + (iVar1 + 1);
  local_50 = *param_3;
  lStack_48 = param_3[1];
  local_40 = lVar2;
  if ((iVar1 + 1 != 0) && (uVar4 = FUN_00429c10(&local_50,&local_40), (uVar4 & 1) != 0)) {
    local_50 = local_50 + ((int)local_38 - (int)local_40);
  }
  if (0 < *(int *)(param_2 + 0x10)) {
    lVar2 = 0;
    do {
      uVar4 = FUN_0043a700(local_50,lStack_48 - local_50,
                           *(undefined8 *)(*(long *)(param_2 + 0x18) + lVar2 * 8));
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(param_2 + 8);
        *param_1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar2 * 8);
        param_1[1] = lVar5;
        uVar4 = 0;
        if (lVar5 != 0) {
          uVar4 = FUN_00428370();
        }
        param_1[2] = uVar4;
        if ((uVar4 & 1) == 0) {
          return;
        }
        FUN_0043dd30(uVar4 & 0xfffffffffffffffe);
        return;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_2 + 0x10));
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

