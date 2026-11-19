
void FUN_03b4754c(float param_1,long param_2,float *param_3,int param_4,undefined4 param_5,
                 undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  long local_68;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  long local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (param_4 == 0) {
    fStack_5c = param_3[1] * param_1;
    local_60 = *param_3 * param_1;
    fStack_54 = param_3[3] * param_1;
    local_58 = param_3[2] * param_1;
    local_50 = param_3[4] * param_1;
    fStack_4c = param_3[5] * param_1;
    iVar1 = FUN_02a0c760(*(undefined1 *)(*(long *)(param_2 + 0x30) + 0x10));
    iVar2 = 0;
    if (iVar1 != -1) {
      iVar2 = iVar1;
    }
    local_48 = CONCAT44(local_48._4_4_,iVar2);
    iVar2 = FUN_03b471ec(&local_48);
    if (iVar2 == 1) {
      FUN_003e41d0(&local_48,*(undefined8 *)(param_2 + 0x40));
      if (local_48 != 0) {
        FUN_003cfb94(local_48,1);
        if (local_48 != 0) {
          FUN_003e3f00(local_48,param_7,param_5,&local_60);
        }
      }
      FUN_003e42a0(&local_48);
    }
    else if (iVar2 == 0) {
      FUN_003e5df0(&local_68,*(undefined8 *)(param_2 + 0x40));
      if (local_68 != 0) {
        FUN_003cfb94(local_68,1);
        if (local_68 != 0) {
          local_48 = CONCAT44(fStack_5c,local_60);
          uStack_40 = CONCAT44(fStack_54,local_58);
          local_38 = CONCAT44(fStack_4c,local_50);
          FUN_003cfbe4(local_68,0,param_5,&local_48);
        }
      }
      FUN_003e5ec0(&local_68);
    }
  }
  return;
}

