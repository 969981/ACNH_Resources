
long FUN_0043b800(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_2;
  if ((param_2 != 0) && ((param_3 & 1) != 0)) {
    lVar1 = FUN_00438810(0x40);
    FUN_0047df70(lVar1,param_2,0xffffffff);
    FUN_004435c0(param_2);
  }
  return lVar1;
}

