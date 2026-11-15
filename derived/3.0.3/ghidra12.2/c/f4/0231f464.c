
void FUN_0231f464(long param_1)

{
  int iVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined2 local_28 [4];
  
  if (*(int *)(param_1 + 0x178) == 0) {
    if ((*(uint *)(param_1 + 0x1da8) & 0xfffffffd) == 4) {
      puVar3 = *(undefined8 **)(param_1 + 0x1dc0);
      *(undefined4 *)(param_1 + 0x1da8) = 0;
      *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffd;
      if (puVar3 != &DAT_0407ebb1) {
        iVar1 = 0;
        if (*(int *)(param_1 + 0x1dc8) < 1) {
          iVar1 = *(int *)(param_1 + 0x1dc8) + -1;
        }
        memset(puVar3,0,(long)iVar1);
        *(undefined1 *)((long)puVar3 + (long)iVar1) = 0;
      }
      puVar3 = *(undefined8 **)(param_1 + 0x1e18);
      if (puVar3 != &DAT_0407ebb1) {
        iVar1 = 0;
        if (*(int *)(param_1 + 0x1e20) < 1) {
          iVar1 = *(int *)(param_1 + 0x1e20) + -1;
        }
        memset(puVar3,0,(long)iVar1);
        *(undefined1 *)((long)puVar3 + (long)iVar1) = 0;
      }
      *(undefined8 *)(param_1 + 0x1e68) = 0;
      *(undefined8 *)(param_1 + 0x1e78) = 0;
      *(undefined2 *)(param_1 + 0x1e70) = 0xff;
    }
    *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffb;
  }
  local_28[0] = 0x100;
  FUN_02330618(param_1,local_28);
  *(undefined4 *)(param_1 + 0x17ec) = 0xffffffff;
  if (DAT_054f5738 == 0) {
    if ((DAT_054f08d8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_054f08d8);
      puVar2 = &DAT_054f08d0;
      if (iVar1 != 0) {
        DAT_054f08d0 = 0;
        __cxa_guard_release(&DAT_054f08d8);
      }
    }
    else {
      puVar2 = &DAT_054f08d0;
    }
  }
  else {
    puVar2 = (uint *)(DAT_054f5738 + 0x200);
  }
  *puVar2 = *puVar2 & 0xfffffffd;
  return;
}

