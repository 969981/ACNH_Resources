
void FUN_00757850(long param_1,long *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  char *__dest;
  undefined1 *puVar9;
  char *__src;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_e0;
  undefined1 local_dc [127];
  undefined1 local_5d;
  int local_58;
  
  if (*(char *)param_2[1] != '\0') {
    __dest = *(char **)(param_1 + 0x280);
    local_58 = param_3;
    if (*__dest == '\0') {
      (**(code **)(*param_2 + 0x18))(param_2);
      __src = (char *)param_2[1];
      if (__dest != __src) {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar5 = 0;
        do {
          if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_00757ae0;
          lVar7 = param_2[1] + lVar5;
          if (*(char *)(lVar7 + 1) == '\0') {
            lVar5 = lVar5 + 1;
            goto LAB_00757ae0;
          }
          if (*(char *)(lVar7 + 2) == '\0') {
            lVar5 = lVar5 + 2;
            goto LAB_00757ae0;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        lVar5 = 0;
LAB_00757ae0:
        iVar2 = (int)lVar5;
        if (*(int *)(param_1 + 0x288) <= (int)lVar5) {
          iVar2 = *(int *)(param_1 + 0x288) + -1;
        }
        memcpy(__dest,__src,(long)iVar2);
        __dest[iVar2] = '\0';
      }
      *(int *)(param_1 + 0x10d8) = param_3;
      local_5d = 0;
      local_e0 = 0x80;
      local_dc[0] = 0;
      local_f0 = &DAT_048fc708;
      local_e8 = local_dc;
      (**(code **)(*param_2 + 0x18))(param_2);
      puVar9 = (undefined1 *)param_2[1];
      if (local_dc != puVar9) {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar5 = 0;
        do {
          if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_00757bac;
          lVar7 = param_2[1] + lVar5;
          if (*(char *)(lVar7 + 1) == '\0') {
            lVar5 = lVar5 + 1;
            goto LAB_00757bac;
          }
          if (*(char *)(lVar7 + 2) == '\0') {
            lVar5 = lVar5 + 2;
            goto LAB_00757bac;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        lVar5 = 0;
LAB_00757bac:
        iVar2 = (int)lVar5;
        if (local_e0 <= (int)lVar5) {
          iVar2 = local_e0 + -1;
        }
        memcpy(local_dc,puVar9,(long)iVar2);
        local_dc[iVar2] = 0;
      }
    }
    else {
      local_5d = 0;
      local_e0 = 0x80;
      local_dc[0] = 0;
      local_f0 = PTR_DAT_04bb2d88 + 0x10;
      local_e8 = local_dc;
      (**(code **)(*param_2 + 0x18))(param_2);
      puVar9 = (undefined1 *)param_2[1];
      if (local_dc != puVar9) {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar5 = 0;
        do {
          if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_0075799c;
          lVar7 = param_2[1] + lVar5;
          if (*(char *)(lVar7 + 1) == '\0') {
            lVar5 = lVar5 + 1;
            goto LAB_0075799c;
          }
          if (*(char *)(lVar7 + 2) == '\0') {
            lVar5 = lVar5 + 2;
            goto LAB_0075799c;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        lVar5 = 0;
LAB_0075799c:
        iVar2 = (int)lVar5;
        if (local_e0 <= (int)lVar5) {
          iVar2 = local_e0 + -1;
        }
        memcpy(local_dc,puVar9,(long)iVar2);
        local_dc[iVar2] = 0;
      }
      lVar5 = *(long *)(param_1 + 0x1398);
      if (lVar5 != param_1 + 0x1390) {
        lVar7 = lVar5 + -0xa0;
        do {
          lVar8 = *(long *)(lVar5 + 8);
          (**(code **)(*(long *)(lVar5 + -0xa0) + 0x18))(lVar7);
          (**(code **)(*(long *)(lVar5 + -0xa0) + 0x18))(lVar7);
          puVar9 = *(undefined1 **)(lVar7 + 8);
          (**(code **)(local_f0 + 0x18))(&local_f0);
          if (puVar9 == local_e8) {
LAB_007579f0:
            if (*(int *)(lVar7 + 0x98) == local_58) {
              return;
            }
          }
          else {
            uVar6 = 0;
            bVar4 = true;
            lVar5 = *(long *)(lVar7 + 8) + 2;
            do {
              lVar1 = lVar5 + uVar6;
              cVar3 = *(char *)(lVar1 + -2);
              if (cVar3 != local_e8[uVar6]) break;
              if (cVar3 == '\0') {
                if (bVar4) goto LAB_007579f0;
                break;
              }
              cVar3 = *(char *)(lVar1 + -1);
              if (cVar3 != local_e8[uVar6 + 1]) break;
              if (cVar3 == '\0') goto LAB_007579f0;
              cVar3 = *(char *)(lVar5 + uVar6);
              if (cVar3 != local_e8[uVar6 + 2]) break;
              if (cVar3 == '\0') goto LAB_007579f0;
              bVar4 = uVar6 < 0x7fffe;
              uVar6 = uVar6 + 3;
            } while (uVar6 != 0x80001);
          }
          lVar7 = lVar8 + -0xa0;
          lVar5 = lVar8;
        } while (lVar7 != param_1 + 0x12f0);
      }
    }
    FUN_00757c10(param_1 + 0x1390,&local_f0);
  }
  return;
}

