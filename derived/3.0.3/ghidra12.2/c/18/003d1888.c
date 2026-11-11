
long FUN_003d1888(long *param_1,undefined4 param_2,long *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_70;
  uint local_6c;
  undefined1 local_68;
  
  uVar1 = FUN_003b8448(param_1[1]);
  lVar4 = (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  if (lVar4 != 0) {
    return lVar4;
  }
  local_70 = 0xffffffff;
  local_68 = 0;
  uVar5 = FUN_003b8858(param_1[1],param_2,&local_70);
  if ((((uVar5 & 1) != 0) && (local_6c != 0)) &&
     (lVar4 = FUN_003d19f0(param_1,uVar1,&local_70,0x2c,0,param_4), lVar4 == 0x2c)) {
    uVar2 = FUN_003c9188(&local_70);
    uVar5 = (ulong)uVar2;
    uVar3 = FUN_003c9130(&local_70);
    if (uVar3 <= uVar2) {
      lVar4 = (**(code **)(*param_3 + 0x10))(param_3,((ulong)local_6c << 3 | 4) + uVar5);
      if (lVar4 == 0) {
        return 0;
      }
      uVar6 = FUN_003d19f0(param_1,uVar1,lVar4,uVar5,0,param_4);
      if (uVar6 == uVar5) {
        *(undefined4 *)(lVar4 + uVar5) = 0x54415746;
        FUN_003c8dd4(&local_70,lVar4,1);
        FUN_003c8fa0(&local_70);
        (**(code **)(*param_1 + 0x10))(param_1,uVar1,lVar4);
        return lVar4;
      }
    }
  }
  return 0;
}

