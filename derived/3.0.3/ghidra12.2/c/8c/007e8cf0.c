
void FUN_007e8cf0(short *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auStack_4a [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*param_1 == DAT_04cb6038) {
    return;
  }
  if (*(long *)(param_1 + 8) == 0 && *(long *)(param_1 + 4) == 0) {
    return;
  }
  FUN_007ef010(auStack_4a,param_1);
  lVar1 = FUN_0264f270(auStack_4a);
  if (lVar1 == 0) {
    return;
  }
  lVar5 = *(long *)(lVar1 + 0x28);
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      lVar5 = *(long *)(lVar1 + 0x28);
      uVar2 = uVar2 & 0xffffffff;
      if (lVar5 == 0) goto LAB_007e8dac;
    }
    plVar3 = *(long **)(lVar5 + 0x20);
    if (plVar3 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar1 + 8);
      uStack_40 = *(undefined8 *)(lVar1 + 0x10);
      local_38 = 0x10;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
LAB_007e8dac:
  *(undefined8 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8)) = param_2;
  if ((*(long *)(lVar1 + 0x28) != 0) &&
     (plVar3 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20), plVar3 != (long *)0x0)) {
    local_48 = *(undefined8 *)(lVar1 + 8);
    uStack_40 = *(undefined8 *)(lVar1 + 0x10);
    local_38 = 0x10;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  }
  *(undefined8 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 8) = param_3;
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

