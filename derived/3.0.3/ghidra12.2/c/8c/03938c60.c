
void FUN_03938c60(long param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  
  *(undefined4 **)(param_1 + 0x7d8) = param_2;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x7e0) = *param_2;
    *(undefined4 *)(param_1 + 0x7e4) = param_2[1];
    *(undefined8 *)(param_1 + 0x7e8) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x7f0) = *(undefined8 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x7f8) = param_2[6];
    *(undefined4 *)(param_1 + 0x7fc) = param_2[7];
    *(undefined8 *)(param_1 + 0x800) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x808) = *(undefined8 *)(param_2 + 10);
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    uVar3 = *(undefined8 *)(param_2 + 0xc);
    uVar4 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0x827) = *(undefined8 *)((long)param_2 + 0x47);
    *(undefined8 *)(param_1 + 0x820) = uVar9;
    *(undefined8 *)(param_1 + 0x818) = uVar4;
    *(undefined8 *)(param_1 + 0x810) = uVar3;
    FUN_038fd1e0(param_1 + 0x830);
    FUN_038fd2f0(param_1 + 0x830,param_2 + 0x14);
    uVar5 = param_2[0x26];
    *(undefined8 *)(param_1 + 0x870) = *(undefined8 *)(param_2 + 0x24);
    puVar1 = (uint *)(param_1 + 0x8b4);
    *(undefined4 *)(param_1 + 0x878) = uVar5;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = *puVar1 | 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    *(undefined2 *)(param_1 + 0x8a7) = 0x101;
    *(undefined1 *)(param_1 + 0x8a9) = 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = *puVar1 | 2;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar8 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 0x18) & uVar8;
      uVar8 = uVar8 + 1;
      if (*(uint *)(param_1 + 0x5c8) <= uVar2) {
        uVar2 = 0;
      }
      *(undefined4 **)(*(long *)(*(long *)(param_1 + 0x5d0) + (ulong)uVar2 * 8) + 0x548) = param_2;
    } while ((int)uVar8 < *(int *)(param_1 + 0x10));
  }
  FUN_039340a4(param_1 + 0x30);
  return;
}

