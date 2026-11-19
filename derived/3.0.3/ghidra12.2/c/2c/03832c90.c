
void FUN_03832c90(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  FUN_03f45838(param_1 + 0x2c0);
  plVar2 = *(long **)(param_1 + 0x2d8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
    iVar1 = *(int *)(param_1 + 0x2cc) + -1;
    if (((*(int *)(param_1 + 0x2cc) < 1) || (*(int *)(param_1 + 0x2cc) = iVar1, iVar1 == 0)) &&
       (*(long *)(param_1 + 0x2d0) != 0)) {
      FUN_03f44508();
      *(undefined8 *)(param_1 + 0x2d0) = 0;
    }
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x28) + lVar4 * 8);
      FUN_03f2d448(puVar3);
      lVar4 = lVar4 + 1;
      *puVar3 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 **)(param_1 + 0x30) = puVar3;
    } while (lVar4 < *(int *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}

