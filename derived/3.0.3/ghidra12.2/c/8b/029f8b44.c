
undefined8 FUN_029f8b44(long *param_1,uint *param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((param_5 + 0xe < param_3) || (param_3 < param_4 - 0xc)) {
    lVar4 = *param_1;
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x20) == (int)param_1[1])) {
      *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 0x10;
      if ((*(long *)(lVar4 + 0x28) != 0) && (*(long *)(lVar4 + 0x58) != 0)) {
        plVar2 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar4 + 0x28) + 0x30) + 0x18)
                                     + 0x20))();
        plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
        (**(code **)(*plVar2 + 0x10))();
        (**(code **)(**(long **)(lVar4 + 0x58) + 0x38))(*(long **)(lVar4 + 0x58),0xffffffff);
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    uVar3 = 0;
  }
  else {
    uVar1 = param_3 - (param_3 - param_4 & 1);
    if (param_5 <= uVar1) {
      uVar1 = param_5;
    }
    if (param_4 < param_3) {
      param_4 = uVar1;
    }
    *(uint *)((long)param_1 + 0x2c) = param_3 - param_4;
    uVar3 = 1;
    *param_2 = param_4;
  }
  return uVar3;
}

