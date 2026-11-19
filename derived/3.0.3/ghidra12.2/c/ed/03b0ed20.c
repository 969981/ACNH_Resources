
void FUN_03b0ed20(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
  puVar6 = (undefined8 *)FUN_0038a89c();
  if (((*PTR_DAT_04bc0890 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc0890), puVar4 = PTR_DAT_04bc0898, iVar5 != 0)) {
    if (((*PTR_DAT_04bc08a0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc08a0), iVar5 != 0)) {
      *(undefined8 *)puVar4 = 0;
      __cxa_guard_release(PTR_DAT_04bc08a0);
    }
    *(undefined **)PTR_DAT_04bc0888 = puVar4;
    __cxa_guard_release(PTR_DAT_04bc0890);
  }
  if (puVar6 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)(**(code **)*puVar6)(puVar6);
    if (puVar7 == (undefined8 *)PTR_DAT_04bc0888) goto LAB_03b0ed8c;
    do {
      puVar7 = (undefined8 *)*puVar7;
    } while (puVar7 != (undefined8 *)PTR_DAT_04bc0888 && puVar7 != (undefined8 *)0x0);
    if (puVar7 != (undefined8 *)0x0) goto LAB_03b0ed8c;
  }
  puVar6 = (undefined8 *)0x0;
LAB_03b0ed8c:
  uVar8 = FUN_03b0e4b0(param_2,*(undefined8 *)(param_1 + 0xd8),*(undefined2 *)(param_1 + 0x112),
                       puVar6,0xffffffff,1);
  if ((uVar8 & 1) == 0) {
    if (*(char *)(param_2 + 0x3d) == '\0') {
      plVar1 = (long *)(param_2 + 0x30);
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = param_1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(long *)(param_1 + 0x168) = lVar9;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x15c) = 2;
    *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) | 4;
    *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x38);
  }
  return;
}

