
undefined8 FUN_003d2430(long param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 local_58;
  undefined4 uStack_54;
  uint local_50;
  undefined1 local_4c;
  undefined1 auStack_40 [16];
  
  if (param_2 == 0) {
    return 0;
  }
  FUN_003d2534(auStack_40);
  local_4c = 0;
  local_50 = 0;
  uVar2 = FUN_003d2694(auStack_40,&local_58,param_3,0);
  uVar1 = local_58;
  if ((uVar2 & 1) != 0) {
    local_58 = 0xffffffff;
    local_50 = local_50 & 0xffffff00;
    uVar2 = FUN_003b8858(*(undefined8 *)(param_1 + 8),uVar1,&local_58);
    if ((uVar2 & 1) != 0) {
      if ((char)local_50 == '\0') {
        uVar1 = FUN_003b8448(*(undefined8 *)(param_1 + 8),uVar1);
        uVar2 = FUN_003d1610(param_1,uVar1,param_4,0,1);
      }
      else {
        uVar2 = FUN_003d1728(param_1,uVar1,uStack_54,param_4,0);
        uVar2 = uVar2 & 1;
      }
      if (uVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

