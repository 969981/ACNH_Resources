
void FUN_029bdf10(long param_1)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined *local_70;
  char *pcStack_68;
  
  uVar11 = *(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x98);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "CPU_VoiceDistortion_1ch";
  local_70 = puVar1;
  plVar7 = (long *)FUN_03b80b70(uVar11,&local_70);
  pcStack_68 = "DSP_VoicePhoneFilter_1ch";
  local_70 = puVar1;
  plVar8 = (long *)FUN_03b80b70(uVar11,&local_70);
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  lVar10 = *(long *)(param_1 + 0x88);
  if ((lVar10 != 0) && (*(char *)(lVar10 + 1) != -1)) {
    *(char *)(lVar10 + 1) = *(char *)(lVar10 + 1) + '\x01';
  }
  lVar10 = *(long *)(param_1 + 0xa0);
  if (lVar10 == param_1 + 0x98) goto LAB_029be2c0;
  lVar2 = param_1 + 0x90;
  lVar12 = *(long *)(lVar10 + -8);
  cVar3 = *(char *)(lVar12 + 1);
  bVar4 = cVar3 != -1;
  if (plVar7 == (long *)0x0) {
    if (plVar8 == (long *)0x0) {
      if (bVar4) {
        *(char *)(lVar12 + 1) = cVar3 + '\x01';
      }
      *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(lVar12 + 3);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar12 + 0x18);
      for (lVar10 = *(long *)(lVar10 + 8); lVar10 + -8 != lVar2; lVar10 = *(long *)(lVar10 + 8)) {
        cVar3 = *(char *)(*(long *)(lVar10 + -8) + 1);
        if (cVar3 != -1) {
          *(char *)(*(long *)(lVar10 + -8) + 1) = cVar3 + '\x01';
        }
      }
      goto LAB_029be2c0;
    }
    if (bVar4) {
      *(char *)(lVar12 + 1) = cVar3 + '\x01';
    }
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(lVar12 + 3);
    uVar13 = *(ulong *)(lVar12 + 0x18) & 0x1e;
    plVar7 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8);
    if (plVar7 == (long *)0x0) {
      if (uVar13 != 0) goto LAB_029be1f0;
    }
    else {
      bVar5 = (**(code **)(*plVar7 + 0x28))();
      if ((uVar13 != 0) != (bool)(bVar5 & 1)) {
LAB_029be1f0:
        plVar7 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x20))(plVar7,uVar13 != 0);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar12 + 0x18);
    for (lVar10 = *(long *)(lVar10 + 8); lVar10 + -8 != lVar2; lVar10 = *(long *)(lVar10 + 8)) {
      cVar3 = *(char *)(*(long *)(lVar10 + -8) + 1);
      if (cVar3 != -1) {
        *(char *)(*(long *)(lVar10 + -8) + 1) = cVar3 + '\x01';
      }
    }
    goto LAB_029be2c0;
  }
  if (plVar8 == (long *)0x0) {
    if (bVar4) {
      *(char *)(lVar12 + 1) = cVar3 + '\x01';
    }
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(lVar12 + 3);
    uVar13 = *(ulong *)(lVar12 + 0x18);
    plVar8 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7);
    if (plVar8 == (long *)0x0) {
      if (((uint)uVar13 >> 2 & 1) != 0) goto LAB_029be260;
    }
    else {
      uVar6 = (**(code **)(*plVar8 + 0x28))();
      if (((uint)(uVar13 >> 2) & 1) != (uVar6 & 1)) {
LAB_029be260:
        plVar7 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x20))(plVar7,uVar13 >> 2 & 1);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar12 + 0x18);
    for (lVar10 = *(long *)(lVar10 + 8); lVar10 + -8 != lVar2; lVar10 = *(long *)(lVar10 + 8)) {
      cVar3 = *(char *)(*(long *)(lVar10 + -8) + 1);
      if (cVar3 != -1) {
        *(char *)(*(long *)(lVar10 + -8) + 1) = cVar3 + '\x01';
      }
    }
    goto LAB_029be2c0;
  }
  if (bVar4) {
    *(char *)(lVar12 + 1) = cVar3 + '\x01';
  }
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(lVar12 + 3);
  uVar13 = *(ulong *)(lVar12 + 0x18);
  plVar9 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7);
  if (plVar9 == (long *)0x0) {
    if (((uint)uVar13 >> 2 & 1) != 0) goto LAB_029be0d0;
  }
  else {
    uVar6 = (**(code **)(*plVar9 + 0x28))();
    if (((uint)(uVar13 >> 2) & 1) != (uVar6 & 1)) {
LAB_029be0d0:
      plVar7 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))(plVar7,uVar13 >> 2 & 1);
      }
    }
  }
  uVar13 = uVar13 & 0x1e;
  plVar7 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8);
  if (plVar7 == (long *)0x0) {
    if (uVar13 != 0) goto LAB_029be134;
  }
  else {
    bVar5 = (**(code **)(*plVar7 + 0x28))();
    if ((uVar13 != 0) != (bool)(bVar5 & 1)) {
LAB_029be134:
      plVar7 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))(plVar7,uVar13 != 0);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar12 + 0x18);
  for (lVar10 = *(long *)(lVar10 + 8); lVar10 + -8 != lVar2; lVar10 = *(long *)(lVar10 + 8)) {
    cVar3 = *(char *)(*(long *)(lVar10 + -8) + 1);
    if (cVar3 != -1) {
      *(char *)(*(long *)(lVar10 + -8) + 1) = cVar3 + '\x01';
    }
  }
LAB_029be2c0:
  *(bool *)(param_1 + 0x19) = *(int *)(param_1 + 0xa8) == 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  return;
}

