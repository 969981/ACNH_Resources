
void FUN_001c54f0(long *param_1)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  bool bVar8;
  long *plVar9;
  uint *puVar10;
  int iVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  
  *param_1 = (long)(PTR_DAT_04bcc678 + 0x10);
  FUN_001c4420();
  if (param_1[0x20] != 0) {
    FUN_001c5a20(param_1[1] + 0x40);
    plVar9 = (long *)param_1[0x20];
    plVar15 = plVar9 + 1;
    iVar13 = (int)*plVar15;
    iVar11 = (int)*plVar15 + -1;
    if (iVar13 != (int)*plVar15) {
      ClearExclusiveLocal();
LAB_001c5704:
      do {
        lVar14 = *plVar15;
        iVar11 = iVar13 + -1;
        if ((int)lVar14 == iVar13) {
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar8) {
            *(int *)plVar15 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_001c5568;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar13 = (int)lVar14;
      } while( true );
    }
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar8) {
      *(int *)plVar15 = iVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_001c5704;
LAB_001c5568:
    if ((iVar11 == 0) && (*(char *)((long)plVar9 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar9 + 0xc) = 1;
      (**(code **)(*plVar9 + 8))();
    }
    param_1[0x20] = 0;
  }
  puVar6 = PTR_DAT_04bcb910;
  puVar5 = PTR_DAT_04bcb908;
  puVar4 = PTR_DAT_04bcb900;
  plVar15 = (long *)param_1[0x1c];
  if (plVar15 != (long *)param_1[0x1d]) {
    do {
      lVar14 = *plVar15;
      plVar9 = (long *)(puVar4 + 0x28);
      if (*puVar5 != '\0') {
        puVar10 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
        uVar2 = *puVar10;
        if (uVar2 != 0) {
          lVar1 = **(long **)(puVar4 + 0xa0);
          if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar1 >> 3) <= (ulong)uVar2)
          goto LAB_001c5a08;
          plVar9 = (long *)(*(long *)(lVar1 + (ulong)uVar2 * 8) + 0x20);
        }
      }
      (**(code **)(*(long *)(*(long *)(*(long *)(*plVar9 + 0x10) + 0x10) + 0x78) + 0x10))();
      plVar9 = *(long **)(lVar14 + 8);
      while (((long *)(*plVar15 + 0x10) != plVar9 && (plVar9[6] != 0))) {
        FUN_001c5a20(param_1[1] + 0x40);
        plVar7 = (long *)plVar9[1];
        plVar12 = plVar9;
        if ((long *)plVar9[1] == (long *)0x0) {
          do {
            plVar9 = (long *)plVar12[2];
            bVar8 = (long *)*plVar9 != plVar12;
            plVar12 = plVar9;
          } while (bVar8);
        }
        else {
          do {
            plVar9 = plVar7;
            plVar7 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
      }
      plVar9 = (long *)(puVar4 + 0x28);
      if (*puVar5 != '\0') {
        puVar10 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
        uVar2 = *puVar10;
        if (uVar2 != 0) {
          lVar14 = **(long **)(puVar4 + 0xa0);
          if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar14 >> 3) <= (ulong)uVar2) {
LAB_001c5a08:
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar9 = (long *)(*(long *)(lVar14 + (ulong)uVar2 * 8) + 0x20);
        }
      }
      (**(code **)(*(long *)(*(long *)(*(long *)(*plVar9 + 0x10) + 0x10) + 0x78) + 0x20))();
      FUN_001c5d90(*plVar15);
      lVar14 = *plVar15;
      if (lVar14 != 0) {
        FUN_001d65cc(lVar14);
        FUN_00185ac4(lVar14);
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != (long *)param_1[0x1d]);
  }
  for (plVar15 = (long *)param_1[0x19]; plVar15 != (long *)param_1[0x1a]; plVar15 = plVar15 + 1) {
    FUN_001c3c10(*plVar15);
    lVar14 = *plVar15;
    if (lVar14 != 0) {
      FUN_001c3be8(lVar14);
      FUN_00185ac4(lVar14);
    }
  }
  plVar15 = (long *)param_1[0x37];
  if (plVar15 != (long *)param_1[0x38]) {
    do {
      plVar9 = (long *)*plVar15;
      if (plVar9 != (long *)0x0) {
        plVar7 = plVar9 + 1;
        iVar13 = (int)*plVar7;
        iVar11 = (int)*plVar7 + -1;
        if (iVar13 != (int)*plVar7) {
          ClearExclusiveLocal();
LAB_001c5800:
          do {
            lVar14 = *plVar7;
            iVar11 = iVar13 + -1;
            if ((int)lVar14 == iVar13) {
              cVar3 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar8) {
                *(int *)plVar7 = iVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_001c57d0;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar13 = (int)lVar14;
          } while( true );
        }
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar8) {
          *(int *)plVar7 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_001c5800;
LAB_001c57d0:
        if ((iVar11 == 0) && (*(char *)((long)plVar9 + 0xc) == '\0')) {
          *(undefined1 *)((long)plVar9 + 0xc) = 1;
          (**(code **)(*plVar9 + 8))();
        }
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != (long *)param_1[0x38]);
  }
  if ((long *)param_1[100] != (long *)0x0) {
    (**(code **)(*(long *)param_1[100] + 8))();
  }
  FUN_001a2a3c(param_1 + 0x96,param_1[0x97]);
  plVar15 = (long *)param_1[0x60];
  param_1[0x5e] = (long)(PTR_DAT_04bcc680 + 0x10);
  if (plVar15 != (long *)0x0) {
    plVar9 = plVar15 + 1;
    iVar13 = (int)*plVar9;
    iVar11 = (int)*plVar9 + -1;
    if (iVar13 != (int)*plVar9) {
      ClearExclusiveLocal();
LAB_001c5980:
      do {
        lVar14 = *plVar9;
        iVar11 = iVar13 + -1;
        if ((int)lVar14 == iVar13) {
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar8) {
            *(int *)plVar9 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_001c5898;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar13 = (int)lVar14;
      } while( true );
    }
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar8) {
      *(int *)plVar9 = iVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_001c5980;
LAB_001c5898:
    if ((iVar11 == 0) && (*(char *)((long)plVar15 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar15 + 0xc) = 1;
      (**(code **)(*plVar15 + 8))();
    }
  }
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x61] = 0;
  FUN_0018a360(param_1 + 0x43);
  if (param_1[0x40] != 0) {
    FUN_00187e4c();
  }
  if (param_1[0x3a] != 0) {
    param_1[0x3b] = param_1[0x3a];
    FUN_00187e4c();
  }
  if (param_1[0x37] != 0) {
    param_1[0x38] = param_1[0x37];
    FUN_00187e4c();
  }
  FUN_001d6570(param_1 + 0x24);
  if (param_1[0x1c] != 0) {
    param_1[0x1d] = param_1[0x1c];
    FUN_00187e4c();
  }
  if (param_1[0x19] != 0) {
    param_1[0x1a] = param_1[0x19];
    FUN_00187e4c();
  }
  plVar15 = (long *)param_1[1];
  *param_1 = (long)(PTR_DAT_04bcc310 + 0x10);
  if (plVar15 == (long *)0x0) {
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
  else {
    if ((int)param_1[0x12] == 0) {
      *(undefined4 *)(param_1 + 0x12) = 0;
      lVar14 = param_1[0x13];
    }
    else {
      (**(code **)(*plVar15 + 0xf8))(plVar15,(int)param_1[0x12],param_1);
      plVar15 = (long *)param_1[1];
      *(undefined4 *)(param_1 + 0x12) = 0;
      if (plVar15 == (long *)0x0) goto LAB_001c59cc;
      lVar14 = param_1[0x13];
    }
    if (lVar14 != 0) {
      (**(code **)(*plVar15 + 0xe8))(plVar15,lVar14,param_1);
    }
  }
LAB_001c59cc:
  param_1[0x13] = 0;
  (**(code **)(**(long **)PTR_DAT_04bcc2e0 + 0x20))(*(long **)PTR_DAT_04bcc2e0,param_1 + 2);
  FUN_001b8504(param_1 + 2);
  return;
}

