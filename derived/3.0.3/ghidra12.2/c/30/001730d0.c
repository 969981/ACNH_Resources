
void FUN_001730d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x80);
  lVar1 = *(long *)(param_1 + 0x70);
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar3 == 0) {
    *(long *)(lVar1 + 0x78) = lVar2;
    if (lVar2 == 0) goto LAB_00173114;
    lVar3 = 0;
    *(long *)(lVar2 + 0x70) = lVar1;
  }
  else {
    *(long *)(lVar3 + 0x88) = lVar2;
    if (lVar2 == 0) goto LAB_00173114;
  }
  *(long *)(lVar2 + 0x80) = lVar3;
LAB_00173114:
  *(int *)(lVar1 + 0xd8) = *(int *)(lVar1 + 0xd8) - *(int *)(param_1 + 0xd0);
  if (*(char *)(param_1 + 0xe6) != '\0') {
    FUN_00172f08(param_1);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(long *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}

