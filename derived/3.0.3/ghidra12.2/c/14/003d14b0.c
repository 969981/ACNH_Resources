
uint FUN_003d14b0(long param_1,ulong param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0xffffffffffffffff;
  uStack_48 = 0;
  uVar3 = FUN_003b88c4(*(undefined8 *)(param_1 + 8),param_2,&local_50);
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
    goto LAB_003d156c;
  }
  if ((uint)local_50 != -1) {
    iVar1 = FUN_003b8458(*(undefined8 *)(param_1 + 8));
    if (iVar1 == 3) {
      uVar4 = (uint)local_50;
      if ((uint)local_50 <= local_50._4_4_) {
        do {
          uVar2 = FUN_003d10a0(param_1,uVar4,param_3,param_4,param_5,param_2 & 0xffffffff);
          if ((uVar2 & 1) == 0) break;
          uVar4 = uVar4 + 1;
        } while (uVar4 <= local_50._4_4_);
        goto LAB_003d156c;
      }
    }
    else if ((iVar1 == 1) && (uVar4 = (uint)local_50, (uint)local_50 <= local_50._4_4_)) {
      do {
        uVar2 = FUN_003d0e48(param_1,uVar4,param_3,param_4,param_5);
        if ((uVar2 & 1) == 0) break;
        uVar4 = uVar4 + 1;
      } while (uVar4 <= local_50._4_4_);
      goto LAB_003d156c;
    }
  }
  uVar2 = 1;
LAB_003d156c:
  return uVar2 & 1;
}

