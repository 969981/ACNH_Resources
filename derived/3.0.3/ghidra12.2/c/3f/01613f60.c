
undefined8 FUN_01613f60(long param_1,uint *param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *local_50;
  char *pcStack_48;
  
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "GsysModelScene";
  plVar6 = (long *)FUN_038c9744(0,&local_50,0,8,1,0);
  puVar1 = (uint *)(plVar6 + 0x1a);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = *puVar1 & 0xfffffffb;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (plVar6 == (long *)0x0) {
    lVar9 = 1;
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar9 = *(long *)(lVar7 + 0xa8);
    *(long **)(lVar7 + 0xa8) = plVar6;
  }
  uVar8 = FUN_039ffd50(&local_50,param_3,plVar6);
  if (lVar9 != 1) {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    *(long *)(lVar7 + 0xa8) = lVar9;
  }
  (**(code **)(*plVar6 + 0x28))(plVar6);
  puVar2 = (undefined8 *)(param_1 + 0xe88) + *param_2;
  if (1 < *param_2) {
    puVar2 = (undefined8 *)(param_1 + 0xe88);
  }
  *puVar2 = uVar8;
  plVar3 = (long *)(param_1 + 0xe98) + *param_2;
  if (1 < *param_2) {
    plVar3 = (long *)(param_1 + 0xe98);
  }
  *plVar3 = (long)plVar6;
  return uVar8;
}

