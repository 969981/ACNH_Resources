
void FUN_006bb3f0(int param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  switch(param_1) {
  case 1:
    if ((param_4 - 1U < 2) || (param_4 == 5)) {
      *(undefined1 *)param_3 = *(undefined1 *)param_2;
      return;
    }
    *(undefined1 *)param_3 = *(undefined1 *)param_2;
    return;
  case 2:
    if (((ulong)param_2 & 1) == 0) {
      if ((param_4 - 1U < 2) || (param_4 == 5)) {
        *(undefined2 *)param_3 = *(undefined2 *)param_2;
        return;
      }
      *(undefined2 *)param_3 = *(undefined2 *)param_2;
      return;
    }
    break;
  case 4:
    if (((ulong)param_2 & 3) == 0) {
      if ((param_4 - 1U < 2) || (param_4 == 5)) {
        *(undefined4 *)param_3 = *(undefined4 *)param_2;
        return;
      }
      *(undefined4 *)param_3 = *(undefined4 *)param_2;
      return;
    }
    break;
  case 8:
    if (((ulong)param_2 & 7) == 0) {
      if ((param_4 - 1U < 2) || (param_4 == 5)) {
        *param_3 = *param_2;
        return;
      }
      *param_3 = *param_2;
      return;
    }
    break;
  case 0x10:
    if (((ulong)param_2 & 0xf) == 0) {
      if (param_4 - 1U < 2) {
        do {
          uVar5 = *param_2;
          uVar4 = param_2[1];
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
          if (bVar3) {
            *param_2 = uVar5;
            param_2[1] = uVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      else if (param_4 == 5) {
        do {
          uVar5 = *param_2;
          uVar4 = param_2[1];
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
          if (bVar3) {
            *param_2 = uVar5;
            *(undefined8 *)((long)param_2 + 4) = uVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      else {
        do {
          uVar5 = *param_2;
          uVar4 = param_2[1];
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
          if (bVar3) {
            *param_2 = uVar5;
            param_2[1] = uVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *param_3 = uVar5;
      param_3[1] = uVar4;
      return;
    }
  }
  iVar1 = (((uint)((ulong)param_2 >> 0x14) & 0xfff ^ (uint)param_2 >> 4) & 0x3ff) * 0x20 + 0x4c3fc00
  ;
  nnosLockMutex(iVar1);
  memcpy(param_3,param_2,(long)param_1);
  nnosUnlockMutex(iVar1);
  return;
}

