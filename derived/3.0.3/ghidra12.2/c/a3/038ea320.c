
undefined8
FUN_038ea320(undefined1 *param_1,uint *param_2,long *param_3,int *param_4,char *param_5,uint param_6
            ,long *param_7,uint param_8,uint param_9,uint param_10)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  undefined *local_90;
  long lStack_88;
  undefined **local_80;
  undefined1 *puStack_78;
  int local_70;
  undefined1 local_6c [7];
  undefined1 local_65;
  
  if ((int)param_6 <= *param_4) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar6 = param_3[1];
    lVar8 = 0;
    do {
      if (*(char *)(lVar6 + lVar8) == '\0') goto LAB_038ea3dc;
      if (*(char *)(lVar6 + lVar8 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_038ea3dc;
      }
      if (*(char *)(lVar6 + lVar8 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_038ea3dc;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_038ea3dc:
    pcVar9 = PTR_DAT_04bb2120;
    if ((int)param_6 <= (int)lVar8) {
      pcVar9 = (char *)(lVar6 + (ulong)param_6);
    }
    cVar3 = *pcVar9;
    (**(code **)(*param_7 + 0x18))(param_7);
    pcVar9 = (char *)param_7[1];
    uVar7 = 0;
    bVar5 = true;
    cVar4 = *pcVar9;
    while (cVar4 != '\0') {
      if (cVar4 == cVar3) {
LAB_038ea470:
        if (!bVar5) goto LAB_038ea560;
        goto LAB_038ea474;
      }
      if ((uVar7 == 0x80000) || (pcVar9[uVar7 + 1] == '\0')) break;
      if (pcVar9[uVar7 + 1] == cVar3) {
        bVar5 = uVar7 < 0x80000;
        goto LAB_038ea470;
      }
      uVar1 = uVar7 + 1;
      uVar7 = uVar7 + 2;
      bVar5 = uVar1 < 0x80000;
      cVar4 = pcVar9[uVar7];
    }
    if (((param_8 & 1) != 0) && (cVar3 == '\0')) {
LAB_038ea474:
      local_65 = 0;
      local_70 = 8;
      local_6c[0] = 0;
      local_80 = &PTR_LAB_04908da0;
      puStack_78 = local_6c;
      (**(code **)(*param_3 + 0x18))(param_3);
      if (local_6c != (undefined1 *)param_3[1]) {
        uVar2 = param_6;
        if (local_70 <= (int)param_6) {
          uVar2 = local_70 - 1;
        }
        memcpy(local_6c,(undefined1 *)param_3[1],(long)(int)uVar2);
        local_6c[(int)uVar2] = 0;
      }
      uVar7 = FUN_038d2c30(param_2,&local_80,10);
      if ((((uVar7 & 1) != 0) && (param_9 <= *param_2)) && (*param_2 <= param_10)) {
        if (cVar3 == '\0') {
          *param_1 = 1;
          return 1;
        }
        (**(code **)(*param_3 + 0x18))(param_3);
        lVar6 = param_3[1];
        lVar8 = 0;
        do {
          if (*(char *)(lVar6 + lVar8) == '\0') goto LAB_038ea5a0;
          if (*(char *)(lVar6 + lVar8 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_038ea5a0;
          }
          if (*(char *)(lVar6 + lVar8 + 2) == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_038ea5a0;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_038ea5a0:
        lStack_88 = lVar6 + (ulong)(param_6 + 1);
        if ((int)lVar8 <= (int)param_6) {
          lStack_88 = *(long *)(PTR_PTR_04bb2238 + 8);
        }
        local_90 = PTR_DAT_04bb2020 + 0x10;
        (**(code **)(*param_3 + 0x10))(param_3,&local_90);
        *param_4 = *param_4 - (param_6 + 1);
        if (param_5 == (char *)0x0) {
          return 0;
        }
        *param_5 = cVar3;
        return 0;
      }
    }
  }
LAB_038ea560:
  *param_1 = 0;
  return 1;
}

