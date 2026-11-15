
void FUN_021c57b0(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint local_262c;
  undefined *local_2628;
  undefined2 local_2620;
  undefined1 local_261e;
  undefined1 local_261d;
  undefined4 local_261c;
  uint *local_2618;
  undefined8 local_2610;
  undefined8 *local_2608;
  long **local_2600;
  long **local_25f8;
  long *local_25f0 [5];
  long alStack_25c8 [990];
  undefined8 local_6d8;
  undefined8 local_6b0 [200];
  uint local_6c;
  
  lVar9 = 0xc6;
  local_2600 = local_25f0;
  local_25f0[0] = alStack_25c8;
  local_2610._4_4_ = 0;
  local_2608 = (undefined8 *)0x0;
  plVar8 = local_25f0[0];
  do {
    lVar9 = lVar9 + -2;
    *plVar8 = (long)(plVar8 + 5);
    plVar8[5] = (long)(plVar8 + 10);
    plVar8 = plVar8 + 10;
  } while (lVar9 != 0);
  local_6d8 = 0;
  if (local_6b0 != (undefined8 *)0x0) {
    local_2610._4_4_ = 200;
    local_2608 = local_6b0;
  }
  local_2610 = (ulong)local_2610._4_4_ << 0x20;
  local_25f8 = local_2600;
  FUN_01521078(&local_2610);
  uVar5 = nn::os::GetSystemTick();
  *param_1 = 0xfffe;
  FUN_0277d4ac();
  puVar4 = PTR_DAT_04bc0048;
  puVar3 = PTR_DAT_04bb43c0;
  if ((int)local_2610 != 0) {
    lVar9 = (long)(int)local_2610 << 3;
    local_262c = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
    uVar5 = 0;
    uVar15 = (local_262c ^ local_262c >> 0x1e) * 0x6c078965 + 2;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    uVar14 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 3;
    uVar13 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4;
    puVar12 = local_2608;
    do {
      puVar11 = (undefined2 *)*puVar12;
      lVar10 = *(long *)puVar3;
      local_2620 = *puVar11;
      local_261e = *(undefined1 *)(puVar11 + 1);
      local_261d = *(undefined1 *)((long)puVar11 + 3);
      local_261c = *(undefined4 *)(puVar11 + 2);
      local_2618 = (uint *)0x0;
      local_2628 = puVar1;
      uVar6 = FUN_0277d6c4(&local_2620);
      if (*(long *)puVar3 == 0) {
LAB_021c5980:
        if (local_2618 != (uint *)0x0) goto LAB_021c5988;
        goto LAB_021c5ab8;
      }
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((*(uint *)(lVar10 + 0x1d8) <= uVar6) ||
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_021c5980;
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(puVar11);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((*(uint *)(lVar10 + 0x1d8) <= uVar6) ||
         (puVar7 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8),
         puVar7 == (uint *)0x0)) goto LAB_021c5980;
      local_2618 = puVar7;
LAB_021c5988:
      uVar6 = *local_2618;
      local_6c = 0;
      if ((uVar6 != 0) && (local_2618 != (uint *)(ulong)uVar6)) {
        puVar7 = (uint *)((long)local_2618 - (long)(ulong)uVar6);
        local_6c = 0;
        if (*puVar7 != 0) {
          uVar6 = puVar7[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
            lVar10 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar7 + lVar10 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar10 != 0) {
              uVar2 = 0;
              if ((ulong)uVar6 != 0) {
                uVar2 = (uint)((ulong)((long)local_2618 - lVar10) / (ulong)uVar6);
              }
              if (*puVar7 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < *(uint *)puVar4) &&
                 (local_6c = (uint)*(ushort *)(*(long *)(puVar4 + 8) + (long)(int)uVar2 * 2),
                 local_6c < 0x52)) goto LAB_021c5a0c;
            }
          }
          local_6c = 0;
        }
      }
LAB_021c5a0c:
      if ((local_6c & 0xfffffffe) == 10) {
LAB_021c5ba0:
        uVar5 = uVar5 + 1;
        local_262c = local_262c ^ local_262c << 0xb;
        uVar6 = uVar13 >> 0x13 ^ local_262c >> 8 ^ uVar13 ^ local_262c;
        if (((ulong)uVar6 * (ulong)uVar5 & 0xffffffff00000000) == 0) {
          *(undefined2 *)param_1 = *puVar11;
          *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar11 + 1);
          *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar11 + 3);
          *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(puVar11 + 2);
        }
        uVar2 = uVar14;
        uVar14 = uVar13;
        uVar13 = uVar6;
        local_262c = uVar15;
      }
      else {
        uVar6 = *local_2618;
        local_6c = 0;
        if ((uVar6 != 0) && (local_2618 != (uint *)(ulong)uVar6)) {
          puVar7 = (uint *)((long)local_2618 - (long)(ulong)uVar6);
          local_6c = 0;
          if (*puVar7 != 0) {
            uVar6 = puVar7[1];
            if ((uVar6 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
              lVar10 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar7 + lVar10 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar10 != 0) {
                uVar2 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar2 = (uint)((ulong)((long)local_2618 - lVar10) / (ulong)uVar6);
                }
                if (*puVar7 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < *(uint *)puVar4) &&
                   (local_6c = (uint)*(ushort *)(*(long *)(puVar4 + 8) + (long)(int)uVar2 * 2),
                   local_6c < 0x52)) goto LAB_021c5abc;
              }
            }
LAB_021c5ab8:
            local_6c = 0;
          }
        }
LAB_021c5abc:
        if ((local_6c - 1 < 9) || (local_6c = FUN_01ae7550(&local_2628), local_6c - 1 < 6))
        goto LAB_021c5ba0;
        if (local_2618 == (uint *)0x0) {
LAB_021c5b74:
          local_6c = 0;
        }
        else {
          uVar6 = *local_2618;
          local_6c = 0;
          if ((uVar6 != 0) && (local_2618 != (uint *)(ulong)uVar6)) {
            puVar7 = (uint *)((long)local_2618 - (long)(ulong)uVar6);
            local_6c = 0;
            if (*puVar7 != 0) {
              uVar6 = puVar7[1];
              if ((uVar6 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
                lVar10 = 0xc;
                if (*(char *)((long)puVar7 + 10) != '\0') {
                  lVar10 = 0x1c;
                }
                lVar10 = (long)puVar7 + lVar10 + (ulong)(ushort)puVar7[2] * 8;
                if (lVar10 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar6 != 0) {
                    uVar2 = (uint)((ulong)((long)local_2618 - lVar10) / (ulong)uVar6);
                  }
                  if (*puVar7 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < *(uint *)puVar4) &&
                     (local_6c = (uint)*(ushort *)(*(long *)(puVar4 + 8) + (long)(int)uVar2 * 2),
                     local_6c < 0x52)) goto LAB_021c5b78;
                }
              }
              goto LAB_021c5b74;
            }
          }
        }
LAB_021c5b78:
        if ((local_6c < 0x11) && ((1 << (ulong)(local_6c & 0x1f) & 0x17000U) != 0))
        goto LAB_021c5ba0;
        uVar2 = uVar15;
      }
      uVar15 = uVar2;
      puVar12 = puVar12 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  return;
}

