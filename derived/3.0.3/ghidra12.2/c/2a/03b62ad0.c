
void FUN_03b62ad0(float param_1,long param_2,ulong param_3,undefined4 param_4,undefined4 param_5)

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
  undefined8 local_38;
  undefined4 uStack_30;
  long *local_28;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if ((param_3 & 1) == 0) {
    FUN_03b61ec0(param_2,param_4,param_5);
    return;
  }
  if ((*(char *)(param_2 + 0x7a) != '\0') && (*(int *)(param_2 + 0x70) == 1)) {
    *(undefined4 *)(param_2 + 0x70) = 3;
    *(undefined1 *)(param_2 + 0x7d) = 1;
    puVar8 = PTR_DAT_04bd1e70;
    if (param_1 <= 0.0) {
      uVar5 = *(undefined2 *)(param_2 + 0x118);
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
        *(undefined8 *)((long)plVar10 + 0xc) = 3;
        plVar10[3] = 0;
        *(undefined4 *)(plVar10 + 4) = 0;
        plVar10[5] = 0;
        *plVar10 = (long)(puVar9 + 0x10);
      }
      local_38 = *(undefined8 *)puVar8;
      FUN_03b519f0(&local_38,plVar10);
    }
    else {
      local_1c = 0;
      local_18 = 0x3f800000;
      uStack_14 = 1;
      uVar5 = *(undefined2 *)(param_2 + 0x118);
      lVar11 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x188);
      piVar1 = (int *)(lVar11 + 0x40);
      if (*piVar1 == 0) {
        local_28 = (long *)0x0;
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
        local_28 = (long *)(*(long *)(lVar11 + 0x18) + ((ulong)uVar4 & 0xffff) * 0x40);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        *(undefined2 *)(local_28 + 1) = uVar5;
        puVar8 = PTR_DAT_04bd1f98;
        *(undefined8 *)((long)local_28 + 0xc) = 3;
        local_28[3] = 0;
        *(undefined4 *)(local_28 + 4) = 0;
        local_28[5] = 0;
        *local_28 = (long)(puVar8 + 0x10);
      }
      local_38 = CONCAT44(param_4,param_1);
      uStack_30 = param_5;
      FUN_03b62150(param_2 + 0x98,&local_18,&local_1c,&local_38,*(undefined2 *)(param_2 + 0x118),
                   &uStack_14);
    }
  }
  return;
}

