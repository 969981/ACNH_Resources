
void FUN_01391948(long param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  
  puVar1 = (uint *)(param_1 + 0x20) + (ulong)param_2 * 4;
  if (0x1d < param_2) {
    puVar1 = (uint *)(param_1 + 0x20);
  }
  if (*puVar1 <= param_3) {
    param_3 = 0;
  }
  piVar3 = (int *)(*(long *)(puVar1 + 2) + (long)(int)param_3 * 0x30 + 0x28);
  if (0 < *piVar3) {
    lVar4 = *(long *)(puVar1 + 2) + (long)(int)param_3 * 0x30;
    iVar2 = 0;
    if (*(int *)(lVar4 + 0x20) <= *(int *)(lVar4 + 0x24)) {
      iVar2 = *(int *)(lVar4 + 0x20);
    }
    (*(code *)**(undefined8 **)
                (*(long *)(lVar4 + 0x18) + (long)(*(int *)(lVar4 + 0x24) - iVar2) * 0x18))();
    iVar2 = 0;
    if (*(int *)(lVar4 + 0x24) + 1 < *(int *)(lVar4 + 0x20)) {
      iVar2 = *(int *)(lVar4 + 0x24) + 1;
    }
    *(int *)(lVar4 + 0x24) = iVar2;
    *piVar3 = *piVar3 + -1;
  }
  return;
}

