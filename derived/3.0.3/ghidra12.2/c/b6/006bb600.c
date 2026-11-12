
void FUN_006bb600(int param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  
  switch(param_1) {
  case 1:
    if ((param_4 == 3) || (param_4 == 5)) {
      *(undefined1 *)param_2 = *(undefined1 *)param_3;
      return;
    }
    *(undefined1 *)param_2 = *(undefined1 *)param_3;
    return;
  case 2:
    if (((ulong)param_2 & 1) == 0) {
      if ((param_4 == 3) || (param_4 == 5)) {
        *(undefined2 *)param_2 = *(undefined2 *)param_3;
        return;
      }
      *(undefined2 *)param_2 = *(undefined2 *)param_3;
      return;
    }
    break;
  case 4:
    if (((ulong)param_2 & 3) == 0) {
      if ((param_4 == 3) || (param_4 == 5)) {
        *(undefined4 *)param_2 = *(undefined4 *)param_3;
        return;
      }
      *(undefined4 *)param_2 = *(undefined4 *)param_3;
      return;
    }
    break;
  case 8:
    if (((ulong)param_2 & 7) == 0) {
      if ((param_4 == 3) || (param_4 == 5)) {
        *param_2 = *param_3;
        return;
      }
      *param_2 = *param_3;
      return;
    }
    break;
  case 0x10:
    if (((ulong)param_2 & 0xf) == 0) {
      uVar2 = *param_3;
      uVar3 = param_3[1];
      if (param_4 == 3) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(param_2,0x10);
          if (bVar5) {
            *param_2 = uVar2;
            *(undefined8 *)((long)param_2 + 4) = uVar3;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      else if (param_4 == 5) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(param_2,0x10);
          if (bVar5) {
            *param_2 = uVar2;
            *(undefined8 *)((long)param_2 + 4) = uVar3;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      else {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(param_2,0x10);
          if (bVar5) {
            *param_2 = uVar2;
            param_2[1] = uVar3;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      return;
    }
  }
  iVar1 = (((uint)((ulong)param_2 >> 0x14) & 0xfff ^ (uint)param_2 >> 4) & 0x3ff) * 0x20 + 0x4c3fc00
  ;
  nnosLockMutex(iVar1);
  memcpy(param_2,param_3,(long)param_1);
  nnosUnlockMutex(iVar1);
  return;
}

