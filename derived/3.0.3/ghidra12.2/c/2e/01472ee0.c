
float FUN_01472ee0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *******pppppppuVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  char cVar14;
  uint *puVar15;
  undefined8 *******pppppppuVar16;
  long *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 ******local_138;
  undefined8 *******local_130;
  undefined8 *******local_128;
  undefined4 local_120;
  undefined8 ****local_118;
  undefined8 ****ppppuStack_110;
  undefined4 local_108;
  undefined8 ***local_100 [3];
  undefined8 **local_e8 [3];
  undefined8 *local_d0 [3];
  undefined8 local_b8 [3];
  undefined *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  
  puVar5 = PTR_DAT_04bc0510;
  puVar4 = PTR_DAT_04bb43c0;
  fVar18 = 0.0;
  fVar19 = 0.0;
  if (*(int *)(param_1 + 0x300) != 0) {
    local_138 = (undefined8 ******)&PTR_LAB_049a5200;
    local_120 = 0;
    local_118 = local_100;
    local_100[0] = local_e8;
    local_e8[0] = local_d0;
    local_d0[0] = local_b8;
    local_b8[0] = 0;
    local_108 = 4;
    local_130 = &local_130;
    local_128 = &local_130;
    ppppuStack_110 = local_118;
    FUN_0147a740(&local_130,param_1 + 0x2f0);
    puVar3 = PTR_DAT_04bb27c0;
    if ((undefined8 ********)local_128 != &local_130) {
      pppppppuVar9 = local_128 + -1;
      puVar1 = PTR_DAT_04bb3290 + 0x10;
      pppppppuVar16 = local_128;
      do {
        lVar12 = *(long *)puVar3;
        if (lVar12 != 0) {
          uVar7 = *(uint *)pppppppuVar9;
          if ((((uVar7 == 0) ||
               (plVar17 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                                    ((ulong)(uVar7 >> 0x11) & 0x7ff8)), plVar17 == (long *)0x0)) ||
              ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar17 + 0x46) != uVar7))
          {
            plVar17 = (long *)0x0;
          }
          if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
            plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            lVar12 = *(long *)puVar3;
            iVar6 = (**(code **)(*plVar8 + 0x60))();
            if (iVar6 < 0x11) {
              uVar7 = 1;
            }
            else {
              uVar7 = *(uint *)(lVar12 + 0x5e8);
              if (4 < uVar7) goto LAB_01473070;
              uVar7 = 0x1aU >> (ulong)(uVar7 & 0x1f) & 1;
            }
          }
          else {
LAB_01473070:
            uVar7 = 0;
          }
          if (plVar17 != (long *)0x0) {
            lVar12 = plVar17[0x2a];
            if (((*PTR_DAT_04bb5928 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar6 != 0)) {
              *(undefined **)PTR_DAT_04bb5920 = puVar1;
              __cxa_guard_release(PTR_DAT_04bb5928);
            }
            uVar11 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb5920);
            uVar2 = 0;
            if ((int)lVar12 == 1) {
              uVar2 = uVar7;
            }
            if (((uVar11 & 1) != 0) && (uVar2 != 0)) {
              local_98 = (undefined4)plVar17[0x51];
              local_90 = 0;
              uStack_94 = *(undefined4 *)((long)plVar17 + 0x28c);
              lVar12 = *(long *)puVar4;
              local_a0 = puVar5 + 0x10;
              uVar7 = FUN_0277d6c4(&local_98);
              fVar20 = 0.0;
              if (*(long *)puVar4 != 0) {
                lVar12 = *(long *)(lVar12 + 0x57e58);
                uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
                if ((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
                  lVar12 = *(long *)PTR_DAT_04bc0428;
                  uVar7 = FUN_0277d6c4(plVar17 + 0x51);
                  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
                  if ((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
                     ((puVar15 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8),
                      puVar15 != (uint *)0x0 && (uVar7 = *puVar15, uVar7 != 0)))) {
                    cVar14 = *PTR_DAT_04bbfe88;
                    do {
                      if (cVar14 == '\0') {
                        cVar14 = '\x01';
                        *PTR_DAT_04bbfe88 = 1;
                        memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                        uVar7 = *puVar15;
                      }
                      else {
                        uVar2 = *(uint *)(PTR_DAT_04bbfe90 + 0x28);
                        if (-1 < (int)uVar2) {
                          if ((float *)((ulong)uVar2 + (long)puVar15) != (float *)0x0) {
                            fVar20 = *(float *)((ulong)uVar2 + (long)puVar15);
                          }
                          break;
                        }
                        if (uVar2 != 0xffffffff) break;
                      }
                      puVar10 = (uint *)(ulong)uVar7;
                      if ((puVar10 == (uint *)0x0) || (puVar15 == puVar10)) break;
                      lVar12 = 0xc;
                      if (*(char *)((long)puVar15 + (10 - (long)puVar10)) != '\0') {
                        lVar12 = 0x1c;
                      }
                      lVar12 = (long)puVar15 + (lVar12 - (long)puVar10);
                      if (lVar12 == 0) break;
                      uVar11 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar10));
                      *(undefined4 *)(PTR_DAT_04bbfe90 + 0x28) = 0xfffffffe;
                      if (uVar11 == 0) break;
                      piVar13 = (int *)(lVar12 + 4);
                      while (piVar13[-1] != -0x3e783aea) {
                        piVar13 = piVar13 + 2;
                        uVar11 = uVar11 - 1;
                        if (uVar11 == 0) goto LAB_01472fbc;
                      }
                      iVar6 = 0;
                      if (*piVar13 != -1) {
                        iVar6 = *piVar13;
                      }
                      *(int *)(PTR_DAT_04bbfe90 + 0x28) = iVar6;
                      uVar7 = *puVar15;
                      if (uVar7 == 0) break;
                    } while( true );
                  }
                }
              }
LAB_01472fbc:
              if (fVar19 <= fVar20) {
                fVar19 = fVar20;
              }
            }
          }
        }
        pppppppuVar16 = (undefined8 *******)pppppppuVar16[1];
        pppppppuVar9 = pppppppuVar16 + -1;
      } while (pppppppuVar9 != &local_138);
    }
    pppppppuVar16 = &local_130;
    do {
      pppppppuVar16 = (undefined8 *******)pppppppuVar16[1];
    } while ((undefined8 ********)pppppppuVar16 != &local_130);
  }
  local_138 = (undefined8 ******)(PTR_DAT_04bc0510 + 0x10);
  local_130 = *(undefined8 ********)(param_1 + 0x288);
  lVar12 = *(long *)puVar4;
  local_128 = (undefined8 *******)0x0;
  uVar7 = FUN_0277d6c4(&local_130);
  if (*(long *)puVar4 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(param_1 + 0x288);
      puVar5 = PTR_DAT_04bbfe90;
      puVar4 = PTR_DAT_04bbfe88;
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
         ((puVar15 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8),
          puVar15 != (uint *)0x0 && (uVar7 = *puVar15, uVar7 != 0)))) {
        cVar14 = *PTR_DAT_04bbfe88;
        do {
          if (cVar14 == '\0') {
            cVar14 = '\x01';
            *puVar4 = 1;
            memset(puVar5,0xff,0x1ac);
            uVar7 = *puVar15;
          }
          else {
            uVar2 = *(uint *)(puVar5 + 0x28);
            if (-1 < (int)uVar2) {
              if ((float *)((ulong)uVar2 + (long)puVar15) != (float *)0x0) {
                fVar18 = *(float *)((ulong)uVar2 + (long)puVar15);
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          puVar10 = (uint *)(ulong)uVar7;
          if ((puVar10 == (uint *)0x0) || (puVar15 == puVar10)) break;
          lVar12 = 0xc;
          if (*(char *)((long)puVar15 + (10 - (long)puVar10)) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar15 + (lVar12 - (long)puVar10);
          if (lVar12 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar10));
          *(undefined4 *)(puVar5 + 0x28) = 0xfffffffe;
          if (uVar11 == 0) break;
          piVar13 = (int *)(lVar12 + 4);
          while (piVar13[-1] != -0x3e783aea) {
            piVar13 = piVar13 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_01473434;
          }
          iVar6 = 0;
          if (*piVar13 != -1) {
            iVar6 = *piVar13;
          }
          *(int *)(puVar5 + 0x28) = iVar6;
          uVar7 = *puVar15;
          if (uVar7 == 0) break;
        } while( true );
      }
    }
  }
LAB_01473434:
  return fVar19 + fVar18;
}

