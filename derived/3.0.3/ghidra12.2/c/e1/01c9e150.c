
void FUN_01c9e150(long param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  
  pcVar2 = *(char **)(param_1 + 0x2070);
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0x180) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  *(undefined1 *)(param_1 + 0x240) = 0;
  if (*pcVar2 != '\0') {
    pcVar2[2] = '\0';
    pcVar2[0] = '\0';
    pcVar2[1] = '\x01';
  }
  *(undefined2 *)(param_1 + 0x2078) = 0;
  *(undefined1 *)(param_1 + 0xf78) = 0;
  FUN_01c939d8(*(undefined8 *)(param_1 + 0xf88));
  (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0xf90))();
  piVar3 = *(int **)(param_1 + 0x28);
  piVar3[8] = 0;
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    lVar4 = *(long *)(piVar3 + 2);
    iVar5 = 0;
    do {
      *(undefined1 *)(lVar4 + (long)iVar5 * 0x1040 + 0x103c) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
  }
  return;
}

