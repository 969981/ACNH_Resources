
void FUN_03b63430(long param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  undefined2 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 local_18;
  
  if (((*(int *)(param_1 + 0x70) == 1) &&
      ((((*(byte *)(param_1 + 0x7f) & 1) != 0 || ((*(byte *)(param_1 + 0x7e) & 1) != 0)) &&
       (*(char *)(param_1 + 0x7a) != '\0')))) &&
     ((*(uint *)(param_1 + 0x70) < 5 &&
      ((1 << (ulong)(*(uint *)(param_1 + 0x70) & 0x1f) & 0x1aU) != 0)))) {
    *(undefined4 *)(param_1 + 0x70) = 2;
    *(undefined1 *)(param_1 + 0x7d) = 1;
    puVar8 = PTR_DAT_04bd1e70;
    uVar5 = *(undefined2 *)(param_1 + 0x118);
    lVar11 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x188);
    piVar1 = (int *)(lVar11 + 0x40);
    if (*piVar1 == 0) {
      plVar10 = (long *)0x0;
    }
    else {
      puVar2 = (uint *)(lVar11 + 0x38);
      do {
        while( true ) {
          uVar4 = *puVar2;
          if (*puVar2 == uVar4) break;
          ClearExclusiveLocal();
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *puVar2 = (uint)*(ushort *)(*(long *)(lVar11 + 0x30) + (ulong)uVar4 * 2);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      piVar3 = (int *)(lVar11 + 0x10);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = *piVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar10 = (long *)(*(long *)(lVar11 + 0x18) + ((ulong)uVar4 & 0xffff) * 0x40);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(undefined2 *)(plVar10 + 1) = uVar5;
      puVar9 = PTR_DAT_04bd1f98;
      *(undefined8 *)((long)plVar10 + 0xc) = 2;
      plVar10[3] = 0;
      *(undefined4 *)(plVar10 + 4) = 0;
      plVar10[5] = 0;
      *plVar10 = (long)(puVar9 + 0x10);
    }
    local_18 = *(undefined8 *)puVar8;
    FUN_03b519f0(&local_18,plVar10);
  }
  return;
}

