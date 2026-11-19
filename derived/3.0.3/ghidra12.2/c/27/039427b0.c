
void FUN_039427b0(undefined4 param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x3a) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x1c8);
  }
  puVar1 = (uint *)(lVar7 + 0x14);
  do {
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar1 < 0) {
        lVar6 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar6 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar7);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar6 = 0x48;
  if (*(uint *)(lVar7 + 0x30) < 4) {
    lVar6 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar7 + 0x38) + lVar6);
  if (iVar2 != -1) {
    (*DAT_04c62af0)(*(undefined8 *)(param_2 + 0xb8),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar2,0x10,param_5);
  }
  local_68 = *param_3;
  local_60 = *(undefined4 *)(param_3 + 1);
  local_5c = *param_4;
  local_54 = *(undefined4 *)(param_4 + 1);
  FUN_03947450(lVar7,param_2,4,&local_68,2);
  (**(code **)PTR_DAT_04bcf2d8)(param_1,*(undefined8 *)(param_2 + 0xb8));
  (**(code **)PTR_DAT_04bcf118)(*(undefined8 *)(param_2 + 0xb8),1,0,2);
  return;
}

