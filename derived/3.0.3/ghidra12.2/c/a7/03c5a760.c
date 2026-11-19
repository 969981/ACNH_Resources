
long FUN_03c5a760(long param_1,long *param_2,long *param_3)

{
  ushort uVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(long *)(param_1 + 8) != param_1) {
    lVar5 = (long)*(int *)(param_1 + 0x14);
    lVar3 = *(long *)(param_1 + 8) - lVar5;
    do {
      if (*(int *)(lVar3 + 0x58) == (int)param_2[2]) {
        uVar1 = *(ushort *)(lVar3 + 0x5c);
        uVar6 = (ulong)uVar1;
        if (uVar1 == *(ushort *)((long)param_2 + 0x14)) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(lVar3 + 0x48);
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(lVar3 + 0x48);
          pcVar4 = *(char **)(lVar3 + 0x50);
          (**(code **)(*param_2 + 0x18))(param_2);
          if ((uVar1 != 0) && (pcVar4 != (char *)param_2[1])) {
            pcVar4 = (char *)param_2[1];
            pcVar2 = *(char **)(lVar3 + 0x50);
            do {
              uVar6 = uVar6 - 1;
              if (*pcVar2 != *pcVar4) goto LAB_03c5a7a0;
            } while ((*pcVar2 != '\0') && (pcVar4 = pcVar4 + 1, pcVar2 = pcVar2 + 1, uVar6 != 0));
          }
          if (*(int *)(lVar3 + 0x40) == (int)param_3[2]) {
            uVar1 = *(ushort *)(lVar3 + 0x44);
            uVar6 = (ulong)uVar1;
            if (uVar1 == *(ushort *)((long)param_3 + 0x14)) {
              (**(code **)(*(long *)(lVar3 + 0x30) + 0x18))(lVar3 + 0x30);
              (**(code **)(*(long *)(lVar3 + 0x30) + 0x18))(lVar3 + 0x30);
              pcVar4 = *(char **)(lVar3 + 0x38);
              (**(code **)(*param_3 + 0x18))(param_3);
              if (uVar1 == 0) {
                return lVar3;
              }
              if (pcVar4 == (char *)param_3[1]) {
                return lVar3;
              }
              pcVar4 = (char *)param_3[1];
              pcVar2 = *(char **)(lVar3 + 0x38);
              while( true ) {
                uVar6 = uVar6 - 1;
                if (*pcVar2 != *pcVar4) break;
                if (*pcVar2 == '\0') {
                  return lVar3;
                }
                pcVar4 = pcVar4 + 1;
                pcVar2 = pcVar2 + 1;
                if (uVar6 == 0) {
                  return lVar3;
                }
              }
            }
          }
        }
      }
LAB_03c5a7a0:
      lVar3 = *(long *)(lVar3 + lVar5 + 8) - lVar5;
    } while (lVar3 != param_1 - lVar5);
  }
  return 0;
}

