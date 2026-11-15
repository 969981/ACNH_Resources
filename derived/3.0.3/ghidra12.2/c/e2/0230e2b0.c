
void FUN_0230e2b0(long *param_1)

{
  void *pvVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  void *pvVar12;
  
  *(undefined1 *)((long)param_1 + 0x53) = 0;
  *(undefined4 *)(param_1 + 2) = 0x40;
  puVar9 = PTR_PTR_04bb2238;
  pvVar1 = (void *)((long)param_1 + 0x14);
  puVar2 = PTR_DAT_04bb2f70 + 0x10;
  *param_1 = (long)puVar2;
  param_1[1] = (long)pvVar1;
  (**(code **)(*(long *)puVar9 + 0x18))(puVar9);
  pvVar12 = *(void **)(puVar9 + 8);
  if (pvVar1 != pvVar12) {
    (**(code **)(*(long *)puVar9 + 0x18))(puVar9);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(puVar9 + 8) + lVar11) == '\0') goto LAB_0230e36c;
      lVar3 = *(long *)(puVar9 + 8) + lVar11;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_0230e36c;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_0230e36c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0230e36c:
    iVar4 = (int)lVar11;
    if ((int)param_1[2] <= (int)lVar11) {
      iVar4 = (int)param_1[2] + -1;
    }
    memcpy(pvVar1,pvVar12,(long)iVar4);
    *(undefined1 *)((long)pvVar1 + (long)iVar4) = 0;
  }
  puVar10 = PTR_DAT_04bb2bc0;
  pvVar1 = (void *)((long)param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0xd) = 0x40;
  *(undefined1 *)((long)param_1 + 0xab) = 0;
  param_1[0xb] = (long)puVar2;
  param_1[0xc] = (long)pvVar1;
  *param_1 = (long)(puVar10 + 0x10);
  (**(code **)(*(long *)puVar9 + 0x18))(puVar9);
  pvVar12 = *(void **)(puVar9 + 8);
  if (pvVar1 != pvVar12) {
    (**(code **)(*(long *)puVar9 + 0x18))(puVar9);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(puVar9 + 8) + lVar11) == '\0') goto LAB_0230e42c;
      lVar3 = *(long *)(puVar9 + 8) + lVar11;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_0230e42c;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_0230e42c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0230e42c:
    iVar4 = (int)lVar11;
    if ((int)param_1[0xd] <= (int)lVar11) {
      iVar4 = (int)param_1[0xd] + -1;
    }
    memcpy(pvVar1,pvVar12,(long)iVar4);
    *(undefined1 *)((long)pvVar1 + (long)iVar4) = 0;
  }
  param_1[0xb] = (long)(puVar10 + 0x10);
  puVar2 = PTR_DAT_04bb37e0;
  *(undefined1 *)((long)param_1 + 0xc4) = 1;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((long)param_1 + 0xcc) = 0;
  *(undefined1 *)((long)param_1 + 0xdc) = 0;
  uVar5 = *(undefined4 *)(puVar2 + 4);
  uVar8 = *(undefined2 *)puVar2;
  *(undefined4 *)((long)param_1 + 0xb4) = uVar5;
  *(undefined4 *)(param_1 + 0x17) = 0xc;
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  *(undefined2 *)(param_1 + 0x16) = uVar8;
  *(undefined2 *)((long)param_1 + 0xbc) = uVar8;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined2 *)(param_1 + 0x1a) = uVar8;
  *(undefined4 *)((long)param_1 + 0xd4) = uVar5;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((long)param_1 + 0xb2) = uVar6;
  *(undefined1 *)((long)param_1 + 0xb3) = uVar7;
  *(undefined1 *)((long)param_1 + 0xbe) = uVar6;
  *(undefined1 *)((long)param_1 + 0xbf) = uVar7;
  *(undefined1 *)((long)param_1 + 0xd2) = uVar6;
  *(undefined1 *)((long)param_1 + 0xd3) = uVar7;
  return;
}

