
/* WARNING: Removing unreachable block (ram,0x035c8074) */
/* WARNING: Removing unreachable block (ram,0x035c807c) */
/* WARNING: Removing unreachable block (ram,0x035c8084) */
/* WARNING: Removing unreachable block (ram,0x035c8088) */

void FUN_035c7980(undefined8 *param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar13;
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  uint *puVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong *puVar26;
  long *plVar27;
  ulong *puVar28;
  ulong uVar29;
  ulong *puVar30;
  
  uVar15 = (uint)(param_3 >> 1) ^ (uint)param_3;
  if (0xfff < param_3) {
    uVar15 = (uint)(param_3 >> 4);
  }
  uVar3 = (uint)param_4 & 0xff;
  uVar15 = uVar3 + uVar15;
  if (uVar15 < 2) {
    uVar15 = 1;
  }
  uVar29 = (ulong)uVar15;
  uVar16 = *(ulong *)(param_2 + 0x48);
  if (uVar16 != 0) {
    uVar21 = 0;
    if (uVar16 != 0) {
      uVar21 = uVar29 / uVar16;
    }
    lVar17 = uVar29 - uVar21 * uVar16;
    uVar21 = uVar16;
    do {
      uVar19 = *(uint *)(*(long *)(param_2 + 0x38) + lVar17 * 4);
      if (uVar19 == 0) break;
      if (((uVar19 == uVar15) &&
          (puVar30 = (ulong *)(*(long *)(param_2 + 0x38) + (uVar16 * 4 + 7 & 0xfffffffffffffff8) +
                              lVar17 * 0x20), param_3 == *puVar30)) && ((byte)puVar30[1] == uVar3))
      {
        FUN_035c7720(param_2,param_3,param_4);
        break;
      }
      lVar18 = 0;
      if (lVar17 + 1U < uVar16) {
        lVar18 = lVar17 + 1;
      }
      uVar21 = uVar21 - 1;
      lVar17 = lVar18;
    } while (uVar21 != 0);
  }
  if (*(long *)(param_2 + 0x40) != *(long *)(param_2 + 0x20)) goto LAB_035c7d00;
  puVar30 = *(ulong **)(param_2 + 0xa8);
  while (puVar28 = puVar30, puVar28 != (ulong *)(param_2 + 0xb8)) {
    uVar16 = *puVar28;
    uVar21 = *(ulong *)(param_2 + 0x48);
    uVar19 = (uint)(uVar16 >> 1) ^ (uint)uVar16;
    if (0xfff < uVar16) {
      uVar19 = (uint)(uVar16 >> 4);
    }
    uVar19 = uVar19 + (byte)puVar28[1];
    if (uVar19 < 2) {
      uVar19 = 1;
    }
    if (uVar21 != 0) {
      uVar24 = 0;
      if (uVar21 != 0) {
        uVar24 = uVar19 / uVar21;
      }
      lVar17 = (ulong)uVar19 - uVar24 * uVar21;
      uVar24 = uVar21;
      do {
        uVar6 = *(uint *)(*(long *)(param_2 + 0x38) + lVar17 * 4);
        if (uVar6 == 0) break;
        if (((uVar6 == uVar19) &&
            (puVar26 = (ulong *)(*(long *)(param_2 + 0x38) + (uVar21 * 4 + 7 & 0xfffffffffffffff8) +
                                lVar17 * 0x20), uVar16 == *puVar26)) &&
           ((uint)(byte)puVar28[1] == (uint)(byte)puVar26[1])) goto LAB_035c7b28;
        lVar18 = 0;
        if (lVar17 + 1U < uVar21) {
          lVar18 = lVar17 + 1;
        }
        uVar24 = uVar24 - 1;
        lVar17 = lVar18;
      } while (uVar24 != 0);
    }
    puVar26 = (ulong *)0x0;
LAB_035c7b28:
    puVar30 = (ulong *)puVar28[3];
    puVar4 = (ulong *)0x0;
    if (puVar26 != (ulong *)0x0) {
      puVar4 = puVar26 + 2;
    }
    uVar16 = *puVar4;
    plVar14 = (long *)puVar4[1];
    if (plVar14 != (long *)0x0) {
      plVar27 = plVar14 + 1;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar8) {
          *plVar27 = *plVar27 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if (uVar16 == 0) {
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    }
    if (plVar14 != (long *)0x0) {
      plVar27 = plVar14 + 1;
      if (plVar14[1] == 1) goto LAB_035c7bc0;
      do {
        lVar17 = *plVar27;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar8) {
          *plVar27 = lVar17 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  goto LAB_035c7ce4;
LAB_035c7c44:
  lVar17 = lVar17 + 1;
  uVar23 = uVar23 - 1;
  if (uVar23 == 0) goto LAB_035c7ce4;
  goto LAB_035c7c50;
LAB_035c7bc0:
  do {
    lVar17 = *plVar27;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar8) {
      *plVar27 = lVar17 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (lVar17 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    std::__shared_weak_count::__release_weak();
  }
  uVar16 = *(ulong *)(param_2 + 0x48);
  if (uVar16 != 0) {
    uVar21 = *puVar28;
    lVar17 = 0;
    lVar20 = *(long *)(param_2 + 0x38);
    lVar18 = lVar20 + (uVar16 * 4 + 7 & 0xfffffffffffffff8);
    uVar19 = (uint)(uVar21 >> 1) ^ (uint)uVar21;
    if (0xfff < uVar21) {
      uVar19 = (uint)(uVar21 >> 4);
    }
    uVar19 = uVar19 + (byte)puVar28[1];
    if (uVar19 < 2) {
      uVar19 = 1;
    }
    uVar24 = 0;
    if (uVar16 != 0) {
      uVar24 = uVar19 / uVar16;
    }
    uVar23 = uVar16;
LAB_035c7c50:
    uVar10 = lVar17 + ((ulong)uVar19 - uVar24 * uVar16);
    uVar9 = 0;
    if (uVar16 != 0) {
      uVar9 = uVar10 / uVar16;
    }
    lVar25 = uVar10 - uVar9 * uVar16;
    uVar6 = *(uint *)(lVar20 + lVar25 * 4);
    if (uVar6 == 0) goto LAB_035c7ce4;
    if ((uVar6 != uVar19) ||
       (puVar30 = (ulong *)(lVar18 + lVar25 * 0x20),
       uVar21 != *puVar30 || (uint)(byte)puVar28[1] != (uint)(byte)puVar30[1])) goto LAB_035c7c44;
    plVar14 = (long *)puVar30[3];
    if (plVar14 != (long *)0x0) {
      plVar27 = plVar14 + 1;
      do {
        lVar17 = *plVar27;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar8) {
          *plVar27 = lVar17 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar16 = *(ulong *)(param_2 + 0x48);
    if (uVar16 != 1) {
      uVar21 = 0;
      while( true ) {
        uVar24 = 0;
        if (uVar16 != 0) {
          uVar24 = (uVar21 + uVar10) / uVar16;
        }
        lVar25 = (uVar21 + uVar10) - uVar24 * uVar16;
        lVar17 = 0;
        if (lVar25 + 1U != uVar16) {
          lVar17 = lVar25 + 1;
        }
        uVar19 = *(uint *)(lVar20 + lVar17 * 4);
        if (uVar19 == 0) break;
        uVar24 = 0;
        if (uVar16 != 0) {
          uVar24 = uVar19 / uVar16;
        }
        uVar24 = lVar17 + uVar16 + (uVar24 * uVar16 - (ulong)uVar19);
        uVar23 = 0;
        if (uVar16 != 0) {
          uVar23 = uVar24 / uVar16;
        }
        if (uVar24 == uVar23 * uVar16) break;
        puVar1 = (undefined8 *)(lVar18 + lVar17 * 0x20);
        *(uint *)(lVar20 + lVar25 * 4) = uVar19;
        *(undefined4 *)(lVar20 + lVar17 * 4) = 0;
        puVar2 = (undefined8 *)(lVar18 + lVar25 * 0x20);
        uVar5 = puVar1[1];
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        uVar5 = puVar1[3];
        puVar2[2] = puVar1[2];
        puVar2[3] = uVar5;
        puVar1[2] = 0;
        puVar1[3] = 0;
        uVar16 = *(ulong *)(param_2 + 0x48);
        uVar21 = uVar21 + 1;
        if (uVar16 - 1 <= uVar21) goto LAB_035c80b0;
      }
      *(undefined4 *)(lVar20 + lVar25 * 4) = 0;
    }
LAB_035c80b0:
    *(long *)(param_2 + 0x40) = *(long *)(param_2 + 0x40) + -1;
    goto LAB_035c7d00;
  }
LAB_035c7ce4:
  FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
LAB_035c7d00:
  plVar14 = (long *)(**(code **)(*(long *)(param_2 + 0x50) + 0x30))
                              ((long *)(param_2 + 0x50),0x438c0,0x40);
  plVar14[2] = 0;
  *plVar14 = (long)&PTR_LAB_04b3e878;
  plVar14[8] = param_2;
  plVar27 = plVar14 + 1;
  *plVar27 = 0;
  puVar30 = (ulong *)(plVar14 + 0x10);
  *puVar30 = param_3;
  *(char *)(plVar14 + 0x11) = (char)param_4;
  plVar14[0x12] = param_2;
  plVar14[0x13] = param_2 + 0xb8;
  plVar14[0x14] = *(long *)(param_2 + 0xd8);
  *(ulong **)(*(long *)(param_2 + 0xd8) + 0x18) = puVar30;
  *param_1 = puVar30;
  param_1[1] = plVar14;
  *(ulong **)(param_2 + 0xd8) = puVar30;
  if (*(ulong *)(param_2 + 0x20) <= *(ulong *)(param_2 + 0x40)) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  uVar16 = *(ulong *)(param_2 + 0x48);
  if (uVar16 != 0) {
    uVar21 = 0;
    if (uVar16 != 0) {
      uVar21 = uVar29 / uVar16;
    }
    lVar17 = uVar29 - uVar21 * uVar16;
    uVar21 = uVar16;
    do {
      uVar19 = *(uint *)(*(long *)(param_2 + 0x38) + lVar17 * 4);
      if (uVar19 == 0) break;
      if (((uVar19 == uVar15) &&
          (puVar28 = (ulong *)(*(long *)(param_2 + 0x38) + (uVar16 * 4 + 7 & 0xfffffffffffffff8) +
                              lVar17 * 0x20), param_3 == *puVar28)) && ((byte)puVar28[1] == uVar3))
      goto LAB_035c7ecc;
      lVar18 = 0;
      if (lVar17 + 1U < uVar16) {
        lVar18 = lVar17 + 1;
      }
      uVar21 = uVar21 - 1;
      lVar17 = lVar18;
    } while (uVar21 != 0);
  }
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar8) {
      *plVar27 = *plVar27 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  uVar16 = *(long *)(param_2 + 0x40) + 1;
  uVar21 = *(long *)(param_2 + 0x40) + 3;
  if (((uVar16 < 0xfffffffffffffffe) && (uVar21 >> 0x3e < 3)) &&
     (auVar11._8_8_ = 0, auVar11._0_8_ = uVar21,
     uVar16 = (SUB168(auVar11 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0x7ffffffffffffffe) * 2, uVar16 < 5
     )) {
    uVar16 = 4;
  }
  uVar21 = *(ulong *)(param_2 + 0x48);
  if (uVar21 < uVar16) {
    if ((uVar16 < 0xfffffffffffffffe) && (uVar16 + 2 >> 0x3e < 3)) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar16 + 2;
      uVar16 = (SUB168(auVar12 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0x7ffffffffffffffe) << 1;
    }
    if (uVar21 < uVar16) {
      iVar13 = FUN_035c8350(param_2 + 0x28);
      if (iVar13 != 0) {
        do {
          lVar17 = *plVar27;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar8) {
            *plVar27 = lVar17 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          std::__shared_weak_count::__release_weak();
        }
LAB_035c7ecc:
        FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
        return;
      }
      uVar21 = *(ulong *)(param_2 + 0x48);
    }
  }
  uVar16 = 0;
  if (uVar21 != 0) {
    uVar16 = uVar29 / uVar21;
  }
  lVar20 = *(long *)(param_2 + 0x38);
  lVar17 = lVar20 + (uVar21 * 4 + 7 & 0xfffffffffffffff8);
  lVar18 = uVar29 - uVar16 * uVar21;
  puVar22 = (uint *)(lVar20 + lVar18 * 4);
  uVar3 = *puVar22;
  if (uVar3 != 0) {
    uVar16 = 0;
    lVar25 = lVar18;
    uVar24 = param_3;
    plVar27 = plVar14;
    puVar28 = puVar30;
    do {
      uVar23 = 0;
      if (uVar21 != 0) {
        uVar23 = uVar3 / uVar21;
      }
      uVar23 = lVar25 + uVar21 + (uVar23 * uVar21 - (ulong)uVar3);
      uVar10 = 0;
      if (uVar21 != 0) {
        uVar10 = uVar23 / uVar21;
      }
      uVar23 = uVar23 - uVar10 * uVar21;
      param_3 = uVar24;
      plVar14 = plVar27;
      puVar30 = puVar28;
      if (uVar23 < uVar16) {
        puVar26 = (ulong *)(lVar17 + lVar25 * 0x20);
        param_3 = *puVar26;
        uVar16 = puVar26[1];
        *puVar26 = uVar24;
        *(char *)(puVar26 + 1) = (char)param_4;
        puVar30 = (ulong *)puVar26[2];
        plVar14 = (long *)puVar26[3];
        puVar26[2] = (ulong)puVar28;
        puVar26[3] = (ulong)plVar27;
        uVar15 = *puVar22;
        *puVar22 = (uint)uVar29;
        param_4 = param_4 & 0xffffffffffffff00 | (ulong)(byte)uVar16;
        uVar29 = (ulong)uVar15;
        uVar21 = *(ulong *)(param_2 + 0x48);
        uVar16 = uVar23;
      }
      uVar15 = (uint)uVar29;
      uVar16 = uVar16 + 1;
      lVar18 = 0;
      if (lVar25 + 1U != uVar21) {
        lVar18 = lVar25 + 1;
      }
      puVar22 = (uint *)(lVar20 + lVar18 * 4);
      uVar3 = *puVar22;
      lVar25 = lVar18;
      uVar24 = param_3;
      plVar27 = plVar14;
      puVar28 = puVar30;
    } while (uVar3 != 0);
  }
  *(uint *)(lVar20 + lVar18 * 4) = uVar15;
  puVar28 = (ulong *)(lVar17 + lVar18 * 0x20);
  *puVar28 = param_3;
  puVar28[1] = param_4;
  puVar28[2] = (ulong)puVar30;
  puVar28[3] = (ulong)plVar14;
  *(long *)(param_2 + 0x40) = *(long *)(param_2 + 0x40) + 1;
  return;
}

