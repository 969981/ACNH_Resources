
void FUN_03bf2460(undefined8 *param_1,long param_2,undefined8 param_3,uint param_4,byte param_5,
                 undefined8 param_6,uint param_7)

{
  bool bVar1;
  char *__s2;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined2 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  undefined4 *puVar15;
  ulong uVar16;
  ulong uVar17;
  
  *(uint *)(param_1 + 4) = param_4;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_LAB_04b7bee8;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 5) = 1;
  *(byte *)((long)param_1 + 0x29) = param_5;
  param_1[2] = param_3;
  param_1[3] = param_6;
  if ((param_5 & 1) == 0) {
    uVar6 = (ulong)param_4;
    lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x30) + 0x48) + (ulong)param_4 * 8);
  }
  else {
    lVar3 = (**(code **)(**(long **)(*(long *)(param_2 + 0x30) + 0x18) + 0x20))();
    uVar6 = (ulong)*(uint *)(param_1 + 4);
    param_2 = param_1[1];
    lVar3 = *(long *)(*(long *)(lVar3 + 0x40) + uVar6 * 8);
    if (*(char *)((long)param_1 + 0x29) != '\0') {
      lVar4 = (**(code **)(**(long **)(*(long *)(param_2 + 0x30) + 0x18) + 0x20))();
      uVar6 = (ulong)*(uint *)(param_1 + 4);
      plVar9 = (long *)(lVar4 + 0x48);
      goto LAB_03bf2508;
    }
  }
  plVar9 = (long *)(param_2 + 0x78);
LAB_03bf2508:
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(*plVar9 + uVar6 * 4);
  uVar6 = DAT_04c4bf50;
  lVar4 = param_1[3];
  if ((*(int *)(lVar4 + 4) == 0) && (*(int *)(lVar3 + 0x60) == 0)) {
    plVar9 = (long *)(*(long *)(*(long *)(param_1[1] + 0x30) + 0x18) + 0x18);
    plVar10 = plVar9 + param_7;
    if (1 < param_7) {
      plVar10 = plVar9;
    }
    if (*(int *)(lVar4 + 8) <= *(int *)(lVar4 + 0xc)) {
      plVar10 = (long *)*plVar10;
      lVar11 = plVar10[0xb];
      uVar16 = *(ulong *)PTR_DAT_04bb38c0;
      lVar4 = (long)*(int *)(lVar4 + 8);
      do {
        uVar17 = (ulong)*(uint *)(lVar3 + 0x6c);
        uVar7 = (ulong)*(uint *)(lVar11 + lVar4 * 0x14 + 8);
        uVar13 = uVar6 | uVar7;
        uVar8 = uVar13 + 0x100000000;
        if (uVar16 <= uVar7) {
          uVar8 = uVar13;
        }
        uVar8 = (ulong)*(uint *)(*(long *)(*plVar10 + 0x40) + (long)*(int *)(uVar8 + 0xc) * 4);
        pcVar14 = (char *)(uVar6 | uVar8);
        __s2 = pcVar14 + 0x100000000;
        if (uVar16 <= uVar8) {
          __s2 = pcVar14;
        }
        if (0 < (int)*(uint *)(lVar3 + 0x6c)) {
          puVar15 = (undefined4 *)(*(long *)(lVar3 + 0x70) + 8);
          do {
            if ((*(char **)(puVar15 + -2) != (char *)0x0) &&
               (iVar2 = strcmp(*(char **)(puVar15 + -2),__s2), iVar2 == 0)) {
              uVar5 = (undefined2)*puVar15;
              goto LAB_03bf25a8;
            }
            puVar15 = puVar15 + 4;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        uVar5 = 0xffff;
LAB_03bf25a8:
        lVar12 = *(long *)((uint *)param_1[2] + 2) + (long)(int)(uint)lVar4 * 0x28;
        if (*(uint *)param_1[2] <= (uint)lVar4) {
          lVar12 = 0;
        }
        *(undefined2 *)(lVar12 + 0x20) = uVar5;
        bVar1 = lVar4 < *(int *)(param_1[3] + 0xc);
        lVar4 = lVar4 + 1;
      } while (bVar1);
    }
  }
  return;
}

