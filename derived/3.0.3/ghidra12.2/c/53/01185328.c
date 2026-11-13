
void FUN_01185328(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 8) = 0;
  if (puVar2 != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x28) < 1) {
      iVar1 = *(int *)(param_1 + 0x28) + -1;
    }
    memset(puVar2,0,(long)iVar1);
    *(undefined1 *)((long)puVar2 + (long)iVar1) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  if (puVar2 != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x80) < 1) {
      iVar1 = *(int *)(param_1 + 0x80) + -1;
    }
    memset(puVar2,0,(long)iVar1);
    *(undefined1 *)((long)puVar2 + (long)iVar1) = 0;
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined2 *)(param_1 + 0xd0) = 0xff;
  return;
}

