
void FUN_007ad520(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  char *__dest;
  void *pvVar10;
  void *pvVar11;
  
  FUN_00705c50();
  __dest = (char *)param_1[0xc];
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x57] = &PTR_FUN_04ba93e0;
  if (__dest != "XLink") {
    iVar2 = 5;
    if (*(int *)(param_1 + 0xd) < 6) {
      iVar2 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"XLink",(long)iVar2);
    __dest[iVar2] = '\0';
  }
  *param_1 = &PTR_LAB_04911ae0;
  puVar8 = PTR_DAT_04bb2f70;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0x40;
  pvVar10 = (void *)((long)param_1 + 0x2f4);
  param_1[0x5c] = puVar8 + 0x10;
  param_1[0x5d] = pvVar10;
  puVar6 = PTR_PTR_04bb2238;
  *(undefined1 *)((long)param_1 + 0x333) = 0;
  (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
  pvVar11 = *(void **)(puVar6 + 8);
  if (pvVar10 != pvVar11) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
    lVar9 = 0;
    do {
      if (*(char *)(*(long *)(puVar6 + 8) + lVar9) == '\0') goto LAB_007ad660;
      lVar1 = *(long *)(puVar6 + 8) + lVar9;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_007ad660;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_007ad660;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_007ad660:
    iVar2 = (int)lVar9;
    if (*(int *)(param_1 + 0x5e) <= (int)lVar9) {
      iVar2 = *(int *)(param_1 + 0x5e) + -1;
    }
    memcpy(pvVar10,pvVar11,(long)iVar2);
    *(undefined1 *)((long)pvVar10 + (long)iVar2) = 0;
  }
  puVar7 = PTR_DAT_04bb2bc0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  pvVar10 = (void *)((long)param_1 + 0x37c);
  param_1[0x6d] = puVar8 + 0x10;
  param_1[0x69] = &PTR_FUN_04ba93e0;
  lVar9 = *(long *)puVar6;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6e] = pvVar10;
  *(undefined4 *)(param_1 + 0x6f) = 0x40;
  param_1[0x5c] = puVar7 + 0x10;
  *(undefined1 *)((long)param_1 + 0x3bb) = 0;
  (**(code **)(lVar9 + 0x18))(puVar6);
  pvVar11 = *(void **)(puVar6 + 8);
  if (pvVar10 != pvVar11) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
    lVar9 = 0;
    do {
      if (*(char *)(*(long *)(puVar6 + 8) + lVar9) == '\0') goto LAB_007ad73c;
      lVar1 = *(long *)(puVar6 + 8) + lVar9;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_007ad73c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_007ad73c;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_007ad73c:
    iVar2 = (int)lVar9;
    if (*(int *)(param_1 + 0x6f) <= (int)lVar9) {
      iVar2 = *(int *)(param_1 + 0x6f) + -1;
    }
    memcpy(pvVar10,pvVar11,(long)iVar2);
    *(undefined1 *)((long)pvVar10 + (long)iVar2) = 0;
  }
  param_1[0x6d] = puVar7 + 0x10;
  param_1[0x7a] = &PTR_FUN_04ba93e0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  param_1[0x79] = 0;
  param_1[0x7b] = 0;
  uVar4 = DAT_0419b4fc;
  uVar3 = DAT_0419b4f4;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  param_1[0x80] = uVar3;
  param_1[0x81] = uVar4;
  uVar5 = DAT_0419b50c;
  param_1[0x82] = DAT_0419b504;
  uVar4 = DAT_0419b4ec;
  uVar3 = DAT_0419b4e4;
  param_1[0x83] = uVar5;
  param_1[0x7e] = uVar3;
  param_1[0x7f] = uVar4;
  return;
}

