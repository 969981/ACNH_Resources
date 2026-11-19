
void FUN_03b61cc0(long param_1,uint param_2,long *param_3)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined8 local_48;
  long lStack_40;
  long local_38;
  
  puVar9 = PTR_DAT_04bd1e70;
  if (*(char *)(param_1 + 0x7a) != '\0') {
    if ((int)param_2 < (int)*(uint *)(param_1 + 0xf8)) {
      if (param_2 < *(uint *)(param_1 + 0xf8)) {
        uVar5 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
        lVar11 = param_1 + 0xe8;
        uVar12 = uVar5 + 1;
        uVar4 = uVar12 & 3;
        if (2 < uVar5) {
          uVar12 = uVar12 & 0xfffffffc;
          do {
            uVar12 = uVar12 - 4;
            lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(lVar11 + 8) + 8) + 8) + 8);
          } while (uVar12 != 0);
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          lVar11 = *(long *)(lVar11 + 8);
        }
      }
      else {
        lVar11 = 0;
      }
      lVar14 = 0;
      if (lVar11 != 0) {
        lVar14 = lVar11 - *(int *)(param_1 + 0xfc);
      }
    }
    else {
      lVar14 = 0;
    }
    uVar6 = *(undefined2 *)(param_1 + 0x118);
    if (((*param_3 != *(long *)(lVar14 + 0x1b8)) || (param_3[1] != *(long *)(lVar14 + 0x1c0))) ||
       (param_3[2] != *(long *)(lVar14 + 0x1c8))) {
      lVar11 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x188);
      piVar1 = (int *)(lVar11 + 0x40);
      if (*piVar1 == 0) {
        plVar10 = (long *)0x0;
      }
      else {
        puVar2 = (uint *)(lVar11 + 0x38);
        do {
          while( true ) {
            uVar12 = *puVar2;
            if (*puVar2 == uVar12) break;
            ClearExclusiveLocal();
          }
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = (uint)*(ushort *)(*(long *)(lVar11 + 0x30) + (ulong)uVar12 * 2);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        piVar3 = (int *)(lVar11 + 0x10);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = *piVar3 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        plVar10 = (long *)(*(long *)(lVar11 + 0x18) + ((ulong)uVar12 & 0xffff) * 0x40);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = *piVar1 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        *plVar10 = (long)(PTR_DAT_04bd2008 + 0x10);
        lVar11 = *param_3;
        lStack_40 = param_3[1];
        local_38 = param_3[2];
        *(undefined2 *)(plVar10 + 4) = uVar6;
        *(uint *)((long)plVar10 + 0x24) = param_2;
        *plVar10 = (long)&PTR_LAB_04b77a18;
        plVar10[1] = lVar11;
        plVar10[2] = lStack_40;
        plVar10[3] = local_38;
      }
      local_48 = *(undefined8 *)puVar9;
      FUN_03b519f0(&local_48,plVar10);
    }
    lVar11 = *param_3;
    lVar13 = param_3[2];
    *(long *)(lVar14 + 0x1c0) = param_3[1];
    *(long *)(lVar14 + 0x1c8) = lVar13;
    *(long *)(lVar14 + 0x1b8) = lVar11;
    plVar10 = *(long **)(lVar14 + 0x1e8);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x10))();
      *(long *)(lVar14 + 0x1e8) = 0;
    }
  }
  return;
}

