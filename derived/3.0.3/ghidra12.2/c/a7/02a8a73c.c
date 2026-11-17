
void FUN_02a8a73c(undefined1 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x2f8));
    puVar3 = PTR_DAT_04bb3238;
    puVar2 = PTR_DAT_04bb27c0;
    uVar1 = *(uint *)(param_1 + 0x2cc);
    if (uVar1 != 0) {
      lVar6 = *(long *)PTR_DAT_04bb27c0;
      if (lVar6 != 0) {
        lVar7 = *(long *)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                         ((ulong)(uVar1 >> 0x11) & 0x7ff8));
        if (((lVar7 == 0) || ((*(uint *)(lVar7 + 0x248) >> 1 & 1) != 0)) ||
           (*(uint *)(lVar7 + 0x230) != uVar1)) {
          lVar7 = 0;
        }
        if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
          plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar6 = *(long *)puVar2;
          iVar4 = (**(code **)(*plVar5 + 0x60))();
          if (((iVar4 < 0x11) ||
              ((*(uint *)(lVar6 + 0x5e8) < 5 &&
               ((1 << (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 0x1aU) != 0)))) && (lVar7 != 0)) {
            FUN_006fb3d0(lVar7);
          }
        }
      }
      *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)puVar3;
    }
    uVar1 = *(uint *)(param_1 + 0x2d0);
    if (uVar1 != 0) {
      lVar6 = *(long *)puVar2;
      if (lVar6 != 0) {
        lVar7 = *(long *)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                         ((ulong)(uVar1 >> 0x11) & 0x7ff8));
        if (((lVar7 == 0) || ((*(uint *)(lVar7 + 0x248) >> 1 & 1) != 0)) ||
           (*(uint *)(lVar7 + 0x230) != uVar1)) {
          lVar7 = 0;
        }
        if ((*(int *)(lVar6 + 0x288) == 1) || (*(int *)(lVar6 + 0x288) == -1)) {
          plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar6 = *(long *)puVar2;
          iVar4 = (**(code **)(*plVar5 + 0x60))();
          if (((iVar4 < 0x11) ||
              ((*(uint *)(lVar6 + 0x5e8) < 5 &&
               ((1 << (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 0x1aU) != 0)))) && (lVar7 != 0)) {
            FUN_006fb3d0(lVar7);
          }
        }
      }
      *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)puVar3;
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x2f8));
    *param_1 = 0;
  }
  return;
}

