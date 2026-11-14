
undefined8 FUN_01586240(long param_1,uint *param_2,uint *param_3)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  long *plVar9;
  undefined8 local_b8;
  undefined **local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_90;
  undefined8 local_88;
  long lStack_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *local_60;
  char *local_58;
  
  if (*(char *)(param_1 + 0x3a0) == '\0') {
    return 0;
  }
  uVar7 = *param_2;
  if (uVar7 != *(uint *)PTR_DAT_04bb4b48 && *param_3 != *(uint *)PTR_DAT_04bb4b48) {
    if ((uVar7 & 0x38) == 0x10) {
      pcVar1 = (char *)(param_1 + 0x5d8);
      if ((uVar7 & 0xfff8) != 0x50) {
        pcVar1 = (char *)(param_1 + 0x518);
      }
      if (*pcVar1 == '\0') {
        return 0;
      }
    }
    else {
      if (uVar7 != *(uint *)(param_1 + 0x5ec)) {
        return 0;
      }
      uVar7 = *(uint *)(param_1 + 0x5c8);
    }
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,2);
    puVar8 = (uint *)(param_1 + 0xf8);
    if ((*puVar8 >> 2 & 1) == 0) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x490));
      if (*(int *)(param_1 + 0x468) < 1) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = *(long **)(param_1 + 0x460);
        if (*plVar9 != 0) {
          *(long *)(*plVar9 + 8) = plVar9[1];
        }
        if ((long *)plVar9[1] != (long *)0x0) {
          *(long *)plVar9[1] = *plVar9;
        }
        *plVar9 = 0;
        plVar9[1] = 0;
        *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + -1;
      }
      iVar2 = *(int *)(param_1 + 0x46c);
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x490));
      if (plVar9 == (long *)0x0) {
        return 0;
      }
      local_78 = (long)plVar9 - (long)iVar2;
      if (local_78 == 0) {
        return 0;
      }
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar4) {
          *puVar8 = *puVar8 | 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *(undefined4 *)(local_78 + 0x3c) = 1;
      *(ushort *)(local_78 + 0x38) = *(ushort *)(local_78 + 0x38) | 0x20;
      *(uint *)(local_78 + 0x20) = *param_3;
      *(uint *)(param_1 + 0x5e8) = uVar7;
      *(undefined8 *)(local_78 + 0x24) = 0x21c000003c0;
      lVar6 = param_1 + 0x5c8;
      if ((uVar7 & 0xfff8) != 0x50) {
        lVar6 = param_1 + 0x508;
      }
      uVar5 = *(undefined8 *)(lVar6 + 8);
      *(undefined8 *)(local_78 + 0x10) = *(undefined8 *)(lVar6 + 0x18);
      *(undefined8 *)(local_78 + 0x18) = uVar5;
      *(undefined4 *)(local_78 + 0x3c) = 2;
      lVar6 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x120) + 0x38);
      if ((lVar6 != 0) && (*(long *)(lVar6 + 0x20) != 0)) {
        local_98 = 0;
        local_a0 = PTR_DAT_04bb5070 + 0x10;
        local_60 = PTR_DAT_04bb2020 + 0x10;
        local_90 = 0;
        local_b8 = 0;
        local_96 = 1;
        lStack_80 = param_1 + 0x78;
        local_88 = *(undefined8 *)(lVar6 + 8);
        uStack_70 = 0;
        local_b0 = &local_a0;
        local_68 = 0;
        local_58 = "HotelRoomPhotographTemporaryCaptureSave";
        uStack_a8 = 0;
        FUN_03f45184(*(long *)(lVar6 + 0x20),&local_b8);
      }
      return 1;
    }
  }
  return 0;
}

