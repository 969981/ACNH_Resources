
void FUN_008c8830(long param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined8 *__s;
  
  if (*(char *)(param_1 + 0x37fbc) != '\0') {
    *(undefined1 *)(param_1 + 0x37fbc) = 0;
    piVar1 = (int *)(param_1 + 0x31080);
    if (**(char **)(param_1 + 0x37fe0) != '\0') {
      FUN_03844960(param_1 + 0x37fc8,param_1 + 0x37fd8,0);
      **(undefined1 **)(param_1 + 0x37fe0) = 0;
    }
    iVar2 = *piVar1;
    if (0 < iVar2) {
      do {
        if (*(int *)(param_1 + 0x410) == 0x21) {
          return;
        }
        __s = *(undefined8 **)(param_1 + 0x30780);
        *(undefined2 *)(param_1 + 0x37fac) = 0x101;
        *(undefined4 *)(param_1 + 0x307f4) = 0;
        if (__s == &DAT_0407ebb1) {
LAB_008c88c4:
          piVar3 = *(int **)(*(long *)(param_1 + 0x31088) + (ulong)(iVar2 - 1) * 8);
        }
        else {
          iVar2 = 0;
          if (*(int *)(param_1 + 0x30788) < 1) {
            iVar2 = *(int *)(param_1 + 0x30788) + -1;
          }
          memset(__s,0,(long)iVar2);
          *(undefined1 *)((long)__s + (long)iVar2) = 0;
          iVar2 = *piVar1;
          piVar3 = (int *)(param_1 + 0x410);
          if (0 < iVar2) goto LAB_008c88c4;
        }
        FUN_03ebb160(param_1 + 0x408,*piVar3);
        iVar2 = *piVar1;
        *(undefined1 *)(param_1 + 0x37fac) = 0;
      } while (0 < iVar2);
    }
  }
  return;
}

