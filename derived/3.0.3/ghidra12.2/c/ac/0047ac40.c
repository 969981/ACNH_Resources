
undefined8 FUN_0047ac40(undefined8 param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  local_48 = 0;
  local_40 = -0x8000000000000000;
  local_38 = 0;
  lVar3 = *param_2;
  lVar4 = param_2[1];
  if (0 < (int)((ulong)(lVar4 - lVar3) >> 3)) {
    lVar5 = 0;
    do {
      lVar2 = *(long *)(lVar3 + lVar5 * 8);
      if (lVar2 != 0) {
        FUN_0047ad00(param_1,lVar2,&local_48);
        lVar3 = *param_2;
        lVar4 = param_2[1];
      }
      lVar2 = local_40;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)((ulong)(lVar4 - lVar3) >> 3));
    uVar1 = local_40._4_4_;
    local_40 = (ulong)local_40._4_4_ << 0x20;
    if ((-1 < lVar2) && (local_48 != 0)) {
      FUN_00421f90(PTR_DAT_048607b8,local_48,8,uVar1 & 0x3fffffff);
    }
  }
  return 0;
}

