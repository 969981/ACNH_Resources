
void FUN_03b61ec0(float param_1,long param_2,undefined4 param_3,undefined4 param_4)

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
  undefined8 *puVar11;
  long lVar12;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*(char *)(param_2 + 0x7a) != '\0') {
    if (*(int *)(param_2 + 0x70) - 3U < 2) {
      *(undefined4 *)(param_2 + 0x70) = 1;
      *(undefined1 *)(param_2 + 0x7d) = 1;
      puVar8 = PTR_DAT_04bd1e70;
      uVar5 = *(undefined2 *)(param_2 + 0x118);
      lVar12 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x188);
      piVar1 = (int *)(lVar12 + 0x40);
      if (*piVar1 == 0) {
        plVar10 = (long *)0x0;
      }
      else {
        puVar2 = (uint *)(lVar12 + 0x38);
        do {
          while( true ) {
            uVar4 = *puVar2;
            if (*puVar2 == uVar4) break;
            ClearExclusiveLocal();
          }
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = (uint)*(ushort *)(*(long *)(lVar12 + 0x30) + (ulong)uVar4 * 2);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        piVar3 = (int *)(lVar12 + 0x10);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = *piVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        plVar10 = (long *)(*(long *)(lVar12 + 0x18) + ((ulong)uVar4 & 0xffff) * 0x40);
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
        *(undefined8 *)((long)plVar10 + 0xc) = 1;
        plVar10[3] = 0;
        *(undefined4 *)(plVar10 + 4) = 0;
        plVar10[5] = 0;
        *plVar10 = (long)(puVar9 + 0x10);
      }
      local_60 = *(undefined8 *)puVar8;
      FUN_03b519f0(&local_60,plVar10);
      local_34 = 1;
      if (param_1 <= 0.0) {
        if (*(float *)(param_2 + 0xa0) != 1.0) {
          uVar5 = *(undefined2 *)(param_2 + 0x118);
          lVar12 = *(long *)(*(long *)puVar8 + 0x188);
          piVar1 = (int *)(lVar12 + 0x40);
          if (*piVar1 == 0) {
            puVar11 = (undefined8 *)0x0;
          }
          else {
            puVar2 = (uint *)(lVar12 + 0x38);
            do {
              while( true ) {
                uVar4 = *puVar2;
                if (*puVar2 == uVar4) break;
                ClearExclusiveLocal();
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *puVar2 = (uint)*(ushort *)(*(long *)(lVar12 + 0x30) + (ulong)uVar4 * 2);
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            piVar3 = (int *)(lVar12 + 0x10);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar7) {
                *piVar3 = *piVar3 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            puVar11 = (undefined8 *)(*(long *)(lVar12 + 0x18) + ((ulong)uVar4 & 0xffff) * 0x40);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = *piVar1 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            *(undefined2 *)((long)puVar11 + 0xc) = uVar5;
            *(undefined4 *)(puVar11 + 1) = 0x3f800000;
            *puVar11 = &PTR_LAB_04b779c0;
            *(undefined4 *)(puVar11 + 2) = 1;
          }
          local_60 = *(undefined8 *)puVar8;
          FUN_03b519f0(&local_60,puVar11);
        }
        *(undefined4 *)(param_2 + 0xa0) = 0x3f800000;
        plVar10 = *(long **)(param_2 + 0xa8);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x10))();
          *(long *)(param_2 + 0xa8) = 0;
        }
      }
      else {
        local_38 = 0;
        local_44 = 0x3f800000;
        local_60 = CONCAT44(param_3,param_1);
        local_50 = 0;
        uStack_58 = param_4;
        FUN_03b62150(param_2 + 0x98,&local_38,&local_44,&local_60,*(undefined2 *)(param_2 + 0x118),
                     &local_34);
      }
    }
  }
  return;
}

