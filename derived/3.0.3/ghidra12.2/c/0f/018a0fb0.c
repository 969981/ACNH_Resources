
bool FUN_018a0fb0(long param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  int *piVar3;
  int iVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  long *plVar15;
  uint *puVar16;
  long lVar17;
  long lVar18;
  short *psVar19;
  uint *puVar20;
  long *plVar21;
  int iVar22;
  ulong uVar23;
  code *local_78;
  undefined8 local_70;
  ulong local_68;
  
  local_78 = (code *)&LAB_018a15b0;
  bVar10 = false;
  iVar14 = 3;
  switch(param_2) {
  case 0x24b:
    break;
  case 0x24c:
  case 0x24d:
  case 0x251:
  case 0x253:
  case 0x254:
  case 0x256:
  case 599:
  case 600:
  case 0x259:
  case 0x25a:
  case 0x25b:
  case 0x25c:
  case 0x25d:
  case 0x25f:
  case 0x260:
  case 0x261:
  case 0x262:
  case 0x263:
  case 0x264:
  case 0x265:
  case 0x266:
  case 0x267:
  case 0x269:
  case 0x26a:
  case 0x26c:
  case 0x26d:
  case 0x26f:
  case 0x270:
  case 0x271:
  case 0x272:
  case 0x273:
  case 0x275:
  case 0x276:
  case 0x277:
  case 0x278:
  case 0x279:
  case 0x27b:
  case 0x27c:
  case 0x27d:
  case 0x27e:
  case 0x27f:
  case 0x280:
  case 0x281:
  case 0x282:
  case 0x283:
  case 0x284:
  case 0x285:
  case 0x286:
  case 0x287:
  case 0x288:
  case 0x289:
  case 0x28a:
    goto switchD_018a100c_caseD_24c;
  case 0x24e:
  case 0x274:
    local_78 = (code *)&LAB_018a1610;
    iVar14 = 2;
    break;
  case 0x24f:
    iVar14 = 2;
    local_78 = (code *)&LAB_018a1640;
    break;
  case 0x250:
    local_78 = (code *)&LAB_018a1660;
    iVar14 = 3;
    break;
  case 0x252:
switchD_018a100c_caseD_252:
    local_78 = (code *)&LAB_018a15e0;
    iVar14 = 2;
    break;
  case 0x255:
    local_78 = (code *)&LAB_018a1630;
    iVar14 = 1;
    break;
  case 0x25e:
    if (*(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204) == 1) {
      psVar19 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
      if (*psVar19 == 0) {
        local_70 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        if ((char)(local_70 >> 0x20) < '\x05') {
          lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
          local_68 = lVar17 - 0x15180;
          local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
        }
        psVar19 = (short *)&local_70;
        uVar23 = local_70 >> 0x30;
        local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
        local_70 = CONCAT26((short)uVar23,(undefined6)local_70) & 0xff00ffffffffffff;
      }
      if ((ulong)(ushort)psVar19[1] * -0x10000 == -0x1f0c0000) {
        return false;
      }
    }
    local_78 = (code *)&LAB_018a15d0;
    iVar14 = 1;
    break;
  case 0x268:
    local_78 = (code *)&LAB_018a1600;
    iVar14 = 2;
    break;
  case 0x26b:
  case 0x26e:
    goto switchD_018a100c_caseD_26b;
  case 0x27a:
    local_78 = (code *)&LAB_018a15c0;
    iVar14 = 2;
    break;
  case 0x28b:
    local_78 = FUN_018a1650;
    iVar14 = 2;
    break;
  default:
    if (param_2 == 0x1425) goto switchD_018a100c_caseD_252;
switchD_018a100c_caseD_24c:
    sVar5 = *(short *)PTR_DAT_04bb6298;
    if (sVar5 == -1) {
      if (*(int *)(param_1 + 0x894) != 2) goto LAB_018a1538;
    }
    else {
      local_68 = CONCAT44(local_68._4_4_,0x11);
      puVar16 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar16 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar16 >> 0x11 & 1) != 0) || (*(int *)(param_1 + 0x894) != 2)) {
        local_68 = CONCAT44(local_68._4_4_,0x1f);
        piVar3 = (int *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
        if (0xff < (uint)(int)sVar5) {
          piVar3 = (int *)PTR_DAT_04bc39f8;
        }
        if (-1 < *piVar3) goto LAB_018a1538;
        uVar13 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 10) - (uint)DAT_0534e320;
        if ((uVar13 < DAT_0534e300) &&
           (puVar16 = *(uint **)(DAT_0534e308 + (long)(int)uVar13 * 8), puVar16 != (uint *)0x0)) {
          uVar13 = *puVar16;
          uVar12 = 0;
          if ((uVar13 != 0) && (puVar16 != (uint *)(ulong)uVar13)) {
            puVar20 = (uint *)((long)puVar16 - (long)(ulong)uVar13);
            uVar12 = 0;
            if (*puVar20 != 0) {
              uVar13 = puVar20[1];
              if ((uVar13 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                lVar17 = 0xc;
                if (*(char *)((long)puVar20 + 10) != '\0') {
                  lVar17 = 0x1c;
                }
                lVar17 = (long)puVar20 + lVar17 + (ulong)(ushort)puVar20[2] * 8;
                if (lVar17 != 0) {
                  uVar12 = 0;
                  if ((ulong)uVar13 != 0) {
                    uVar12 = (uint)((ulong)((long)puVar16 - lVar17) / (ulong)uVar13);
                  }
                  if (*puVar20 <= uVar12) {
                    uVar12 = 0xffffffff;
                  }
                  if ((uVar12 < *(uint *)PTR_DAT_04bc0e58) &&
                     (uVar12 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc0e58 + 8) + (long)(int)uVar12 * 2),
                     uVar12 < 0xb)) goto LAB_018a119c;
                }
              }
              goto LAB_018a1198;
            }
          }
        }
        else {
LAB_018a1198:
          uVar12 = 0;
        }
LAB_018a119c:
        local_68 = CONCAT44(local_68._4_4_,uVar12);
        if (uVar12 == 9) {
LAB_018a1538:
          if (param_2 == 0x16e3) {
            return false;
          }
LAB_018a1544:
          if (param_2 == 0x1cce) {
            return false;
          }
        }
        else {
          if (uVar12 != 8) {
            if (uVar12 != 4) {
              if (param_2 == 0xdd3) {
                return false;
              }
              goto LAB_018a1538;
            }
            if (param_2 == 0xdd3) {
              return false;
            }
            goto LAB_018a1544;
          }
          if (param_2 == 0xdd3) {
            return false;
          }
          if (param_2 == 0x16e3) {
            return false;
          }
        }
        local_78 = (code *)&LAB_018a15a0;
        iVar14 = 0x7fffffff;
        break;
      }
    }
    local_68 = local_68 & 0xffffffff00000000;
    uVar23 = FUN_01a12d50(*(undefined8 *)PTR_DAT_04bb4008,&local_68);
    iVar14 = 0x7fffffff;
    local_78 = (code *)&LAB_018a15a0;
    if (((uVar23 & 1) != 0) && ((int)local_68 == 0x100)) {
      if (((*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) &&
          ((uVar23 = FUN_035a3310(), (uVar23 & 1) == 0 &&
           (iVar14 = FUN_03684640(*(undefined8 *)PTR_DAT_04bb4910,8,1), iVar14 < 5)))) ||
         (iVar14 = FUN_0122c0c0(8), iVar14 < 7)) {
        return false;
      }
      local_78 = (code *)&LAB_018a1670;
      iVar14 = 1;
    }
  }
  puVar9 = PTR_DAT_04bb3ff0;
  puVar8 = PTR_DAT_04bb3fe8;
  puVar7 = PTR_DAT_04bb3350;
  puVar6 = PTR_DAT_04bb27c0;
  uVar13 = *(uint *)(param_1 + 0x2a0);
  if (*(uint *)(param_1 + 0x288) <= uVar13) {
    uVar13 = 0;
  }
  lVar17 = *(long *)(param_1 + 0x290) + (long)(int)uVar13 * 0x30;
  iVar4 = *(int *)(lVar17 + 0x10);
  if (iVar4 == 0) {
    iVar22 = 0;
  }
  else {
    lVar17 = *(long *)(lVar17 + 0x18);
    iVar22 = 0;
    uVar23 = 0;
    puVar1 = PTR_DAT_04bb3fd0 + 0x10;
    do {
      lVar18 = *(long *)puVar6;
      if (lVar18 != 0) {
        uVar13 = *(uint *)(lVar17 + (-(uVar23 >> 0x1f) & 0xfffffffc00000000 | uVar23 << 2));
        if ((((uVar13 == 0) ||
             (plVar21 = *(long **)(*(long *)(*(long *)(lVar18 + 0x1c0) + 8) +
                                  ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar21 == (long *)0x0)) ||
            ((*(uint *)(plVar21 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar21 + 0x46) != uVar13)) {
          plVar21 = (long *)0x0;
        }
        if (*(int *)(lVar18 + 0x288) == 1 || *(int *)(lVar18 + 0x288) == -1) {
          plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
          lVar18 = *(long *)puVar6;
          iVar11 = (**(code **)(*plVar15 + 0x60))();
          if (iVar11 < 0x11) {
            uVar13 = 1;
          }
          else {
            uVar13 = *(uint *)(lVar18 + 0x5e8);
            if (4 < uVar13) goto LAB_018a13e0;
            uVar13 = 0x1aU >> (ulong)(uVar13 & 0x1f) & 1;
          }
        }
        else {
LAB_018a13e0:
          uVar13 = 0;
        }
        if (plVar21 != (long *)0x0) {
          if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
            *(undefined **)puVar8 = puVar1;
            __cxa_guard_release(puVar9);
          }
          uVar12 = (**(code **)(*plVar21 + 0x20))(plVar21,puVar8);
          if ((uVar13 & uVar12) == 1) {
            uVar13 = (*local_78)((int)plVar21[0x57]);
            iVar22 = iVar22 + (uVar13 & 1);
          }
        }
      }
      uVar2 = uVar23 + 1;
      uVar23 = uVar2 & 0xffffffff;
    } while (iVar4 != (int)uVar2);
  }
  bVar10 = iVar22 < iVar14;
switchD_018a100c_caseD_26b:
  return bVar10;
}

