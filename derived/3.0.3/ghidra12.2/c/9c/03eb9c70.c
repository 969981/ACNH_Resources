
void FUN_03eb9c70(long *param_1,long *param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  char cVar7;
  bool bVar8;
  
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x18))();
    if ((undefined1 *)param_1[1] != (undefined1 *)0x0) {
      *(undefined1 *)param_1[1] = 0;
      if (((DAT_05b04f88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_05b04f88), iVar2 != 0)) {
        DAT_05b04f78 = PTR_DAT_04bb2020 + 0x10;
        DAT_05b04f80 = "\\/:*?\"<>|";
        __cxa_guard_release(&DAT_05b04f88);
      }
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar6 = (char *)param_2[1];
      if (*pcVar6 != '\0') {
        bVar8 = false;
LAB_03eb9d08:
        (**(code **)(DAT_05b04f78 + 0x18))(&DAT_05b04f78);
        uVar4 = 0;
        bVar1 = true;
        cVar7 = *pcVar6;
        do {
          if (DAT_05b04f80[uVar4] == '\0') break;
          if (DAT_05b04f80[uVar4] == cVar7) {
            if (bVar1) {
LAB_03eb9d80:
              if (!bVar8) {
                (**(code **)(*param_1 + 0x18))(param_1);
                lVar3 = param_1[1];
                lVar5 = 0;
                goto LAB_03eb9da0;
              }
              bVar8 = true;
              goto LAB_03eb9d00;
            }
            break;
          }
          if (DAT_05b04f80[uVar4 + 1] == '\0') break;
          if (DAT_05b04f80[uVar4 + 1] == cVar7) goto LAB_03eb9d80;
          if (DAT_05b04f80[uVar4 + 2] == '\0') break;
          if (DAT_05b04f80[uVar4 + 2] == cVar7) goto LAB_03eb9d80;
          bVar1 = uVar4 < 0x7fffe;
          uVar4 = uVar4 + 3;
        } while (uVar4 != 0x80001);
        (**(code **)(*param_1 + 0x18))(param_1);
        lVar3 = param_1[1];
        lVar5 = 0;
        do {
          if (*(char *)(lVar3 + lVar5) == '\0') goto LAB_03eb9e2c;
          if (*(char *)(lVar3 + lVar5 + 1) == '\0') {
            lVar5 = lVar5 + 1;
            goto LAB_03eb9e2c;
          }
          if (*(char *)(lVar3 + lVar5 + 2) == '\0') {
            lVar5 = lVar5 + 2;
            goto LAB_03eb9e2c;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        lVar5 = 0;
LAB_03eb9e2c:
        bVar8 = false;
        iVar2 = (int)lVar5;
        bVar1 = false;
        if (iVar2 < (int)param_1[2] + -1) goto LAB_03eb9e70;
        goto LAB_03eb9d00;
      }
    }
  }
  return;
  while( true ) {
    if (*(char *)(lVar3 + lVar5 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_03eb9e54;
    }
    if (*(char *)(lVar3 + lVar5 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_03eb9e54;
    }
    lVar5 = lVar5 + 3;
    if (lVar5 == 0x80001) break;
LAB_03eb9da0:
    if (*(char *)(lVar3 + lVar5) == '\0') goto LAB_03eb9e54;
  }
  lVar5 = 0;
LAB_03eb9e54:
  bVar8 = true;
  iVar2 = (int)lVar5;
  bVar1 = true;
  cVar7 = param_3;
  if (iVar2 < (int)param_1[2] + -1) {
LAB_03eb9e70:
    bVar8 = bVar1;
    *(char *)(lVar3 + iVar2) = cVar7;
    ((char *)(lVar3 + iVar2))[1] = '\0';
  }
LAB_03eb9d00:
  pcVar6 = pcVar6 + 1;
  if (*pcVar6 == '\0') {
    return;
  }
  goto LAB_03eb9d08;
}

