
undefined8 FUN_014ca1bc(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xe80);
  *(int *)(param_1 + 0xe88) = param_2;
  iVar2 = *(int *)(param_1 + 0xe84);
  *(int *)(param_1 + 0xe8c) = param_3;
  if (iVar1 != param_2 || iVar2 != param_3) {
    *(int *)(param_1 + 0xe80) = param_2;
    *(int *)(param_1 + 0xe84) = param_3;
    FUN_014b81fc(param_1 + 0x400);
    FUN_03698b00(iVar1,iVar2);
    FUN_016a8004(iVar1,iVar2);
    FUN_014d0e20(param_1);
  }
  if (*(int *)(param_1 + 0x3c0) != 0xf) {
    FUN_03ebb160(param_1 + 0x3b8);
  }
  FUN_03698e50();
  FUN_016a821c();
  return 1;
}

