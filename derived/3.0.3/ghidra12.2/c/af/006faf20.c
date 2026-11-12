
void FUN_006faf20(long param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  puVar1 = (uint *)(param_1 + 0x248);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = *puVar1 & 0xffffffef;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar11 = (long *)(param_1 + 0xa8);
  iVar6 = *(int *)(param_1 + 0xbc);
  lVar12 = (long)iVar6;
  lVar9 = -lVar12;
  plVar10 = (long *)((long)plVar11 - lVar12);
  if ((long *)*plVar11 != plVar11) {
    plVar8 = (long *)(*plVar11 - lVar12);
    do {
      (**(code **)(*plVar8 + 0x88))(plVar8);
      plVar8 = (long *)(*(long *)((long)plVar8 + lVar12) + lVar9);
    } while (plVar8 != plVar10);
    iVar6 = *(int *)(param_1 + 0xbc);
    lVar9 = -(long)iVar6;
    plVar10 = (long *)((long)plVar11 - (long)iVar6);
  }
  plVar11 = (long *)(lVar9 + *(long *)(param_1 + 0xb0));
  if (plVar10 != plVar11) {
    do {
      plVar11 = (long *)(lVar9 + *(long *)((long)plVar11 + (long)iVar6 + 8));
    } while (plVar10 != plVar11);
  }
  puVar2 = (undefined8 *)(param_1 + 200);
  puVar5 = *(undefined8 **)(param_1 + 0xd0);
  while (puVar5 != puVar2) {
    puVar7 = (undefined8 *)puVar5[1];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = puVar7;
  }
  *(undefined8 **)(param_1 + 200) = puVar2;
  *(undefined8 **)(param_1 + 0xd0) = puVar2;
  puVar2 = (undefined8 *)(param_1 + 0xe8);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  puVar5 = *(undefined8 **)(param_1 + 0xf0);
  while (puVar5 != puVar2) {
    puVar7 = (undefined8 *)puVar5[1];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = puVar7;
  }
  *(undefined8 **)(param_1 + 0xe8) = puVar2;
  *(undefined8 **)(param_1 + 0xf0) = puVar2;
  puVar2 = (undefined8 *)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  puVar5 = *(undefined8 **)(param_1 + 0x110);
  while (puVar5 != puVar2) {
    puVar7 = (undefined8 *)puVar5[1];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = puVar7;
  }
  *(undefined8 **)(param_1 + 0x108) = puVar2;
  *(undefined8 **)(param_1 + 0x110) = puVar2;
  puVar2 = (undefined8 *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x118) = 0;
  puVar5 = *(undefined8 **)(param_1 + 0x130);
  while (puVar5 != puVar2) {
    puVar7 = (undefined8 *)puVar5[1];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = puVar7;
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined8 **)(param_1 + 0x128) = puVar2;
  *(undefined8 **)(param_1 + 0x130) = puVar2;
  return;
}

