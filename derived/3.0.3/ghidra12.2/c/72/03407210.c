
void FUN_03407210(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined **local_70 [3];
  undefined **local_58 [3];
  
  if (param_2 != 0) {
    local_58[0] = &PTR_LAB_04b297f8;
    FUN_03407300(param_2,local_58);
  }
  if (param_1 != (long *)0x0) {
    if ((int)param_1[4] != 0) {
      plVar3 = (long *)param_1[5];
      lVar4 = (long)(int)param_1[4] << 3;
      do {
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          FUN_03d5d0e0(lVar2,0,1);
        }
        uVar1 = (**(code **)(*param_3 + 8))(param_3);
        if ((uVar1 & 1) != 0) {
          (**(code **)*param_3)(param_3,lVar2);
        }
        plVar3 = plVar3 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    if (*param_1 != 0) {
      local_70[0] = &PTR_LAB_04b29820;
      FUN_03407210(*param_1,0,local_70);
    }
  }
  return;
}

