
void FUN_01bf828c(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = param_1[0x17];
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x68);
    uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if ((uVar1 & 1) != 0) {
      (**(code **)*plVar3)(plVar3);
    }
  }
  FUN_01bf7258(param_1 + 0x19);
  lVar2 = DAT_0533ec08;
  lVar4 = param_1[0x17];
  if (lVar4 == 0) {
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  else {
    FUN_01bf7258(DAT_0533ec08 + 0xd0);
    *(undefined8 *)(lVar2 + 0xc0) = 0;
    *(undefined8 *)(lVar2 + 200) = 0;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    if (*(undefined8 **)(lVar4 + 0x18) != (undefined8 *)0x0) {
      **(undefined8 **)(lVar4 + 0x18) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
    }
    *(undefined1 *)(lVar4 + 0x1ba) = 0;
  }
  (**(code **)(param_1[0x2e] + 0x30))(param_1 + 0x2e);
  FUN_01c02534(*param_1);
  lVar2 = param_1[4];
  (**(code **)(**(long **)(lVar2 + 0x20) + 0xb8))();
  *(undefined2 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0xffffffff00000000;
  *(undefined8 *)(lVar2 + 0x30) = 0xffffffffffffffff;
  *(undefined4 *)(*(long *)(lVar2 + 8) + 8) = 0;
  *(undefined4 *)(*(long *)(lVar2 + 0x10) + 0x22e8) = 0;
  FUN_01b9c95c();
  *(undefined4 *)(*(long *)(lVar2 + 0x18) + 8) = 0;
  lVar2 = param_1[5];
  FUN_01bfd8a4(lVar2);
  *(undefined4 *)(lVar2 + 0x21ac) = 0;
  (**(code **)(*(long *)param_1[6] + 0x10))();
  *(undefined8 *)param_1[3] = 0;
  FUN_01bf7ffc(param_1);
  return;
}

