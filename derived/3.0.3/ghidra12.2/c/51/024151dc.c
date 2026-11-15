
void FUN_024151dc(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *local_50;
  char *pcStack_48;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    if ((7 < *(byte *)(param_1 + 0x1ee8)) ||
       (FUN_02582d8c((byte *)(param_1 + 0x1ee8),1), *(int *)(param_1 + 0x178) == 0)) {
      if ((*(uint *)(param_1 + 0x1da8) & 0xfffffffd) == 4) {
        puVar3 = *(undefined8 **)(param_1 + 0x1dc0);
        *(undefined4 *)(param_1 + 0x1da8) = 0;
        *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffd;
        if (puVar3 != &DAT_0407ebb1) {
          iVar2 = 0;
          if (*(int *)(param_1 + 0x1dc8) < 1) {
            iVar2 = *(int *)(param_1 + 0x1dc8) + -1;
          }
          memset(puVar3,0,(long)iVar2);
          *(undefined1 *)((long)puVar3 + (long)iVar2) = 0;
        }
        puVar3 = *(undefined8 **)(param_1 + 0x1e18);
        if (puVar3 != &DAT_0407ebb1) {
          iVar2 = 0;
          if (*(int *)(param_1 + 0x1e20) < 1) {
            iVar2 = *(int *)(param_1 + 0x1e20) + -1;
          }
          memset(puVar3,0,(long)iVar2);
          *(undefined1 *)((long)puVar3 + (long)iVar2) = 0;
        }
        *(undefined8 *)(param_1 + 0x1e68) = 0;
        *(undefined8 *)(param_1 + 0x1e78) = 0;
        *(undefined2 *)(param_1 + 0x1e70) = 0xff;
      }
      *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffb;
    }
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x2b4);
    *(undefined4 *)(param_1 + 0xc20) = 0;
    *(undefined4 *)(param_1 + 0xc18) = uVar1;
    FUN_0232f1d0(param_1);
    puVar3 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar3 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "PlayerMosquitoSting";
  FUN_017081d0(puVar3,&local_50,6,1,0);
  return;
}

