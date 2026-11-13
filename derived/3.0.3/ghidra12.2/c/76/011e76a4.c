
uint FUN_011e76a4(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  uint extraout_w8;
  uint uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  
  FUN_0124c030(auStack_50);
  iVar1 = FUN_0123db50(auStack_48,local_40);
  if (iVar1 == 5) {
    local_38 = 0xfffe;
    FUN_0277d4ac(&local_38);
    local_38 = 0xfffe;
    FUN_0277d4ac(&local_38);
    if (((*(byte *)(param_2 + 6) & 0x18) == 0) &&
       (uVar2 = FUN_0123b020(param_2,&local_38,0,0), (uVar2 & 1) != 0)) {
      if ((short)local_38 != -2) {
        if (0x3e6 < *(int *)(param_1 + 0x24f78)) {
          uVar3 = 0;
          goto LAB_011e7798;
        }
        FUN_011e669c(param_1,&local_38,param_3,&DAT_041746a8,0);
        if ((short)local_38 != -2) {
          FUN_011e669c(param_1,&local_38,param_3,&DAT_041746b4,1);
          uVar3 = extraout_w8 | 1;
          goto LAB_011e7798;
        }
      }
      uVar3 = 1;
      goto LAB_011e7798;
    }
  }
  else {
    local_38 = 0xfffe;
    FUN_0277d4ac(&local_38);
    local_38 = 0xfffe;
    FUN_0277d4ac(&local_38);
    if (((*(byte *)(param_2 + 6) & 0x18) == 0) &&
       (uVar2 = FUN_0123b020(param_2,&local_38,0,0), (uVar2 & 1) != 0)) {
      if ((short)local_38 == -2) {
LAB_011e7788:
        uVar3 = 0;
        uVar4 = 1;
      }
      else if (*(int *)(param_1 + 0x24f78) < 0x3e6) {
        FUN_011e669c(param_1,&local_38,param_3,&DAT_041746c0,0);
        if ((short)local_38 == -2) goto LAB_011e7788;
        uVar4 = 1;
        FUN_011e669c(param_1,&local_38,param_3,&DAT_041746cc,1);
        if ((short)local_38 == -2) {
          uVar3 = 0;
        }
        else {
          FUN_011e669c(param_1,&local_38,param_3,&DAT_041746d8,2);
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 0;
        uVar4 = 0;
      }
      uVar3 = uVar3 | uVar4;
      goto LAB_011e7798;
    }
  }
  uVar3 = 1;
LAB_011e7798:
  return uVar3 & 1;
}

