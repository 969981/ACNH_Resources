
void FUN_0384cf20(int *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined1 *__dest;
  char *pcVar15;
  uint uVar16;
  undefined8 *puVar17;
  long lVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined4 local_78 [2];
  undefined *local_70;
  undefined1 *local_68;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb46c8;
  uVar8 = *(uint *)(lVar9 + 0x3c8);
  if ((int)uVar8 < 1) {
    uVar8 = 0;
    if (*(long *)(lVar9 + 0x2b8) != 0) {
      puVar10 = *(uint **)(*(long *)(lVar9 + 0x2b8) + 8);
      uVar8 = 0;
      if (puVar10 != (uint *)0x0) {
        uVar8 = *puVar10;
      }
    }
  }
  iVar2 = *param_1;
  if (iVar2 != 0) {
    iVar19 = 0;
    lVar18 = *(long *)(param_1 + 2);
    do {
      puVar14 = (undefined8 *)(lVar18 + (long)iVar19 * 0x18);
      lVar11 = *(long *)puVar1;
      puVar17 = (undefined8 *)*puVar14;
      if (lVar11 == 0) {
        pvVar7 = malloc(0x78);
      }
      else {
        plVar6 = param_2;
        if (param_2 == (long *)0x0) {
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar6 = (long *)(lVar11 + 8);
          if (lVar5 != 0) {
            plVar6 = (long *)(lVar5 + 0xa8);
          }
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            pvVar7 = (void *)0x0;
            goto LAB_0384d00c;
          }
        }
        pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x78,8);
      }
LAB_0384d00c:
      (**(code **)(puVar14[1] + 0x18))(puVar14 + 1);
      FUN_03be6580(pvVar7,puVar14[2],0x1e,param_2,0);
      iVar19 = iVar19 + 1;
      *puVar17 = pvVar7;
    } while (iVar2 != iVar19);
  }
  if (uVar8 != 0) {
    uVar12 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      local_78[0] = 0xffffffff;
      local_68 = *(undefined1 **)(PTR_PTR_04bb2238 + 8);
      local_70 = puVar1;
      FUN_009815a0(lVar9,local_78,uVar12 & 0xffffffff);
      puVar14 = &DAT_05ae4738 + uVar12 * 10;
      if (0x1d < uVar12) {
        puVar14 = &DAT_05ae4738;
      }
      (**(code **)(local_70 + 0x18))(&local_70);
      __dest = (undefined1 *)*puVar14;
      if (__dest != local_68) {
        lVar18 = 0;
        do {
          pcVar15 = local_68 + lVar18;
          lVar18 = lVar18 + 1;
        } while (*pcVar15 != '\0');
        uVar16 = (int)lVar18 - 1;
        if (*(int *)((long)puVar14 + 0xc) <= (int)uVar16) {
          uVar16 = *(int *)((long)puVar14 + 0xc) - 1;
        }
        if ((int)uVar16 < 1) {
          uVar16 = 0;
        }
        else {
          memcpy(__dest,local_68,(ulong)uVar16);
          __dest = __dest + uVar16;
        }
        *__dest = 0;
        *(uint *)(puVar14 + 1) = uVar16;
      }
      iVar2 = *param_1;
      if (iVar2 != 0) {
        iVar19 = 0;
        lVar18 = *(long *)(param_1 + 2);
        do {
          uVar3 = local_78[0];
          pcVar15 = (char *)*puVar14;
          lVar11 = **(long **)(lVar18 + (long)iVar19 * 0x18);
          uVar16 = *(uint *)(lVar11 + 0x68);
          uVar13 = (ulong)uVar16;
          puVar20 = *(undefined8 **)(lVar11 + 0x70);
          puVar17 = puVar20;
          if (0 < (int)uVar16) {
            do {
              iVar4 = strcmp((char *)*puVar17,pcVar15);
              if (iVar4 == 0) goto LAB_0384d1a8;
              uVar13 = uVar13 - 1;
              puVar17 = puVar17 + 2;
            } while (uVar13 != 0);
          }
          puVar20[(long)(int)uVar16 * 2] = pcVar15;
          *(undefined4 *)(*(long *)(lVar11 + 0x70) + (long)*(int *)(lVar11 + 0x68) * 0x10 + 8) =
               uVar3;
          *(int *)(lVar11 + 0x68) = *(int *)(lVar11 + 0x68) + 1;
LAB_0384d1a8:
          iVar19 = iVar19 + 1;
        } while (iVar2 != iVar19);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar8);
  }
  return;
}

