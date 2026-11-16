
void FUN_02774cf0(char *param_1,long param_2)

{
  char cVar1;
  char *__src;
  uint uVar2;
  int iVar3;
  long lVar4;
  char *__dest;
  undefined *local_50;
  char *local_48;
  int local_40;
  char local_3c [7];
  undefined1 local_35;
  
  if (param_2 != 0) {
    **(undefined1 **)(param_2 + 8) = 0;
    local_40 = 8;
    local_35 = 0;
    local_3c[0] = '\0';
    local_48 = local_3c;
    local_50 = PTR_DAT_04bb3768 + 0x10;
    if (*param_1 != '\0') {
      lVar4 = 0;
      do {
        if (local_3c[lVar4] == '\0') {
LAB_02774d88:
          iVar3 = (int)lVar4;
          if (iVar3 < 7) goto LAB_02774d90;
LAB_02774db8:
          cVar1 = param_1[1];
          if (cVar1 != '\0') goto LAB_02774dc4;
          goto LAB_02774fbc;
        }
        if (local_3c[lVar4 + 1] == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_02774d88;
        }
        if (local_3c[lVar4 + 2] == '\0') {
          iVar3 = (int)lVar4 + 2;
          if (6 < iVar3) goto LAB_02774db8;
          goto LAB_02774d90;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      iVar3 = 0;
LAB_02774d90:
      local_48[iVar3] = *param_1;
      local_3c[(long)iVar3 + 1] = '\0';
      cVar1 = param_1[1];
      if (cVar1 != '\0') {
LAB_02774dc4:
        (**(code **)(PTR_DAT_04bb3768 + 0x28))(&local_50);
        lVar4 = 0;
        do {
          if (local_48[lVar4] == '\0') goto LAB_02774e1c;
          if (local_48[lVar4 + 1] == '\0') {
            lVar4 = lVar4 + 1;
            goto LAB_02774e1c;
          }
          if (local_48[lVar4 + 2] == '\0') {
            lVar4 = lVar4 + 2;
            goto LAB_02774e1c;
          }
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        lVar4 = 0;
LAB_02774e1c:
        if ((int)lVar4 < local_40 + -1) {
          local_48[(int)lVar4] = cVar1;
          (local_48 + (int)lVar4)[1] = '\0';
        }
        cVar1 = param_1[2];
        if (cVar1 != '\0') {
          (**(code **)(local_50 + 0x18))(&local_50);
          lVar4 = 0;
          do {
            if (local_48[lVar4] == '\0') goto LAB_02774e9c;
            if (local_48[lVar4 + 1] == '\0') {
              lVar4 = lVar4 + 1;
              goto LAB_02774e9c;
            }
            if (local_48[lVar4 + 2] == '\0') {
              lVar4 = lVar4 + 2;
              goto LAB_02774e9c;
            }
            lVar4 = lVar4 + 3;
          } while (lVar4 != 0x80001);
          lVar4 = 0;
LAB_02774e9c:
          if ((int)lVar4 < local_40 + -1) {
            local_48[(int)lVar4] = cVar1;
            (local_48 + (int)lVar4)[1] = '\0';
          }
          cVar1 = param_1[3];
          if (cVar1 != '\0') {
            (**(code **)(local_50 + 0x18))(&local_50);
            lVar4 = 0;
            do {
              if (local_48[lVar4] == '\0') goto LAB_02774f1c;
              if (local_48[lVar4 + 1] == '\0') {
                lVar4 = lVar4 + 1;
                goto LAB_02774f1c;
              }
              if (local_48[lVar4 + 2] == '\0') {
                lVar4 = lVar4 + 2;
                goto LAB_02774f1c;
              }
              lVar4 = lVar4 + 3;
            } while (lVar4 != 0x80001);
            lVar4 = 0;
LAB_02774f1c:
            if ((int)lVar4 < local_40 + -1) {
              local_48[(int)lVar4] = cVar1;
              (local_48 + (int)lVar4)[1] = '\0';
            }
            cVar1 = param_1[4];
            if (cVar1 != '\0') {
              (**(code **)(local_50 + 0x18))(&local_50);
              lVar4 = 0;
              do {
                if (local_48[lVar4] == '\0') goto LAB_02774f9c;
                if (local_48[lVar4 + 1] == '\0') {
                  lVar4 = lVar4 + 1;
                  goto LAB_02774f9c;
                }
                if (local_48[lVar4 + 2] == '\0') {
                  lVar4 = lVar4 + 2;
                  goto LAB_02774f9c;
                }
                lVar4 = lVar4 + 3;
              } while (lVar4 != 0x80001);
              lVar4 = 0;
LAB_02774f9c:
              if ((int)lVar4 < local_40 + -1) {
                local_48[(int)lVar4] = cVar1;
                (local_48 + (int)lVar4)[1] = '\0';
              }
            }
          }
        }
      }
    }
LAB_02774fbc:
    (**(code **)(local_50 + 0x18))(&local_50);
    lVar4 = 0;
    do {
      if (local_48[lVar4] == '\0') goto LAB_0277500c;
      if (local_48[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0277500c;
      }
      if (local_48[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0277500c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0277500c:
    if ((int)lVar4 < local_40 + -1) {
      (local_48 + (int)lVar4)[0] = '\0';
      (local_48 + (int)lVar4)[1] = '\0';
    }
    if ((*local_48 != '\0') && (uVar2 = FUN_021d5df0(&local_50), (uVar2 & 0xfffffffe) != 2)) {
      __dest = *(char **)(param_2 + 8);
      (**(code **)(local_50 + 0x18))(&local_50);
      __src = local_48;
      if (__dest != local_48) {
        (**(code **)(local_50 + 0x18))(&local_50);
        lVar4 = 0;
        do {
          if (local_48[lVar4] == '\0') goto LAB_027750bc;
          if (local_48[lVar4 + 1] == '\0') {
            lVar4 = lVar4 + 1;
            goto LAB_027750bc;
          }
          if (local_48[lVar4 + 2] == '\0') {
            lVar4 = lVar4 + 2;
            goto LAB_027750bc;
          }
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        lVar4 = 0;
LAB_027750bc:
        iVar3 = (int)lVar4;
        if (*(int *)(param_2 + 0x10) <= (int)lVar4) {
          iVar3 = *(int *)(param_2 + 0x10) + -1;
        }
        memcpy(__dest,__src,(long)iVar3);
        __dest[iVar3] = '\0';
      }
    }
  }
  return;
}

