
void FUN_02ee4f64(long param_1,uint param_2)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x210) + 0x570);
  if ((plVar2 != (long *)0x0) && ((long *)plVar2[0x36] != (long *)0x0)) {
    uVar1 = (**(code **)(*(long *)plVar2[0x36] + 0x50))();
    (**(code **)(*(long *)plVar2[0x36] + 0x20))((long *)plVar2[0x36],param_2 != 0);
    if ((param_2 != 0) && ((uVar1 & 1) != 0)) {
      (**(code **)(*plVar2 + 0xa8))(plVar2);
    }
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x210) + 0x578);
  if ((plVar2 != (long *)0x0) && ((long *)plVar2[0x36] != (long *)0x0)) {
    uVar1 = (**(code **)(*(long *)plVar2[0x36] + 0x50))();
    (**(code **)(*(long *)plVar2[0x36] + 0x20))((long *)plVar2[0x36],1 < param_2);
    if ((1 < param_2) && ((uVar1 & 1) != 0)) {
      (**(code **)(*plVar2 + 0xa8))(plVar2);
    }
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x210) + 0x580);
  if ((plVar2 != (long *)0x0) && ((long *)plVar2[0x36] != (long *)0x0)) {
    uVar1 = (**(code **)(*(long *)plVar2[0x36] + 0x50))();
    (**(code **)(*(long *)plVar2[0x36] + 0x20))((long *)plVar2[0x36],2 < param_2);
    if ((2 < param_2) && ((uVar1 & 1) != 0)) {
      (**(code **)(*plVar2 + 0xa8))(plVar2);
    }
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x210) + 0x588);
  if ((plVar2 != (long *)0x0) && ((long *)plVar2[0x36] != (long *)0x0)) {
    uVar1 = (**(code **)(*(long *)plVar2[0x36] + 0x50))();
    (**(code **)(*(long *)plVar2[0x36] + 0x20))((long *)plVar2[0x36],3 < param_2);
    if ((3 < param_2) && ((uVar1 & 1) != 0)) {
      (**(code **)(*plVar2 + 0xa8))(plVar2);
    }
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x210) + 0x590);
  if ((plVar2 != (long *)0x0) && ((long *)plVar2[0x36] != (long *)0x0)) {
    uVar1 = (**(code **)(*(long *)plVar2[0x36] + 0x50))();
    (**(code **)(*(long *)plVar2[0x36] + 0x20))((long *)plVar2[0x36],4 < param_2);
    if ((4 < param_2) && ((uVar1 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x02ee5154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0xa8))(plVar2);
      return;
    }
  }
  return;
}

