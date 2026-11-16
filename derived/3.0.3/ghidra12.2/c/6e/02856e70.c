
void FUN_02856e70(uint *param_1,undefined2 *param_2,long *param_3,byte param_4)

{
  undefined *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  ushort uVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  ushort uVar17;
  bool bVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  uint local_a4;
  uint local_88;
  undefined *local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  uint *local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  
  lVar14 = (**(code **)(*param_3 + 0x20))(param_3);
  uVar20 = 0;
  do {
    if ((*(uint *)(lVar14 + (uVar20 >> 5) * 4) >> (ulong)((uint)uVar20 & 0x1f) & 1) != 0)
    goto LAB_02856ee0;
    uVar12 = (uint)uVar20 + 1;
    uVar20 = (ulong)uVar12;
  } while (uVar12 != 15000);
  uVar20 = 0;
LAB_02856ee0:
  lVar15 = (**(code **)(*param_3 + 0x20))(param_3);
  iVar19 = 15000;
  do {
    if ((*(uint *)(lVar15 + (ulong)(iVar19 - 1U >> 5) * 4) >> (ulong)(iVar19 - 1U & 0x1f) & 1) != 0)
    break;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  *param_1 = 0;
  puVar11 = PTR_DAT_04bc00c8;
  if (iVar19 == (int)uVar20) {
    return;
  }
  local_a4 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
LAB_02856f80:
  puVar10 = PTR_DAT_04bb43c0;
  puVar2 = (undefined2 *)(PTR_DAT_04bbfe58 + uVar20 * 8);
  if (0x752 < (uint)(uVar20 >> 3)) {
    puVar2 = (undefined2 *)PTR_DAT_04bbfe58;
  }
  puVar3 = (undefined2 *)PTR_DAT_04bb37e0;
  if ((uint)uVar20 < 0x3a99) {
    puVar3 = puVar2;
  }
  uVar8 = *puVar3;
  uVar6 = *(undefined1 *)(puVar3 + 1);
  uVar7 = *(undefined1 *)((long)puVar3 + 3);
  uVar5 = *(undefined4 *)(puVar3 + 2);
  lVar21 = *(long *)PTR_DAT_04bb43c0;
  local_68 = uVar8;
  local_66 = uVar6;
  local_65 = uVar7;
  local_64 = uVar5;
  uVar12 = FUN_0277d6c4(&local_68);
  lVar15 = *(long *)puVar10;
  if (lVar15 != 0) {
    lVar21 = *(long *)(lVar21 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar21 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
      local_70 = (uint *)0x0;
      local_80 = puVar1;
      local_78 = uVar8;
      local_76 = uVar6;
      local_75 = uVar7;
      local_74 = uVar5;
      uVar12 = FUN_0277d6c4(&local_78);
      if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_028570b8:
        if (local_70 != (uint *)0x0) goto LAB_028570c0;
        bVar18 = true;
        uVar17 = 0xbc;
      }
      else {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar12) ||
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_028570b8;
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar12 = FUN_0277d6c4(&local_68);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar12) ||
           (puVar16 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar12 * 8),
           puVar16 == (uint *)0x0)) goto LAB_028570b8;
        local_70 = puVar16;
LAB_028570c0:
        uVar12 = *local_70;
        uVar17 = 0;
        if ((uVar12 != 0) && (local_70 != (uint *)(ulong)uVar12)) {
          puVar16 = (uint *)((long)local_70 - (long)(ulong)uVar12);
          uVar17 = 0;
          if (*puVar16 != 0) {
            uVar12 = puVar16[1];
            if ((uVar12 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar16 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar16 + lVar15 + (ulong)(ushort)puVar16[2] * 8;
              if (lVar15 != 0) {
                uVar4 = 0;
                if ((ulong)uVar12 != 0) {
                  uVar4 = (uint)((ulong)((long)local_70 - lVar15) / (ulong)uVar12);
                }
                if (*puVar16 <= uVar4) {
                  uVar4 = 0xffffffff;
                }
                if (uVar4 < *(uint *)puVar11) {
                  uVar17 = *(ushort *)(*(long *)(puVar11 + 8) + (long)(int)uVar4 * 2);
                  if (0xbc < uVar17) {
                    bVar18 = false;
                    uVar17 = 0;
                    goto LAB_02857160;
                  }
                  goto LAB_0285715c;
                }
              }
            }
            uVar17 = 0;
          }
        }
LAB_0285715c:
        bVar18 = false;
      }
LAB_02857160:
      if (uVar17 == 0x69) {
        if ((param_4 & 1) != 0) goto LAB_0285719c;
      }
      else if (((uVar17 == 0x6a & param_4) == 0) && (uVar17 == 0x6a)) {
LAB_0285719c:
        if (bVar18) {
LAB_02857238:
          local_88 = 0;
        }
        else {
          puVar16 = (uint *)((long)local_70 - (ulong)*local_70);
          if ((((*local_70 == 0) || (puVar16 == (uint *)0x0)) || (*puVar16 == 0)) ||
             ((uVar12 = puVar16[1], uVar12 == 0 || ((ulong)(ushort)puVar16[2] == 0))))
          goto LAB_02857238;
          lVar15 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar16 + lVar15 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar15 == 0) goto LAB_02857238;
          uVar4 = 0;
          if ((ulong)uVar12 != 0) {
            uVar4 = (uint)((ulong)((long)local_70 - lVar15) / (ulong)uVar12);
          }
          if (*puVar16 <= uVar4) {
            uVar4 = 0xffffffff;
          }
          if ((*(uint *)PTR_DAT_04bc00f8 <= uVar4) ||
             (uVar9 = *(ushort *)(*(long *)(PTR_DAT_04bc00f8 + 8) + (long)(int)uVar4 * 2),
             0x1b < uVar9)) goto LAB_02857238;
          local_88 = (uint)uVar9;
          if (local_88 == 0x1b) goto LAB_02857400;
        }
        iVar13 = FUN_01aed730(&local_80);
        if (iVar13 < 8000) {
          if (DAT_055a345c == '\0') {
            puVar16 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
            uVar12 = *puVar16 ^ *puVar16 << 0xb;
            uVar4 = puVar16[3];
            *puVar16 = puVar16[1];
            puVar16[1] = puVar16[2];
            uVar12 = uVar12 >> 8 ^ uVar4 >> 0x13 ^ uVar12 ^ uVar4;
            puVar16[2] = uVar4;
            puVar16[3] = uVar12;
          }
          else {
            uVar12 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
            DAT_05582b70 = DAT_05582b74;
            DAT_05582b74 = DAT_05582b78;
            uVar12 = uVar12 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar12 ^ DAT_05582b7c;
            DAT_05582b78 = DAT_05582b7c;
            DAT_05582b7c = uVar12;
          }
          local_a4 = local_a4 + 1;
          if (((ulong)uVar12 * (ulong)local_a4 & 0xffffffff00000000) == 0) {
            *param_2 = uVar8;
            *(undefined1 *)(param_2 + 1) = uVar6;
            *(undefined1 *)((long)param_2 + 3) = uVar7;
            *(undefined4 *)(param_2 + 2) = uVar5;
            if (local_70 == (uint *)0x0) {
LAB_02857388:
              uVar12 = 0x400;
            }
            else {
              uVar4 = *local_70;
              uVar12 = 0x400;
              if ((uVar4 != 0) && (local_70 != (uint *)(ulong)uVar4)) {
                puVar16 = (uint *)((long)local_70 - (long)(ulong)uVar4);
                if ((*puVar16 != 0) &&
                   ((uVar12 = puVar16[1], uVar12 != 0 && ((ulong)(ushort)puVar16[2] != 0)))) {
                  lVar15 = 0xc;
                  if (*(char *)((long)puVar16 + 10) != '\0') {
                    lVar15 = 0x1c;
                  }
                  lVar15 = (long)puVar16 + lVar15 + (ulong)(ushort)puVar16[2] * 8;
                  if (lVar15 != 0) {
                    uVar4 = 0;
                    if ((ulong)uVar12 != 0) {
                      uVar4 = (uint)((ulong)((long)local_70 - lVar15) / (ulong)uVar12);
                    }
                    if (*puVar16 <= uVar4) {
                      uVar4 = 0xffffffff;
                    }
                    if ((uVar4 < *(uint *)puVar11) &&
                       (uVar9 = *(ushort *)(*(long *)(puVar11 + 8) + (long)(int)uVar4 * 2),
                       uVar9 < 0xbd)) {
                      uVar12 = 0x200;
                      if (uVar9 != 0x69) {
                        uVar12 = 0x400;
                      }
                      goto LAB_0285738c;
                    }
                  }
                }
                goto LAB_02857388;
              }
            }
LAB_0285738c:
            *param_1 = *param_1 | uVar12;
          }
        }
        if (uVar17 == 0x69) {
          local_88 = local_88 - 0xe;
          if ((local_88 < 10) && ((0x337U >> (ulong)(local_88 & 0x1f) & 1) != 0)) {
            uVar12 = 1 << (ulong)(*(uint *)(&DAT_0417bbc8 + (long)(int)local_88 * 4) & 0x1f);
            goto LAB_028573f0;
          }
        }
        else if (local_88 - 0x18 < 3) {
          uVar12 = (local_88 - 0x18) * 0x80 + 0x80;
LAB_028573f0:
          *param_1 = *param_1 | uVar12;
        }
      }
    }
  }
LAB_02857400:
  do {
    uVar12 = (int)uVar20 + 1;
    uVar20 = (ulong)uVar12;
    if (0x752 < uVar12 >> 3) {
      uVar12 = 0x3a95;
      goto LAB_02857430;
    }
  } while ((*(uint *)(lVar14 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) == 0);
  goto LAB_02856f78;
  while( true ) {
    uVar4 = uVar12 + 1;
    if ((*(uint *)(lVar14 + (ulong)(uVar4 >> 5) * 4) >> (ulong)(uVar4 & 0x1f) & 1) != 0)
    goto LAB_02856f70;
    if ((*(uint *)(lVar14 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) != 0)
    goto LAB_02856f74;
    uVar12 = uVar12 - 3;
    if (uVar12 == 0xfffffffd) break;
LAB_02857430:
    uVar4 = uVar12 + 2;
    if ((*(uint *)(lVar14 + (ulong)(uVar4 >> 5) * 4) >> (ulong)(uVar4 & 0x1f) & 1) != 0) {
LAB_02856f70:
      uVar12 = uVar4;
LAB_02856f74:
      uVar20 = (ulong)(uVar12 + 1);
      goto LAB_02856f78;
    }
  }
  uVar20 = 0;
LAB_02856f78:
  if (iVar19 == (int)uVar20) {
    return;
  }
  goto LAB_02856f80;
}

