
void FUN_02605e50(long param_1,UserHandle *param_2)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined1 uVar9;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (DAT_05554928 == 0) {
    return;
  }
  if (*(char *)(DAT_05554928 + 0xb1) != '\0') {
    return;
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  cVar2 = *(char *)(DAT_05554928 + 0xb0);
  if (*(long *)(*(long *)(param_1 + 8) + 0x30) != 0) {
    nn::prepo::PlayReport::GetSize();
  }
  if (cVar2 == '\0') {
    return;
  }
  iVar5 = nn::account::GetUserId((Uid *)&local_40,param_2);
  lVar6 = *(long *)(param_1 + 8);
  if (iVar5 == 0) {
    *(undefined8 *)(lVar6 + 0x48) = local_40;
    *(undefined8 *)(lVar6 + 0x50) = uStack_38;
  }
  else {
    *(undefined8 *)(lVar6 + 0x48) = 0;
    *(undefined8 *)(lVar6 + 0x50) = 0;
  }
  lVar6 = *(long *)(param_1 + 8);
  puVar1 = (uint *)(lVar6 + 0x38);
  do {
    uVar8 = *puVar1;
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar8 | 2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((uVar8 & 2) == 0) {
    lVar7 = *(long *)(*(long *)PTR_DAT_04bc3578 + 8);
    puVar1 = (uint *)(lVar7 + 0x120);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)(*(uint *)(lVar7 + 0x118) - *(int *)(lVar7 + 0x11c)) < *(int *)(lVar7 + 0x108)) {
      puVar1 = (uint *)(lVar7 + 0x118);
      uVar8 = *(uint *)(lVar7 + 0x118);
      do {
        while (uVar3 = *puVar1, uVar8 == uVar3) {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            DataMemoryBarrier(2,3);
            uVar9 = 1;
            *(long *)(*(long *)(lVar7 + 0x110) + (ulong)(*(int *)(lVar7 + 0x108) - 1U & uVar8) * 8)
                 = lVar6;
            goto LAB_02605f9c;
          }
        }
        uVar9 = 0;
        uVar8 = uVar3;
      } while ((int)(uVar3 - *(int *)(lVar7 + 0x11c)) < *(int *)(lVar7 + 0x108));
      goto LAB_02605f9c;
    }
  }
  uVar9 = 0;
LAB_02605f9c:
  *(undefined1 *)(param_1 + 0x48) = uVar9;
  return;
}

