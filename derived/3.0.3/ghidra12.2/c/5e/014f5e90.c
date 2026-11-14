
void FUN_014f5e90(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 local_b8;
  undefined4 local_b0;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    if (*(long *)(param_1 + 0x1b0) != param_1 + 0x1a8) {
      lVar8 = (long)*(int *)(param_1 + 0x1bc);
      lVar7 = *(long *)(param_1 + 0x1b0) - lVar8;
      do {
        FUN_014ed5f8(lVar7);
        lVar7 = *(long *)(lVar7 + lVar8 + 8) - lVar8;
      } while (lVar7 != (param_1 + 0x1a8) - lVar8);
    }
    puVar4 = PTR_DAT_04bb3238;
    puVar1 = PTR_DAT_04bbcf08 + 0x10;
    while( true ) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x1e0));
      if (*(int *)(param_1 + 0x1b8) < 1) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = *(long **)(param_1 + 0x1b0);
        if (*plVar9 != 0) {
          *(long *)(*plVar9 + 8) = plVar9[1];
        }
        if ((long *)plVar9[1] != (long *)0x0) {
          *(long *)plVar9[1] = *plVar9;
        }
        *plVar9 = 0;
        plVar9[1] = 0;
        *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + -1;
      }
      iVar3 = *(int *)(param_1 + 0x1bc);
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x1e0));
      if ((plVar9 == (long *)0x0) || (lVar7 = (long)plVar9 - (long)iVar3, lVar7 == 0)) break;
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(undefined4 *)(lVar7 + 0x38) = 0;
      local_b8 = (undefined *)0xfffe;
      *(undefined8 *)(lVar7 + 0x28) = 0;
      *(undefined8 *)(lVar7 + 0x30) = 0;
      FUN_0277d4ac(&local_b8);
      uVar2 = *(undefined4 *)puVar4;
      *(undefined1 *)(lVar7 + 0x88) = 0;
      *(undefined8 *)(lVar7 + 0x68) = 0;
      *(undefined8 *)(lVar7 + 0x6d) = 0;
      local_b0 = 0;
      *(undefined4 *)(lVar7 + 0x60) = (undefined4)local_b8;
      *(undefined4 *)(lVar7 + 100) = local_b8._4_4_;
      *(undefined4 *)(lVar7 + 0x8c) = uVar2;
      local_b8 = puVar1;
      FUN_014ba7d4(lVar7 + 0x90,&local_b8);
      if (0 < *(int *)(lVar7 + 0xe8)) {
        lVar8 = 0;
        puVar5 = *(undefined8 **)(lVar7 + 0xf8);
        do {
          puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0xf0) + lVar8 * 8);
          lVar8 = lVar8 + 1;
          *puVar6 = puVar5;
          *(undefined8 **)(lVar7 + 0xf8) = puVar6;
          puVar5 = puVar6;
        } while (lVar8 < *(int *)(lVar7 + 0xe8));
      }
      *(undefined4 *)(lVar7 + 0xe8) = 0;
      nn::os::LockMutex((MutexType *)(param_1 + 0x248));
      plVar9 = (long *)(lVar7 + *(int *)(param_1 + 0x224));
      lVar7 = *(long *)(param_1 + 0x210);
      *(long **)(param_1 + 0x210) = plVar9;
      *plVar9 = lVar7;
      plVar9[1] = param_1 + 0x210;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar9;
      }
      *(int *)(param_1 + 0x220) = *(int *)(param_1 + 0x220) + 1;
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x248));
    }
  }
  return;
}

