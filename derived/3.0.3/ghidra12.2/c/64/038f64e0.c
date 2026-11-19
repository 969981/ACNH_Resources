
void FUN_038f64e0(long *param_1,undefined1 param_2,uint param_3)

{
  char *pcVar1;
  byte *pbVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  
  (**(code **)(*param_1 + 0x18))();
  puVar3 = PTR_DAT_04bb2120;
  lVar4 = 0;
  do {
    if (*(char *)(param_1[1] + lVar4) == '\0') {
LAB_038f6554:
      iVar6 = (int)lVar4 + 1;
      if ((int)lVar4 == -1) {
        return;
      }
      goto LAB_038f6584;
    }
    lVar5 = param_1[1] + lVar4;
    if (*(char *)(lVar5 + 1) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_038f6554;
    }
    if (*(char *)(lVar5 + 2) == '\0') {
      iVar6 = (int)lVar4 + 3;
      if ((int)lVar4 == -3) {
        return;
      }
      goto LAB_038f6584;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  iVar6 = 1;
LAB_038f6584:
  uVar10 = 0;
  uVar8 = 0;
  do {
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar5 = param_1[1];
    lVar4 = 0;
    do {
      if (*(char *)(lVar5 + lVar4) == '\0') goto LAB_038f6624;
      if (*(char *)(lVar5 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_038f6624;
      }
      if (*(char *)(lVar5 + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_038f6624;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_038f6624:
    iVar9 = (int)uVar10;
    pcVar1 = puVar3;
    if (iVar9 <= (int)lVar4 && -1 < iVar9) {
      pcVar1 = (char *)(lVar5 + uVar8);
    }
    iVar7 = (int)uVar8;
    if (*pcVar1 == '\\') {
LAB_038f65a0:
      (**(code **)(*param_1 + 0x18))(param_1);
      *(undefined1 *)(param_1[1] + (long)iVar7) = param_2;
    }
    else {
      (**(code **)(*param_1 + 0x18))(param_1);
      lVar5 = param_1[1];
      lVar4 = 0;
      do {
        if (*(char *)(lVar5 + lVar4) == '\0') goto LAB_038f669c;
        if (*(char *)(lVar5 + lVar4 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_038f669c;
        }
        if (*(char *)(lVar5 + lVar4 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_038f669c;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_038f669c:
      pcVar1 = puVar3;
      if (iVar9 <= (int)lVar4 && -1 < iVar9) {
        pcVar1 = (char *)(lVar5 + uVar8);
      }
      if (*pcVar1 == '/') goto LAB_038f65a0;
      if ((param_3 & 1) != 0) {
        (**(code **)(*param_1 + 0x18))(param_1);
        lVar5 = param_1[1];
        lVar4 = 0;
        do {
          if (*(char *)(lVar5 + lVar4) == '\0') goto LAB_038f6710;
          if (*(char *)(lVar5 + lVar4 + 1) == '\0') {
            lVar4 = lVar4 + 1;
            goto LAB_038f6710;
          }
          if (*(char *)(lVar5 + lVar4 + 2) == '\0') {
            lVar4 = lVar4 + 2;
            goto LAB_038f6710;
          }
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        lVar4 = 0;
LAB_038f6710:
        pbVar2 = puVar3;
        if (iVar9 <= (int)lVar4 && -1 < iVar9) {
          pbVar2 = (byte *)(lVar5 + uVar8);
        }
        if (0x40 < *pbVar2) {
          (**(code **)(*param_1 + 0x18))(param_1);
          lVar5 = param_1[1];
          lVar4 = 0;
          do {
            if (*(char *)(lVar5 + lVar4) == '\0') goto LAB_038f6780;
            if (*(char *)(lVar5 + lVar4 + 1) == '\0') {
              lVar4 = lVar4 + 1;
              goto LAB_038f6780;
            }
            if (*(char *)(lVar5 + lVar4 + 2) == '\0') {
              lVar4 = lVar4 + 2;
              goto LAB_038f6780;
            }
            lVar4 = lVar4 + 3;
          } while (lVar4 != 0x80001);
          lVar4 = 0;
LAB_038f6780:
          pbVar2 = puVar3;
          if (iVar9 <= (int)lVar4 && -1 < iVar9) {
            pbVar2 = (byte *)(lVar5 + uVar8);
          }
          if (*pbVar2 < 0x5b) {
            (**(code **)(*param_1 + 0x18))(param_1);
            *(char *)(param_1[1] + (long)iVar7) = *(char *)(param_1[1] + (long)iVar7) + ' ';
          }
        }
      }
    }
    uVar10 = uVar8 + 1;
    uVar8 = uVar10 & 0xffffffff;
    if (iVar6 == (int)uVar10) {
      return;
    }
  } while( true );
}

