
void FUN_033bb4ec(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  int local_38;
  int local_34;
  
  if (param_3 < 0) {
    return;
  }
  local_38 = 0;
  uVar3 = FUN_033bb2d0(param_1,&local_38,*(undefined4 *)(param_1 + 0x50),param_3);
  iVar1 = local_38;
  if ((uVar3 & 1) != 0) {
    plVar5 = (long *)(param_1 + 0xf0);
    iVar2 = (**(code **)(*plVar5 + 0x168))(plVar5);
    if ((iVar1 < iVar2) && (lVar4 = (**(code **)(*plVar5 + 0x158))(plVar5,iVar1), lVar4 != 0))
    goto LAB_033bb5ac;
  }
  local_34 = 0;
  uVar3 = FUN_033bb2d0(param_1,&local_34,*(undefined4 *)(param_1 + 0x50),0);
  iVar1 = local_34;
  if ((uVar3 & 1) == 0) {
    return;
  }
  plVar5 = (long *)(param_1 + 0xf0);
  iVar2 = (**(code **)(*plVar5 + 0x168))(plVar5);
  if (iVar2 <= iVar1) {
    return;
  }
  lVar4 = (**(code **)(*plVar5 + 0x158))(plVar5,iVar1);
  if (lVar4 == 0) {
    return;
  }
LAB_033bb5ac:
  FUN_033b74f0(param_2,lVar4);
  return;
}

