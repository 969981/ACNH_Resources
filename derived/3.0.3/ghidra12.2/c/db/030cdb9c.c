
void FUN_030cdb9c(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined4 local_38;
  
  FUN_030cdfe0();
  if (*(char *)(param_4 + 0x448) != '\0') {
    uVar3 = FUN_030cd3bc(param_4,param_4 + 0x44c);
    local_40 = (undefined *)CONCAT44(param_2,uVar3);
    local_38 = param_3;
    FUN_02f20864(param_4 + 0x440,&local_40);
  }
  FUN_030d1fe4(param_4);
  FUN_030d21c0(param_4);
  FUN_030d239c(param_4);
  if ((*(char *)(param_4 + 0x448) != '\0') &&
     (plVar2 = *(long **)(param_4 + 0x460), plVar2 != (long *)0x0)) {
    if (*(int *)(param_4 + 0x498) == 1) {
      uVar4 = 0x3f800000;
    }
    else {
      uVar4 = 0x40000000;
      if (*(int *)(param_4 + 0x498) < 2) {
        uVar4 = 0;
      }
    }
    local_40 = PTR_DAT_04bc4f00 + 0x10;
    local_38 = 0x14;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x158))(uVar4,plVar2[1]);
  }
  FUN_030d24ac(param_4);
  FUN_030d2af0(param_4);
  FUN_030d2f04(param_4);
  FUN_030d2fc8(param_4);
  lVar1 = *(long *)(param_4 + 0x260);
  if ((lVar1 != 0) && (*(long **)(lVar1 + 0x1b0) != (long *)0x0)) {
    (**(code **)(**(long **)(lVar1 + 0x1b0) + 0x50))();
    (**(code **)(**(long **)(lVar1 + 0x1b0) + 0x20))(*(long **)(lVar1 + 0x1b0),0);
  }
  return;
}

