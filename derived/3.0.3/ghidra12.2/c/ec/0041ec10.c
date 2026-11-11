
undefined8 FUN_0041ec10(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  undefined4 local_24;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined *)0x0;
    if (*(long *)(*(long *)(param_1 + 0x10) + 0x10) != 0) {
      puVar2 = PTR_LAB_04bd2c90;
    }
    if (puVar2 != (undefined *)0x0) {
      FUN_0041dd8c(param_1);
      plVar6 = (long *)FUN_00185a6c(0x90);
      if (plVar6 != (long *)0x0) {
        *plVar6 = (long)(PTR_DAT_04bcbc48 + 0x10);
        *(undefined4 *)(plVar6 + 1) = 1;
        *(undefined1 *)((long)plVar6 + 0xc) = 0;
        plVar6[2] = 0;
        *(undefined4 *)(plVar6 + 3) = 0;
        plVar6[10] = 0;
        plVar6[6] = 0;
        plVar6[7] = 0;
        plVar6[8] = 0;
        plVar6[9] = 0;
        *plVar6 = (long)&PTR_FUN_04839418;
        plVar6[4] = (long)(plVar6 + 4);
        plVar6[5] = (long)(plVar6 + 4);
        local_24 = 0x80010001;
        FUN_0018aa70(plVar6 + 0xb,&local_24);
        plVar6[0xe] = 0;
        *(undefined4 *)(plVar6 + 0xf) = 0;
        plVar6[0x10] = 0;
        plVar6[0x11] = 0;
      }
      FUN_001990bc(plVar6,2);
      if ((*(int *)((long)plVar6 + 0x14) != 1) && (*(long *)(param_1 + 0x10) != 0)) {
        puVar2 = (undefined *)0x0;
        if (*(long *)(*(long *)(param_1 + 0x10) + 0x10) != 0) {
          puVar2 = PTR_LAB_04bd2c90;
        }
        if (puVar2 != (undefined *)0x0) {
          FUN_0041e170(param_1);
          uVar7 = FUN_0041ef10(*(undefined8 *)(param_1 + 0x28),plVar6,param_1 + 8,param_2,0,
                               param_1 + 0x18,*(undefined4 *)(param_1 + 0x30));
          if ((uVar7 & 1) != 0) {
            *(int *)(param_1 + 0x44) = (int)plVar6[3];
            return 1;
          }
        }
      }
      plVar1 = plVar6 + 1;
      iVar9 = (int)*plVar1;
      iVar8 = (int)*plVar1 + -1;
      if (iVar9 == (int)*plVar1) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
LAB_0041edd4:
          if (iVar8 != 0) {
            return 0;
          }
          if (*(char *)((long)plVar6 + 0xc) == '\0') {
            *(undefined1 *)((long)plVar6 + 0xc) = 1;
            (**(code **)(*plVar6 + 8))(plVar6);
            return 0;
          }
          return 0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        lVar5 = *plVar1;
        iVar8 = iVar9 + -1;
        if ((int)lVar5 == iVar9) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0041edd4;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = (int)lVar5;
      } while( true );
    }
  }
  return 0;
}

