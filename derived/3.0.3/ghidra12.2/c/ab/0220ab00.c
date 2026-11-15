
bool FUN_0220ab00(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  undefined *puVar5;
  char *__dest;
  bool bVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  char *pcVar11;
  long local_d8;
  char *local_d0;
  undefined *local_b8;
  char *local_b0;
  int local_a8;
  char local_a4 [7];
  undefined1 local_9d;
  undefined *local_98;
  char *local_90;
  int local_88;
  char local_84 [31];
  undefined1 local_65;
  
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x18))(param_1);
  if ((undefined1 *)param_1[1] == &DAT_0407154e) {
LAB_0220aba0:
    bVar6 = true;
  }
  else {
    uVar9 = 0;
    bVar6 = true;
    do {
      cVar4 = ((undefined1 *)param_1[1])[uVar9];
      if (cVar4 != (&DAT_0407154e)[uVar9]) break;
      if (cVar4 == '\0') {
        if (bVar6) goto LAB_0220aba0;
        break;
      }
      bVar6 = uVar9 < 0x80000;
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x80001);
    local_65 = 0;
    local_84[0] = '\0';
    local_88 = 0x20;
    local_98 = PTR_DAT_04bb2028 + 0x10;
    local_90 = local_84;
    if ((param_2 & 1) == 0) {
      (**(code **)(*param_1 + 0x18))(param_1);
      pcVar11 = (char *)param_1[1];
      if (local_84 != pcVar11) {
        (**(code **)(*param_1 + 0x18))(param_1);
        lVar8 = 0;
        do {
          if (*(char *)(param_1[1] + lVar8) == '\0') goto LAB_0220ada8;
          lVar2 = param_1[1] + lVar8;
          if (*(char *)(lVar2 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_0220ada8;
          }
          if (*(char *)(lVar2 + 2) == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_0220ada8;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_0220ada8:
        iVar3 = (int)lVar8;
        if (local_88 <= (int)lVar8) {
          iVar3 = local_88 + -1;
        }
        memcpy(local_84,pcVar11,(long)iVar3);
        local_84[iVar3] = '\0';
      }
      puVar5 = PTR_DAT_04bb4128;
      uVar10 = 0;
      bVar6 = true;
      puVar1 = PTR_DAT_04bb3768 + 0x10;
      do {
        local_a8 = 8;
        local_9d = 0;
        local_a4[0] = '\0';
        local_b8 = puVar1;
        local_b0 = local_a4;
        FUN_020e3ad0(&local_d8,*(undefined8 *)puVar5,uVar10);
        __dest = local_b0;
        (**(code **)(local_d8 + 0x18))(&local_d8);
        pcVar11 = local_d0;
        if (__dest != local_d0) {
          (**(code **)(local_d8 + 0x18))(&local_d8);
          lVar8 = 0;
          do {
            if (local_d0[lVar8] == '\0') goto LAB_0220aeac;
            if (local_d0[lVar8 + 1] == '\0') {
              lVar8 = lVar8 + 1;
              goto LAB_0220aeac;
            }
            if (local_d0[lVar8 + 2] == '\0') {
              lVar8 = lVar8 + 2;
              goto LAB_0220aeac;
            }
            lVar8 = lVar8 + 3;
          } while (lVar8 != 0x80001);
          lVar8 = 0;
LAB_0220aeac:
          iVar3 = (int)lVar8;
          if (local_a8 <= (int)lVar8) {
            iVar3 = local_a8 + -1;
          }
          memcpy(__dest,pcVar11,(long)iVar3);
          __dest[iVar3] = '\0';
        }
        if (*local_b0 != '\0') {
          (**(code **)(local_b8 + 0x18))(&local_b8);
          (**(code **)(local_b8 + 0x18))(&local_b8);
          pcVar11 = local_b0;
          (**(code **)(local_98 + 0x18))(&local_98);
          if (pcVar11 == local_90) {
            return bVar6;
          }
          uVar9 = 0;
          bVar7 = true;
          do {
            if (local_b0[uVar9] != local_90[uVar9]) break;
            if (local_b0[uVar9] == '\0') {
              if (bVar7) {
                return bVar6;
              }
              break;
            }
            if (local_b0[uVar9 + 1] != local_90[uVar9 + 1]) break;
            if (local_b0[uVar9 + 1] == '\0') {
              return bVar6;
            }
            if (local_b0[uVar9 + 2] != local_90[uVar9 + 2]) break;
            if (local_b0[uVar9 + 2] == '\0') {
              return bVar6;
            }
            bVar7 = uVar9 < 0x7fffe;
            uVar9 = uVar9 + 3;
          } while (uVar9 != 0x80001);
        }
        bVar6 = uVar10 < 0xf;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x10);
    }
    else {
      FUN_021d7aa0(&local_98,param_1);
      puVar5 = PTR_DAT_04bb4128;
      uVar10 = 0;
      bVar6 = true;
      puVar1 = PTR_DAT_04bb3768 + 0x10;
      do {
        local_a8 = 8;
        local_9d = 0;
        local_a4[0] = '\0';
        local_b8 = puVar1;
        local_b0 = local_a4;
        FUN_020e3ad0(&local_d8,*(undefined8 *)puVar5,uVar10);
        FUN_021d7aa0(&local_b8,&local_d8);
        if (*local_b0 != '\0') {
          (**(code **)(local_b8 + 0x18))(&local_b8);
          (**(code **)(local_b8 + 0x18))(&local_b8);
          pcVar11 = local_b0;
          (**(code **)(local_98 + 0x18))(&local_98);
          if (pcVar11 == local_90) {
            return bVar6;
          }
          uVar9 = 0;
          bVar7 = true;
          do {
            if (local_b0[uVar9] != local_90[uVar9]) break;
            if (local_b0[uVar9] == '\0') {
              if (bVar7) {
                return bVar6;
              }
              break;
            }
            if (local_b0[uVar9 + 1] != local_90[uVar9 + 1]) break;
            if (local_b0[uVar9 + 1] == '\0') {
              return bVar6;
            }
            if (local_b0[uVar9 + 2] != local_90[uVar9 + 2]) break;
            if (local_b0[uVar9 + 2] == '\0') {
              return bVar6;
            }
            bVar7 = uVar9 < 0x7fffe;
            uVar9 = uVar9 + 3;
          } while (uVar9 != 0x80001);
        }
        bVar6 = uVar10 < 0xf;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x10);
    }
  }
  return bVar6;
}

