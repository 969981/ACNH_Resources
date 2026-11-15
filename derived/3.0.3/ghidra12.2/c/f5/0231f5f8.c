
void FUN_0231f5f8(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x1da8) & 0xfffffffd) == 4) {
    puVar2 = *(undefined8 **)(param_1 + 0x1dc0);
    *(undefined4 *)(param_1 + 0x1da8) = 0;
    *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffd;
    if (puVar2 != &DAT_0407ebb1) {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x1dc8) < 1) {
        iVar1 = *(int *)(param_1 + 0x1dc8) + -1;
      }
      memset(puVar2,0,(long)iVar1);
      *(undefined1 *)((long)puVar2 + (long)iVar1) = 0;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x1e18);
    if (puVar2 != &DAT_0407ebb1) {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x1e20) < 1) {
        iVar1 = *(int *)(param_1 + 0x1e20) + -1;
      }
      memset(puVar2,0,(long)iVar1);
      *(undefined1 *)((long)puVar2 + (long)iVar1) = 0;
    }
    *(undefined8 *)(param_1 + 0x1e68) = 0;
    *(undefined8 *)(param_1 + 0x1e78) = 0;
    *(undefined2 *)(param_1 + 0x1e70) = 0xff;
  }
  *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffb;
  return;
}

