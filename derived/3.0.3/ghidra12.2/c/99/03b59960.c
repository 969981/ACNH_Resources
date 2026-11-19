
void FUN_03b59960(long *param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  long local_28;
  
  if (*(char *)((long)param_1 + 9) != '\0') {
    iVar4 = *(int *)((long)param_1 + 0xc);
    if (iVar4 != -1) {
      (**(code **)(*param_1 + 0x40))(param_1);
      lVar9 = *(long *)(DAT_05aebb88 + 0x188);
      piVar1 = (int *)(lVar9 + 0x40);
      if (*piVar1 == 0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        puVar2 = (uint *)(lVar9 + 0x38);
        do {
          while( true ) {
            uVar5 = *puVar2;
            if (*puVar2 == uVar5) break;
            ClearExclusiveLocal();
          }
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = (uint)*(ushort *)(*(long *)(lVar9 + 0x30) + (ulong)uVar5 * 2);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        piVar3 = (int *)(lVar9 + 0x10);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = *piVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        puVar8 = (undefined8 *)(*(long *)(lVar9 + 0x18) + ((ulong)uVar5 & 0xffff) * 0x40);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        *(int *)(puVar8 + 1) = iVar4;
        *puVar8 = &PTR_LAB_04b77690;
      }
      local_28 = DAT_05aebb88;
      FUN_03b519f0(&local_28,puVar8);
    }
    *(undefined1 *)((long)param_1 + 9) = 0;
  }
  return;
}

