
void FUN_027e60c0(long param_1,uint *param_2)

{
  long *plVar1;
  undefined *puVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  uint *puVar15;
  long lVar16;
  uint *puVar17;
  long lVar18;
  int iVar19;
  uint local_b8;
  uint local_b4;
  uint local_a4;
  undefined *local_8c;
  undefined *local_84;
  undefined4 local_7c;
  undefined *local_78;
  long local_70;
  undefined8 local_68;
  
  local_7c = 0;
  uVar10 = FUN_02b67a30(&local_7c,*param_2);
  puVar2 = PTR_DAT_04bb46b0;
  if ((uVar10 & 1) == 0) {
    return;
  }
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar11 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30))();
  local_78 = (undefined *)CONCAT44(local_78._4_4_,local_7c);
  lVar16 = 0;
  if (lVar11 != 0) {
    lVar16 = lVar11 + 0x276cb0;
  }
  lVar12 = *(long *)puVar2;
  if (lVar12 != 0) {
    puVar13 = *(undefined8 **)(lVar12 + 0x10);
    if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
      lVar12 = (**(code **)(*(long *)*puVar13 + 0x38))();
      if (lVar12 != 0) {
        lVar12 = lVar12 + 0x70;
LAB_027e618c:
        if ((uint)local_78 < 10) {
          lVar5 = lVar12 + 0x1962d8 + ((ulong)local_78 & 0xffffffff) * 0x10d8;
          if (9 < (uint)local_78) {
            lVar5 = lVar12 + 0x1962d8;
          }
          goto joined_r0x027e699c;
        }
      }
    }
    else if (((puVar13 != (undefined8 *)0x0) && ((long *)puVar13[0x26] != (long *)0x0)) &&
            (lVar12 = (**(code **)(*(long *)puVar13[0x26] + 0x38))(), lVar12 != 0))
    goto LAB_027e618c;
  }
  lVar5 = 0;
joined_r0x027e699c:
  if (lVar11 == 0) {
    return;
  }
  plVar1 = (long *)(lVar11 + 0x276fb0);
  if ((*plVar1 == 0) || (puVar13 = *(undefined8 **)(*plVar1 + 0x10), puVar13 == (undefined8 *)0x0))
  {
    local_b4 = 0;
    plVar14 = *(long **)(lVar5 + 0x28);
  }
  else {
    local_b4 = (**(code **)*puVar13)();
    plVar14 = *(long **)(lVar5 + 0x28);
  }
  if ((plVar14 == (long *)0x0) || ((undefined8 *)*plVar14 == (undefined8 *)0x0)) {
    local_b8 = 0;
  }
  else {
    local_b8 = (*(code *)**(undefined8 **)*plVar14)();
  }
  local_84 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_84);
  puVar6 = PTR_DAT_04bb43c0;
  local_a4 = 0;
  lVar11 = 0;
  puVar2 = PTR_DAT_04bc0510 + 0x10;
  do {
    lVar18 = *(long *)puVar6;
    plVar14 = (long *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + lVar11 + 0x14);
    uVar7 = FUN_0277d6c4(plVar14);
    lVar12 = *(long *)puVar6;
    if (lVar12 != 0) {
      lVar18 = *(long *)(lVar18 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar18 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_70 = *plVar14;
        local_68 = 0;
        local_78 = puVar2;
        uVar7 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar6 != 0) {
          lVar12 = *(long *)(lVar12 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            lVar12 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(plVar14);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
            if ((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
               (puVar15 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8),
               puVar15 != (uint *)0x0)) {
              uVar7 = *puVar15;
              if ((uVar7 != 0) && (puVar15 != (uint *)(ulong)uVar7)) {
                puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar7);
                if ((*puVar17 != 0) &&
                   ((uVar7 = puVar17[1], uVar7 != 0 && ((ulong)(ushort)puVar17[2] != 0)))) {
                  lVar12 = 0xc;
                  if (*(char *)((long)puVar17 + 10) != '\0') {
                    lVar12 = 0x1c;
                  }
                  lVar12 = (long)puVar17 + lVar12 + (ulong)(ushort)puVar17[2] * 8;
                  if (lVar12 != 0) {
                    uVar9 = 0;
                    if ((ulong)uVar7 != 0) {
                      uVar9 = (uint)((ulong)((long)puVar15 - lVar12) / (ulong)uVar7);
                    }
                    if (*puVar17 <= uVar9) {
                      uVar9 = 0xffffffff;
                    }
                    if ((uVar9 < *(uint *)PTR_DAT_04bc00c8) &&
                       (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar9 * 2),
                       (uVar3 < 0xbd && uVar3 != 6) && uVar3 != 0)) goto LAB_027e6250;
                  }
                }
              }
              lVar12 = param_1 + (ulong)*param_2 * 0x13230;
              if (9 < *param_2) {
                lVar12 = param_1;
              }
              uVar10 = FUN_026b4b20(lVar12,plVar14,0,0);
              if ((uVar10 & 1) == 0) {
                if (DAT_05594b4c == '\x01') {
                  uVar7 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                  DAT_05582b70 = DAT_05582b74;
                  DAT_05582b74 = DAT_05582b78;
                  uVar7 = uVar7 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar7 ^ DAT_05582b7c;
                  DAT_05582b78 = DAT_05582b7c;
                  DAT_05582b7c = uVar7;
                }
                else {
                  uVar7 = nn::os::GetSystemTick();
                  uVar9 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
                  uVar7 = uVar9 ^ uVar9 * 0x800;
                  uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
                  uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 3;
                  uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 4;
                  uVar7 = uVar7 >> 8 ^ uVar9 >> 0x13 ^ uVar7 ^ uVar9;
                }
                local_a4 = local_a4 + 1;
                if (((ulong)uVar7 * (ulong)local_a4 & 0xffffffff00000000) == 0) {
                  local_84 = (undefined *)*plVar14;
                }
              }
            }
          }
        }
      }
    }
LAB_027e6250:
    lVar11 = lVar11 + 0xc;
    if (lVar11 == 0x1b0) {
      if (DAT_05594b4c == '\x01') {
        uVar7 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        DAT_05582b70 = DAT_05582b74;
        DAT_05582b74 = DAT_05582b78;
        uVar7 = uVar7 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar7 ^ DAT_05582b7c;
        DAT_05582b78 = DAT_05582b7c;
        DAT_05582b7c = uVar7;
      }
      else {
        uVar7 = nn::os::GetSystemTick();
        uVar9 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
        uVar7 = uVar9 ^ uVar9 * 0x800;
        uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
        uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 3;
        uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 4;
        uVar7 = uVar7 >> 8 ^ uVar9 >> 0x13 ^ uVar7 ^ uVar9;
      }
      if (((ulong)uVar7 * (ulong)(local_a4 + 1) & 0xffffffff00000000) == 0) {
        lVar11 = param_1 + (ulong)*param_2 * 0x13230;
        if (9 < *param_2) {
          lVar11 = param_1;
        }
        local_84 = *(undefined **)(lVar11 + 0x12888);
      }
      if (DAT_05594b4c == '\x01') {
        uVar7 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        DAT_05582b70 = DAT_05582b74;
        DAT_05582b74 = DAT_05582b78;
        uVar7 = uVar7 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar7 ^ DAT_05582b7c;
        DAT_05582b78 = DAT_05582b7c;
        DAT_05582b7c = uVar7;
      }
      else {
        uVar7 = nn::os::GetSystemTick();
        uVar9 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
        uVar7 = uVar9 ^ uVar9 * 0x800;
        uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
        uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 3;
        uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 4;
        uVar7 = uVar7 >> 8 ^ uVar9 >> 0x13 ^ uVar7 ^ uVar9;
      }
      if (((ulong)uVar7 * (ulong)(local_a4 + 2) & 0xffffffff00000000) == 0) {
        lVar11 = param_1 + (ulong)*param_2 * 0x13230;
        if (9 < *param_2) {
          lVar11 = param_1;
        }
        local_84 = *(undefined **)(lVar11 + 0x12890);
      }
      lVar11 = *(long *)puVar6;
      uVar7 = FUN_0277d6c4(&local_84);
      if (*(long *)puVar6 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          if ((*plVar1 != 0) && (plVar14 = *(long **)(*plVar1 + 0x20), plVar14 != (long *)0x0)) {
            local_78 = *(undefined **)(lVar16 + 0x2e0);
            local_70 = *(long *)(lVar16 + 0x2e8);
            local_68 = 0x280;
            (**(code **)(*plVar14 + 0x20))(plVar14,&local_78);
          }
          lVar11 = *(long *)(lVar16 + 0x2e0);
          lVar12 = *(long *)(lVar16 + 0x2e8);
          local_78 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_78);
          local_70._2_6_ = (uint6)((ulong)local_70 >> 0x10) & 0xffffffffff00;
          local_78 = local_84;
          local_70 = CONCAT62(local_70._2_6_,1);
          FUN_027a9730(lVar12 + lVar11,&local_78);
        }
      }
      lVar11 = param_1 + (ulong)*param_2 * 0x13230;
      if (9 < *param_2) {
        lVar11 = param_1;
      }
      local_8c = (undefined *)0xfffe;
      FUN_0277d4ac(&local_8c);
      uVar7 = 0;
      iVar19 = 0;
      do {
        plVar14 = (long *)(lVar11 + 0x1094c + (long)iVar19 * 0x2c);
        iVar8 = FUN_0268a660(plVar14);
        if (iVar8 == 9) {
          lVar12 = param_1 + (ulong)*param_2 * 0x13230;
          if (9 < *param_2) {
            lVar12 = param_1;
          }
          uVar10 = FUN_026b4b20(lVar12,plVar14,1,0);
          if ((uVar10 & 1) == 0) {
            if (DAT_05594b4c == '\x01') {
              uVar9 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              DAT_05582b70 = DAT_05582b74;
              DAT_05582b74 = DAT_05582b78;
              uVar9 = uVar9 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar9 ^ DAT_05582b7c;
              DAT_05582b78 = DAT_05582b7c;
              DAT_05582b7c = uVar9;
            }
            else {
              uVar9 = nn::os::GetSystemTick();
              uVar4 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
              uVar9 = uVar4 ^ uVar4 * 0x800;
              uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
              uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
              uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
              uVar9 = uVar9 >> 8 ^ uVar4 >> 0x13 ^ uVar9 ^ uVar4;
            }
            uVar7 = uVar7 + 1;
            if (((ulong)uVar9 * (ulong)uVar7 & 0xffffffff00000000) == 0) {
              local_8c = (undefined *)*plVar14;
            }
          }
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 != 0x18);
      lVar11 = *(long *)puVar6;
      uVar7 = FUN_0277d6c4(&local_8c);
      if (*(long *)puVar6 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          if ((*plVar1 != 0) && (plVar14 = *(long **)(*plVar1 + 0x20), plVar14 != (long *)0x0)) {
            local_78 = *(undefined **)(lVar16 + 0x2e0);
            local_70 = *(long *)(lVar16 + 0x2e8);
            local_68 = 0x280;
            (**(code **)(*plVar14 + 0x20))(plVar14,&local_78);
          }
          lVar11 = *(long *)(lVar16 + 0x2e0);
          lVar16 = *(long *)(lVar16 + 0x2e8);
          local_78 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_78);
          local_70._2_6_ = (uint6)((ulong)local_70 >> 0x10) & 0xffffffffff00;
          local_78 = local_8c;
          local_70 = CONCAT62(local_70._2_6_,1);
          FUN_027a9730(lVar16 + lVar11,&local_78);
        }
      }
      if ((((local_b8 & 1) != 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
         (puVar13 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar13 != (undefined8 *)0x0)) {
        (**(code **)*puVar13)();
      }
      if ((((local_b4 & 1) != 0) && (*plVar1 != 0)) &&
         (puVar13 = *(undefined8 **)(*plVar1 + 0x18), puVar13 != (undefined8 *)0x0)) {
        (**(code **)*puVar13)();
      }
      return;
    }
  } while( true );
}

