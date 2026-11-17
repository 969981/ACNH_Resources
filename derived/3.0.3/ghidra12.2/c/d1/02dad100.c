
void FUN_02dad100(long param_1)

{
  long *plVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  byte *pbVar6;
  long lVar7;
  long *plVar8;
  undefined *local_a0 [4];
  undefined **local_80;
  long lStack_78;
  undefined *local_60 [4];
  
  if (*(int *)(param_1 + 0x28) == 1) {
    if (*(char **)(param_1 + 0x30) == (char *)0x0) {
      return;
    }
    if (**(char **)(param_1 + 0x30) == '\0') {
      return;
    }
    plVar8 = *(long **)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x28) = 2;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (plVar8 == (long *)0x0) {
      return;
    }
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
      return;
    }
    return;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    return;
  }
  local_a0[0] = PTR_DAT_04bc9988 + 0x10;
  local_60[0] = PTR_DAT_04bc9998 + 0x10;
  lVar7 = *(long *)PTR_DAT_04bb39b0;
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar7 == 0) {
LAB_02dad228:
    if (7 < *pbVar6) {
LAB_02dad234:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar7 = **(long **)PTR_DAT_04bb27d0;
        bVar5 = *(byte *)(lVar7 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar2 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar6 = (byte *)(lVar7 + 0x471);
          }
        }
        bVar5 = *pbVar6;
        if (bVar5 < 8) goto LAB_02dad2a4;
      }
      pbVar6 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02dad228;
      }
      goto LAB_02dad234;
    }
  }
  bVar5 = *pbVar6;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
LAB_02dad2a4:
  local_80 = &PTR_LAB_04ac46f0;
  lVar7 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x10);
  if (*(int *)(lVar7 + 0x90) == 0) {
    *(undefined4 *)(lVar7 + 0xd8) = 0xffffffff;
    *(undefined4 *)(lVar7 + 0xd0) = 0xf8;
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    *(byte *)(lVar7 + 0xd4) = bVar5;
    *(undefined2 *)(lVar7 + 0xdc) = 0x101;
    *(undefined1 *)(lVar7 + 0xde) = 1;
    lStack_78 = param_1;
    FUN_033b600c(local_a0,lVar7 + 0xe0);
    (*(code *)local_80[2])(&local_80,lVar7 + 0x100);
    (**(code **)(local_60[0] + 0x10))(local_60,lVar7 + 0x120);
    FUN_03ebb160(lVar7 + 0x88,1);
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  return;
}

