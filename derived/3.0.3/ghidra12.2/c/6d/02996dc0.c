
bool FUN_02996dc0(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined4 uVar9;
  long *plVar10;
  uint *puVar11;
  ushort uVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined8 local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint local_64;
  
  puVar5 = PTR_DAT_04bb2010;
  plVar10 = *(long **)PTR_DAT_04bb27d0;
  if ((plVar10 == (long *)0x0) || ((int)plVar10[0x10] != 3)) {
    local_70 = *(undefined4 *)(param_1 + 0x34);
    uStack_6c = *(undefined4 *)(param_1 + 0x38);
    uVar9 = *(undefined4 *)(param_1 + 0x3c);
  }
  else {
    uVar9 = *(undefined4 *)(param_1 + 0x3c);
    local_70 = *(undefined4 *)(param_1 + 0x34);
    uStack_6c = *(undefined4 *)(param_1 + 0x38);
    if (1 < *(byte *)(*plVar10 + 0x476)) {
      local_78 = PTR_DAT_04bb2010 + 0x10;
      puVar8 = (undefined2 *)FUN_01a5010c(param_2,uVar9,&local_78);
      puVar6 = PTR_DAT_04bb43c0;
      uVar4 = *puVar8;
      uVar2 = *(undefined1 *)(puVar8 + 1);
      uVar3 = *(undefined1 *)((long)puVar8 + 3);
      uVar9 = *(undefined4 *)(puVar8 + 2);
      lVar15 = *(long *)PTR_DAT_04bb43c0;
      local_80 = uVar4;
      local_7e = uVar2;
      local_7d = uVar3;
      local_7c = uVar9;
      uVar7 = FUN_0277d6c4(&local_80);
      lVar14 = *(long *)puVar6;
      if (lVar14 != 0) {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          local_88 = 0;
          local_90 = uVar4;
          local_8e = uVar2;
          local_8d = uVar3;
          local_8c = uVar9;
          uVar7 = FUN_0277d6c4(&local_90);
          if (*(long *)puVar6 == 0) {
LAB_02996fd0:
            local_64 = 0;
          }
          else {
            lVar14 = *(long *)(lVar14 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((*(uint *)(lVar14 + 0x1d8) <= uVar7) ||
               (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
            goto LAB_02996fd0;
            lVar14 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(&local_80);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((*(uint *)(lVar14 + 0x1d8) <= uVar7) ||
               (puVar11 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8),
               puVar11 == (uint *)0x0)) goto LAB_02996fd0;
            uVar7 = *puVar11;
            local_64 = 0;
            if ((uVar7 != 0) && (puVar11 != (uint *)(ulong)uVar7)) {
              puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar7);
              local_64 = 0;
              if (*puVar13 != 0) {
                uVar7 = puVar13[1];
                if ((uVar7 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                  lVar14 = 0xc;
                  if (*(char *)((long)puVar13 + 10) != '\0') {
                    lVar14 = 0x1c;
                  }
                  lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
                  if (lVar14 != 0) {
                    uVar1 = 0;
                    if ((ulong)uVar7 != 0) {
                      uVar1 = (uint)((ulong)((long)puVar11 - lVar14) / (ulong)uVar7);
                    }
                    if (*puVar13 <= uVar1) {
                      uVar1 = 0xffffffff;
                    }
                    if ((uVar1 < DAT_05326d48) &&
                       (local_64 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar1 * 2),
                       local_64 < 0x52)) goto LAB_02996fd4;
                  }
                }
                goto LAB_02996fd0;
              }
            }
          }
LAB_02996fd4:
          if ((local_64 & 0xfffffffe) == 0x12) {
            return false;
          }
        }
      }
      local_70 = *(undefined4 *)(param_1 + 0x1c);
      uStack_6c = *(undefined4 *)(param_1 + 0x20);
      local_78 = puVar5 + 0x10;
      puVar8 = (undefined2 *)FUN_01a5010c(param_2,*(undefined4 *)(param_1 + 0x24),&local_78);
      uVar4 = *puVar8;
      uVar2 = *(undefined1 *)(puVar8 + 1);
      uVar3 = *(undefined1 *)((long)puVar8 + 3);
      uVar9 = *(undefined4 *)(puVar8 + 2);
      lVar15 = *(long *)puVar6;
      local_80 = uVar4;
      local_7e = uVar2;
      local_7d = uVar3;
      local_7c = uVar9;
      uVar7 = FUN_0277d6c4(&local_80);
      lVar14 = *(long *)puVar6;
      if (lVar14 == 0) {
        return true;
      }
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if (*(uint *)(lVar15 + 0x1d8) <= uVar7) {
        return true;
      }
      if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
        return true;
      }
      local_88 = 0;
      local_90 = uVar4;
      local_8e = uVar2;
      local_8d = uVar3;
      local_8c = uVar9;
      uVar7 = FUN_0277d6c4(&local_90);
      if (*(long *)puVar6 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar14 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(&local_80);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
             (puVar11 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8),
             puVar11 != (uint *)0x0)) {
            uVar7 = *puVar11;
            uVar12 = 0;
            if ((uVar7 == 0) || (puVar11 == (uint *)(ulong)uVar7)) goto LAB_02997198;
            puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar7);
            uVar12 = 0;
            if (*puVar13 == 0) goto LAB_02997198;
            uVar7 = puVar13[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
              lVar14 = 0xc;
              if (*(char *)((long)puVar13 + 10) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
              if (lVar14 != 0) {
                uVar1 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar11 - lVar14) / (ulong)uVar7);
                }
                if (*puVar13 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326d48) &&
                   (uVar12 = *(ushort *)(DAT_05326d50 + (long)(int)uVar1 * 2), uVar12 < 0x52))
                goto LAB_02997198;
              }
            }
          }
        }
      }
      uVar12 = 0;
LAB_02997198:
      if ((uVar12 & 0xfffe) == 0x12) {
        return false;
      }
      return true;
    }
  }
  local_78 = PTR_DAT_04bb2010 + 0x10;
  puVar8 = (undefined2 *)FUN_01a5010c(param_2,uVar9,&local_78);
  puVar5 = PTR_DAT_04bb43c0;
  uVar4 = *puVar8;
  uVar2 = *(undefined1 *)(puVar8 + 1);
  uVar3 = *(undefined1 *)((long)puVar8 + 3);
  uVar9 = *(undefined4 *)(puVar8 + 2);
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  local_80 = uVar4;
  local_7e = uVar2;
  local_7d = uVar3;
  local_7c = uVar9;
  uVar7 = FUN_0277d6c4(&local_80);
  lVar14 = *(long *)puVar5;
  if (lVar14 == 0) {
    return true;
  }
  lVar15 = *(long *)(lVar15 + 0x57e58);
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
  if (*(uint *)(lVar15 + 0x1d8) <= uVar7) {
    return true;
  }
  if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
    return true;
  }
  local_88 = 0;
  local_90 = uVar4;
  local_8e = uVar2;
  local_8d = uVar3;
  local_8c = uVar9;
  uVar7 = FUN_0277d6c4(&local_90);
  if (*(long *)puVar5 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(&local_80);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
         (puVar11 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8),
         puVar11 != (uint *)0x0)) {
        uVar7 = *puVar11;
        uVar12 = 0;
        if ((uVar7 == 0) || (puVar11 == (uint *)(ulong)uVar7)) goto LAB_02997374;
        puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar7);
        uVar12 = 0;
        if (*puVar13 == 0) goto LAB_02997374;
        uVar7 = puVar13[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar14 != 0) {
            uVar1 = 0;
            if ((ulong)uVar7 != 0) {
              uVar1 = (uint)((ulong)((long)puVar11 - lVar14) / (ulong)uVar7);
            }
            if (*puVar13 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326d48) &&
               (uVar12 = *(ushort *)(DAT_05326d50 + (long)(int)uVar1 * 2), uVar12 < 0x52))
            goto LAB_02997374;
          }
        }
      }
    }
  }
  uVar12 = 0;
LAB_02997374:
  return (uVar12 & 0xfffe) != 0x12;
}

