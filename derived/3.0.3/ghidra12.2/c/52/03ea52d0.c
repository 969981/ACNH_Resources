
long * FUN_03ea52d0(long param_1,void *param_2)

{
  void *__dest;
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar7 = malloc(0x70);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar1 = (undefined8 *)(lVar9 + 8);
    if (lVar6 != 0) {
      puVar1 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x70,8);
  }
  puVar5 = PTR_DAT_04bcad48;
  puVar4 = PTR_DAT_04bb2030;
  __dest = (void *)((long)plVar7 + 0x1c);
  *(undefined1 *)((long)plVar7 + 0x5b) = 0;
  *plVar7 = (long)(puVar5 + 0x10);
  plVar7[1] = (long)(puVar4 + 0x10);
  plVar7[2] = (long)__dest;
  *(undefined4 *)(plVar7 + 3) = 0x40;
  if (__dest != param_2) {
    lVar9 = 0;
    do {
      if (*(char *)((long)param_2 + lVar9) == '\0') goto LAB_03ea53cc;
      if (*(char *)((long)param_2 + lVar9 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_03ea53cc;
      }
      if (*(char *)((long)param_2 + lVar9 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_03ea53cc;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_03ea53cc:
    iVar8 = (int)lVar9;
    if (0x3e < iVar8) {
      iVar8 = 0x3f;
    }
    memcpy(__dest,param_2,(long)iVar8);
    *(undefined1 *)((long)__dest + (long)iVar8) = 0;
  }
  puVar4 = PTR_DAT_04bb2bc0;
  *(undefined1 *)((long)plVar7 + 100) = 0;
  *(undefined4 *)(plVar7 + 0xc) = 1;
  puVar5 = PTR_DAT_04bcad70;
  *(undefined4 *)(plVar7 + 0xd) = uVar2;
  *(undefined4 *)((long)plVar7 + 0x6c) = uVar3;
  *plVar7 = (long)(puVar5 + 0x10);
  plVar7[1] = (long)(puVar4 + 0x10);
  return plVar7;
}

