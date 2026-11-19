
void FUN_038ca710(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  
  puVar1 = (uint *)(param_1 + 0xd0);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = *puVar1 & 0xfffffffd | 2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar2 = param_1 + 0x70;
  if (*(long *)(param_1 + 0x78) != lVar2) {
    uVar6 = *(uint *)(param_1 + 0x84);
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x78) - (long)(int)uVar6);
    uVar7 = (ulong)uVar6;
    if (param_2 == (undefined8 *)0x0 && param_3 == (undefined8 *)0x0) {
      do {
        if (puVar5[1] == 0) {
          puVar5 = (undefined8 *)
                   (*(long *)((long)puVar5 + (long)(int)uVar6 + 8) + (long)(int)-uVar6);
          lVar8 = (long)-(int)uVar7;
        }
        else {
          (**(code **)*puVar5)();
          uVar6 = *(uint *)(param_1 + 0x84);
          uVar7 = (ulong)(int)uVar6;
          lVar8 = -uVar7;
          puVar5 = (undefined8 *)(*(long *)(param_1 + 0x78) - uVar7);
        }
      } while (puVar5 != (undefined8 *)(lVar8 + lVar2));
    }
    else {
      do {
        if ((puVar5[1] == 0 || puVar5 < param_2) || param_3 <= puVar5) {
          puVar5 = (undefined8 *)
                   (*(long *)((long)puVar5 + (long)(int)uVar6 + 8) + (long)(int)-uVar6);
          lVar8 = (long)-(int)uVar7;
        }
        else {
          (**(code **)*puVar5)();
          uVar6 = *(uint *)(param_1 + 0x84);
          uVar7 = (ulong)(int)uVar6;
          lVar8 = -uVar7;
          puVar5 = (undefined8 *)(*(long *)(param_1 + 0x78) - uVar7);
        }
      } while (puVar5 != (undefined8 *)(lVar8 + lVar2));
    }
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = *puVar1 & 0xfffffffd;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return;
}

