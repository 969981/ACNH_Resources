
void FUN_004d4450(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x50;
  lVar2 = param_1 + 0x10;
  FUN_004d4530(param_1,lVar1,lVar2,param_2);
  lVar3 = param_1 + 0x40;
  FUN_004d4530(param_1,lVar3,lVar2,param_2 + 0x10);
  lVar4 = param_1 + 0x20;
  FUN_004d4530(param_1,lVar3,lVar4,param_2 + 0x20);
  FUN_004d4530(param_1,lVar1,lVar4,param_2 + 0x30);
  param_1 = param_1 + 0x30;
  FUN_004d4530(param_1,lVar1,lVar2,param_2 + 0x40);
  FUN_004d4530(param_1,lVar3,lVar2,param_2 + 0x50);
  FUN_004d4530(param_1,lVar3,lVar4,param_2 + 0x60);
  FUN_004d4530(param_1,lVar1,lVar4,param_2 + 0x70);
  return;
}

