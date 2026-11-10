
void FUN_0019b430(long *param_1)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  uint *puVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  long *plVar11;
  long *plVar12;
  undefined1 auStack_38 [24];
  
  *param_1 = (long)(PTR_DAT_04bcc110 + 0x10);
  puVar4 = PTR_DAT_04bcb900;
  plVar11 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar5;
    if (uVar2 != 0) {
      lVar7 = **(long **)(puVar4 + 0xa0);
      if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar11 = (long *)(*(long *)(lVar7 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x10), lVar7 == 0)) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  plVar11 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  FUN_0019b6c8(*(undefined8 *)(param_1[4] + 0x78));
  (**(code **)(*plVar11 + 0x20))(plVar11);
  FUN_0019b830(auStack_38,param_1[4],0xffffffff);
  FUN_0019b960(param_1[2],60000,1);
  lVar7 = *(long *)(param_1[4] + 0x78);
  plVar6 = *(long **)(lVar7 + 0x50);
  plVar11 = (long *)(lVar7 + 0x48);
  if (plVar6 != plVar11) {
    plVar12 = (long *)param_1[3];
    do {
      if ((long *)plVar6[2] == plVar12) {
        if (plVar6 != plVar11) {
          lVar1 = *plVar6;
          *(long *)(lVar1 + 8) = plVar6[1];
          *(long *)plVar6[1] = lVar1;
          *(long *)(lVar7 + 0x58) = *(long *)(lVar7 + 0x58) + -1;
          FUN_00187e4c();
          plVar11 = plVar12 + 1;
          lVar7 = *plVar11;
          iVar8 = (int)*plVar11 + -1;
          if ((int)lVar7 == (int)*plVar11) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar10) {
              *(int *)plVar11 = iVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_0019b5b0;
            bVar10 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_0019b5b0:
            bVar10 = false;
          }
          iVar9 = (int)lVar7;
          if (!bVar10) goto LAB_0019b6a0;
          goto LAB_0019b5b8;
        }
        break;
      }
      plVar6 = (long *)plVar6[1];
    } while (plVar6 != plVar11);
  }
LAB_0019b5dc:
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 8))();
  }
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
  }
  puVar4 = PTR_DAT_04bcc088;
  (**(code **)(*(long *)PTR_DAT_04bcc088 + 0x10))(PTR_DAT_04bcc088);
  *(int *)PTR_DAT_04bcc118 = *(int *)PTR_DAT_04bcc118 + -1;
  (**(code **)(*(long *)puVar4 + 0x20))(puVar4);
  FUN_0018e9f8();
  FUN_0018ac30(param_1 + 0xf);
  FUN_0019c5fc(param_1 + 6);
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  return;
LAB_0019b6a0:
  lVar7 = *plVar11;
  iVar8 = iVar9 + -1;
  if ((int)lVar7 == iVar9) {
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar10) {
      *(int *)plVar11 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0019b5b8;
  }
  else {
    ClearExclusiveLocal();
  }
  iVar9 = (int)lVar7;
  goto LAB_0019b6a0;
LAB_0019b5b8:
  if ((iVar8 == 0) && (*(char *)((long)plVar12 + 0xc) == '\0')) {
    *(undefined1 *)((long)plVar12 + 0xc) = 1;
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  goto LAB_0019b5dc;
}

