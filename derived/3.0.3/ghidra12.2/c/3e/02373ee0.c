
uint FUN_02373ee0(long param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_40;
  ulong local_38;
  
  if (*(int *)(param_1 + 0x1810) == 1) {
    uVar3 = FUN_02372a04(param_1);
    if ((uVar3 & 1) != 0) {
      uVar2 = 1;
      goto LAB_02373fb0;
    }
    if ((param_3 & 1) != 0) {
      uVar3 = FUN_00a738a0(param_1 + 0x1ee8,0);
      if ((uVar3 & 1) != 0) {
        iVar1 = FUN_00a74b78(param_1 + 0x1ee8);
        if (iVar1 == 4) goto LAB_02373f28;
      }
    }
    local_40 = 0;
    local_38 = 0;
    uVar2 = FUN_0247fe88(param_1,&local_40);
    if (((uVar2 & 1) != 0) || ((param_4 & 1) == 0)) goto LAB_02373fb0;
  }
  else if ((param_4 & 1) == 0) {
LAB_02373f28:
    uVar2 = 0;
    goto LAB_02373fb0;
  }
  uVar3 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
  uVar2 = 1;
  if ((uVar3 & 1) == 0) {
    local_40 = CONCAT35(local_40._5_3_,0x100000000);
    local_38 = local_38 & 0xffffffff00000000;
    local_40 = CONCAT44(local_40._4_4_,param_2);
    uVar2 = FUN_02374e74(param_1,&local_40);
  }
LAB_02373fb0:
  return uVar2 & 1;
}

