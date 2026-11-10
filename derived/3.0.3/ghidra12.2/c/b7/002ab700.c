
int FUN_002ab700(long *param_1)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  undefined8 local_15c;
  undefined4 local_154;
  char acStack_14f [255];
  
  memset(acStack_14f,0,0xff);
  if ((long *)param_1[3] == param_1 + 2) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    plVar5 = (long *)(param_1[3] - (long)*(int *)((long)param_1 + 0x24));
    do {
      cVar1 = (**(code **)(*plVar5 + 0x20))(plVar5);
      if (cVar1 == -1) {
        local_154 = 0;
        local_15c = 1;
        (**(code **)(*param_1 + 0x10))(param_1,&local_15c);
      }
      else {
        uVar2 = (**(code **)(*plVar5 + 0x20))(plVar5);
        if (acStack_14f[uVar2 & 0xff] != '\x01') {
          iVar4 = iVar4 + 1;
          uVar2 = (**(code **)(*plVar5 + 0x20))(plVar5);
          acStack_14f[uVar2 & 0xff] = '\x01';
        }
      }
      plVar3 = *(long **)((long)plVar5 + (long)*(int *)((long)param_1 + 0x24) + 8);
      plVar5 = (long *)((long)plVar3 - (long)*(int *)((long)param_1 + 0x24));
    } while (plVar3 != param_1 + 2);
  }
  return iVar4;
}

