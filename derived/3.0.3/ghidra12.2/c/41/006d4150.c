
void FUN_006d4150(long *param_1,long *param_2,long *param_3,long param_4)

{
  void *pvVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  void *pvVar9;
  long *plVar10;
  
  pvVar1 = (void *)((long)param_1 + 0x14);
  *(undefined1 *)((long)param_1 + 0x33) = 0;
  *(undefined4 *)(param_1 + 2) = 0x20;
  *param_1 = (long)&PTR_LAB_048fa8f8;
  param_1[1] = (long)pvVar1;
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar9 = (void *)param_2[1];
  if (pvVar1 != pvVar9) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = 0;
    do {
      if (*(char *)(param_2[1] + lVar8) == '\0') goto LAB_006d4210;
      lVar3 = param_2[1] + lVar8;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_006d4210;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_006d4210;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_006d4210:
    iVar4 = (int)lVar8;
    if ((int)param_1[2] <= (int)lVar8) {
      iVar4 = (int)param_1[2] + -1;
    }
    memcpy(pvVar1,pvVar9,(long)iVar4);
    *(undefined1 *)((long)pvVar1 + (long)iVar4) = 0;
  }
  pvVar1 = (void *)((long)param_1 + 0x7c);
  puVar2 = PTR_DAT_04bb2028 + 0x10;
  *param_1 = (long)puVar2;
  lVar8 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = lVar8;
  lVar8 = param_2[9];
  lVar5 = param_2[10];
  lVar3 = param_2[0xb];
  lVar6 = param_2[0xc];
  *(undefined4 *)(param_1 + 0xf) = 0x20;
  *(undefined1 *)((long)param_1 + 0x9b) = 0;
  param_1[0xd] = (long)&PTR_LAB_048fa8f8;
  param_1[0xe] = (long)pvVar1;
  param_1[0xb] = lVar3;
  param_1[0xc] = lVar6;
  param_1[9] = lVar8;
  param_1[10] = lVar5;
  plVar10 = param_2 + 0xd;
  (**(code **)(*plVar10 + 0x18))(plVar10);
  pvVar9 = (void *)param_2[0xe];
  if (pvVar1 != pvVar9) {
    (**(code **)(param_2[0xd] + 0x18))(plVar10);
    lVar8 = 0;
    do {
      if (*(char *)(param_2[0xe] + lVar8) == '\0') goto LAB_006d42ec;
      lVar3 = param_2[0xe] + lVar8;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_006d42ec;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_006d42ec;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_006d42ec:
    iVar4 = (int)lVar8;
    if ((int)param_1[0xf] <= (int)lVar8) {
      iVar4 = (int)param_1[0xf] + -1;
    }
    memcpy(pvVar1,pvVar9,(long)iVar4);
    *(undefined1 *)((long)pvVar1 + (long)iVar4) = 0;
  }
  param_1[0xd] = (long)puVar2;
  param_1[0x14] = (long)param_3;
  param_1[0x15] = param_4;
  uVar7 = *PTR_DAT_04bb2950;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0xe5) = 0;
  *(undefined1 *)((long)param_1 + 0xe4) = uVar7;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  lVar8 = (**(code **)(*param_3 + 0x30))(param_3,param_4,8);
  param_1[0x16] = lVar8;
  if (lVar8 != 0) {
    lVar8 = (**(code **)(*(long *)param_1[0x14] + 0x30))((long *)param_1[0x14],param_1[0x15],8);
    param_1[0x17] = lVar8;
    if (lVar8 != 0) {
      lVar8 = (**(code **)(*(long *)param_1[0x14] + 0x30))((long *)param_1[0x14],param_1[0x15],8);
      param_1[0x18] = lVar8;
      if (lVar8 != 0) {
        FUN_006d43c4(param_1);
        *(undefined1 *)((long)param_1 + 0xe5) = 1;
      }
    }
  }
  return;
}

