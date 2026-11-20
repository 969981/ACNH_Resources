
long FUN_03ea8c80(long param_1,long *param_2)

{
  ushort uVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  
  if (*(long *)(param_1 + 8) != param_1) {
    lVar6 = (long)*(int *)(param_1 + 0x14);
    plVar4 = (long *)(*(long *)(param_1 + 8) - lVar6);
    do {
      lVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0x30) == (int)param_2[2])) {
        uVar1 = *(ushort *)(lVar2 + 0x34);
        uVar7 = (ulong)uVar1;
        if (uVar1 == *(ushort *)((long)param_2 + 0x14)) {
          (**(code **)(*(long *)(lVar2 + 0x20) + 0x18))(lVar2 + 0x20);
          (**(code **)(*(long *)(lVar2 + 0x20) + 0x18))(lVar2 + 0x20);
          pcVar5 = *(char **)(lVar2 + 0x28);
          (**(code **)(*param_2 + 0x18))(param_2);
          if (uVar1 == 0) {
            return lVar2;
          }
          if (pcVar5 == (char *)param_2[1]) {
            return lVar2;
          }
          pcVar5 = (char *)param_2[1];
          pcVar3 = *(char **)(lVar2 + 0x28);
          while( true ) {
            uVar7 = uVar7 - 1;
            if (*pcVar3 != *pcVar5) break;
            if (*pcVar3 == '\0') {
              return lVar2;
            }
            pcVar5 = pcVar5 + 1;
            pcVar3 = pcVar3 + 1;
            if (uVar7 == 0) {
              return lVar2;
            }
          }
        }
      }
      plVar4 = (long *)(*(long *)((long)plVar4 + lVar6 + 8) - lVar6);
    } while (plVar4 != (long *)(param_1 - lVar6));
  }
  return 0;
}

