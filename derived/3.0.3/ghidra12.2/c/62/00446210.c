
void FUN_00446210(ulong *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  if (0 < param_2) {
    do {
      uVar3 = *param_1;
      lVar1 = param_2;
      if (0xfff < param_2) {
        lVar1 = 0x1000;
      }
      if (param_1[1] < lVar1 + uVar3) {
        plVar2 = (long *)param_1[6];
        uVar3 = 0;
        if (plVar2 != (long *)0x0) {
          uVar3 = (**(code **)(*plVar2 + 0x40))(plVar2,param_1,lVar1);
        }
      }
      else {
        *param_1 = lVar1 + uVar3;
      }
      FUN_0043a810(uVar3,0,lVar1);
      param_2 = param_2 - lVar1;
    } while (0 < param_2);
  }
  return;
}

