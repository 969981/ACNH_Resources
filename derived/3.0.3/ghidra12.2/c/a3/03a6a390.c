
void FUN_03a6a390(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined8 *param_7,uint param_8)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  
  if (*(char *)(param_1 + 0x468) != '\0') {
    uVar2 = param_3;
    if (*(uint *)(param_1 + 0x1d0) <= param_3) {
      uVar2 = 0;
    }
    puVar9 = (undefined4 *)(*(long *)(param_1 + 0x1d8) + (long)(int)uVar2 * 0x3f8);
    if ((param_8 & 1) != 0) {
      param_5 = param_6;
    }
    if (param_5 != (undefined4 *)0x0) {
      *puVar9 = *param_5;
      puVar9[1] = param_5[1];
      *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(param_5 + 2);
      *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(param_5 + 4);
      puVar9[6] = param_5[6];
      puVar9[7] = param_5[7];
      *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(param_5 + 8);
      *(undefined8 *)(puVar9 + 10) = *(undefined8 *)(param_5 + 10);
      uVar3 = *(undefined8 *)(param_5 + 0xc);
      uVar4 = *(undefined8 *)(param_5 + 0xe);
      uVar8 = *(undefined8 *)(param_5 + 0x10);
      *(undefined8 *)((long)puVar9 + 0x47) = *(undefined8 *)((long)param_5 + 0x47);
      *(undefined8 *)(puVar9 + 0xe) = uVar4;
      *(undefined8 *)(puVar9 + 0x10) = uVar8;
      *(undefined8 *)(puVar9 + 0xc) = uVar3;
      FUN_038fd1e0(puVar9 + 0x14);
      FUN_038fd2f0(puVar9 + 0x14,param_5 + 0x14);
      uVar5 = param_5[0x26];
      *(undefined8 *)(puVar9 + 0x24) = *(undefined8 *)(param_5 + 0x24);
      puVar1 = puVar9 + 0x35;
      puVar9[0x26] = uVar5;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = *puVar1 | 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (param_7 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03a6a4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_7)
                (param_7,param_2,param_3,param_4,puVar9,*(undefined4 *)(param_1 + 0x488),param_8 & 1
                );
      return;
    }
  }
  return;
}

