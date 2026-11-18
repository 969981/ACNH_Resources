
/* WARNING: Removing unreachable block (ram,0x035c78f0) */
/* WARNING: Removing unreachable block (ram,0x035c78f8) */
/* WARNING: Removing unreachable block (ram,0x035c7900) */
/* WARNING: Removing unreachable block (ram,0x035c7904) */

void FUN_035c7720(long param_1,ulong param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  
  uVar13 = (uint)(param_2 >> 1) ^ (uint)param_2;
  param_3 = param_3 & 0xff;
  if (0xfff < param_2) {
    uVar13 = (uint)(param_2 >> 4);
  }
  uVar14 = *(ulong *)(param_1 + 0x48);
  uVar13 = param_3 + uVar13;
  if (uVar13 < 2) {
    uVar13 = 1;
  }
  if (uVar14 != 0) {
    uVar20 = 0;
    if (uVar14 != 0) {
      uVar20 = uVar13 / uVar14;
    }
    lVar19 = *(long *)(param_1 + 0x38);
    lVar2 = lVar19 + (uVar14 * 4 + 7 & 0xfffffffffffffff8);
    lVar15 = (ulong)uVar13 - uVar20 * uVar14;
    uVar20 = uVar14;
    lVar16 = lVar15;
    do {
      uVar8 = *(uint *)(lVar19 + lVar16 * 4);
      if (uVar8 == 0) {
        return;
      }
      if (((uVar8 == uVar13) && (puVar3 = (ulong *)(lVar2 + lVar16 * 0x20), param_2 == *puVar3)) &&
         ((byte)puVar3[1] == param_3)) {
        lVar16 = 0;
        uVar20 = uVar14;
        goto LAB_035c77ec;
      }
      lVar17 = 0;
      if (lVar16 + 1U < uVar14) {
        lVar17 = lVar16 + 1;
      }
      uVar20 = uVar20 - 1;
      lVar16 = lVar17;
    } while (uVar20 != 0);
  }
  return;
LAB_035c77ec:
  uVar4 = lVar16 + lVar15;
  uVar11 = 0;
  if (uVar14 != 0) {
    uVar11 = uVar4 / uVar14;
  }
  lVar17 = uVar4 - uVar11 * uVar14;
  uVar8 = *(uint *)(lVar19 + lVar17 * 4);
  if (uVar8 == 0) goto LAB_035c7924;
  if ((uVar8 != uVar13) ||
     (puVar3 = (ulong *)(lVar2 + lVar17 * 0x20), param_2 != *puVar3 || (byte)puVar3[1] != param_3))
  {
    lVar16 = lVar16 + 1;
    uVar20 = uVar20 - 1;
    if (uVar20 == 0) {
LAB_035c7924:
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
      return;
    }
    goto LAB_035c77ec;
  }
  plVar18 = (long *)puVar3[3];
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 1;
    do {
      lVar16 = *plVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar16 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      std::__shared_weak_count::__release_weak();
    }
  }
  uVar14 = *(ulong *)(param_1 + 0x48);
  if (uVar14 != 1) {
    uVar20 = 0;
    while( true ) {
      uVar11 = 0;
      if (uVar14 != 0) {
        uVar11 = (uVar20 + uVar4) / uVar14;
      }
      lVar15 = (uVar20 + uVar4) - uVar11 * uVar14;
      lVar16 = 0;
      if (lVar15 + 1U != uVar14) {
        lVar16 = lVar15 + 1;
      }
      uVar13 = *(uint *)(lVar19 + lVar16 * 4);
      if (uVar13 == 0) break;
      uVar11 = 0;
      if (uVar14 != 0) {
        uVar11 = uVar13 / uVar14;
      }
      uVar11 = lVar16 + uVar14 + (uVar11 * uVar14 - (ulong)uVar13);
      uVar12 = 0;
      if (uVar14 != 0) {
        uVar12 = uVar11 / uVar14;
      }
      if (uVar11 == uVar12 * uVar14) break;
      puVar5 = (undefined8 *)(lVar2 + lVar16 * 0x20);
      *(uint *)(lVar19 + lVar15 * 4) = uVar13;
      *(undefined4 *)(lVar19 + lVar16 * 4) = 0;
      puVar6 = (undefined8 *)(lVar2 + lVar15 * 0x20);
      uVar7 = puVar5[1];
      *puVar6 = *puVar5;
      puVar6[1] = uVar7;
      uVar7 = puVar5[3];
      puVar6[2] = puVar5[2];
      puVar6[3] = uVar7;
      puVar5[2] = 0;
      puVar5[3] = 0;
      uVar14 = *(ulong *)(param_1 + 0x48);
      uVar20 = uVar20 + 1;
      if (uVar14 - 1 <= uVar20) goto LAB_035c7954;
    }
    *(undefined4 *)(lVar19 + lVar15 * 4) = 0;
  }
LAB_035c7954:
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
  return;
}

