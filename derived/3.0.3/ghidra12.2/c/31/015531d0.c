
void FUN_015531d0(undefined8 param_1)

{
  int iVar1;
  
  FUN_01553660(param_1,1,0xffffffff,0xffffffff,10,10);
  iVar1 = 0;
  do {
    FUN_01553660(param_1,iVar1 * 6 + 2,iVar1,0,3,3);
    FUN_01553660(param_1,iVar1 * 6 + 3,iVar1,1,3,3);
    FUN_01553660(param_1,iVar1 * 6 + 4,iVar1,2,3,3);
    FUN_01553660(param_1,iVar1 * 6 + 5,iVar1,3,3,3);
    FUN_01553660(param_1,iVar1 * 6 + 6,iVar1,4,3,3);
    FUN_01553660(param_1,iVar1 * 6 + 7,iVar1,5,3,3);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  return;
}

