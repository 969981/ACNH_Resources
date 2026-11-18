
undefined8 FUN_035c8350(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  void *__s;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 local_80;
  undefined8 local_78;
  
  if (param_2 >> 0x3b != 0) {
    return 0x80000007;
  }
  uVar11 = param_2 * 4 + 7 & 0x7ffffffffffffff8;
  if ((CARRY8(uVar11,param_2 * 0x20)) ||
     (__s = (void *)(**(code **)(*(long *)*param_1 + 0x10))
                              ((long *)*param_1,uVar11 + param_2 * 0x20,param_1[1]),
     __s == (void *)0x0)) {
    return 0x80000007;
  }
  if (param_2 != 0) {
    memset(__s,0,param_2 * 4);
  }
  plVar26 = (long *)*param_1;
  lVar22 = param_1[2];
  param_1[2] = __s;
  param_1[3] = 0;
  lVar25 = param_1[4];
  param_1[4] = param_2;
  *param_1 = DAT_05b059a0;
  param_1[1] = 0;
  if (lVar25 == 0) {
    if (lVar22 == 0) {
      return 0;
    }
  }
  else {
    lVar27 = 0;
    lVar1 = lVar22 + (lVar25 * 4 + 7U & 0xfffffffffffffff8);
    do {
      if (*(int *)(lVar22 + lVar27 * 4) != 0) {
        puVar2 = (undefined8 *)(lVar1 + lVar27 * 0x20);
        uVar28 = puVar2[2];
        plVar23 = (long *)puVar2[3];
        puVar2[2] = 0;
        puVar2[3] = 0;
        uVar11 = param_1[3] + 1;
        uVar12 = param_1[3] + 3;
        if (((uVar11 < 0xfffffffffffffffe) && (uVar12 >> 0x3e < 3)) &&
           (auVar8._8_8_ = 0, auVar8._0_8_ = uVar12,
           uVar11 = (SUB168(auVar8 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0x7ffffffffffffffe) * 2,
           uVar11 < 5)) {
          uVar11 = 4;
        }
        uVar12 = param_1[4];
        uVar20 = *(uint *)(lVar22 + lVar27 * 4);
        uVar21 = (ulong)uVar20;
        if (uVar12 < uVar11) {
          if ((uVar11 < 0xfffffffffffffffe) && (uVar11 + 2 >> 0x3e < 3)) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar11 + 2;
            uVar11 = (SUB168(auVar9 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0x7ffffffffffffffe) << 1;
          }
          if (uVar12 < uVar11) {
            iVar10 = FUN_035c8350(param_1);
            if (iVar10 != 0) {
              if (plVar23 != (long *)0x0) {
                plVar24 = plVar23 + 1;
                do {
                  lVar13 = *plVar24;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                  if (bVar6) {
                    *plVar24 = lVar13 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar13 == 0) {
                  (**(code **)(*plVar23 + 0x10))(plVar23);
                  std::__shared_weak_count::__release_weak();
                }
              }
              goto LAB_035c8430;
            }
            uVar12 = param_1[4];
          }
        }
        local_80 = *puVar2;
        local_78 = puVar2[1];
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = uVar21 / uVar12;
        }
        lVar16 = param_1[2];
        lVar13 = lVar16 + (uVar12 * 4 + 7 & 0xfffffffffffffff8);
        lVar14 = uVar21 - uVar11 * uVar12;
        puVar17 = (uint *)(lVar16 + lVar14 * 4);
        uVar3 = *puVar17;
        if (uVar3 != 0) {
          uVar11 = 0;
          lVar15 = lVar14;
          plVar24 = plVar23;
          uVar29 = uVar28;
          do {
            uVar18 = 0;
            if (uVar12 != 0) {
              uVar18 = uVar3 / uVar12;
            }
            uVar18 = lVar15 + uVar12 + (uVar18 * uVar12 - (ulong)uVar3);
            uVar7 = 0;
            if (uVar12 != 0) {
              uVar7 = uVar18 / uVar12;
            }
            uVar18 = uVar18 - uVar7 * uVar12;
            plVar23 = plVar24;
            uVar28 = uVar29;
            if (uVar18 < uVar11) {
              puVar2 = (undefined8 *)(lVar13 + lVar15 * 0x20);
              uVar19 = *puVar2;
              *puVar2 = local_80;
              uVar4 = *(undefined1 *)(puVar2 + 1);
              *(char *)(puVar2 + 1) = (char)local_78;
              local_78 = CONCAT71(local_78._1_7_,uVar4);
              uVar28 = puVar2[2];
              plVar23 = (long *)puVar2[3];
              puVar2[2] = uVar29;
              puVar2[3] = plVar24;
              uVar20 = *puVar17;
              *puVar17 = (uint)uVar21;
              uVar12 = param_1[4];
              uVar21 = (ulong)uVar20;
              uVar11 = uVar18;
              local_80 = uVar19;
            }
            uVar20 = (uint)uVar21;
            uVar11 = uVar11 + 1;
            lVar14 = 0;
            if (lVar15 + 1U != uVar12) {
              lVar14 = lVar15 + 1;
            }
            puVar17 = (uint *)(lVar16 + lVar14 * 4);
            uVar3 = *puVar17;
            lVar15 = lVar14;
            plVar24 = plVar23;
            uVar29 = uVar28;
          } while (uVar3 != 0);
        }
        *(uint *)(lVar16 + lVar14 * 4) = uVar20;
        puVar2 = (undefined8 *)(lVar13 + lVar14 * 0x20);
        puVar2[2] = uVar28;
        puVar2[3] = plVar23;
        *puVar2 = local_80;
        puVar2[1] = local_78;
        param_1[3] = param_1[3] + 1;
      }
LAB_035c8430:
      lVar27 = lVar27 + 1;
    } while (lVar27 != lVar25);
    if (lVar22 == 0) {
      return 0;
    }
    lVar27 = 0;
    do {
      if (*(int *)(lVar22 + lVar27 * 4) != 0) {
        *(undefined4 *)(lVar22 + lVar27 * 4) = 0;
        plVar23 = *(long **)(lVar1 + lVar27 * 0x20 + 0x18);
        if (plVar23 != (long *)0x0) {
          plVar24 = plVar23 + 1;
          do {
            lVar13 = *plVar24;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar6) {
              *plVar24 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar23 + 0x10))(plVar23);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      lVar27 = lVar27 + 1;
    } while (lVar27 != lVar25);
  }
  (**(code **)(*plVar26 + 0x18))(plVar26,lVar22);
  return 0;
}

