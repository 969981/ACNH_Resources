
void FUN_01db3e98(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  void *__ptr;
  byte *pbVar5;
  
  pbVar5 = (byte *)(param_1 + 0xc0);
  if ((*pbVar5 >> 2 & 1) != 0) {
    if (*(long *)(param_1 + 200) != 0) {
      (**(code **)(**(long **)(param_1 + 0x68) + 0x38))();
      *(long *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
    }
    puVar2 = PTR_DAT_04bb36f0;
    *(undefined4 *)(param_1 + 0xc0) = 4;
    lVar4 = *(long *)puVar2;
    iVar1 = 6;
    if (*(uint *)(lVar4 + 0x20) < 7) {
      iVar1 = 0;
    }
    *(undefined1 *)(*(long *)(lVar4 + 0x28) + (long)iVar1 * 0x38 + 0x2c) = 0;
    iVar1 = 6;
    if (*(uint *)(lVar4 + 0x20) < 7) {
      iVar1 = 0;
    }
    *(undefined1 *)(*(long *)(lVar4 + 0x28) + (long)iVar1 * 0x38 + 0x2d) = 0;
    iVar1 = 6;
    if (*(uint *)(lVar4 + 0x20) < 7) {
      iVar1 = 0;
    }
    *(undefined4 *)(*(long *)(lVar4 + 0x28) + (long)iVar1 * 0x38) = 0;
    iVar1 = 6;
    if (*(uint *)(lVar4 + 0x20) < 7) {
      iVar1 = 0;
    }
    *(undefined1 *)(*(long *)(lVar4 + 0x28) + (long)iVar1 * 0x38 + 0x2f) = 0;
    __ptr = *(void **)(param_1 + 0x78);
    if (__ptr == (void *)0x0) {
      return;
    }
    pbVar5 = (byte *)(param_1 + 0x70);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  pbVar5[0] = 0;
  pbVar5[1] = 0;
  pbVar5[2] = 0;
  pbVar5[3] = 0;
  return;
}

