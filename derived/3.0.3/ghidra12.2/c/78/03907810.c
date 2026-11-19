
void FUN_03907810(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = (uint *)(param_1 + 0x10);
  do {
    uVar2 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar2 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar2 & 0x7fffffff) != 0) {
    if ((int)uVar2 < 0) {
      if ((int)*puVar1 < 0) {
        lVar7 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar7 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(param_1);
    }
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    uVar8 = *(undefined8 *)(param_2 + 0xb8);
    (**(code **)PTR_DAT_04bc9538)(uVar8,param_1 + 0xc0,0x3f);
    puVar6 = PTR_DAT_04bd0fc8;
    puVar5 = PTR_DAT_04bcf2e8;
    if (*(int *)(param_1 + 0x18) != 0) {
      (**(code **)PTR_DAT_04bcf2e8)
                (uVar8,0,0,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18));
      (**(code **)puVar5)(uVar8,1,0,*(undefined8 *)(*(long *)puVar6 + 0x70),
                          *(undefined8 *)(*(long *)puVar6 + 0x18));
      (**(code **)puVar5)(uVar8,2,0,*(undefined8 *)(*(long *)puVar6 + 0x70),
                          *(undefined8 *)(*(long *)puVar6 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x03907978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)puVar5)(uVar8,5,0,*(undefined8 *)(*(long *)puVar6 + 0x70),
                          *(undefined8 *)(*(long *)puVar6 + 0x18));
      return;
    }
  }
  return;
}

