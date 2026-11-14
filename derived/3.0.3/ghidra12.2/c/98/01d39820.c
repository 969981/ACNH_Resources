
int FUN_01d39820(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  byte *pbVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 local_c0;
  undefined *local_b8;
  undefined2 *local_b0;
  int local_a8;
  undefined2 local_a4;
  char local_a2 [61];
  undefined1 local_65;
  
  local_b8 = PTR_DAT_04bb2020 + 0x10;
  local_b0 = (undefined2 *)&DAT_040c7c06;
  iVar8 = FUN_01d3aee0(*(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x14),
                       *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14),&local_b8,0,0);
  iVar9 = 0;
  if (-1 < iVar8) {
    iVar9 = *(int *)(param_1 + 0x14);
  }
  uVar16 = iVar9 + iVar8;
  uVar17 = (ulong)uVar16;
  if ((int)uVar16 < 0) {
    return -1;
  }
  plVar14 = (long *)(param_1 + 0x20);
  (**(code **)(*plVar14 + 0x18))(plVar14);
  puVar7 = PTR_DAT_04bb2120;
  lVar11 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 0x28) + lVar11) == '\0') {
LAB_01d398f4:
      iVar9 = (int)lVar11 + 1;
      if ((int)lVar11 == -1) goto LAB_01d3990c;
      goto LAB_01d39954;
    }
    lVar12 = *(long *)(param_1 + 0x28) + lVar11;
    if (*(char *)(lVar12 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_01d398f4;
    }
    if (*(char *)(lVar12 + 2) == '\0') {
      iVar9 = (int)lVar11 + 3;
      if ((int)lVar11 == -3) goto LAB_01d3990c;
      goto LAB_01d39954;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  iVar9 = 1;
LAB_01d39954:
  local_c0 = 0;
  uVar15 = 0;
  uVar18 = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  do {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x18))(plVar14);
    lVar12 = *(long *)(param_1 + 0x28);
    lVar11 = 0;
    do {
      if (*(char *)(lVar12 + lVar11) == '\0') goto LAB_01d399f4;
      if (*(char *)(lVar12 + lVar11 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_01d399f4;
      }
      if (*(char *)(lVar12 + lVar11 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_01d399f4;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_01d399f4:
    pbVar3 = puVar7;
    if ((int)uVar15 <= (int)lVar11 && -1 < (int)uVar15) {
      pbVar3 = (byte *)(lVar12 + uVar18);
    }
    bVar5 = *pbVar3;
    local_a8 = 0x40;
    local_65 = 0;
    local_a4 = local_a4 & 0xff00;
    local_b8 = puVar1;
    local_b0 = &local_a4;
    switch(bVar5) {
    case 8:
      local_a4 = 0x625c;
      break;
    case 9:
      local_a4 = 0x745c;
      break;
    case 10:
      local_a4 = 0x6e5c;
      break;
    case 0xb:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
switchD_01d39a3c_caseD_b:
      uVar16 = (uint)bVar5;
      if (*(char *)(param_1 + 0x18) == '\0') {
        lVar11 = 0;
        do {
          if (local_a2[lVar11 + -2] == '\0') {
LAB_01d39c84:
            iVar8 = (int)lVar11;
joined_r0x01d39c88:
            if (0x3e < iVar8) goto LAB_01d39acc;
            goto LAB_01d39cec;
          }
          if (local_a2[lVar11 + -1] == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_01d39c84;
          }
          if (local_a2[lVar11] == '\0') {
            iVar8 = (int)lVar11 + 2;
            goto joined_r0x01d39c88;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        iVar8 = 0;
LAB_01d39cec:
        *(byte *)((long)&local_a4 + (long)iVar8) = bVar5;
        local_a2[(long)iVar8 + -1] = '\0';
        goto LAB_01d39acc;
      }
      if (local_c0._4_4_ == 0) {
        if (-1 < (char)bVar5) {
          lVar11 = 0;
          do {
            if (local_a2[lVar11 + -2] == '\0') {
LAB_01d39ce0:
              iVar8 = (int)lVar11;
              if (iVar8 < 0x3f) goto LAB_01d39ce8;
LAB_01d39d08:
              local_c0 = local_c0 & 0xffffffff;
              goto LAB_01d39acc;
            }
            if (local_a2[lVar11 + -1] == '\0') {
              lVar11 = lVar11 + 1;
              goto LAB_01d39ce0;
            }
            if (local_a2[lVar11] == '\0') {
              iVar8 = (int)lVar11 + 2;
              if (0x3e < iVar8) goto LAB_01d39d08;
              goto LAB_01d39ce8;
            }
            lVar11 = lVar11 + 3;
          } while (lVar11 != 0x80001);
          iVar8 = 0;
LAB_01d39ce8:
          local_c0 = local_c0 & 0xffffffff;
          goto LAB_01d39cec;
        }
        if (uVar16 < 0xc0) {
          return -1;
        }
        if (uVar16 < 0xe0) {
          uVar16 = uVar16 & 0x1f;
          uVar10 = 1;
        }
        else {
          if (0xef < uVar16) {
            return -1;
          }
          uVar16 = uVar16 & 0xf;
          uVar10 = 2;
        }
        local_c0 = CONCAT44(uVar10,uVar16);
      }
      else {
        if (-0x41 < (char)bVar5) {
          return -1;
        }
        uVar6 = ((uint)local_c0 & 0xffff) << 6;
        uVar2 = uVar16 & 0x3f | uVar6;
        if (local_c0._4_4_ < 2) {
          FUN_038d1270(&local_b8,"\\u%04x",uVar16 & 0x3f | uVar6 & 0xffff);
          local_c0 = (ulong)uVar2;
          goto LAB_01d39acc;
        }
        local_c0 = CONCAT44(1,uVar2);
      }
      goto LAB_01d39988;
    case 0xc:
      local_a4 = 0x665c;
      break;
    case 0xd:
      local_a4 = 0x725c;
      break;
    case 0x22:
      local_a4 = 0x225c;
      break;
    case 0x2f:
      local_a4 = 0x2f5c;
      break;
    default:
      if (bVar5 != 0x5c) goto switchD_01d39a3c_caseD_b;
      local_a4 = 0x5c5c;
    }
    local_a2[0] = '\0';
LAB_01d39acc:
    (**(code **)(local_b8 + 0x18))(&local_b8);
    uVar15 = 0;
    do {
      if (*(char *)((long)local_b0 + uVar15) == '\0') {
LAB_01d39b14:
        iVar8 = (int)uVar15;
joined_r0x01d39b28:
        if (0 < iVar8) {
          lVar11 = (long)(int)uVar17;
          uVar17 = lVar11 + (int)uVar15;
          if (*(int *)(param_1 + 0x10) <= (int)uVar17 + 1) {
            return -1;
          }
          if (uVar15 == 1) {
            uVar13 = 0;
          }
          else {
            uVar13 = 0;
            do {
              puVar4 = (undefined *)((long)local_b0 + uVar13);
              if ((long)local_a8 <= (long)uVar13) {
                puVar4 = puVar7;
              }
              *(undefined *)(*(long *)(param_1 + 8) + lVar11 + uVar13) = *puVar4;
              puVar4 = (undefined *)(uVar13 + 1 + (long)local_b0);
              if ((long)local_a8 <= (long)(uVar13 + 1)) {
                puVar4 = puVar7;
              }
              lVar12 = lVar11 + uVar13;
              uVar13 = uVar13 + 2;
              *(undefined *)(*(long *)(param_1 + 8) + lVar12 + 1) = *puVar4;
            } while (uVar13 != (uVar15 & 0xfffffffffffffffe));
          }
          if ((uVar15 & 1) != 0) {
            puVar4 = (undefined *)((long)local_b0 + uVar13);
            if ((long)local_a8 <= (long)uVar13) {
              puVar4 = puVar7;
            }
            *(undefined *)(*(long *)(param_1 + 8) + uVar13 + lVar11) = *puVar4;
          }
          *(undefined1 *)(*(long *)(param_1 + 8) + uVar17) = 0;
        }
        break;
      }
      if (*(char *)((long)local_b0 + uVar15 + 1) == '\0') {
        uVar15 = uVar15 + 1;
        goto LAB_01d39b14;
      }
      if (*(char *)((long)local_b0 + uVar15 + 2) == '\0') {
        uVar15 = uVar15 + 2;
        iVar8 = (int)uVar15;
        goto joined_r0x01d39b28;
      }
      uVar15 = uVar15 + 3;
    } while (uVar15 != 0x80001);
LAB_01d39988:
    uVar16 = (uint)uVar17;
    uVar15 = uVar18 + 1;
    uVar18 = uVar15 & 0xffffffff;
    if (iVar9 == (int)uVar15) {
LAB_01d3990c:
      local_b8 = PTR_DAT_04bb2020 + 0x10;
      local_b0 = (undefined2 *)&DAT_040c7c06;
      iVar9 = FUN_01d3aee0(*(long *)(param_1 + 8) + (long)(int)uVar16,
                           *(int *)(param_1 + 0x10) - uVar16,&local_b8,0,0);
      uVar2 = 0;
      if (-1 < iVar9) {
        uVar2 = uVar16;
      }
      return uVar2 + iVar9;
    }
  } while( true );
}

