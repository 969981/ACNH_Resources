
undefined8 FUN_038f5930(uint *param_1,undefined4 *param_2)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  undefined1 auStack_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  do {
    uVar2 = *param_1;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar5) {
      *param_1 = uVar2 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar2 & 0x7fffffff) != 0) {
    if (-1 < (int)uVar2) {
      uVar1 = *(ushort *)((long)param_2 + 0x3a);
      (**(code **)PTR_DAT_04bcf220)(auStack_58);
      if ((uVar1 & 0xfffe) == 8) {
        (**(code **)PTR_DAT_04bcf838)(auStack_58,4);
      }
      (**(code **)PTR_DAT_04bcf228)(auStack_58,*(undefined1 *)((long)param_2 + 0xa6),1);
      (**(code **)PTR_DAT_04bcf818)(auStack_58,*(undefined2 *)(param_2 + 0x29),0);
      bVar5 = false;
      if ((*(byte *)((long)param_2 + 0x4e) >> 1 & 1) != 0) {
        bVar5 = 0x11 < *(ushort *)(param_2 + 0x26) &&
                *(ushort *)(param_2 + 0x26) - 0x59 < 0xffffffd6;
      }
      local_48 = *param_2;
      uStack_44 = param_2[1];
      local_40 = *(undefined8 *)(param_2 + 2);
      uStack_38 = *(undefined8 *)(param_2 + 4);
      FUN_038fd3e0(param_2 + 0x14,&local_48,param_2 + 0xc,auStack_58,*(undefined8 *)(param_2 + 0x24)
                   ,bVar5,0);
      uVar4 = 1;
      param_2[0x2a] = param_2[0x14];
      goto LAB_038f5a90;
    }
    if ((int)*param_1 < 0) {
      lVar6 = *(long *)PTR_DAT_04bb29d0;
      do {
        nn::os::ConvertToTimeSpan(lVar6 / 1000000);
        nn::os::SleepThread();
      } while ((int)*param_1 < 0);
    }
  }
  uVar4 = 0;
LAB_038f5a90:
  do {
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar5) {
      *param_1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return uVar4;
}

