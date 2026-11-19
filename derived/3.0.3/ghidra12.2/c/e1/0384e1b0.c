
void FUN_0384e1b0(undefined8 *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  char *__s2;
  uint uVar11;
  undefined8 *puVar12;
  
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    pvVar7 = malloc(0x78);
  }
  else {
    plVar6 = param_3;
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar10 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        pvVar7 = (void *)0x0;
        goto LAB_0384e240;
      }
    }
    pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x78,8);
  }
LAB_0384e240:
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_03be6580(pvVar7,param_2[1],9,param_3,0);
  puVar3 = PTR_DAT_04bc43a8;
  uVar11 = 0;
  do {
    while (uVar11 < 9) {
      uVar2 = *(uint *)((long)pvVar7 + 0x68);
      uVar8 = (ulong)uVar2;
      puVar12 = *(undefined8 **)((long)pvVar7 + 0x70);
      __s2 = *(char **)(puVar3 + (ulong)uVar11 * 8 + 0x78);
      puVar9 = puVar12;
      if (0 < (int)uVar2) {
        do {
          iVar4 = strcmp((char *)*puVar9,__s2);
          if (iVar4 == 0) goto LAB_0384e2a8;
          uVar8 = uVar8 - 1;
          puVar9 = puVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar12[(long)(int)uVar2 * 2] = __s2;
      *(uint *)(*(long *)((long)pvVar7 + 0x70) + (long)*(int *)((long)pvVar7 + 0x68) * 0x10 + 8) =
           uVar11;
      *(int *)((long)pvVar7 + 0x68) = *(int *)((long)pvVar7 + 0x68) + 1;
LAB_0384e2a8:
      uVar11 = uVar11 + 1;
      if (uVar11 == 9) goto LAB_0384e364;
    }
    uVar2 = *(uint *)((long)pvVar7 + 0x68);
    uVar8 = (ulong)uVar2;
    puVar9 = *(undefined8 **)((long)pvVar7 + 0x70);
    if (0 < (int)uVar2) {
      do {
        if (*(char *)*puVar9 == '\0') goto LAB_0384e314;
        uVar8 = uVar8 - 1;
        puVar9 = puVar9 + 2;
      } while (uVar8 != 0);
    }
    (*(undefined8 **)((long)pvVar7 + 0x70))[(long)(int)uVar2 * 2] = &DAT_0407ebb1;
    *(uint *)(*(long *)((long)pvVar7 + 0x70) + (long)*(int *)((long)pvVar7 + 0x68) * 0x10 + 8) =
         uVar11;
    *(int *)((long)pvVar7 + 0x68) = *(int *)((long)pvVar7 + 0x68) + 1;
LAB_0384e314:
    bVar1 = (int)uVar11 < 8;
    uVar11 = uVar11 + 1;
  } while (bVar1);
LAB_0384e364:
  *param_1 = pvVar7;
  return;
}

