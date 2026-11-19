
void FUN_03824cf0(long param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *local_d0;
  long local_c8;
  long *local_c0;
  ulong local_b8;
  long *plStack_b0;
  ulong local_a8;
  long *plStack_a0;
  long *local_98;
  long local_90;
  long *local_88;
  undefined8 uStack_80;
  long *local_78;
  ulong uStack_70;
  long *local_68;
  
  puVar7 = PTR_DAT_04bb26a8;
  if ((*(int *)(param_1 + 0xa8) != 0) &&
     ((*(byte *)(*(long *)PTR_DAT_04bb26a8 + 0xb3890) >> 5 & 1) == 0)) {
    plVar10 = (long *)(param_1 + 0x58);
    plVar9 = (long *)*plVar10;
    uStack_70 = (ulong)*(uint *)(param_1 + 0x68);
    if (0 < (int)*(uint *)(param_1 + 0x68)) {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x60) <= *(int *)(param_1 + 100)) {
        iVar1 = *(int *)(param_1 + 0x60);
      }
      plVar9 = plVar9 + (*(int *)(param_1 + 100) - iVar1);
    }
    local_90 = *plVar9;
    local_88 = (long *)(*(long *)(local_90 + 8) + -8);
    uStack_80 = 0;
    local_98 = plVar10;
    local_78 = plVar10;
    local_68 = plVar10;
    FUN_02a03e40(&local_98);
    uVar2 = *(uint *)(param_1 + 0x68);
    local_b8 = (ulong)uVar2;
    plVar9 = *(long **)(param_1 + 0x58);
    if (0 < (int)uVar2) {
      iVar6 = uVar2 + *(int *)(param_1 + 100) + -1;
      iVar1 = 0;
      if (*(int *)(param_1 + 0x60) <= iVar6) {
        iVar1 = *(int *)(param_1 + 0x60);
      }
      plVar9 = plVar9 + (iVar6 - iVar1);
    }
    local_c8 = *plVar9;
    local_c0 = (long *)(local_c8 + -8);
    local_d0 = plVar10;
    plStack_b0 = plVar10;
    local_a8 = local_b8;
    plStack_a0 = plVar10;
    FUN_02a03e40(&local_d0);
    if (local_88 != local_c0) {
      do {
        lVar8 = *local_88;
        cVar3 = *(char *)(lVar8 + 0xc);
        if (-1 < cVar3) {
          sVar4 = *(short *)(lVar8 + 8);
          *(char *)(lVar8 + 0xc) = cVar3 + -1;
          sVar5 = *(short *)(lVar8 + 10);
          if (cVar3 == '\0') {
            lVar11 = *(long *)puVar7;
            nn::os::LockMutex((MutexType *)(lVar11 + 0x1466a8));
            lVar8 = lVar11 + 0x146648 + (ulong)*(uint *)(lVar11 + 0x146640) * 0x20;
            if (1 < *(uint *)(lVar11 + 0x146640)) {
              lVar8 = lVar11 + 0x146648;
            }
            FUN_02a061d0(lVar8,(int)sVar4,(int)sVar5);
            nn::os::UnlockMutex((MutexType *)(lVar11 + 0x1466a8));
          }
        }
        local_88 = (long *)(local_88[2] + -8);
        FUN_02a03e40(&local_98);
      } while (local_88 != local_c0);
    }
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  return;
}

