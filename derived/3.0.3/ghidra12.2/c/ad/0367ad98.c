
void FUN_0367ad98(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x38);
  uVar1 = *param_2;
  lVar2 = 0;
  if (*(long *)(param_2 + 2) != 0) {
    lVar2 = (*DAT_04c61fd0)();
  }
  *(ulong *)(lVar4 + 0x28) = lVar2 + (ulong)uVar1;
  FUN_03ffabd8(*(undefined8 *)(param_1 + 0x30),1,1);
  if (*(long *)(*(long *)(param_1 + 8) + 0x10) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 8) + 0xc0);
    piVar3 = (int *)(lVar2 + 0x88);
    if (0 < *piVar3) {
      if (*(int *)(lVar2 + 0x8c) <= *piVar3) {
        if (*(char *)(param_1 + 0xbc) == '\0') {
          *(undefined1 *)(param_1 + 0xbc) = 1;
        }
        piVar3 = (int *)(param_1 + 0xb8);
      }
      *piVar3 = 0;
    }
  }
  return;
}

