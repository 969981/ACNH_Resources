
undefined8 FUN_006dd150(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  void *__dest;
  void *__src;
  long *plVar9;
  undefined *local_60;
  long lStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  
  __dest = *(void **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x50) = *param_2;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 1);
  uVar3 = param_2[3];
  *(undefined8 *)(param_1 + 0x60) = param_2[2];
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  plVar9 = param_2 + 4;
  (**(code **)(*plVar9 + 0x18))(plVar9);
  __src = (void *)param_2[5];
  if (__dest != __src) {
    (**(code **)(param_2[4] + 0x18))(plVar9);
    lVar8 = 0;
    do {
      if (*(char *)(param_2[5] + lVar8) == '\0') goto LAB_006dd20c;
      lVar1 = param_2[5] + lVar8;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_006dd20c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_006dd20c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_006dd20c:
    iVar2 = (int)lVar8;
    if (*(int *)(param_1 + 0x80) <= (int)lVar8) {
      iVar2 = *(int *)(param_1 + 0x80) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  uVar5 = *(undefined2 *)(param_2 + 0xd);
  *(undefined1 *)(param_1 + 0xba) = *(undefined1 *)((long)param_2 + 0x6a);
  puVar6 = PTR_DAT_04bb2950;
  *(undefined2 *)(param_1 + 0xb8) = uVar5;
  uVar4 = *puVar6;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xe);
  *(undefined1 *)(param_1 + 0x4c) = uVar4;
  local_50 = PTR_LAB_04bb2a30;
  *(undefined2 *)(param_1 + 0x4d) = 0;
  uStack_48 = 0;
  local_60 = PTR_DAT_04bb2a38 + 0x10;
  lStack_58 = param_1;
  uVar7 = FUN_006d6214(*(undefined8 *)(*(long *)PTR_DAT_04bcb7d8 + 0x88),&local_60,
                       (undefined1 *)(param_1 + 0x4c),0,0,0);
  *(undefined4 *)(param_1 + 0x44) = uVar7;
  return 1;
}

