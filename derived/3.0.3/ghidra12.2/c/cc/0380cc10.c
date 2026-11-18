
bool FUN_0380cc10(long param_1,long *param_2,undefined1 *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined1 *__dest;
  long lVar8;
  undefined1 *puVar9;
  undefined **local_f8;
  undefined1 *local_f0;
  int local_e8;
  undefined1 local_e4 [127];
  undefined1 local_65;
  undefined1 local_60;
  undefined8 local_5c;
  
  if ((param_4 & 1) != 0) {
    iVar3 = *(int *)(param_1 + 400);
    if ((0 < iVar3) && (*(int *)(param_1 + 0x188) <= iVar3)) {
      *(int *)(param_1 + 400) = iVar3 + -1;
      iVar3 = 0;
      if (*(int *)(param_1 + 0x18c) + 1 < *(int *)(param_1 + 0x188)) {
        iVar3 = *(int *)(param_1 + 0x18c) + 1;
      }
      *(int *)(param_1 + 0x18c) = iVar3;
    }
  }
  local_e8 = 0x80;
  local_65 = 0;
  local_f8 = &PTR_LAB_048fcff0;
  local_f0 = local_e4;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar9 = (undefined1 *)param_2[1];
  if (local_e4 != puVar9) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_0380cd0c;
      lVar8 = param_2[1] + lVar6;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0380cd0c;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0380cd0c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0380cd0c:
    iVar3 = (int)lVar6;
    if (local_e8 <= (int)lVar6) {
      iVar3 = local_e8 + -1;
    }
    memcpy(local_e4,puVar9,(long)iVar3);
    local_e4[iVar3] = 0;
  }
  puVar9 = local_f0;
  iVar3 = *(int *)(param_1 + 400);
  iVar4 = *(int *)(param_1 + 0x188);
  local_60 = *param_3;
  local_5c = *(undefined8 *)(param_3 + 4);
  local_f8 = (undefined **)&DAT_048fc708;
  if (iVar3 < iVar4) {
    lVar6 = *(long *)(param_1 + 0x180);
    *(int *)(param_1 + 400) = iVar3 + 1;
    iVar1 = *(int *)(param_1 + 0x18c) + iVar3;
    iVar2 = 0;
    if (iVar4 <= iVar1) {
      iVar2 = iVar4;
    }
    iVar1 = iVar1 - iVar2;
    lVar8 = lVar6 + (long)iVar1 * 0xa8;
    __dest = *(undefined1 **)(lVar8 + 8);
    local_f0[(long)local_e8 + -1] = 0;
    if (__dest != local_f0) {
      (*(code *)PTR_FUN_048fc720)(&local_f8);
      lVar7 = 0;
      do {
        if (local_f0[lVar7] == '\0') goto LAB_0380ce0c;
        if (local_f0[lVar7 + 1] == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_0380ce0c;
        }
        if (local_f0[lVar7 + 2] == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_0380ce0c;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_0380ce0c:
      iVar5 = *(int *)(lVar8 + 0x10);
      iVar2 = (int)lVar7;
      if (iVar5 <= (int)lVar7) {
        iVar2 = iVar5 + -1;
      }
      memcpy(__dest,puVar9,(long)iVar2);
      __dest[iVar2] = 0;
    }
    lVar6 = lVar6 + (long)iVar1 * 0xa8;
    *(undefined1 *)(lVar6 + 0x98) = local_60;
    *(undefined4 *)(lVar6 + 0x9c) = (undefined4)local_5c;
    *(undefined4 *)(lVar6 + 0xa0) = local_5c._4_4_;
  }
  return iVar3 < iVar4;
}

