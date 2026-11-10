
void FUN_002bfb10(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0xb0) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0xb0) = 0;
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_002ce6fc();
  }
  if (*(long **)(param_1 + 0x80) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x80) + 0x20))();
    puVar4 = *(undefined8 **)(param_1 + 0x80);
    if ((long *)puVar4[4] != (long *)0x0) {
      (**(code **)(*(long *)puVar4[4] + 0x18))();
      puVar4[4] = 0;
      puVar4 = *(undefined8 **)(param_1 + 0x80);
    }
    (**(code **)*puVar4)(puVar4);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (*(long **)(param_1 + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x88) + 0xb8))();
  }
  if ((*(long **)(param_1 + 0x50) != (long *)0x0) && (*(long *)(param_1 + 0xc0) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x28))();
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (*(long *)(param_1 + 200) != 0) {
    FUN_0030644c();
  }
  plVar5 = *(long **)(param_1 + 0x168);
  if ((plVar5 != (long *)0x0) && (uVar2 = FUN_002212e4(plVar5), (uVar2 & 1) != 0)) {
    uVar2 = FUN_0022131c(plVar5);
    if ((uVar2 & 1) != 0) {
      *(undefined1 *)(plVar5 + 9) = 1;
      do {
        FUN_00227860(plVar5,5);
        uVar2 = FUN_002212e4(plVar5);
        if ((uVar2 & 1) == 0) break;
        uVar2 = FUN_0022131c(plVar5);
      } while ((uVar2 & 1) != 0);
    }
    (**(code **)(*plVar5 + 0x20))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5,0);
  }
  lVar3 = *(long *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x14) == 1) {
      FUN_00197980();
      lVar3 = *(long *)(param_1 + 0x180);
    }
    FUN_001984a0(lVar3);
  }
  lVar3 = param_1 + 0x108;
  if (*(int *)(param_1 + 0x108) == 1) {
    FUN_00221064(lVar3);
    FUN_00220f24(lVar3);
    iVar1 = *(int *)(param_1 + 0x138);
  }
  else {
    FUN_00220f24(lVar3);
    iVar1 = *(int *)(param_1 + 0x138);
  }
  if (iVar1 == 1) {
    FUN_00221064(param_1 + 0x138);
    FUN_00220f24(param_1 + 0x138);
    iVar1 = *(int *)(param_1 + 0xd8);
  }
  else {
    FUN_00220f24(param_1 + 0x138);
    iVar1 = *(int *)(param_1 + 0xd8);
  }
  if (iVar1 == 1) {
    FUN_00221064(param_1 + 0xd8);
  }
  FUN_00220f24(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  return;
}

