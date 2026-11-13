
void FUN_014c97d0(long param_1,byte *param_2)

{
  undefined *puVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  byte bVar9;
  long *plVar10;
  long lVar11;
  
  bVar9 = *param_2;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  *(byte *)(param_1 + 0x5d0) = bVar9;
  FUN_014c9928();
  FUN_014b81fc(param_1 + 0x400);
  puVar6 = PTR_DAT_04bbcf00;
  puVar5 = PTR_DAT_04bbcef8;
  if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
    lVar11 = (long)*(int *)(param_1 + 0xbc);
    plVar10 = (long *)(*(long *)(param_1 + 0xb0) - lVar11);
    puVar1 = PTR_DAT_04bb2e38 + 0x10;
    do {
      if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
        *(undefined **)puVar5 = puVar1;
        __cxa_guard_release(puVar6);
      }
      if ((plVar10 != (long *)0x0) &&
         (uVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,puVar5), (uVar8 & 1) != 0)) {
        puVar2 = (uint *)(plVar10 + 0x51);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = *puVar2 | 2;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        break;
      }
      plVar10 = (long *)(*(long *)((long)plVar10 + lVar11 + 8) - lVar11);
    } while (plVar10 != (long *)((param_1 + 0xa8) - lVar11));
  }
  *(undefined4 *)(param_1 + 0xeac) = 1;
  FUN_03ebb160(param_1 + 0x3b8,0);
  if (*(int *)(param_1 + 0x378) == 1) {
    return;
  }
  FUN_03ebb160(param_1 + 0x370);
  return;
}

