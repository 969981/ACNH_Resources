
void FUN_038569c0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  
  if (*param_1 != 0) {
    lVar5 = FUN_038567d0(param_1,0);
    if ((*(char *)(lVar5 + 8) != '\0') && (0 < *(int *)(lVar5 + 0xc))) {
      piVar1 = param_1 + 0x16;
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 1) {
        piVar2 = param_1 + 0x3e;
        do {
          iVar6 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 != 1) {
          nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x34));
        }
      }
      FUN_038e2f80(piVar1);
      *(undefined1 *)(lVar5 + 8) = 0;
    }
    iVar6 = *(int *)(lVar5 + 0xc);
    if (iVar6 < 1) {
      FUN_038e2f80(param_1 + 0x16);
      iVar6 = 0;
    }
    *(int *)(lVar5 + 0xc) = iVar6 + 1;
  }
  return;
}

