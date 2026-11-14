
void FUN_01bd9620(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined1 auStack_60 [8];
  long local_58;
  
  puVar1 = PTR_DAT_04bb2120;
  uVar5 = 0;
  iVar6 = 0;
  do {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar2 = param_3[1];
    uVar4 = 0;
    do {
      if (*(char *)(lVar2 + uVar4) == '\0') goto LAB_01bd96c4;
      if (*(char *)(lVar2 + uVar4 + 1) == '\0') {
        uVar4 = uVar4 + 1;
        goto LAB_01bd96c4;
      }
      if (*(char *)(lVar2 + uVar4 + 2) == '\0') {
        uVar4 = uVar4 + 2;
        goto LAB_01bd96c4;
      }
      uVar4 = uVar4 + 3;
    } while (uVar4 != 0x80001);
    uVar4 = 0;
LAB_01bd96c4:
    pbVar3 = puVar1;
    if (uVar5 <= (uVar4 & 0xffffffff)) {
      pbVar3 = (byte *)(lVar2 + uVar5);
    }
    if (9 < *pbVar3 - 0x30) break;
    uVar5 = uVar5 + 1;
    iVar6 = (uint)*pbVar3 + iVar6 * 10 + -0x30;
  } while( true );
  *(int *)(param_2 + 4) = iVar6;
  FUN_01bd9380(param_1,param_3);
  if (*(char *)param_1[1] != '\0') {
    (**(code **)(*param_1 + 0x18))(param_1);
    pbVar3 = (byte *)param_1[1];
    lVar2 = 0;
    do {
      if (pbVar3[lVar2] == 0) {
LAB_01bd975c:
        if ((int)lVar2 < 0) {
          pbVar3 = puVar1;
        }
        break;
      }
      if (pbVar3[lVar2 + 1] == 0) {
        lVar2 = lVar2 + 1;
        goto LAB_01bd975c;
      }
      if (pbVar3[lVar2 + 2] == 0) {
        lVar2 = lVar2 + 2;
        goto LAB_01bd975c;
      }
      lVar2 = lVar2 + 3;
    } while (lVar2 != 0x80001);
    if (*pbVar3 - 0x30 < 10) {
      uVar5 = 0;
      iVar6 = 0;
      do {
        (**(code **)(*param_1 + 0x18))(param_1);
        lVar2 = param_1[1];
        uVar4 = 0;
        do {
          if (*(char *)(lVar2 + uVar4) == '\0') goto LAB_01bd97e4;
          if (*(char *)(lVar2 + uVar4 + 1) == '\0') {
            uVar4 = uVar4 + 1;
            goto LAB_01bd97e4;
          }
          if (*(char *)(lVar2 + uVar4 + 2) == '\0') {
            uVar4 = uVar4 + 2;
            goto LAB_01bd97e4;
          }
          uVar4 = uVar4 + 3;
        } while (uVar4 != 0x80001);
        uVar4 = 0;
LAB_01bd97e4:
        pbVar3 = puVar1;
        if (uVar5 <= (uVar4 & 0xffffffff)) {
          pbVar3 = (byte *)(lVar2 + uVar5);
        }
        if (9 < *pbVar3 - 0x30) {
          *(int *)(param_2 + 8) = iVar6;
          FUN_01bd9380(auStack_60,param_1);
          param_1[1] = local_58;
          return;
        }
        uVar5 = uVar5 + 1;
        iVar6 = (uint)*pbVar3 + iVar6 * 10 + -0x30;
      } while( true );
    }
  }
  return;
}

