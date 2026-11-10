
undefined4 FUN_001f3890(int *param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_38 [8];
  
  plVar1 = (long *)(param_1 + 0x76);
  (**(code **)(*(long *)(param_1 + 0x76) + 0x10))(plVar1);
  if (*param_1 == 0) {
    lVar2 = *(long *)(param_1 + 0x60);
    if (lVar2 == *(long *)(param_1 + 0x62)) {
      uVar4 = FUN_001f3970(param_1,param_2,param_3,param_4);
      goto LAB_001f392c;
    }
    iVar3 = FUN_001f3970(param_1,lVar2,*(long *)(param_1 + 0x62) - lVar2,auStack_38);
    if (iVar3 == 0) {
      *(undefined8 *)(param_1 + 0x62) = *(undefined8 *)(param_1 + 0x60);
    }
  }
  else if ((*param_1 == 1) && (*(long *)(param_1 + 0x60) == *(long *)(param_1 + 0x62))) {
    FUN_001f4c20(param_1 + 0x60,param_2,param_2 + param_3,param_3);
    uVar4 = 0;
    *param_4 = param_3;
    goto LAB_001f392c;
  }
  uVar4 = 1;
LAB_001f392c:
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return uVar4;
}

