
void FUN_03be6f00(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  *(undefined8 *)(param_1 + 0x48) = param_4;
  *(undefined1 *)(param_1 + 0x50) = param_5;
  if (*(long *)(param_1 + 0x68) != param_1 + 0x60) {
    lVar4 = (long)*(int *)(param_1 + 0x74);
    plVar3 = (long *)(*(long *)(param_1 + 0x68) - lVar4);
    do {
      lVar1 = *(long *)(param_1 + 0x48);
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      plVar3[7] = *(long *)(param_1 + 0x40);
      plVar3[8] = lVar1;
      *(char *)(plVar3 + 9) = (char)uVar2;
      (**(code **)(*plVar3 + 0x68))(plVar3);
      plVar3 = (long *)(*(long *)((long)plVar3 + lVar4 + 8) - lVar4);
    } while (plVar3 != (long *)((param_1 + 0x60) - lVar4));
  }
  if (*(long *)(param_1 + 0x80) != param_1 + 0x78) {
    lVar4 = (long)*(int *)(param_1 + 0x8c);
    plVar3 = (long *)(*(long *)(param_1 + 0x80) - lVar4);
    do {
      lVar1 = *(long *)(param_1 + 0x48);
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      plVar3[7] = *(long *)(param_1 + 0x40);
      plVar3[8] = lVar1;
      *(char *)(plVar3 + 9) = (char)uVar2;
      (**(code **)(*plVar3 + 0x68))(plVar3);
      plVar3 = (long *)(*(long *)((long)plVar3 + lVar4 + 8) - lVar4);
    } while (plVar3 != (long *)((param_1 + 0x78) - lVar4));
  }
  return;
}

