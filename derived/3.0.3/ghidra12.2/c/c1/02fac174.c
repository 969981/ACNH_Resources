
void FUN_02fac174(long *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  (**(code **)(*param_1 + 0xa8))();
  *(undefined4 *)((long)param_1 + 0x21c) = 0xffffffff;
  *(int *)(param_1 + 0x43) = *param_2;
  lVar2 = param_1[0x42];
  plVar3 = *(long **)(lVar2 + 0x578);
  if (plVar3 != (long *)0x0) {
    iVar1 = *param_2;
    (**(code **)(*plVar3 + 0x140))(plVar3,1,0);
    FUN_03d5d0e0(plVar3,0,0 < iVar1);
    lVar2 = param_1[0x42];
  }
  plVar3 = *(long **)(lVar2 + 0x580);
  if (plVar3 != (long *)0x0) {
    iVar1 = *param_2;
    (**(code **)(*plVar3 + 0x140))(plVar3,1,0);
    FUN_03d5d0e0(plVar3,0,1 < iVar1);
    lVar2 = param_1[0x42];
  }
  plVar3 = *(long **)(lVar2 + 0x588);
  if (plVar3 != (long *)0x0) {
    iVar1 = *param_2;
    (**(code **)(*plVar3 + 0x140))(plVar3,1,0);
    FUN_03d5d0e0(plVar3,0,2 < iVar1);
    lVar2 = param_1[0x42];
  }
  plVar3 = *(long **)(lVar2 + 0x590);
  if (plVar3 != (long *)0x0) {
    iVar1 = *param_2;
    (**(code **)(*plVar3 + 0x140))(plVar3,1,0);
    FUN_03d5d0e0(plVar3,0,3 < iVar1);
    lVar2 = param_1[0x42];
  }
  plVar3 = *(long **)(lVar2 + 0x598);
  if (plVar3 != (long *)0x0) {
    iVar1 = *param_2;
    (**(code **)(*plVar3 + 0x140))(plVar3,1,0);
    FUN_03d5d0e0(plVar3,0,4 < iVar1);
    lVar2 = param_1[0x42];
  }
  plVar3 = *(long **)(lVar2 + 0x5a0);
  if (plVar3 != (long *)0x0) {
    iVar1 = *param_2;
    (**(code **)(*plVar3 + 0x140))(plVar3,1,0);
    FUN_03d5d0e0(plVar3,0,5 < iVar1);
    lVar2 = param_1[0x42];
  }
  plVar3 = *(long **)(lVar2 + 0x5a8);
  if (plVar3 != (long *)0x0) {
    iVar1 = *param_2;
    (**(code **)(*plVar3 + 0x140))(plVar3,1,0);
    FUN_03d5d0e0(plVar3,0,6 < iVar1);
    lVar2 = param_1[0x42];
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0x570) + 0xa0);
  if (lVar2 != 0) {
    *(char *)(lVar2 + 0xbc) = (char)param_2[1];
  }
  return;
}

