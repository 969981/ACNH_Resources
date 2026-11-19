
void FUN_03b7d010(long param_1,long param_2,uint param_3)

{
  int *piVar1;
  long lVar2;
  undefined2 *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined2 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  undefined2 *puVar18;
  ulong uVar19;
  
  if (*(char *)(param_1 + 0xc) == '\0' || *(char *)(param_1 + 0xd) == '\0') {
    return;
  }
  uVar19 = (ulong)param_3;
  nn::os::ClearLightEvent((LightEventType *)(*(long *)(param_1 + 0x120) + 0x20));
  uVar4 = *(uint *)(param_1 + 100);
  uVar14 = (ulong)uVar4;
  iVar17 = *(int *)(param_1 + 0x58);
  if ((0 < (int)uVar4) && (0 < (int)param_3)) {
    lVar16 = *(long *)(param_1 + 0x30);
    uVar15 = 0;
    puVar18 = (undefined2 *)(param_2 + 8);
    do {
      if (DAT_05aebc00 == '\0') {
        iVar10 = (int)uVar15;
joined_r0x03b7d0ec:
        if (param_3 < 8) goto LAB_03b7d0f0;
LAB_03b7d10c:
        lVar8 = 0;
        lVar2 = (long)(int)(uVar4 * iVar17) * 2 + (long)iVar10 * 2;
        lVar12 = lVar16;
        puVar11 = puVar18;
        do {
          puVar3 = (undefined2 *)(lVar12 + lVar2);
          lVar8 = lVar8 + -8;
          lVar12 = lVar12 + uVar14 * 0x10;
          *puVar3 = puVar11[-4];
          puVar3 = puVar3 + uVar14;
          *puVar3 = puVar11[-3];
          puVar3 = puVar3 + uVar14;
          *puVar3 = puVar11[-2];
          puVar3 = puVar3 + uVar14;
          *puVar3 = puVar11[-1];
          puVar3 = puVar3 + uVar14;
          *puVar3 = *puVar11;
          puVar3 = puVar3 + uVar14;
          *puVar3 = puVar11[1];
          puVar3[uVar14] = puVar11[2];
          puVar9 = puVar11 + 3;
          puVar11 = puVar11 + 8;
          (puVar3 + uVar14)[uVar14] = *puVar9;
        } while (-lVar8 != (uVar19 & 0xfffffff8));
        puVar11 = (undefined2 *)(lVar12 + lVar2);
        lVar8 = -lVar8;
      }
      else {
        if (uVar15 < 6) {
          iVar10 = (&DAT_041e8148)[uVar15];
          goto joined_r0x03b7d0ec;
        }
        iVar10 = 0;
        if (7 < param_3) goto LAB_03b7d10c;
LAB_03b7d0f0:
        lVar8 = 0;
        puVar11 = (undefined2 *)(lVar16 + (long)(int)(uVar4 * iVar17) * 2 + (long)iVar10 * 2);
      }
      if ((param_3 & 7) != 0) {
        puVar9 = (undefined2 *)(param_2 + lVar8 * 2);
        uVar13 = uVar19 & 7;
        do {
          uVar13 = uVar13 - 1;
          *puVar11 = *puVar9;
          puVar11 = puVar11 + uVar14;
          puVar9 = puVar9 + 1;
        } while (uVar13 != 0);
      }
      uVar15 = uVar15 + 1;
      puVar18 = puVar18 + uVar19;
      param_2 = param_2 + uVar19 * 2;
    } while (uVar15 != uVar14);
    iVar17 = *(int *)(param_1 + 0x58);
  }
  iVar17 = iVar17 + param_3;
  *(int *)(param_1 + 0x58) = iVar17;
  if ((iVar17 * -0x69d0369d + 0x1b4e800U >> 6 | iVar17 * -0x74000000) < 0xda741) {
    iVar17 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = iVar17 + 1;
    if (2 < iVar17) {
      plVar7 = *(long **)(param_1 + 0x118);
      if (plVar7 == (long *)0x0) {
        FUN_03b7d290(param_1);
      }
      else if (((*(uint *)((long)plVar7 + 0xcc) & 0xfffffffe) != 2) &&
              (uVar14 = (**(code **)(*plVar7 + 0x18))(plVar7,param_1,1), (uVar14 & 1) != 0)) {
        piVar1 = (int *)(param_1 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    iVar17 = *(int *)(param_1 + 0x58);
  }
  if (0x95ff < iVar17) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  nn::os::SignalLightEvent((LightEventType *)(*(long *)(param_1 + 0x120) + 0x20));
  return;
}

