
undefined8 FUN_028f83f8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  undefined *__src;
  
  *(undefined1 *)param_2[1] = 0;
  pcVar4 = (char *)param_3[1];
  if (*pcVar4 != 'V') {
    return 0;
  }
  if (((((pcVar4[1] == 'i') && (pcVar4[2] == 'l')) && (pcVar4[3] == 'l')) &&
      ((pcVar4[4] == 'a' && (pcVar4[5] == 'g')))) && ((pcVar4[6] == 'e' && (pcVar4[7] == 'r')))) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar5 = 0;
    while (*(char *)(param_3[1] + lVar5) != '\0') {
      lVar6 = param_3[1] + lVar5;
      if (*(char *)(lVar6 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        break;
      }
      if (*(char *)(lVar6 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        break;
      }
      lVar5 = lVar5 + 3;
      if (lVar5 == 0x80001) {
        return 0;
      }
    }
    if ((0 < (int)lVar5 + -4) && ((int)lVar5 + -3 <= (int)param_2[2])) {
      lVar6 = param_2[1];
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar5 = 0;
      do {
        if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_028f8568;
        lVar1 = param_2[1] + lVar5;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_028f8568;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_028f8568;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_028f8568:
      uVar2 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
      uVar3 = 5;
      if ((int)((int)param_2[2] - uVar2) < 6) {
        uVar3 = (int)param_2[2] + ~uVar2;
      }
      if (0 < (int)uVar3) {
        memcpy((void *)(lVar6 + (ulong)uVar2),"Moved",(ulong)uVar3);
        *(undefined1 *)(lVar6 + (ulong)uVar3 + (ulong)uVar2) = 0;
      }
      (**(code **)(*param_3 + 0x18))(param_3);
      lVar6 = param_3[1];
      lVar5 = 0;
      do {
        if (*(char *)(lVar6 + lVar5) == '\0') {
LAB_028f85fc:
          if (8 < (int)lVar5) {
            __src = (undefined *)(lVar6 + 9);
            goto LAB_028f8618;
          }
          break;
        }
        if (*(char *)(lVar6 + lVar5 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_028f85fc;
        }
        if (*(char *)(lVar6 + lVar5 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_028f85fc;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      __src = PTR_DAT_04c4b988;
LAB_028f8618:
      lVar6 = param_2[1];
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar5 = 0;
      do {
        if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_028f866c;
        lVar1 = param_2[1] + lVar5;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_028f866c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_028f866c;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_028f866c:
      uVar2 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
      lVar5 = 0;
      do {
        if (__src[lVar5] == '\0') goto LAB_028f86b0;
        if (__src[lVar5 + 1] == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_028f86b0;
        }
        if (__src[lVar5 + 2] == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_028f86b0;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_028f86b0:
      uVar3 = (uint)lVar5;
      if ((int)((int)param_2[2] - uVar2) <= (int)(uint)lVar5) {
        uVar3 = (int)param_2[2] + ~uVar2;
      }
      if (0 < (int)uVar3) {
        memcpy((void *)(lVar6 + (ulong)uVar2),__src,(ulong)uVar3);
        *(undefined1 *)(lVar6 + (int)(uVar3 + uVar2)) = 0;
      }
      return 1;
    }
  }
  return 0;
}

