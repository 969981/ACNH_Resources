
uint FUN_02b157b8(long param_1,undefined4 *param_2,long param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar1 = 0;
  if (((param_2 != (undefined4 *)0x0) && (param_3 != 0)) && (param_4 != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      uVar2 = FUN_02b15930(param_1,0,param_3);
      uVar3 = 0;
      if ((uVar2 & 1) == 0) {
        uVar3 = 1;
        uVar2 = FUN_02b15930(param_1,1,param_3);
        if ((uVar2 & 1) == 0) {
          uVar3 = 2;
          uVar2 = FUN_02b15930(param_1,2,param_3);
          if ((uVar2 & 1) == 0) {
            if (*(int *)(param_4 + 8) == 0) {
              *(undefined4 *)(param_4 + 8) = 0x4000;
            }
            uVar1 = 0;
            *param_2 = 2;
            goto LAB_02b158f0;
          }
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x18) != 1) {
        uVar1 = 0;
        goto LAB_02b158f0;
      }
      uVar3 = 3;
      uVar2 = FUN_02b15930(param_1,3,param_3);
      if ((uVar2 & 1) == 0) {
        uVar3 = 4;
        uVar2 = FUN_02b15930(param_1,4,param_3);
        if ((uVar2 & 1) == 0) {
          uVar3 = 5;
          uVar2 = FUN_02b15930(param_1,5,param_3);
          if ((uVar2 & 1) == 0) {
            if (*(int *)(param_4 + 8) == 0) {
              *(undefined4 *)(param_4 + 8) = 0x4000;
            }
            uVar1 = 0;
            *param_2 = 5;
            goto LAB_02b158f0;
          }
        }
      }
    }
    uVar1 = FUN_02b160e0(param_1,param_4,uVar3);
    uVar1 = uVar1 ^ 1;
    *param_2 = uVar3;
  }
LAB_02b158f0:
  return uVar1 & 1;
}

