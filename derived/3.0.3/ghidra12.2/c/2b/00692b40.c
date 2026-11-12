
void FUN_00692b40(long *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  
  puVar4 = PTR_DAT_04bdf3e8;
  param_1[1] = (long)(param_1 + 1);
  param_1[2] = (long)(param_1 + 1);
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  nn::os::InitializeLightEvent((long)param_1 + 0x1c,0,0);
  do {
    lVar1 = DAT_04c81308 + 1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x4c81308,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_04c81308 = lVar1;
    }
  } while (cVar2 != '\0');
  param_1[5] = lVar1;
  param_1[6] = 0;
  param_1[9] = 0x4db;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

