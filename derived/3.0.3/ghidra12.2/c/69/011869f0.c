
void * FUN_011869f0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  long lVar9;
  void *__s;
  
  iVar8 = (int)param_1[2];
  iVar6 = (int)param_1[1];
  if (iVar8 < iVar6) {
    *(int *)(param_1 + 2) = iVar8 + 1;
    iVar8 = *(int *)((long)param_1 + 0xc) + iVar8;
    iVar4 = 0;
    if (iVar6 <= iVar8) {
      iVar4 = iVar6;
    }
    __s = (void *)(*param_1 + (long)(iVar8 - iVar4) * 0x2268);
    memset(__s,0,0x2260);
    puVar5 = PTR_DAT_04bb2120;
    puVar7 = (undefined1 *)((long)__s + 0x18);
    lVar9 = 100;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bdf0c8 + 0x10;
    puVar3 = PTR_DAT_04bdf1d8 + 0x10;
    do {
      *(undefined **)(puVar7 + -0x18) = puVar1;
      *(undefined **)(puVar7 + -0x10) = puVar5;
      lVar9 = lVar9 + -1;
      *(undefined **)(puVar7 + -8) = puVar2;
      *puVar7 = 1;
      *(undefined4 *)(puVar7 + 4) = 0;
      puVar7[0x38] = 0;
      *(undefined8 *)(puVar7 + 8) = 0;
      *(undefined **)(puVar7 + 0x10) = puVar3;
      *(undefined8 *)(puVar7 + 0x18) = 0;
      *(undefined8 *)(puVar7 + 0x20) = 0;
      *(undefined8 *)(puVar7 + 0x28) = 0;
      *(undefined8 *)(puVar7 + 0x30) = 0;
      puVar7 = puVar7 + 0x58;
    } while (lVar9 != 0);
  }
  else {
    if (0 < iVar8) {
      iVar8 = 0;
      if (iVar6 <= *(int *)((long)param_1 + 0xc)) {
        iVar8 = iVar6;
      }
      FUN_01185508(*param_1 + (long)(*(int *)((long)param_1 + 0xc) - iVar8) * 0x2268);
      iVar6 = (int)param_1[1];
      iVar4 = 0;
      if (*(int *)((long)param_1 + 0xc) + 1 < iVar6) {
        iVar4 = *(int *)((long)param_1 + 0xc) + 1;
      }
      iVar8 = (int)param_1[2] + -1;
      *(int *)((long)param_1 + 0xc) = iVar4;
      *(int *)(param_1 + 2) = iVar8;
    }
    if (iVar6 <= iVar8) {
      return (void *)0x0;
    }
    *(int *)(param_1 + 2) = iVar8 + 1;
    iVar8 = *(int *)((long)param_1 + 0xc) + iVar8;
    iVar4 = 0;
    if (iVar6 <= iVar8) {
      iVar4 = iVar6;
    }
    __s = (void *)(*param_1 + (long)(iVar8 - iVar4) * 0x2268);
    memset(__s,0,0x2260);
    puVar5 = PTR_DAT_04bb2120;
    puVar7 = (undefined1 *)((long)__s + 0x18);
    lVar9 = 100;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bdf0c8 + 0x10;
    puVar3 = PTR_DAT_04bdf1d8 + 0x10;
    do {
      *(undefined **)(puVar7 + -0x18) = puVar1;
      *(undefined **)(puVar7 + -0x10) = puVar5;
      lVar9 = lVar9 + -1;
      *(undefined **)(puVar7 + -8) = puVar2;
      *puVar7 = 1;
      *(undefined4 *)(puVar7 + 4) = 0;
      puVar7[0x38] = 0;
      *(undefined8 *)(puVar7 + 8) = 0;
      *(undefined **)(puVar7 + 0x10) = puVar3;
      *(undefined8 *)(puVar7 + 0x18) = 0;
      *(undefined8 *)(puVar7 + 0x20) = 0;
      *(undefined8 *)(puVar7 + 0x28) = 0;
      *(undefined8 *)(puVar7 + 0x30) = 0;
      puVar7 = puVar7 + 0x58;
    } while (lVar9 != 0);
  }
  *(undefined4 *)((long)__s + 0x2260) = 0;
  *(undefined1 *)((long)__s + 0x2264) = 0;
  return __s;
}

