
undefined8
FUN_01752fd8(long *param_1,undefined8 param_2,uint param_3,undefined4 param_4,uint param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_1[0x227] == 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1[0x227] + 0x78);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    plVar1 = *(long **)(lVar3 + 0x50);
    local_50 = 0;
    uStack_48 = 0;
    lVar3 = (**(code **)(*plVar1 + 0x178))(plVar1,param_2,&uStack_48,&local_50);
    uVar2 = 0;
    if ((lVar3 != 0) && (uVar2 = 0, param_1[0x227] != 0)) {
      FUN_038501b0((float)param_3,param_1[0x227],param_4);
      lVar3 = param_1[0x227];
      if (*(char *)(lVar3 + 0x2c0) != '\0') {
        *(undefined1 *)(lVar3 + 0x2c0) = 0;
        FUN_03855b20(lVar3 + 0xc0,0);
      }
      FUN_0384f8c0(lVar3,param_2,param_4,param_5 & 1);
      (**(code **)(*param_1 + 0x120))(param_1,param_2,param_3,param_4);
      uVar2 = 1;
    }
  }
  return uVar2;
}

