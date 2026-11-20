
bool FUN_03f2ab60(long param_1,char *param_2)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  lVar10 = *(long *)(param_2 + 0x30);
  if (lVar10 != 0) {
    bVar3 = *(byte *)(param_1 + 0x18) & 0xfe | param_2[1];
    *(byte *)(param_1 + 0x18) = bVar3;
    bVar8 = 0x80;
    if (param_2[1] != '\0' || *param_2 == '\0') {
      bVar8 = 0;
    }
    *(byte *)(param_1 + 0x18) = bVar8 | bVar3 & 0x7f;
    uVar1 = *(ulong *)(param_2 + 0x20);
    if (*(ulong *)(param_2 + 0x20) <= *(ulong *)(param_2 + 0x28)) {
      uVar1 = *(ulong *)(param_2 + 0x28);
    }
    *(ulong *)(param_1 + 0x28) = uVar1;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x28);
    plVar4 = (long *)FUN_038c6d48(*(undefined8 *)(param_2 + 8),param_2 + 0x10,
                                  *(undefined8 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 4),1,1);
    *(long **)(param_1 + 0x20) = plVar4;
    if (param_2[2] != '\0') {
      *(undefined1 *)((long)plVar4 + 0xd4) = 1;
      plVar4 = *(long **)(param_1 + 0x20);
    }
    uVar5 = (**(code **)(*plVar4 + 0x70))();
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = uVar5;
    plVar4 = *(long **)(param_1 + 0x20);
    if ((*(byte *)(param_1 + 0x18) >> 4 & 1) == 0) {
      lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4);
    }
    else {
      if ((*(uint *)(plVar4 + 0x1a) & 1) == 0) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar4 + 0x12;
        nn::os::LockMutex((MutexType *)(plVar4 + 0x16));
      }
      if ((long *)plVar4[0x1c] == plVar4 + 0x1b) {
        lVar6 = 0;
      }
      else {
        lVar7 = (long)*(int *)((long)plVar4 + 0xec);
        lVar6 = 0;
        lVar9 = plVar4[0x1c] - lVar7;
        do {
          lVar6 = *(long *)(lVar9 + 0x18) + lVar6;
          lVar9 = *(long *)(lVar9 + lVar7 + 8) - lVar7;
        } while (lVar9 != (long)(plVar4 + 0x1b) - lVar7);
      }
      if (plVar11 != (long *)0x0) {
        nn::os::UnlockMutex((MutexType *)(plVar11 + 4));
      }
    }
    *(long *)(param_1 + 0xd0) = lVar6;
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xf8) = uVar5;
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x4c);
    lVar6 = *(long *)PTR_DAT_04bb49b8;
    if (lVar6 != 0) {
      nn::os::LockMutex((MutexType *)(lVar6 + 0x800));
      plVar4 = (long *)(*(int *)(lVar6 + 0x7dc) + param_1);
      if (plVar4[1] == 0 && *plVar4 == 0) {
        lVar9 = *(long *)(lVar6 + 0x7c8);
        *(long **)(lVar6 + 0x7c8) = plVar4;
        *plVar4 = lVar9;
        plVar4[1] = lVar6 + 0x7c8;
        if (lVar9 != 0) {
          *(long **)(lVar9 + 8) = plVar4;
        }
        *(int *)(lVar6 + 0x7d8) = *(int *)(lVar6 + 0x7d8) + 1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x800));
    }
    bVar8 = *(byte *)(param_1 + 0x18);
    cVar2 = param_2[0x48];
    *(byte *)(param_1 + 0x18) = bVar8 & 0xf7 | cVar2 << 3;
    *(byte *)(param_1 + 0x18) = bVar8 & 0xf3 | cVar2 << 3 | param_2[0x38] << 2;
    *(byte *)(param_1 + 0x109) = *(byte *)(param_1 + 0x109) & 0xfe | param_2[0x3a];
  }
  return lVar10 != 0;
}

