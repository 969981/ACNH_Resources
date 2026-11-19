
void FUN_03b527f0(undefined4 param_1,long *param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined2 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long local_18;
  
  if (*(char *)((long)param_2 + 0x7c) != '\0') {
    *(undefined4 *)(param_2 + 0xf) = param_1;
    uVar7 = (**(code **)(*param_2 + 0x48))();
    lVar9 = *(long *)(DAT_05aebb88 + 0x188);
    piVar1 = (int *)(lVar9 + 0x40);
    if (*piVar1 == 0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (uint *)(lVar9 + 0x38);
      do {
        while( true ) {
          uVar4 = *puVar2;
          if (*puVar2 == uVar4) break;
          ClearExclusiveLocal();
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = (uint)*(ushort *)(*(long *)(lVar9 + 0x30) + (ulong)uVar4 * 2);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      piVar3 = (int *)(lVar9 + 0x10);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      puVar8 = (undefined8 *)(*(long *)(lVar9 + 0x18) + ((ulong)uVar4 & 0xffff) * 0x40);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(undefined2 *)(puVar8 + 1) = uVar7;
      *(undefined4 *)((long)puVar8 + 0xc) = param_1;
      *puVar8 = &PTR_LAB_04b777a0;
    }
    local_18 = DAT_05aebb88;
    FUN_03b519f0(&local_18,puVar8);
  }
  return;
}

