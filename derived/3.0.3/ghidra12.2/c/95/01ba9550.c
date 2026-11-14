
undefined8
FUN_01ba9550(undefined8 param_1,undefined4 *param_2,undefined2 *param_3,long param_4,long *param_5,
            undefined8 param_6,uint param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  if ((*(short *)(param_4 + 2) != 0) || (*(short *)(param_4 + 4) != 2)) {
    uVar6 = FUN_03b0e740(param_1,param_2,param_3,param_4,param_5,param_6,param_7 & 1);
    return uVar6;
  }
  lVar8 = *(long *)PTR_DAT_04bb28f8;
  plVar10 = (long *)(lVar8 + 0x87b8);
  plVar9 = (long *)*plVar10;
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)FUN_01ba9190("Normal_00.fcpx");
    *plVar10 = (long)plVar9;
    plVar4 = *(long **)(lVar8 + 0x87d8);
  }
  else {
    plVar4 = *(long **)(lVar8 + 0x87d8);
  }
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)FUN_01ba9190("SystemB_00.fcpx");
    *(long **)(lVar8 + 0x87d8) = plVar4;
  }
  if (plVar9 != param_5 && plVar4 != param_5) {
    return 1;
  }
  if ((*PTR_DAT_04bc0890 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_04bc0890);
    puVar1 = PTR_DAT_04bc0898;
    if (iVar3 != 0) {
      if (((*PTR_DAT_04bc08a0 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc08a0), iVar3 != 0)) {
        *(undefined8 *)puVar1 = 0;
        __cxa_guard_release(PTR_DAT_04bc08a0);
      }
      *(undefined **)PTR_DAT_04bc0888 = puVar1;
      __cxa_guard_release(PTR_DAT_04bc0890);
    }
  }
  if (param_5 != (long *)0x0) {
    puVar5 = (undefined8 *)(**(code **)*param_5)(param_5);
    plVar9 = param_5;
    if (puVar5 == (undefined8 *)PTR_DAT_04bc0888) goto LAB_01ba9610;
    do {
      puVar5 = (undefined8 *)*puVar5;
    } while (puVar5 != (undefined8 *)PTR_DAT_04bc0888 && puVar5 != (undefined8 *)0x0);
    if (puVar5 != (undefined8 *)0x0) goto LAB_01ba9610;
  }
  plVar9 = (long *)0x0;
LAB_01ba9610:
  plVar4 = (long *)*plVar10;
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)FUN_01ba9190("Normal_00.fcpx");
    *plVar10 = (long)plVar4;
  }
  plVar10 = *(long **)(lVar8 + 0x87c0);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)FUN_01ba9190("NormalL_00.fcpx");
    *(long **)(lVar8 + 0x87c0) = plVar10;
  }
  if ((plVar10 == (long *)0x0) || (plVar9 != plVar4 && plVar9 != plVar10)) {
    plVar4 = *(long **)(lVar8 + 0x87d8);
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)FUN_01ba9190("SystemB_00.fcpx");
      *(long **)(lVar8 + 0x87d8) = plVar4;
    }
    plVar10 = *(long **)(lVar8 + 0x87d0);
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)FUN_01ba9190("SystemL_00.fcpx");
      *(long **)(lVar8 + 0x87d0) = plVar10;
    }
    if (plVar9 != plVar10 && plVar9 != plVar4) {
      plVar10 = (long *)0x0;
    }
  }
  if (*(ushort *)(param_4 + 8) < 0x65) {
    if (param_5 == (long *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(*param_5 + 0x20))(param_5);
    *param_2 = uVar2;
    uVar7 = *(undefined2 *)((long)param_5 + 0x32);
  }
  else {
    if (plVar10 == (long *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(*plVar10 + 0x20))(plVar10);
    *param_2 = uVar2;
    uVar7 = *(undefined2 *)((long)plVar10 + 0x32);
  }
  *param_3 = uVar7;
  return 1;
}

