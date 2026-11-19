
undefined8
FUN_03c90b90(long *param_1,undefined8 *param_2,code *param_3,ulong param_4,undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = (**(code **)(*param_1 + 0x10))();
  lVar5 = *(long *)(lVar2 + 0x28);
  lVar2 = lVar2 + 0x20;
  if (lVar5 != lVar2) {
    if ((param_4 & 1) == 0) {
      do {
        lVar4 = *(long *)(lVar5 + 0xc1);
        uVar3 = (*param_3)(lVar4 + ((long)param_4 >> 1),param_5);
        if ((uVar3 & 1) != 0) {
          uVar3 = (**(code **)*param_2)(param_2,lVar5 + -8);
          if ((uVar3 & 1) != 0) {
            return 1;
          }
          FUN_03c90b90(lVar4,param_2,param_3,param_4,param_5);
        }
        lVar5 = *(long *)(lVar5 + 8);
      } while (lVar5 != lVar2);
    }
    else {
      do {
        lVar4 = *(long *)(lVar5 + 0xc1);
        plVar1 = (long *)(lVar4 + ((long)param_4 >> 1));
        uVar3 = (**(code **)(param_3 + *plVar1))(plVar1,param_5);
        if ((uVar3 & 1) != 0) {
          uVar3 = (**(code **)*param_2)(param_2,lVar5 + -8);
          if ((uVar3 & 1) != 0) {
            return 1;
          }
          FUN_03c90b90(lVar4,param_2,param_3,param_4,param_5);
        }
        lVar5 = *(long *)(lVar5 + 8);
      } while (lVar5 != lVar2);
    }
  }
  return 0;
}

