
void FUN_03a31520(long param_1,long param_2,undefined8 param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = (uint *)(param_2 + 0x14);
  do {
    uVar4 = *puVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar4 | 0x80000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((uVar4 & 0x7fffffff) != 0) {
    if ((int)uVar4 < 0) {
      if ((int)*puVar1 < 0) {
        lVar8 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar8 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(param_2);
    }
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  FUN_0390d290(param_3,param_1,*(undefined8 *)(param_2 + 0x68),0xffffffff,0);
  lVar8 = DAT_05ae9100;
  iVar2 = *(int *)(DAT_05ae9100 + 0x480);
  if (iVar2 == 0) {
    return;
  }
  uVar3 = *(undefined4 *)(DAT_05ae9100 + 0x464);
  uVar9 = *(undefined8 *)(param_1 + 0xb8);
  uVar7 = (**(code **)PTR_DAT_04bbd560)(DAT_05ae9100 + 0x488);
                    /* WARNING: Could not recover jumptable at 0x03a31638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bbd568)(uVar9,uVar3,*(undefined4 *)(lVar8 + 0x460),iVar2,uVar7);
  return;
}

