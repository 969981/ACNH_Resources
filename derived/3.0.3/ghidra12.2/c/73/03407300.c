
void FUN_03407300(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined **local_58 [3];
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      plVar3 = *(long **)(param_1 + 0x28);
      lVar4 = (long)*(int *)(param_1 + 0x20) << 3;
      do {
        lVar2 = *plVar3;
        uVar1 = (**(code **)(*param_2 + 8))(param_2);
        if ((uVar1 & 1) != 0) {
          (**(code **)*param_2)(param_2,lVar2);
        }
        if (lVar2 != 0) {
          FUN_03d5d0e0(lVar2,0,0);
        }
        plVar3 = plVar3 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    for (lVar4 = *(long *)(param_1 + 8); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x10)) {
      local_58[0] = &PTR_LAB_04b297f8;
      FUN_03407300(lVar4,local_58);
    }
  }
  return;
}

