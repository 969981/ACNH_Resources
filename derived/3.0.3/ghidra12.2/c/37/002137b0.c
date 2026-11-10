
uint FUN_002137b0(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *local_98;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  undefined4 local_24;
  
  if (param_2 == 0) {
    return 0;
  }
  FUN_00195b30(auStack_60);
  FUN_00195b30(auStack_90,param_3);
  local_24 = 0;
  local_98 = (long *)0x0;
  if (*(long *)(param_1 + 0x48) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10);
  }
  uVar1 = FUN_00206d04(auStack_60,auStack_90,uVar4,&local_24,&local_98);
  if ((uVar1 & 1) != 0) {
    uVar2 = (**(code **)(*param_4 + 0x60))(param_4);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = (**(code **)(*param_4 + 0xc0))(param_4), plVar5 = local_98, (uVar2 & 1) == 0)) {
      FUN_001a6e5c(param_4,local_98[9]);
      FUN_001a6e00(param_4,local_24);
      (**(code **)(*param_4 + 0x118))(param_4,plVar5 + 0xb);
      plVar3 = *(long **)(param_1 + 0x68);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,param_4,plVar5);
      }
    }
    else {
      plVar5 = local_98;
      if (local_98 == (long *)0x0) goto LAB_002138c8;
    }
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_002138c8:
  FUN_00195bf0(auStack_90);
  FUN_00195bf0(auStack_60);
  return uVar1 & 1;
}

