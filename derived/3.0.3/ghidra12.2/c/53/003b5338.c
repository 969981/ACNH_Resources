
long FUN_003b5338(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_003b53a0();
  lVar2 = FUN_003b53a0(param_1,param_2);
  return lVar2 + (lVar1 + 0xfffU & 0xfffffffffffff000) + 0x1000;
}

