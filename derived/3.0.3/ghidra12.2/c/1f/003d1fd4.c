
void FUN_003d1fd4(long *param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined1 local_74;
  undefined1 auStack_68 [16];
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined4 local_4c [7];
  
  if (param_2 != -1) {
    uVar1 = FUN_003b84d0(param_1[1],local_4c,param_2);
    if ((uVar1 & 1) != 0) {
      local_54 = 0;
      local_50 = 0;
      uVar1 = FUN_003b8698(param_1[1],param_2,&local_58);
      if (((uVar1 & 1) != 0) &&
         (lVar2 = (**(code **)(*param_1 + 0x20))(param_1,local_4c[0]), lVar2 != 0)) {
        FUN_003d2534(auStack_68,lVar2);
        local_74 = 0;
        local_78 = 0;
        uVar1 = FUN_003d2694(auStack_68,local_80,local_58,0);
        if ((uVar1 & 1) != 0) {
          FUN_003d20a0(param_1,local_80[0],param_3);
        }
      }
    }
  }
  return;
}

