
undefined8 FUN_017340f0(long *param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  long *plVar7;
  
  if ((char)param_1[0xf] == '\0') {
LAB_017341c0:
    uVar6 = 0;
    cVar1 = (char)param_1[0x1f];
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    pcVar5 = (char *)param_1[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if (pcVar5 != pcVar3) {
      pcVar5 = (char *)param_1[1];
      if (*pcVar5 != *pcVar3) goto LAB_017341c0;
      if (*pcVar5 != '\0') {
        lVar4 = 0;
        do {
          if ((lVar4 == 0x80000) || (pcVar5[lVar4 + 1] != pcVar3[lVar4 + 1])) goto LAB_017341c0;
          if (pcVar5[lVar4 + 1] == '\0') break;
          lVar2 = lVar4 + 2;
          if (pcVar5[lVar2] != pcVar3[lVar4 + 2]) goto LAB_017341c0;
          lVar4 = lVar4 + 2;
        } while (pcVar5[lVar2] != '\0');
      }
    }
    uVar6 = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
    cVar1 = (char)param_1[0x1f];
  }
  if (cVar1 != '\0') {
    plVar7 = param_1 + 0x10;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    pcVar5 = (char *)param_1[0x11];
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if (pcVar5 != pcVar3) {
      pcVar5 = (char *)param_1[0x11];
      if (*pcVar5 != *pcVar3) goto LAB_01734274;
      if (*pcVar5 != '\0') {
        lVar4 = 0;
        do {
          if ((lVar4 == 0x80000) || (pcVar5[lVar4 + 1] != pcVar3[lVar4 + 1])) goto LAB_01734274;
          if (pcVar5[lVar4 + 1] == '\0') break;
          lVar2 = lVar4 + 2;
          if (pcVar5[lVar2] != pcVar3[lVar4 + 2]) goto LAB_01734274;
          lVar4 = lVar4 + 2;
        } while (pcVar5[lVar2] != '\0');
      }
    }
    uVar6 = 1;
    *(undefined1 *)(param_1 + 0x1f) = 0;
  }
LAB_01734274:
  if ((char)param_1[0x2f] != '\0') {
    (**(code **)(param_1[0x20] + 0x18))(param_1 + 0x20);
    (**(code **)(param_1[0x20] + 0x18))(param_1 + 0x20);
    pcVar5 = (char *)param_1[0x21];
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if (pcVar5 != pcVar3) {
      pcVar5 = (char *)param_1[0x21];
      if (*pcVar5 != *pcVar3) goto LAB_01734324;
      if (*pcVar5 != '\0') {
        lVar4 = 0;
        do {
          if ((lVar4 == 0x80000) || (pcVar5[lVar4 + 1] != pcVar3[lVar4 + 1])) goto LAB_01734324;
          if (pcVar5[lVar4 + 1] == '\0') break;
          lVar2 = lVar4 + 2;
          if (pcVar5[lVar2] != pcVar3[lVar4 + 2]) goto LAB_01734324;
          lVar4 = lVar4 + 2;
        } while (pcVar5[lVar2] != '\0');
      }
    }
    uVar6 = 1;
    *(undefined1 *)(param_1 + 0x2f) = 0;
  }
LAB_01734324:
  if ((char)param_1[0x3f] != '\0') {
    (**(code **)(param_1[0x30] + 0x18))(param_1 + 0x30);
    (**(code **)(param_1[0x30] + 0x18))(param_1 + 0x30);
    pcVar5 = (char *)param_1[0x31];
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if (pcVar5 != pcVar3) {
      pcVar5 = (char *)param_1[0x31];
      if (*pcVar5 != *pcVar3) {
        return uVar6;
      }
      if (*pcVar5 != '\0') {
        lVar4 = 0;
        do {
          if (lVar4 == 0x80000) {
            return uVar6;
          }
          if (pcVar5[lVar4 + 1] != pcVar3[lVar4 + 1]) {
            return uVar6;
          }
          if (pcVar5[lVar4 + 1] == '\0') break;
          lVar2 = lVar4 + 2;
          if (pcVar5[lVar2] != pcVar3[lVar4 + 2]) {
            return uVar6;
          }
          lVar4 = lVar4 + 2;
        } while (pcVar5[lVar2] != '\0');
      }
    }
    uVar6 = 1;
    *(undefined1 *)(param_1 + 0x3f) = 0;
  }
  return uVar6;
}

