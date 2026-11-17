
void FUN_02b11630(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  
  puVar3 = PTR_DAT_04bc3a80;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x24a26848) {
    return;
  }
  if (((*(char *)(param_1 + 0x78) != '\0') && (*(long *)(param_1 + 0x70) != 0)) &&
     (iVar2 = *(int *)(param_1 + 0x68), iVar2 != 0)) {
    iVar5 = 0;
    do {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x60) <= iVar5 + *(int *)(param_1 + 100)) {
        iVar1 = *(int *)(param_1 + 0x60);
      }
      lVar4 = *(long *)(param_1 + 0x58) + (long)(iVar5 + (*(int *)(param_1 + 100) - iVar1)) * 0x18;
      FUN_0132101c(*(undefined8 *)(param_1 + 0x70),lVar4,lVar4 + 0x10);
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  if (((*(char *)(param_1 + 0xa8) != '\0') && (*(long *)(param_1 + 0xa0) != 0)) &&
     (iVar2 = *(int *)(param_1 + 0x98), iVar2 != 0)) {
    iVar5 = 0;
    do {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x90) <= iVar5 + *(int *)(param_1 + 0x94)) {
        iVar1 = *(int *)(param_1 + 0x90);
      }
      lVar4 = *(long *)(param_1 + 0x88) + (long)(iVar5 + (*(int *)(param_1 + 0x94) - iVar1)) * 0x20;
      FUN_01309ff0(*(undefined8 *)(param_1 + 0xa0),lVar4 + 0x10,lVar4);
      FUN_01319350(lVar4);
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  if (*(int *)(puVar3 + 0x38) == -0x24a26848) {
    if (*(char *)(param_1 + 0x78) != '\0') {
      *(undefined8 *)(param_1 + 100) = 0;
      *(undefined1 *)(param_1 + 0x78) = 0;
    }
    if (*(char *)(param_1 + 0xa8) != '\0') {
      *(undefined8 *)(param_1 + 0x94) = 0;
      *(undefined1 *)(param_1 + 0xa8) = 0;
    }
  }
  FUN_02b109a0(param_1);
  return;
}

