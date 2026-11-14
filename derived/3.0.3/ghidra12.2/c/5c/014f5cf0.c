
void FUN_014f5cf0(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_b8;
  undefined4 local_b0;
  
  puVar4 = PTR_DAT_04bb3238;
  puVar1 = PTR_DAT_04bbcf08 + 0x10;
  while( true ) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x2f8));
    if (*(int *)(param_1 + 0x2d0) < 1) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = *(long **)(param_1 + 0x2c8);
      if (*plVar8 != 0) {
        *(long *)(*plVar8 + 8) = plVar8[1];
      }
      if ((long *)plVar8[1] != (long *)0x0) {
        *(long *)plVar8[1] = *plVar8;
      }
      *plVar8 = 0;
      plVar8[1] = 0;
      *(int *)(param_1 + 0x2d0) = *(int *)(param_1 + 0x2d0) + -1;
    }
    iVar3 = *(int *)(param_1 + 0x2d4);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x2f8));
    if ((plVar8 == (long *)0x0) || (lVar9 = (long)plVar8 - (long)iVar3, lVar9 == 0)) break;
    *(undefined4 *)(lVar9 + 0x18) = 0;
    *(undefined4 *)(lVar9 + 0x38) = 0;
    local_b8 = (undefined *)0xfffe;
    *(undefined8 *)(lVar9 + 0x28) = 0;
    *(undefined8 *)(lVar9 + 0x30) = 0;
    FUN_0277d4ac(&local_b8);
    uVar2 = *(undefined4 *)puVar4;
    *(undefined1 *)(lVar9 + 0x88) = 0;
    *(undefined8 *)(lVar9 + 0x68) = 0;
    *(undefined8 *)(lVar9 + 0x6d) = 0;
    local_b0 = 0;
    *(undefined4 *)(lVar9 + 0x60) = (undefined4)local_b8;
    *(undefined4 *)(lVar9 + 100) = local_b8._4_4_;
    *(undefined4 *)(lVar9 + 0x8c) = uVar2;
    local_b8 = puVar1;
    FUN_014ba7d4(lVar9 + 0x90,&local_b8);
    if (0 < *(int *)(lVar9 + 0xe8)) {
      lVar5 = 0;
      puVar6 = *(undefined8 **)(lVar9 + 0xf8);
      do {
        puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0xf0) + lVar5 * 8);
        lVar5 = lVar5 + 1;
        *puVar7 = puVar6;
        *(undefined8 **)(lVar9 + 0xf8) = puVar7;
        puVar6 = puVar7;
      } while (lVar5 < *(int *)(lVar9 + 0xe8));
    }
    *(undefined4 *)(lVar9 + 0xe8) = 0;
    nn::os::LockMutex((MutexType *)(param_1 + 0x248));
    plVar8 = (long *)(lVar9 + *(int *)(param_1 + 0x224));
    lVar9 = *(long *)(param_1 + 0x210);
    *(long **)(param_1 + 0x210) = plVar8;
    *plVar8 = lVar9;
    plVar8[1] = param_1 + 0x210;
    if (lVar9 != 0) {
      *(long **)(lVar9 + 8) = plVar8;
    }
    *(int *)(param_1 + 0x220) = *(int *)(param_1 + 0x220) + 1;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x248));
  }
  return;
}

