
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0269d2d0(long param_1,long param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  undefined4 *puVar14;
  int iVar15;
  long lVar16;
  uint local_bc;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  undefined4 local_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  
  uVar7 = FUN_021d7d60();
  uVar10 = FUN_026609f0();
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar10 = FUN_02660de0(uVar7);
  if ((uVar10 & 1) != 0) {
    return;
  }
  local_68 = *(undefined2 *)(param_2 + 0x1c8);
  local_66 = *(undefined1 *)(param_2 + 0x1ca);
  local_65 = *(undefined1 *)(param_2 + 0x1cb);
  uVar3 = *(undefined4 *)(param_2 + 0x1c8);
  uVar7 = *(undefined4 *)(param_2 + 0x1cc);
  local_64 = uVar7;
  local_6c = FUN_00a8c014(*(undefined8 *)PTR_DAT_04bb30a0);
  puVar4 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(&local_68);
  puVar6 = PTR_DAT_04bc0510;
  lVar16 = *(long *)puVar4;
  if (lVar16 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      local_88 = PTR_DAT_04bc0510 + 0x10;
      local_78 = 0;
      local_80 = uVar3;
      local_7c = uVar7;
      uVar8 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar4 != 0) {
        lVar13 = *(long *)(lVar16 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          FUN_0277d6c4(&local_68);
        }
      }
      local_8c = 0;
      uVar10 = FUN_02694c0c(&local_68,&local_6c,&local_8c);
      if ((uVar10 & 1) != 0) {
        if (DAT_05594b4c == '\x01') {
          uVar8 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
          DAT_05582b70 = DAT_05582b74;
          DAT_05582b74 = DAT_05582b78;
          uVar8 = uVar8 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar8 ^ DAT_05582b7c;
          DAT_05582b78 = DAT_05582b7c;
          DAT_05582b7c = uVar8;
        }
        else {
          uVar8 = nn::os::GetSystemTick();
          uVar9 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
          uVar8 = uVar9 ^ uVar9 * 0x800;
          uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
          uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 3;
          uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 4;
          uVar8 = uVar8 >> 8 ^ uVar9 >> 0x13 ^ uVar8 ^ uVar9;
        }
        uVar7 = DAT_0558600c;
        if ((uint)((ulong)uVar8 * 100 >> 0x20) < 0x32) {
          local_ac = 0;
          *(undefined4 *)(param_2 + 0x1c8) = _DAT_05586008;
          *(undefined4 *)(param_2 + 0x1cc) = uVar7;
          goto LAB_0269d464;
        }
      }
      local_ac = 1;
      goto LAB_0269d464;
    }
  }
  local_ac = 0;
LAB_0269d464:
  puVar5 = PTR_DAT_04bc00c8;
  local_bc = 0;
  puVar1 = (undefined4 *)(param_1 + 0x10d6c);
  uVar8 = 0;
  local_a8 = 0;
  local_a4 = 0xffffffff;
  iVar15 = 0;
  do {
    puVar14 = puVar1 + (long)iVar15 * 0xb;
    lVar16 = *(long *)puVar4;
    uVar9 = FUN_0277d6c4(puVar14);
    lVar13 = *(long *)puVar4;
    if (lVar13 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        local_78 = 0;
        local_80 = *puVar14;
        local_7c = puVar14[1];
        local_88 = puVar6 + 0x10;
        uVar9 = FUN_0277d6c4(&local_80);
        if (*(long *)puVar4 != 0) {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar13 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            lVar13 = *(long *)PTR_DAT_04bc0428;
            uVar9 = FUN_0277d6c4(puVar14);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if (uVar9 < *(uint *)(lVar13 + 0x1d8)) {
              puVar11 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8);
              if (puVar11 != (uint *)0x0) {
                uVar9 = *puVar11;
                if ((uVar9 != 0) && (puVar11 != (uint *)(ulong)uVar9)) {
                  puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar9);
                  if (*puVar12 != 0) {
                    uVar9 = puVar12[1];
                    if (uVar9 != 0) {
                      if ((ulong)(ushort)puVar12[2] != 0) {
                        lVar13 = 0xc;
                        if (*(char *)((long)puVar12 + 10) != '\0') {
                          lVar13 = 0x1c;
                        }
                        lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
                        if (lVar13 != 0) {
                          uVar2 = 0;
                          if ((ulong)uVar9 != 0) {
                            uVar2 = (uint)((ulong)((long)puVar11 - lVar13) / (ulong)uVar9);
                          }
                          if (*puVar12 <= uVar2) {
                            uVar2 = 0xffffffff;
                          }
                          if (((uVar2 < *(uint *)puVar5) &&
                              (*(short *)(*(long *)(puVar5 + 8) + (long)(int)uVar2 * 2) == 0x77)) &&
                             (*(char *)(puVar1 + (long)iVar15 * 0xb + 10) == '\x01')) {
                            if ((local_a8 & 1) == 0) {
                              local_8c = 0;
                              uVar9 = FUN_02694c0c(puVar14,&local_6c,&local_8c);
                              local_a8 = uVar9 ^ 1;
                              if ((uVar9 & 1) == 0) {
                                local_bc = 0;
                              }
                            }
                            else {
                              local_8c = 0;
                              uVar10 = FUN_02694c0c(puVar14,&local_6c,&local_8c);
                              if ((uVar10 & 1) != 0) {
                                local_a8 = 1;
                                goto LAB_0269d708;
                              }
                              local_a8 = 1;
                            }
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
                              uVar2 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
                              uVar9 = uVar2 ^ uVar2 * 0x800;
                              uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
                              uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
                              uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
                              uVar9 = uVar9 >> 8 ^ uVar2 >> 0x13 ^ uVar9 ^ uVar2;
                            }
                            local_bc = local_bc + 1;
                            if (((ulong)uVar9 * (ulong)local_bc & 0xffffffff00000000) == 0) {
                              local_a4 = uVar8;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_0269d708:
    uVar8 = uVar8 + 1;
    iVar15 = iVar15 + 1;
    if (uVar8 == 0x20) {
      if (-1 < (int)local_a4) {
        if (((local_a8 | local_ac ^ 0xffffffff) & 1) == 0) {
          if (DAT_05594b4c == '\x01') {
            uVar8 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
            DAT_05582b70 = DAT_05582b74;
            DAT_05582b74 = DAT_05582b78;
            uVar8 = uVar8 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar8 ^ DAT_05582b7c;
            DAT_05582b78 = DAT_05582b7c;
            DAT_05582b7c = uVar8;
          }
          else {
            uVar8 = nn::os::GetSystemTick();
            uVar9 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
            uVar8 = uVar9 ^ uVar9 * 0x800;
            uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
            uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 3;
            uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 4;
            uVar8 = uVar8 >> 8 ^ uVar9 >> 0x13 ^ uVar8 ^ uVar9;
          }
          if (0x31 < (uint)((ulong)uVar8 * 100 >> 0x20)) {
            return;
          }
        }
        puVar14 = puVar1 + (ulong)local_a4 * 0xb;
        if (0x1f < local_a4) {
          puVar14 = puVar1;
        }
        uVar7 = puVar14[1];
        *(undefined4 *)(param_2 + 0x1c8) = *puVar14;
        *(undefined4 *)(param_2 + 0x1cc) = uVar7;
      }
      return;
    }
  } while( true );
}

