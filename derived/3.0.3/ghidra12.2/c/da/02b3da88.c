
undefined8 FUN_02b3da88(long param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN_02a8ec10(param_2);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_02a8e370(param_2);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_02a8e598(param_2);
      if ((uVar2 & 1) == 0) {
        if (((*(int *)(param_2 + 0xc) == 0) || (*(int *)(param_2 + 0xc) != 0x1a)) ||
           ((*(byte *)(param_2 + 8) & 1) != 0)) {
          if (((*(int *)(param_2 + 0xc) == 0) || (*(int *)(param_2 + 0xc) != 0x1b)) ||
             ((*(byte *)(param_2 + 8) & 1) != 0)) {
            if ((*(byte *)(param_2 + 8) & 1) == 0) {
              uVar2 = FUN_02a8e7c0(param_2);
              if (((uVar2 & 1) != 0) || (uVar2 = FUN_02a8e9e8(param_2), (uVar2 & 1) != 0)) {
                FUN_02b3a450(uVar3,param_3,**(undefined4 **)(param_1 + 0x10));
              }
            }
            else {
              FUN_02b3bef0(uVar3,**(undefined4 **)(param_1 + 0x10));
            }
          }
          else {
            FUN_02b3b680(uVar3,param_3,**(undefined4 **)(param_1 + 0x10));
          }
        }
        else {
          FUN_02b3aef0(uVar3,param_3,**(undefined4 **)(param_1 + 0x10));
        }
      }
      else {
        local_34 = 0;
        uVar2 = FUN_02b67620(&local_34,*(undefined4 *)(param_2 + 0xc));
        uVar1 = local_34;
        if ((uVar2 & 1) == 0) {
          uVar1 = 0;
        }
        FUN_02b3acc0(uVar3,uVar1,**(undefined4 **)(param_1 + 0x10));
      }
    }
    else {
      local_38 = 0;
      uVar2 = FUN_02b673a0(&local_38,*(undefined4 *)(param_2 + 0xc));
      uVar1 = local_38;
      if ((uVar2 & 1) == 0) {
        uVar1 = 0;
      }
      FUN_02b3aa90(uVar3,uVar1,**(undefined4 **)(param_1 + 0x10));
    }
  }
  else {
    FUN_02b39e40(uVar3,param_3,**(undefined4 **)(param_1 + 0x10));
  }
  return 1;
}

