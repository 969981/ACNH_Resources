
void FUN_03909f10(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined **local_430;
  undefined8 uStack_428;
  undefined1 auStack_420 [1024];
  
  if ((*(byte *)(param_1 + 0x24) >> 1 & 1) != 0) {
    if (*(long **)(param_1 + 0x40) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x40) + 8))();
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    lVar4 = *(long *)(param_1 + 0x28);
    uVar1 = *(uint *)(param_1 + 0x20);
    if (*(uint *)(lVar4 + 0x68) <= uVar1) {
      uVar1 = 0;
    }
    uStack_428 = *(undefined8 *)(*(long *)(lVar4 + 0x70) + (long)(int)uVar1 * 8);
    local_430 = &PTR_LAB_048f9770;
    uVar3 = FUN_0399b690(&local_430,*(undefined8 *)(lVar4 + 0x80),*(long *)(lVar4 + 0x70),
                         *(undefined4 *)(lVar4 + 0x58),auStack_420,
                         *(undefined8 *)(*(long *)PTR_DAT_04bb4e50 + 0x10));
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    iVar2 = *(int *)(*(long *)(param_1 + 0x28) + 0x58);
    if (iVar2 != 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x60);
      iVar5 = 0;
      puVar6 = auStack_420;
      do {
        lVar7 = lVar4 + (long)iVar5 * 0x58;
        uVar1 = *(uint *)(param_1 + 0x20);
        if (*(uint *)(lVar7 + 0x48) <= uVar1) {
          uVar1 = 0;
        }
        *(undefined1 *)(*(long *)(lVar7 + 0x50) + (long)(int)uVar1) = *puVar6;
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar2 != iVar5);
    }
  }
  return;
}

