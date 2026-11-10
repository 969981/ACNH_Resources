
void FUN_001a6570(long param_1,int param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x88);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  if ((long *)(param_1 + 0xd0) != param_3) {
    FUN_001db790(param_3,*(undefined8 *)(param_1 + 0xd8));
  }
  (**(code **)(*plVar6 + 0x20))(plVar6);
  plVar6 = (long *)param_3[1];
  do {
    if (plVar6 == param_3) {
      return;
    }
    while( true ) {
      plVar1 = plVar6 + 2;
      iVar5 = FUN_001b8fa0(plVar1,"RVCID",0);
      if ((iVar5 == param_2) || (iVar5 = FUN_001b8fa0(plVar1,"RVCID",0), iVar5 == 0)) break;
      lVar2 = *plVar6;
      plVar3 = (long *)plVar6[1];
      *(long **)(lVar2 + 8) = plVar3;
      puVar4 = (undefined8 *)plVar6[2];
      *(long *)plVar6[1] = lVar2;
      param_3[2] = param_3[2] + -1;
      (*(code *)*puVar4)(plVar1);
      FUN_00187e4c(plVar6);
      plVar6 = plVar3;
      if (plVar3 == param_3) {
        return;
      }
    }
    plVar6 = (long *)plVar6[1];
  } while( true );
}

