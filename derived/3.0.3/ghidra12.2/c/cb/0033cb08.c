
void FUN_0033cb08(long param_1,long *param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long local_40;
  undefined8 uStack_38;
  
  if (*(long *)(*(long *)(param_1 + 0x198) + (long)param_3 * 8) == 0) {
    FUN_0032c410("The resource which is going to be cleared does not exist. ResourceId : %d.\n",
                 param_3);
    return;
  }
  plVar1 = &local_40;
  if (*(long *)(param_1 + 0x1a18) == 0) {
    lVar2 = *(long *)(param_1 + 0x198);
    plVar1 = (long *)0x0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x198);
    local_40 = *(long *)(param_1 + 0x1a18);
    uStack_38 = param_4;
  }
  FUN_003320e0(*(undefined8 *)(lVar2 + (long)param_3 * 8),param_2,plVar1);
  lVar2 = (long)param_3 * 8;
  (**(code **)(*param_2 + 0x18))(param_2,*(undefined8 *)(*(long *)(param_1 + 0x198) + lVar2));
  *(undefined8 *)(*(long *)(param_1 + 0x198) + lVar2) = 0;
  return;
}

