
long FUN_03c2b050(long param_1,int param_2,long *param_3,undefined4 *param_4,uint param_5)

{
  char cVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  char *pcVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  pbVar8 = (byte *)param_3[1];
  uVar3 = (uint)*pbVar8;
  if (*pbVar8 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0xffffffff;
    do {
      pbVar8 = pbVar8 + 1;
      uVar7 = crc32b(uVar7,uVar3,0x4c11db7);
      uVar3 = (uint)*pbVar8;
    } while (uVar3 != 0);
    uVar7 = ~uVar7;
  }
  if ((param_5 & 1) == 0) {
    uVar2 = nn::os::TryLockMutex((MutexType *)(param_1 + 0x2400));
    if ((uVar2 & 1) == 0) {
      lVar15 = 0;
      if (param_4 == (undefined4 *)0x0) {
        return 0;
      }
      uVar4 = 1;
      goto LAB_03c2b448;
    }
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0x2400));
  }
  uVar3 = uVar7 % 100;
  if (param_2 == 1) {
    lVar15 = param_1 + (ulong)uVar3 * 0x18;
    for (puVar14 = *(undefined8 **)(lVar15 + 0xca8); puVar14 != (undefined8 *)(lVar15 + 0xca8);
        puVar14 = (undefined8 *)*puVar14) {
      lVar5 = puVar14[2];
      if (*(uint *)(lVar5 + 0x20) == uVar7) {
        plVar13 = (long *)(lVar5 + 0x60);
        (**(code **)(*plVar13 + 0x18))(plVar13);
        (**(code **)(*plVar13 + 0x18))(plVar13);
        pcVar12 = *(char **)(lVar5 + 0x68);
        (**(code **)(*param_3 + 0x18))(param_3);
        pcVar9 = (char *)param_3[1];
        if (pcVar12 == pcVar9) {
LAB_03c2b310:
          lVar15 = puVar14[2];
          if (lVar15 != 0) goto LAB_03c2b318;
          break;
        }
        cVar1 = **(char **)(lVar5 + 0x68);
        if (cVar1 == *pcVar9) {
          if (cVar1 == '\0') goto LAB_03c2b310;
          lVar10 = 0x7fffe;
          pcVar12 = *(char **)(lVar5 + 0x68);
          while( true ) {
            if (pcVar12[1] != pcVar9[1]) break;
            if (pcVar12[1] == '\0') goto LAB_03c2b310;
            if (pcVar12[2] != pcVar9[2]) break;
            if (pcVar12[2] == '\0') goto LAB_03c2b310;
            if ((lVar10 == 0) || (cVar1 = pcVar12[3], cVar1 != pcVar9[3])) break;
            lVar10 = lVar10 + -3;
            pcVar9 = pcVar9 + 3;
            pcVar12 = pcVar12 + 3;
            if (cVar1 == '\0') goto LAB_03c2b310;
          }
        }
      }
    }
    lVar15 = param_1 + (ulong)uVar3 * 0x18;
    for (puVar14 = *(undefined8 **)(lVar15 + 0x1608); puVar14 != (undefined8 *)(lVar15 + 0x1608);
        puVar14 = (undefined8 *)*puVar14) {
      lVar5 = puVar14[2];
      if (*(uint *)(lVar5 + 0x20) == uVar7) {
        plVar13 = (long *)(lVar5 + 0x60);
        (**(code **)(*plVar13 + 0x18))(plVar13);
        (**(code **)(*plVar13 + 0x18))(plVar13);
        pcVar12 = *(char **)(lVar5 + 0x68);
        (**(code **)(*param_3 + 0x18))(param_3);
        pcVar9 = (char *)param_3[1];
        if (pcVar12 == pcVar9) {
LAB_03c2b410:
          lVar15 = puVar14[2];
          nn::os::UnlockMutex((MutexType *)(param_1 + 0x2400));
          if (lVar15 == 0) goto LAB_03c2b43c;
          goto LAB_03c2b424;
        }
        cVar1 = **(char **)(lVar5 + 0x68);
        if (cVar1 == *pcVar9) {
          if (cVar1 == '\0') goto LAB_03c2b410;
          lVar10 = 0x7fffe;
          pcVar12 = *(char **)(lVar5 + 0x68);
          while( true ) {
            if (pcVar12[1] != pcVar9[1]) break;
            if (pcVar12[1] == '\0') goto LAB_03c2b410;
            if (pcVar12[2] != pcVar9[2]) break;
            if (pcVar12[2] == '\0') goto LAB_03c2b410;
            if ((lVar10 == 0) || (cVar1 = pcVar12[3], cVar1 != pcVar9[3])) break;
            lVar10 = lVar10 + -3;
            pcVar9 = pcVar9 + 3;
            pcVar12 = pcVar12 + 3;
            if (cVar1 == '\0') goto LAB_03c2b410;
          }
        }
      }
    }
  }
  else if (param_2 == 0) {
    lVar5 = param_1 + (ulong)uVar3 * 0x18;
    for (plVar13 = *(long **)(lVar5 + 0x348); plVar13 != (long *)(lVar5 + 0x348);
        plVar13 = (long *)*plVar13) {
      lVar15 = plVar13[2];
      if (*(uint *)(lVar15 + 0x20) == uVar7) {
        plVar11 = (long *)(lVar15 + 0x60);
        (**(code **)(*plVar11 + 0x18))(plVar11);
        (**(code **)(*plVar11 + 0x18))(plVar11);
        pcVar12 = *(char **)(lVar15 + 0x68);
        (**(code **)(*param_3 + 0x18))(param_3);
        pcVar9 = (char *)param_3[1];
        if (pcVar12 != pcVar9) {
          pcVar12 = *(char **)(lVar15 + 0x68);
          if (*pcVar12 != *pcVar9) goto LAB_03c2b12c;
          if (*pcVar12 != '\0') {
            uVar2 = 0;
            do {
              uVar6 = uVar2;
              if (pcVar12[uVar6 + 1] != pcVar9[uVar6 + 1]) goto LAB_03c2b12c;
              if (pcVar12[uVar6 + 1] == '\0') goto LAB_03c2b20c;
              if (pcVar12[uVar6 + 2] != pcVar9[uVar6 + 2]) goto LAB_03c2b12c;
              if (pcVar12[uVar6 + 2] == '\0') {
                uVar6 = uVar6 + 1;
                goto LAB_03c2b20c;
              }
              if ((uVar6 == 0x7fffe) || (pcVar12[uVar6 + 3] != pcVar9[uVar6 + 3]))
              goto LAB_03c2b12c;
              uVar2 = uVar6 + 3;
            } while (pcVar12[uVar6 + 3] != '\0');
            uVar6 = uVar6 + 2;
LAB_03c2b20c:
            if (0x7ffff < uVar6) goto LAB_03c2b12c;
          }
        }
        lVar15 = plVar13[2];
        if (*(char *)(lVar15 + 0x191) == '\0') goto LAB_03c2b318;
      }
LAB_03c2b12c:
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2400));
LAB_03c2b43c:
  lVar15 = 0;
  if (param_4 == (undefined4 *)0x0) {
    return 0;
  }
  uVar4 = 2;
  goto LAB_03c2b448;
LAB_03c2b318:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2400));
LAB_03c2b424:
  if (param_4 == (undefined4 *)0x0) {
    return lVar15;
  }
  uVar4 = 0;
LAB_03c2b448:
  *param_4 = uVar4;
  return lVar15;
}

