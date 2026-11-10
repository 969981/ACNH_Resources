
void FUN_0020e760(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  undefined4 local_3c;
  undefined1 auStack_38 [24];
  
  lVar12 = *(long *)(*(long *)(param_1 + 0x2f0) + 0xc0);
  *(undefined8 *)(lVar12 + 0x80) = *(undefined8 *)(param_1 + 0x4a0);
  plVar13 = *(long **)(*(long *)(param_1 + 0x4c0) + 0x10);
  (**(code **)(*plVar13 + 0x40))(plVar13,lVar12);
  plVar8 = (long *)plVar13[2];
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    iVar11 = (int)*plVar1;
    iVar10 = (int)*plVar1 + -1;
    if (iVar11 != (int)*plVar1) {
      ClearExclusiveLocal();
LAB_0020e830:
      do {
        lVar5 = *plVar1;
        iVar10 = iVar11 + -1;
        if ((int)lVar5 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0020e7dc;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = (int)lVar5;
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_0020e830;
LAB_0020e7dc:
    if ((iVar10 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar8 + 0xc) = 1;
      (**(code **)(*plVar8 + 8))();
      plVar13[2] = 0;
    }
    else {
      plVar13[2] = 0;
    }
    if (lVar12 == 0) goto LAB_0020e864;
  }
  plVar13[2] = lVar12;
  piVar2 = (int *)(lVar12 + 8);
  iVar11 = *piVar2;
  if (iVar11 == *piVar2) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = *piVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
LAB_0020e864:
      lVar12 = param_1 + 0x138;
      FUN_001984a0(lVar12);
      *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_1 + 0x4a8);
      uVar9 = FUN_001a52f4(*(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(param_1 + 0x2f0) + 0xc0) + 0x70) + 0x30),
                           lVar12,*(undefined8 *)(param_1 + 0x498));
      if ((uVar9 & 1) == 0) {
        local_3c = 0x10001;
        FUN_0018aa70(auStack_38,&local_3c);
        FUN_0020c3fc(param_1,auStack_38);
        *(undefined8 *)(param_1 + 0x498) = 0;
        return;
      }
      FUN_0019c910(param_1,2);
      plVar8 = (long *)FUN_00185a6c(0x20);
      puVar7 = PTR_LAB_04bcccd8;
      puVar6 = PTR_DAT_04bcc0c0;
      if (plVar8 != (long *)0x0) {
        plVar8[2] = 0;
        plVar8[3] = (long)&DAT_0407ebb1;
        *plVar8 = (long)(puVar6 + 0x10);
        plVar8[1] = (long)puVar7;
      }
      FUN_0019ab80(param_1,lVar12);
      *(undefined8 *)(param_1 + 0x498) = 0;
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    iVar10 = *piVar2;
    if (iVar10 == iVar11) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_0020e864;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar10;
  } while( true );
}

