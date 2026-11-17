
void FUN_03132d80(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  FUN_03d66690();
  plVar1 = *(long **)(param_1 + 0x250);
  if (plVar1 != (long *)0x0) {
    plVar1[6] = 0;
    plVar1[7] = 0;
    *(undefined2 *)(plVar1 + 4) = 1;
    *(undefined4 *)((long)plVar1 + 0x24) = 1;
    *(undefined4 *)((long)plVar1 + 0x2c) = 0x80000000;
    *(undefined4 *)(plVar1 + 8) = 0;
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    if ((long *)plVar1[10] != plVar1 + 9) {
      lVar3 = (long)*(int *)((long)plVar1 + 0x5c);
      puVar2 = (undefined8 *)(plVar1[10] - lVar3);
      do {
        (**(code **)*puVar2)(puVar2,*(undefined4 *)((long)plVar1 + 0x24));
        puVar2 = (undefined8 *)(*(long *)((long)puVar2 + lVar3 + 8) - lVar3);
      } while (puVar2 != (undefined8 *)((long)(plVar1 + 9) - lVar3));
    }
  }
  return;
}

