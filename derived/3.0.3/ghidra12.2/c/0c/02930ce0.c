
undefined8 FUN_02930ce0(long *param_1,long *param_2,byte *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  byte bVar6;
  long lVar7;
  char *__dest;
  char *pcVar8;
  
  if ((*DAT_055cdb40 == '\0') && (*(char *)param_1[1] == '\0')) {
    uVar4 = FUN_0291e3c8(0,0);
    if ((uVar4 & 1) == 0) {
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      pcVar8 = (char *)param_1[1];
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar5 = (char *)param_2[1];
      __dest = (char *)param_1[1];
      if (pcVar8 != pcVar5) {
        if (*__dest == *pcVar5) {
          if (*__dest != '\0') {
            lVar7 = 0;
            do {
              if (lVar7 == 0x80000) goto LAB_02930df0;
              if (__dest[lVar7 + 1] != pcVar5[lVar7 + 1]) goto LAB_02930df0;
              if (__dest[lVar7 + 1] == '\0') break;
              lVar1 = lVar7 + 2;
              if (__dest[lVar1] != pcVar5[lVar7 + 2]) goto LAB_02930df0;
              lVar7 = lVar7 + 2;
            } while (__dest[lVar1] != '\0');
          }
        }
        else {
LAB_02930df0:
          *(undefined4 *)(param_1 + 7) = 0x708;
        }
      }
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar5 = (char *)param_2[1];
      if (__dest != pcVar5) {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar7 = 0;
        do {
          if (*(char *)(param_2[1] + lVar7) == '\0') goto LAB_02930e70;
          lVar1 = param_2[1] + lVar7;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_02930e70;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_02930e70;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_02930e70:
        iVar2 = (int)lVar7;
        if ((int)param_1[2] <= (int)lVar7) {
          iVar2 = (int)param_1[2] + -1;
        }
        memcpy(__dest,pcVar5,(long)iVar2);
        __dest[iVar2] = '\0';
      }
    }
    else {
      uVar4 = FUN_02930400(param_2);
      if ((uVar4 & 1) == 0) goto LAB_02930d14;
    }
    uVar3 = 1;
    *(undefined1 *)((long)param_1 + 0x9c) = 1;
    bVar6 = *param_3;
    *(undefined8 *)((long)param_1 + 0xbc) = 0;
    *(undefined8 *)((long)param_1 + 0xc4) = 0;
    *(undefined4 *)((long)param_1 + 0xcc) = 0;
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    *(byte *)(param_1 + 0x17) = bVar6;
  }
  else {
LAB_02930d14:
    uVar3 = 0;
  }
  return uVar3;
}

