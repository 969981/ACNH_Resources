
void FUN_02240c50(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  puVar4 = PTR_DAT_04bb3b78;
  puVar3 = PTR_DAT_04bb3b70;
  lVar9 = *(long *)(param_1 + 0x510);
  if (lVar9 == 0 || *(int *)(param_1 + 0x518) != 4) {
    if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
      lVar10 = (long)*(int *)(param_1 + 0xbc);
      plVar8 = (long *)(*(long *)(param_1 + 0xb0) - lVar10);
      lVar9 = *(long *)(*(long *)PTR_DAT_04bb31c8 + 0x58);
      puVar1 = PTR_DAT_04bb3040 + 0x10;
      while( true ) {
        if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
          *(undefined **)puVar3 = puVar1;
          __cxa_guard_release(puVar4);
        }
        if ((plVar8 != (long *)0x0) &&
           (uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,puVar3), (uVar6 & 1) != 0)) break;
        plVar8 = (long *)(*(long *)((long)plVar8 + lVar10 + 8) - lVar10);
        if (plVar8 == (long *)((param_1 + 0xa8) - lVar10)) {
          return;
        }
      }
      bVar2 = *(byte *)(plVar8 + 0x55);
joined_r0x02240dd8:
      if (((bVar2 & 1) == 0) || (lVar10 = plVar8[0x56], lVar10 == 0)) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        puVar7 = *(undefined8 **)(lVar10 + 0x18);
        if ((*(byte *)(lVar10 + 8) & 10) != 2) {
          puVar7 = (undefined8 *)0x0;
        }
      }
      if (((*PTR_DAT_04bb3b98 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3b98), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb3b90 = PTR_DAT_04bb3ba0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3b98);
      }
      if ((puVar7 != (undefined8 *)0x0) &&
         (uVar6 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bb3b90), (uVar6 & 1) != 0)) {
        puVar7[0x40] = lVar9;
      }
    }
  }
  else if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
    lVar10 = (long)*(int *)(param_1 + 0xbc);
    plVar8 = (long *)(*(long *)(param_1 + 0xb0) - lVar10);
    puVar1 = PTR_DAT_04bb3040 + 0x10;
    do {
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
        *(undefined **)puVar3 = puVar1;
        __cxa_guard_release(puVar4);
      }
      if ((plVar8 != (long *)0x0) &&
         (uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,puVar3), (uVar6 & 1) != 0)) {
        bVar2 = *(byte *)(plVar8 + 0x55);
        goto joined_r0x02240dd8;
      }
      plVar8 = (long *)(*(long *)((long)plVar8 + lVar10 + 8) - lVar10);
    } while (plVar8 != (long *)((param_1 + 0xa8) - lVar10));
  }
  return;
}

