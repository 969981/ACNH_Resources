
void FUN_01730910(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 *__src;
  long lVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined **local_98;
  undefined8 local_90;
  undefined **local_88;
  undefined1 *local_80;
  int local_78;
  undefined1 local_74 [31];
  undefined1 local_55;
  
  puVar5 = PTR_DAT_04bb2a08;
  if ((int)param_1[0x18] < (int)param_1[0x17]) {
    local_78 = 0x20;
    local_55 = 0;
    local_88 = (undefined **)(PTR_DAT_04bb2a08 + 0x10);
    local_80 = local_74;
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar7 = (undefined1 *)param_2[1];
    if (local_74 != puVar7) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = 0;
      do {
        if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_017309e0;
        lVar2 = param_2[1] + lVar6;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_017309e0;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_017309e0;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_017309e0:
      iVar1 = (int)lVar6;
      if (local_78 <= (int)lVar6) {
        iVar1 = local_78 + -1;
      }
      memcpy(local_74,puVar7,(long)iVar1);
      local_74[iVar1] = 0;
    }
    iVar1 = (int)param_1[0x18];
    local_88 = &PTR_LAB_048f9700;
    iVar4 = (int)param_1[0x17];
    if (iVar1 < iVar4) {
      *(int *)(param_1 + 0x18) = iVar1 + 1;
      iVar1 = *(int *)((long)param_1 + 0xbc) + iVar1;
      iVar3 = 0;
      if (iVar4 <= iVar1) {
        iVar3 = iVar4;
      }
      plVar8 = (long *)(param_1[0x16] + (long)(iVar1 - iVar3) * 0x38);
      puVar7 = (undefined1 *)((long)plVar8 + 0x14);
      *(undefined4 *)(plVar8 + 2) = 0x20;
      *(undefined1 *)((long)plVar8 + 0x33) = 0;
      *plVar8 = (long)(puVar5 + 0x10);
      plVar8[1] = (long)puVar7;
      (*(code *)PTR_FUN_048f9718)(&local_88);
      __src = local_80;
      if (puVar7 != local_80) {
        (*(code *)local_88[3])(&local_88);
        lVar6 = 0;
        do {
          if (local_80[lVar6] == '\0') goto LAB_01730ae0;
          if (local_80[lVar6 + 1] == '\0') {
            lVar6 = lVar6 + 1;
            goto LAB_01730ae0;
          }
          if (local_80[lVar6 + 2] == '\0') {
            lVar6 = lVar6 + 2;
            goto LAB_01730ae0;
          }
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
        lVar6 = 0;
LAB_01730ae0:
        iVar1 = (int)lVar6;
        if ((int)plVar8[2] <= (int)lVar6) {
          iVar1 = (int)plVar8[2] + -1;
        }
        memcpy(puVar7,__src,(long)iVar1);
        puVar7[iVar1] = 0;
      }
      *plVar8 = (long)&PTR_LAB_048f9700;
    }
  }
  if (*(long *)(*param_1 + 0x280) != 0) {
    iVar4 = (int)param_1[0x18] + *(int *)((long)param_1 + 0xbc) + -1;
    iVar1 = 0;
    if ((int)param_1[0x17] <= iVar4) {
      iVar1 = (int)param_1[0x17];
    }
    local_98 = &PTR_LAB_048f9770;
    local_90 = *(undefined8 *)(param_1[0x16] + (long)(iVar4 - iVar1) * 0x38 + 8);
    FUN_03ef3440(*(long *)(*param_1 + 0x280),&local_98);
  }
  return;
}

