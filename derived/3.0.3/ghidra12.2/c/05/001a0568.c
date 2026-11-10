
void FUN_001a0568(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 0x78);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  lVar2 = *(long *)(param_1 + 0x178);
  if ((param_3 & 1) == 0) {
    if (lVar2 == *(long *)(param_1 + 0x188)) {
      plVar1 = (long *)(param_1 + 0x180);
      *(long *)(param_1 + 0x178) = param_2;
    }
    else {
      plVar1 = (long *)(param_1 + 0x180);
      *(long *)(*(long *)(param_1 + 0x180) + 0x10) = param_2;
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x180);
    }
  }
  else {
    plVar1 = (long *)(param_1 + 0x178);
    if (lVar2 == *(long *)(param_1 + 0x188)) {
      *(long *)(param_1 + 0x180) = param_2;
    }
    else {
      *(long *)(param_2 + 0x10) = lVar2;
      *(long *)(*plVar1 + 0x18) = param_2;
    }
  }
  *plVar1 = param_2;
  *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 1;
                    /* WARNING: Could not recover jumptable at 0x001a0618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x78) + 0x20))(plVar3);
  return;
}

