
void FUN_001e5ab0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  int *piVar18;
  undefined *local_110;
  long *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_78;
  undefined8 local_6c;
  ushort local_64;
  long local_58;
  
  (**(code **)(**(long **)(*(long *)(param_1 + 0xb0) + 0x10) + 0x88))();
  if ((*(int *)(param_1 + 0x9c) != 0) &&
     (uVar12 = (**(code **)(**(long **)(*(long *)(param_1 + 0xb0) + 0x10) + 0x48))(),
     (uVar12 & 1) != 0)) {
    lVar15 = *(long *)(*(long *)(param_1 + 0xd0) + 0x10);
    plVar16 = (long *)(lVar15 + 0xb8);
    (**(code **)(*plVar16 + 0x10))(plVar16);
    FUN_001e9dd0(lVar15);
    FUN_001eacf0(lVar15);
    (**(code **)(*plVar16 + 0x20))(plVar16);
    puVar9 = PTR_DAT_04bcbf30;
    puVar8 = PTR_DAT_04bcbf10;
    puVar1 = PTR_DAT_04bcbf40 + 0x10;
    puVar2 = PTR_DAT_04bcbf30 + 0x10;
    puVar3 = PTR_DAT_04bcbf48 + 0x10;
    while( true ) {
      local_100 = 0;
      if (*(long *)(param_1 + 0xb0) != 0) {
        local_100 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x10);
      }
      uStack_f8 = 1;
      uVar12 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))
                         (*(long **)(param_1 + 0xb8),&local_100,1,0);
      if (((uVar12 & 1) == 0) || ((uStack_f8 & 0x100000000) == 0)) break;
      local_6c = 0;
      local_64 = 0;
      plVar16 = *(long **)(*(long *)(param_1 + 0xb0) + 0x10);
      uVar11 = (**(code **)(*plVar16 + 0x60))(plVar16,&local_6c,&local_58);
      uVar12 = FUN_001e2c34(param_1,uVar11);
      if ((uVar12 & 1) == 0) {
        return;
      }
      FUN_001e1500(&local_100);
      uVar11 = nn::socket::InetHtonl((uint)local_6c);
      uStack_f8 = CONCAT44(uVar11,(undefined4)uStack_f8);
      uVar10 = nn::socket::InetHtons(local_64);
      lVar15 = local_58;
      uStack_f8._0_4_ = CONCAT22(uVar10,(undefined2)uStack_f8);
      local_78 = local_6c._4_4_;
      lVar17 = *(long *)(puVar8 + (ulong)*(uint *)(param_1 + 0x9c) * 8);
      local_110 = puVar2;
      local_108 = (long *)FUN_00185a6c(0x20);
      if (local_108 != (long *)0x0) {
        *local_108 = (long)puVar1;
        *(undefined4 *)(local_108 + 1) = 1;
        *(undefined4 *)((long)local_108 + 0xc) = 1;
        *local_108 = (long)puVar3;
        local_108[2] = lVar15;
        local_108[3] = lVar17;
      }
      FUN_001e3aa0(*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x10),&local_100,&local_110);
      plVar16 = local_108;
      local_110 = puVar9 + 0x10;
      if (local_108 != (long *)0x0) {
        plVar4 = local_108 + 1;
        iVar14 = (int)*plVar4;
        iVar13 = (int)*plVar4 + -1;
        if (iVar14 != (int)*plVar4) {
          ClearExclusiveLocal();
LAB_001e5d00:
          do {
            lVar15 = *plVar4;
            iVar13 = iVar14 + -1;
            if ((int)lVar15 == iVar14) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar7) {
                *(int *)plVar4 = iVar13;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_001e5cac;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar14 = (int)lVar15;
          } while( true );
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar7) {
          *(int *)plVar4 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_001e5d00;
LAB_001e5cac:
        if (iVar13 == 0) {
          piVar18 = (int *)((long)local_108 + 0xc);
          (**(code **)(*local_108 + 0x10))(local_108);
          iVar13 = *piVar18 + -1;
          iVar14 = *piVar18;
          if (iVar14 != *piVar18) {
            ClearExclusiveLocal();
LAB_001e5d60:
            do {
              iVar5 = *piVar18;
              iVar13 = iVar14 + -1;
              if (iVar5 == iVar14) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                if (bVar7) {
                  *piVar18 = iVar13;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') goto LAB_001e5d34;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar14 = iVar5;
            } while( true );
          }
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar7) {
            *piVar18 = iVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_001e5d60;
LAB_001e5d34:
          if (iVar13 == 0) {
            (**(code **)(*plVar16 + 8))(plVar16);
          }
        }
      }
      FUN_001e1868(&local_100);
    }
  }
  return;
}

