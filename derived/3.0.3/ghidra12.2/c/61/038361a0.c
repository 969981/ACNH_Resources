
void FUN_038361a0(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  void *__ptr;
  ulong *puVar6;
  undefined **local_50;
  ulong *puStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return;
  }
  puVar6 = (ulong *)(param_1 + 0x10);
  uVar5 = *puVar6;
  if (uVar5 != 0) {
    lVar3 = *(long *)(uVar5 + 8);
    while (lVar3 != 0) {
      *(ulong *)(lVar3 + 0x18) = *(ulong *)(lVar3 + 0x18) & 1 | uVar5;
      uVar5 = *(ulong *)(uVar5 + 8);
      lVar3 = *(long *)(uVar5 + 8);
    }
    do {
      while( true ) {
        if (*(long **)(uVar5 + 0x28) != (long *)0x0) {
          (**(code **)(**(long **)(uVar5 + 0x28) + 8))();
        }
        lVar3 = *(long *)(uVar5 + 0x10);
        *(undefined8 *)(uVar5 + 0x28) = 0;
        if (lVar3 == 0) break;
        *(ulong *)(lVar3 + 0x18) = *(ulong *)(lVar3 + 0x18) & 1 | uVar5;
        uVar5 = *(ulong *)(uVar5 + 0x10);
        lVar3 = *(long *)(uVar5 + 8);
        while (lVar3 != 0) {
          *(ulong *)(lVar3 + 0x18) = *(ulong *)(lVar3 + 0x18) & 1 | uVar5;
          uVar5 = *(ulong *)(uVar5 + 8);
          lVar3 = *(long *)(uVar5 + 8);
        }
      }
      uVar4 = uVar5;
      do {
        uVar5 = *(ulong *)(uVar4 + 0x18) & 0xfffffffffffffffe;
        if (uVar5 == 0) goto LAB_03836274;
        bVar1 = *(ulong *)(uVar5 + 8) != uVar4;
        uVar4 = uVar5;
      } while (bVar1);
    } while( true );
  }
LAB_03836274:
  __ptr = *(void **)(param_1 + 0x20);
  if (__ptr == (void *)0x0) goto LAB_03836308;
  local_40 = &LAB_038364cc;
  uStack_38 = 0;
  local_50 = &PTR_LAB_04b5d4e8;
  puStack_48 = puVar6;
  if (*puVar6 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
LAB_038362c8:
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
  }
  else {
    FUN_038364e0(*puVar6,&local_50);
    __ptr = *(void **)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (__ptr != (void *)0x0) goto LAB_038362c8;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
LAB_03836308:
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
  return;
}

