
void FUN_005dae10(float param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  if (0 < *(int *)(*(long *)(param_2 + 0x48) + 0x30)) {
    lVar2 = 0;
    do {
      cVar1 = *(char *)(*(long *)(param_2 + 0x38) + lVar2);
      if (cVar1 == '\x03') {
        lVar3 = lVar2 * 4;
        *(float *)(*(long *)(param_2 + 0x28) + lVar3) =
             *(float *)(*(long *)(param_2 + 0x28) + lVar3) + param_1;
        if (*(float *)(*(long *)(param_2 + 0x48) + 0x3c) <
            *(float *)(*(long *)(param_2 + 0x28) + lVar3)) {
          *(undefined1 *)(*(long *)(param_2 + 0x38) + lVar2) = 0;
        }
      }
      else if (cVar1 == '\x02') {
        lVar3 = lVar2 * 4;
        *(float *)(*(long *)(param_2 + 0x28) + lVar3) =
             *(float *)(*(long *)(param_2 + 0x28) + lVar3) + param_1;
        if (*(float *)(*(long *)(param_2 + 0x48) + 0x38) <
            *(float *)(*(long *)(param_2 + 0x28) + lVar3)) {
          *(undefined1 *)(*(long *)(param_2 + 0x38) + lVar2) = 1;
        }
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(*(long *)(param_2 + 0x48) + 0x30));
  }
  return;
}

