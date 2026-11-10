
void FUN_002c2884(long param_1)

{
  long lVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = *(char *)(param_1 + 0x20);
  if (cVar3 == '\x01') {
    (**(code **)(**(long **)(param_1 + 400) + 0x58))();
    (**(code **)(**(long **)(param_1 + 0x198) + 0x58))();
    cVar3 = *(char *)(param_1 + 0x20);
  }
  if ((cVar3 == '\x02') && (*(long *)(param_1 + 0x18) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x200) + 0x58))();
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  if ((*(int **)(param_1 + 8) != (int *)0x0) && (**(int **)(param_1 + 8) == 1)) {
    FUN_00221064();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_002c95c8();
    FUN_002c6900(*(undefined8 *)(param_1 + 0x18));
  }
  lVar1 = param_1 + 0x1a0;
  if (*(int *)(param_1 + 0x1a0) == 1) {
    FUN_00221064(lVar1);
    FUN_00220f24(lVar1);
    iVar2 = *(int *)(param_1 + 0x1d0);
  }
  else {
    FUN_00220f24(lVar1);
    iVar2 = *(int *)(param_1 + 0x1d0);
  }
  if (iVar2 == 1) {
    FUN_00221064(param_1 + 0x1d0);
    FUN_00220f24(param_1 + 0x1d0);
    iVar2 = *(int *)(param_1 + 0x208);
  }
  else {
    FUN_00220f24(param_1 + 0x1d0);
    iVar2 = *(int *)(param_1 + 0x208);
  }
  if (iVar2 == 1) {
    FUN_00221064(param_1 + 0x208);
    FUN_00220f24(param_1 + 0x208);
    *(undefined4 *)(param_1 + 0x40) = 0;
    return;
  }
  FUN_00220f24(param_1 + 0x208);
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}

