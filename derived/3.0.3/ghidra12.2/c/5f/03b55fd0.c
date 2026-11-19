
void FUN_03b55fd0(long param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  undefined2 *puVar9;
  
  lVar8 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x170);
  piVar1 = (int *)(lVar8 + 0x18);
  puVar2 = (uint *)(lVar8 + 0x38);
  while( true ) {
    if (*(int *)(param_1 + 0x10) < 1) {
      return;
    }
    plVar7 = *(long **)(param_1 + 8);
    if (*plVar7 != 0) {
      *(long *)(*plVar7 + 8) = plVar7[1];
    }
    if ((long *)plVar7[1] != (long *)0x0) {
      *(long *)plVar7[1] = *plVar7;
    }
    *plVar7 = 0;
    plVar7[1] = 0;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    if (plVar7 == (long *)0x0) break;
    puVar9 = (undefined2 *)((long)plVar7 - (long)*(int *)(param_1 + 0x14));
    if (puVar9 == (undefined2 *)0x0) {
      return;
    }
    *puVar9 = 0xffff;
    plVar7 = (long *)(puVar9 + 0xc);
    *(undefined4 *)(puVar9 + 8) = 0;
    *(undefined4 *)(puVar9 + 10) = 0;
    if ((long *)*plVar7 != (long *)0x0) {
      (**(code **)(*(long *)*plVar7 + 0x10))();
      *plVar7 = 0;
    }
    *puVar9 = 0xffff;
    *(undefined4 *)(puVar9 + 8) = 0;
    *(undefined4 *)(puVar9 + 10) = 0;
    if ((long *)*plVar7 != (long *)0x0) {
      (**(code **)(*(long *)*plVar7 + 0x10))();
      *(undefined8 *)(puVar9 + 0xc) = 0;
    }
    if ((*(char *)(lVar8 + 8) != '\0') || (*(long *)(lVar8 + 0x10) != 0)) {
      uVar4 = puVar9[0x18];
      if ((int)(uint)uVar4 < *(int *)(lVar8 + 0x28)) {
        do {
          while (uVar3 = *(uint *)(lVar8 + 0x38),
                *(short *)(*(long *)(lVar8 + 0x30) + (ulong)uVar4 * 2) = (short)uVar3,
                *puVar2 != uVar3) {
            ClearExclusiveLocal();
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = (uint)uVar4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      puVar9[0x18] = 0xffff;
    }
  }
  return;
}

