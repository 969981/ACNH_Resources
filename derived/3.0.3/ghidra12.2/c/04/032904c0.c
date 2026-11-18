
long FUN_032904c0(long param_1,char *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 0x170) & 1) == 0) {
    for (lVar6 = *(long *)(param_1 + 0x58); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x10)) {
      if ((*(byte *)(lVar6 + 0x58) & 1) != 0) {
        (**(code **)(*(long *)(lVar6 + -8) + 0x30))();
      }
    }
    lVar6 = FUN_03290630(param_1,param_2,param_3 & 1);
    if (lVar6 != 0) {
      if ((*(long *)(param_1 + 0x18) != 0) && (*param_2 != '\0')) {
        uVar3 = *(undefined4 *)(param_2 + 4);
        plVar4 = (long *)(param_1 + 0x48);
        plVar5 = (long *)*plVar4;
        *plVar5 = *(long *)(param_1 + 0x18);
        *(undefined4 *)(plVar5 + 1) = uVar3;
        lVar1 = 0;
        if (plVar4 <= (long *)(*plVar4 + 0x10U)) {
          lVar1 = -0x20;
        }
        lVar1 = (long)(*plVar4 + 0x10U) + lVar1;
        *plVar4 = lVar1;
        if (lVar1 == *(long *)(param_1 + 0x50)) {
          lVar2 = 0;
          if (plVar4 <= (long *)(lVar1 + 0x10U)) {
            lVar2 = -0x20;
          }
          *(long *)(param_1 + 0x50) = (long)(lVar1 + 0x10U) + lVar2;
        }
      }
      FUN_03290a60(param_1,lVar6,param_3 & 1,0);
      if (*param_2 == '\0') {
        *(long *)(param_1 + 0x48) = param_1 + 0x28;
        *(long *)(param_1 + 0x50) = param_1 + 0x28;
      }
      if (lVar6 == *(long *)(param_1 + 0x18)) {
        return lVar6;
      }
    }
    plVar4 = *(long **)(param_1 + 0xe0);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4,param_2,*(undefined8 *)(param_1 + 0x18),param_3 & 1);
    }
    plVar4 = *(long **)(param_1 + 0x108);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4,param_2,*(undefined8 *)(param_1 + 0x18),param_3 & 1);
    }
  }
  else {
    lVar6 = 0;
  }
  return lVar6;
}

