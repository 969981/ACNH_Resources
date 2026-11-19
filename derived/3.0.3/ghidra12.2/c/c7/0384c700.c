
void FUN_0384c700(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  char *__dest;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined4 local_78 [2];
  undefined *local_70;
  char *local_68;
  
  lVar9 = DAT_05ae7600;
  lVar7 = *(long *)PTR_DAT_04bb46c8;
  uVar10 = *(uint *)(lVar7 + 0x5c8);
  if ((int)uVar10 < 1) {
    if ((*(long *)(lVar7 + 0x4b8) == 0) ||
       (puVar8 = *(uint **)(*(long *)(lVar7 + 0x4b8) + 8), puVar8 == (uint *)0x0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = *puVar8;
    }
  }
  if (DAT_05ae7600 == 0) {
    pvVar6 = malloc(0x78);
  }
  else {
    plVar5 = param_3;
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        pvVar6 = (void *)0x0;
        goto LAB_0384c7d0;
      }
    }
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x78,8);
  }
LAB_0384c7d0:
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_03be6580(pvVar6,param_2[1],0x1e,param_3,0);
  if (uVar10 != 0) {
    uVar12 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      local_78[0] = 0xffffffff;
      local_68 = *(char **)(PTR_PTR_04bb2238 + 8);
      local_70 = puVar1;
      FUN_00981960(lVar7,local_78,uVar12 & 0xffffffff);
      puVar15 = &DAT_05ae2b18 + uVar12 * 10;
      if (0x1d < uVar12) {
        puVar15 = &DAT_05ae2b18;
      }
      (**(code **)(local_70 + 0x18))(&local_70);
      __dest = (char *)*puVar15;
      pcVar13 = local_68;
      if (__dest != local_68) {
        lVar9 = 0;
        do {
          pcVar13 = local_68 + lVar9;
          lVar9 = lVar9 + 1;
        } while (*pcVar13 != '\0');
        uVar14 = (int)lVar9 - 1;
        if (*(int *)((long)puVar15 + 0xc) <= (int)uVar14) {
          uVar14 = *(int *)((long)puVar15 + 0xc) - 1;
        }
        if ((int)uVar14 < 1) {
          uVar14 = 0;
        }
        else {
          memcpy(__dest,local_68,(ulong)uVar14);
          __dest = __dest + uVar14;
        }
        *__dest = '\0';
        pcVar13 = (char *)*puVar15;
        *(uint *)(puVar15 + 1) = uVar14;
      }
      uVar2 = local_78[0];
      uVar14 = *(uint *)((long)pvVar6 + 0x68);
      uVar11 = (ulong)uVar14;
      puVar16 = *(undefined8 **)((long)pvVar6 + 0x70);
      puVar15 = puVar16;
      if (0 < (int)uVar14) {
        do {
          iVar3 = strcmp((char *)*puVar15,pcVar13);
          if (iVar3 == 0) goto LAB_0384c848;
          uVar11 = uVar11 - 1;
          puVar15 = puVar15 + 2;
        } while (uVar11 != 0);
      }
      puVar16[(long)(int)uVar14 * 2] = pcVar13;
      *(undefined4 *)
       (*(long *)((long)pvVar6 + 0x70) + (long)*(int *)((long)pvVar6 + 0x68) * 0x10 + 8) = uVar2;
      *(int *)((long)pvVar6 + 0x68) = *(int *)((long)pvVar6 + 0x68) + 1;
LAB_0384c848:
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar10);
  }
  *param_1 = pvVar6;
  return;
}

