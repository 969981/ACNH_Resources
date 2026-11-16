
undefined8 FUN_0251eac0(undefined8 param_1,byte *param_2,ulong param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  byte *pbVar15;
  uint *puVar16;
  byte local_88 [4];
  undefined4 local_84;
  undefined2 local_80;
  byte local_7c [4];
  undefined4 local_78;
  undefined2 local_74;
  
  FUN_02507c6c(local_7c,1,1,1,0);
  puVar5 = PTR_DAT_04bb5038;
  puVar4 = PTR_DAT_04bb27c0;
  uVar12 = (uint)local_7c[0];
  local_84 = local_78;
  local_88[0] = local_7c[0];
  if (7 < local_7c[0]) {
    local_88[0] = 0xff;
  }
  local_80 = local_74;
  if (7 < local_7c[0]) {
    return 0;
  }
  puVar1 = PTR_DAT_04bb3780 + 0x10;
  puVar16 = (uint *)PTR_DAT_04bb3238;
  do {
    if (7 < *param_2 || *param_2 != uVar12) {
      puVar3 = puVar16;
      if (DAT_054f5738 != 0) {
        puVar3 = (uint *)(DAT_054f5738 + (ulong)uVar12 * 4 + 0xde8);
      }
      lVar13 = *(long *)puVar4;
      if (lVar13 == 0) {
        bVar7 = false;
      }
      else {
        uVar12 = *puVar3;
        if ((((uVar12 == 0) ||
             (plVar14 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                                  ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
            ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar12)) {
          plVar14 = (long *)0x0;
        }
        if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
          plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar13 = *(long *)puVar4;
          iVar8 = (**(code **)(*plVar9 + 0x60))();
          puVar16 = (uint *)PTR_DAT_04bb3238;
          if (iVar8 < 0x11) {
            uVar12 = 1;
          }
          else {
            uVar12 = *(uint *)(lVar13 + 0x5e8);
            if (4 < uVar12) goto LAB_0251ec2c;
            uVar12 = 0x1aU >> (ulong)(uVar12 & 0x1f) & 1;
          }
        }
        else {
LAB_0251ec2c:
          uVar12 = 0;
          puVar16 = (uint *)PTR_DAT_04bb3238;
        }
        PTR_DAT_04bb3238 = (undefined *)puVar16;
        if (plVar14 == (long *)0x0) {
          bVar7 = false;
        }
        else {
          lVar13 = plVar14[0x2a];
          if (((*PTR_DAT_04bb3778 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar8 != 0)) {
            *(undefined **)PTR_DAT_04bb3770 = puVar1;
            __cxa_guard_release(PTR_DAT_04bb3778);
          }
          uVar10 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb3770);
          puVar16 = (uint *)PTR_DAT_04bb3238;
          bVar7 = false;
          uVar2 = 0;
          if ((int)lVar13 == 1) {
            uVar2 = uVar12;
          }
          if ((((uVar10 & 1) != 0) && (uVar2 != 0)) &&
             ((bVar7 = (int)plVar14[0x302] == 7, (param_3 & 1) != 0 &&
              (uVar10 = (**(code **)(*plVar14 + 400))(plVar14), (uVar10 & 1) != 0))))
          goto LAB_0251ecd8;
        }
      }
      uVar10 = FUN_02507d60(0x3f800000,local_88,param_1,bVar7,0);
      if ((uVar10 & 1) != 0) {
        return 1;
      }
    }
LAB_0251ecd8:
    bVar6 = local_88[0];
    uVar10 = (ulong)local_88[0];
    if (7 < local_88[0]) {
      return 0;
    }
    if (uVar10 + 1 == 8) {
      return 0;
    }
    pbVar15 = puVar5 + uVar10 + 1;
    uVar11 = FUN_02507924(local_88,pbVar15);
    if ((uVar11 & 1) == 0) {
      if (uVar10 + 2 == 8) {
        return 0;
      }
      pbVar15 = puVar5 + uVar10 + 2;
      uVar11 = FUN_02507924(local_88,pbVar15);
      if ((uVar11 & 1) == 0) {
        if (uVar10 + 3 == 8) {
          return 0;
        }
        pbVar15 = puVar5 + uVar10 + 3;
        uVar11 = FUN_02507924(local_88,pbVar15);
        if ((uVar11 & 1) == 0) {
          if (uVar10 + 4 == 8) {
            return 0;
          }
          pbVar15 = puVar5 + uVar10 + 4;
          uVar11 = FUN_02507924(local_88,pbVar15);
          if ((uVar11 & 1) == 0) {
            if (uVar10 + 5 == 8) {
              return 0;
            }
            pbVar15 = puVar5 + uVar10 + 5;
            uVar11 = FUN_02507924(local_88,pbVar15);
            if ((uVar11 & 1) == 0) {
              if (uVar10 + 6 == 8) {
                return 0;
              }
              pbVar15 = puVar5 + uVar10 + 6;
              uVar11 = FUN_02507924(local_88,pbVar15);
              if ((uVar11 & 1) == 0) {
                if (uVar10 + 7 == 8) {
                  return 0;
                }
                pbVar15 = puVar5 + uVar10 + 7;
                uVar11 = FUN_02507924(local_88,pbVar15);
                if ((uVar11 & 1) == 0) {
                  if (bVar6 == 0) {
                    return 0;
                  }
                  pbVar15 = puVar5 + uVar10 + 8;
                  FUN_02507924(local_88,pbVar15);
                }
              }
            }
          }
        }
      }
    }
    local_88[0] = *pbVar15;
    uVar12 = (uint)local_88[0];
    if (7 < uVar12) {
      return 0;
    }
  } while( true );
}

