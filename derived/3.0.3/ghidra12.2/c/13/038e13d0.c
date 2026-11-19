
void FUN_038e13d0(undefined8 param_1,long *param_2,long *param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar4 = 0;
  do {
    if (*(char *)(param_3[1] + lVar4) == '\0') goto LAB_038e1450;
    lVar1 = param_3[1] + lVar4;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_038e1450;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar4 = lVar4 + 2;
      goto LAB_038e1450;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  lVar4 = 0;
LAB_038e1450:
  uVar2 = (uint)lVar4;
  if (param_4 <= (uint)lVar4) {
    uVar2 = param_4;
  }
  local_44[0] = 0x22;
  local_48[0] = 0x5c;
  (**(code **)(*param_2 + 8))(param_2,local_44,1);
  puVar3 = PTR_DAT_04bb2120;
  if (uVar2 != 0) {
    uVar7 = 0;
    do {
      (**(code **)(*param_3 + 0x18))(param_3);
      lVar4 = param_3[1];
      uVar6 = 0;
      do {
        if (*(char *)(lVar4 + uVar6) == '\0') goto LAB_038e1544;
        if (*(char *)(lVar4 + uVar6 + 1) == '\0') {
          uVar6 = uVar6 + 1;
          goto LAB_038e1544;
        }
        if (*(char *)(lVar4 + uVar6 + 2) == '\0') {
          uVar6 = uVar6 + 2;
          goto LAB_038e1544;
        }
        uVar6 = uVar6 + 3;
      } while (uVar6 != 0x80001);
      uVar6 = 0;
LAB_038e1544:
      pcVar5 = puVar3;
      if (uVar7 <= (uVar6 & 0xffffffff)) {
        pcVar5 = (char *)(lVar4 + uVar7);
      }
      if (*pcVar5 == '\"') {
LAB_038e1494:
        (**(code **)(*param_2 + 8))(param_2,local_48,1);
      }
      else {
        (**(code **)(*param_3 + 0x18))(param_3);
        if (uVar7 == 0) {
          pcVar5 = (char *)param_3[1];
          lVar4 = 0;
          do {
            if (pcVar5[lVar4] == '\0') {
LAB_038e1624:
              if ((int)lVar4 < 0) {
                pcVar5 = puVar3;
              }
              break;
            }
            if (pcVar5[lVar4 + 1] == '\0') {
              lVar4 = lVar4 + 1;
              goto LAB_038e1624;
            }
            if (pcVar5[lVar4 + 2] == '\0') {
              lVar4 = lVar4 + 2;
              goto LAB_038e1624;
            }
            lVar4 = lVar4 + 3;
          } while (lVar4 != 0x80001);
        }
        else {
          (**(code **)(*param_3 + 0x18))(param_3);
          lVar4 = param_3[1];
          uVar6 = 0;
          do {
            if (*(char *)(lVar4 + uVar6) == '\0') goto LAB_038e1608;
            if (*(char *)(lVar4 + uVar6 + 1) == '\0') {
              uVar6 = uVar6 + 1;
              goto LAB_038e1608;
            }
            if (*(char *)(lVar4 + uVar6 + 2) == '\0') {
              uVar6 = uVar6 + 2;
              goto LAB_038e1608;
            }
            uVar6 = uVar6 + 3;
          } while (uVar6 != 0x80001);
          uVar6 = 0;
LAB_038e1608:
          pcVar5 = puVar3;
          if (uVar7 <= (uVar6 & 0xffffffff)) {
            pcVar5 = (char *)(lVar4 + uVar7);
          }
        }
        if (*pcVar5 == '\"') goto LAB_038e1494;
      }
      (**(code **)(*param_3 + 0x18))(param_3);
      (**(code **)(*param_2 + 8))(param_2,param_3[1] + uVar7,1);
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar2);
  }
  (**(code **)(*param_2 + 8))(param_2,local_44,1);
  return;
}

