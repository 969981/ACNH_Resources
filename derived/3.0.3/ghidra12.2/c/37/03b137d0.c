
undefined8 FUN_03b137d0(undefined8 *param_1,long param_2)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  
  uVar3 = *(ushort *)(param_2 + 0x30);
  uVar4 = *(ushort *)(param_2 + 0x32);
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  uVar2 = uVar4;
  if (*(short *)(param_2 + 0x3a) != 3) {
    uVar2 = 1;
  }
  if (uVar2 <= uVar4) {
    uVar2 = uVar4;
  }
  if (((*PTR_DAT_04bc8e30 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc8e30), puVar8 = PTR_DAT_04bc8e18, iVar9 != 0)) {
    if (((*PTR_DAT_04bc8e20 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc8e20), iVar9 != 0)) {
      *(undefined8 *)puVar8 = 0;
      __cxa_guard_release(PTR_DAT_04bc8e20);
    }
    *(undefined **)PTR_DAT_04bc8e28 = puVar8;
    __cxa_guard_release(PTR_DAT_04bc8e30);
  }
  if (param_1 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)(**(code **)*param_1)(param_1);
    if (puVar10 != (undefined8 *)PTR_DAT_04bc8e28) {
      do {
        puVar10 = (undefined8 *)*puVar10;
      } while (puVar10 != (undefined8 *)PTR_DAT_04bc8e28 && puVar10 != (undefined8 *)0x0);
      if (puVar10 == (undefined8 *)0x0) goto LAB_03b13860;
    }
    *(ushort *)(param_1 + 2) = uVar3;
    *(ushort *)((long)param_1 + 0x12) = uVar2;
  }
LAB_03b13860:
  if (*(int *)(param_2 + 0x50) == -1) {
    lVar11 = -1;
  }
  else {
    lVar11 = *(long *)PTR_DAT_04bc1010;
    uVar7 = *(int *)(param_2 + 0x50) - (uint)*(ushort *)(lVar11 + 0x3da);
    if (*(uint *)(lVar11 + 0x368) <= uVar7) {
      uVar7 = 0;
    }
    puVar1 = (uint *)(*(long *)(lVar11 + 0x370) + (long)(int)uVar7 * 0x20 + 4);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar11 = (long)*(int *)(param_2 + 0x50);
  }
  param_1[1] = lVar11;
  return 1;
}

