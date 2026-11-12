
void FUN_00721860(long param_1,long param_2,uint param_3,long *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  ulong *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  void *__dest;
  ulong uVar14;
  void *__src;
  long *plVar15;
  undefined4 *puVar16;
  
  if ((int)param_3 < 0) {
    return;
  }
  uVar13 = (ulong)param_3;
  if (param_3 == 0) {
    return;
  }
  uVar14 = uVar13 * 0x50 | 8;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    puVar8 = malloc(uVar14);
    puVar6 = PTR_DAT_04bb2028;
  }
  else {
    if (param_4 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_4 = (long *)(lVar12 + 8);
      if (lVar7 != 0) {
        param_4 = (long *)(lVar7 + 0xa8);
      }
      param_4 = (long *)*param_4;
      if (param_4 == (long *)0x0) goto LAB_007219a4;
    }
    puVar8 = (ulong *)(**(code **)(*param_4 + 0x30))(param_4,uVar14,8);
    puVar6 = PTR_DAT_04bb2028;
  }
  PTR_DAT_04bb2028 = puVar6;
  if (puVar8 != (ulong *)0x0) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    *puVar8 = uVar13;
    lVar12 = 0;
    do {
      puVar2 = (undefined8 *)((long)puVar8 + lVar12 + 0x34);
      *(undefined4 *)((long)puVar8 + lVar12 + 8) = 0xffffffff;
      *(undefined **)((long)puVar8 + lVar12 + 0x10) = puVar1;
      *(undefined8 **)((long)puVar8 + lVar12 + 0x18) = &DAT_0407ebb1;
      *(undefined8 **)((long)puVar8 + lVar12 + 0x28) = puVar2;
      *(undefined4 *)((long)puVar8 + lVar12 + 0x30) = 0x20;
      *(undefined1 *)((long)puVar8 + lVar12 + 0x53) = 0;
      if (puVar2 != &DAT_0407ebb1) {
        *(undefined1 *)puVar2 = 0;
      }
      lVar7 = lVar12 + 0x50;
      *(undefined **)((long)puVar8 + lVar12 + 0x20) = puVar6 + 0x10;
      lVar12 = lVar7;
    } while (uVar13 * 0x50 != lVar7);
    *(uint *)(param_1 + 0x298) = param_3;
    *(ulong **)(param_1 + 0x2a0) = puVar8 + 1;
  }
LAB_007219a4:
  uVar14 = 0;
  do {
    uVar10 = uVar14 & 0xffffffff;
    puVar16 = (undefined4 *)(param_2 + uVar14 * 0x50);
    lVar12 = *(long *)(param_1 + 0x2a0);
    if (*(uint *)(param_1 + 0x298) <= uVar14) {
      uVar10 = 0;
    }
    puVar9 = (undefined4 *)(lVar12 + uVar10 * 0x50);
    *puVar9 = *puVar16;
    __dest = *(void **)(puVar9 + 8);
    *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(puVar16 + 4);
    plVar15 = (long *)(puVar16 + 6);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    __src = *(void **)(puVar16 + 8);
    if (__dest != __src) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
      lVar11 = *(long *)(puVar16 + 8);
      lVar7 = 0;
      do {
        if (*(char *)(lVar11 + lVar7) == '\0') goto LAB_007219bc;
        lVar3 = lVar11 + lVar7;
        if (*(char *)(lVar3 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_007219bc;
        }
        if (*(char *)(lVar3 + 2) == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_007219bc;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_007219bc:
      iVar5 = *(int *)(lVar12 + uVar10 * 0x50 + 0x28);
      iVar4 = (int)lVar7;
      if (iVar5 <= (int)lVar7) {
        iVar4 = iVar5 + -1;
      }
      memcpy(__dest,__src,(long)iVar4);
      *(undefined1 *)((long)__dest + (long)iVar4) = 0;
    }
    uVar14 = uVar14 + 1;
    if (uVar14 == uVar13) {
      return;
    }
  } while( true );
}

