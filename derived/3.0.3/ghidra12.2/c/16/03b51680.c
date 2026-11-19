
void FUN_03b51680(long param_1,ushort param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  undefined2 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  ulong local_38;
  
  if (*(int *)(param_3 + 0xc) != -1) {
    if (*(char *)(param_1 + 0x1f0) != '\0') {
      lVar11 = *(long *)(param_1 + 0x178);
      plVar1 = (long *)(lVar11 + 0x60);
      plVar12 = plVar1;
      if (*(ushort *)(lVar11 + 0x1f0) != param_2) {
        if (*(char *)(lVar11 + 0x28) == '\0') {
          plVar12 = (long *)0x0;
        }
        else {
          plVar12 = (long *)0x0;
          if ((((param_2 != 0xffff) && (*(long *)(lVar11 + 0x30) != 0)) &&
              ((int)(uint)param_2 < *(int *)(lVar11 + 0x48))) &&
             (plVar12 = (long *)(*(long *)(lVar11 + 0x30) + (ulong)param_2 * 0xe8),
             *(ushort *)(plVar12 + 0x1c) != param_2)) {
            plVar12 = (long *)0x0;
          }
        }
      }
      uVar9 = (**(code **)(*plVar1 + 0x48))(plVar1);
      if (((*(uint *)((long)plVar12 + (ulong)(uVar9 >> 5 & 0x7ff) * 4 + 0x10) >>
            (ulong)(uVar9 & 0x1f) & 1) != 0) && ((int)plVar12[0x12] == 1)) {
        uVar8 = (**(code **)(*plVar1 + 0x48))(plVar1);
        local_38 = CONCAT62(local_38._2_6_,uVar8);
        local_38 = local_38 & 0xffffffff;
        FUN_03b56150(plVar12 + 5,&local_38,0);
      }
    }
    uVar5 = *(undefined4 *)(param_3 + 0xc);
    lVar11 = *(long *)(DAT_05aebb88 + 0x188);
    piVar2 = (int *)(lVar11 + 0x40);
    if (*piVar2 == 0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      puVar3 = (uint *)(lVar11 + 0x38);
      do {
        while( true ) {
          uVar9 = *puVar3;
          if (*puVar3 == uVar9) break;
          ClearExclusiveLocal();
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar7) {
          *puVar3 = (uint)*(ushort *)(*(long *)(lVar11 + 0x30) + (ulong)uVar9 * 2);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      piVar4 = (int *)(lVar11 + 0x10);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = *piVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      puVar10 = (undefined8 *)(*(long *)(lVar11 + 0x18) + ((ulong)uVar9 & 0xffff) * 0x40);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = *piVar2 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(ushort *)(puVar10 + 1) = param_2;
      *(undefined4 *)((long)puVar10 + 0xc) = uVar5;
      *puVar10 = &PTR_LAB_04b77638;
    }
    local_38 = DAT_05aebb88;
    FUN_03b519f0(&local_38,puVar10);
  }
  return;
}

