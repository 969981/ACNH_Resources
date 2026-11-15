
uint FUN_01e5e100(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  long *plVar13;
  long lVar14;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  int local_90;
  int local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  int local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  
  lVar10 = *(long *)(param_1 + 0x338);
  local_60 = *(undefined8 *)(lVar10 + 0x278);
  local_70 = *(undefined8 *)(lVar10 + 0x278);
  local_68 = *(undefined4 *)(lVar10 + 0x280);
  local_58 = *(undefined4 *)(lVar10 + 0x280);
  local_74 = *(int *)(lVar10 + 0x2b4);
  local_7c = 0xfffe;
  FUN_0277d4ac(&local_7c);
  uVar6 = FUN_021f32f0(&local_60,&local_70,&local_74,&local_7c,0);
  local_90 = local_74;
  if ((uVar6 & 1) == 0) goto LAB_01e5e4b0;
  local_88 = local_70;
  local_80 = local_68;
  *(undefined8 *)(param_1 + 0x430) = local_70;
  *(int *)(param_1 + 0x444) = local_74;
  local_8c = local_74;
  *(undefined4 *)(param_1 + 0x438) = local_68;
  FUN_016d88bc(*(undefined8 *)(param_1 + 0x358),&local_70,&local_8c);
  *(undefined1 *)(param_1 + 0x634) = 0;
  *(uint *)(param_1 + 0x630) = local_74 + 0x20000000U >> 0x1e;
  FUN_01e39520(*(undefined8 *)(param_1 + 0x358),&local_88,&local_90,0);
  *(undefined4 *)(*(long *)(param_1 + 0x358) + 0x750) = 1;
  puVar3 = PTR_DAT_04bb43c0;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_7c);
  lVar10 = *(long *)puVar3;
  if (lVar10 == 0) {
LAB_01e5e400:
    bVar5 = false;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if (*(uint *)(lVar14 + 0x1d8) <= uVar7) goto LAB_01e5e400;
    bVar5 = false;
    if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0) {
      local_98 = 0;
      local_a0 = (undefined4)local_7c;
      uStack_9c = local_7c._4_4_;
      uVar7 = FUN_0277d6c4(&local_a0);
      if (*(long *)puVar3 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(&local_7c);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
             (puVar11 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8),
             puVar11 != (uint *)0x0)) {
            uVar7 = *puVar11;
            local_54 = 0;
            if ((uVar7 != 0) && (puVar11 != (uint *)(ulong)uVar7)) {
              puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar7);
              local_54 = 0;
              if (*puVar12 != 0) {
                uVar7 = puVar12[1];
                if ((uVar7 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
                  lVar10 = 0xc;
                  if (*(char *)((long)puVar12 + 10) != '\0') {
                    lVar10 = 0x1c;
                  }
                  lVar10 = (long)puVar12 + lVar10 + (ulong)(ushort)puVar12[2] * 8;
                  if (lVar10 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar7 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar11 - lVar10) / (ulong)uVar7);
                    }
                    if (*puVar12 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < *(uint *)PTR_DAT_04bc0048) &&
                       (local_54 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar2 * 2),
                       local_54 < 0x52)) goto LAB_01e5e360;
                  }
                }
                local_54 = 0;
              }
            }
LAB_01e5e360:
            if (8 < local_54 - 1) goto LAB_01e5e400;
            uVar7 = *puVar11;
            local_54 = 0;
            if ((uVar7 != 0) && (puVar11 != (uint *)(ulong)uVar7)) {
              puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar7);
              local_54 = 0;
              if (*puVar12 != 0) {
                uVar7 = puVar12[1];
                if ((uVar7 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
                  lVar10 = 0xc;
                  if (*(char *)((long)puVar12 + 10) != '\0') {
                    lVar10 = 0x1c;
                  }
                  lVar10 = (long)puVar12 + lVar10 + (ulong)(ushort)puVar12[2] * 8;
                  if (lVar10 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar7 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar11 - lVar10) / (ulong)uVar7);
                    }
                    if (*puVar12 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < *(uint *)PTR_DAT_04bc0048) &&
                       (local_54 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar2 * 2),
                       local_54 < 0x52)) goto LAB_01e5e4ec;
                  }
                }
                local_54 = 0;
              }
            }
LAB_01e5e4ec:
            bVar5 = local_54 != 3;
            goto LAB_01e5e404;
          }
        }
      }
      bVar5 = false;
      local_54 = 0;
    }
  }
LAB_01e5e404:
  lVar10 = *(long *)(param_1 + 0x358);
  *(bool *)(param_1 + 0x677) = bVar5;
  *(undefined1 *)(param_1 + 0x5a0) = 0;
  puVar4 = PTR_DAT_04bb2f00;
  puVar3 = PTR_DAT_04bb2ef8;
  if (*(long *)(lVar10 + 0xb0) != lVar10 + 0xa8) {
    lVar14 = (long)*(int *)(lVar10 + 0xbc);
    plVar13 = (long *)(*(long *)(lVar10 + 0xb0) - lVar14);
    puVar1 = PTR_DAT_04bb2f08 + 0x10;
    do {
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
        *(undefined **)puVar3 = puVar1;
        __cxa_guard_release(puVar4);
      }
      if ((plVar13 != (long *)0x0) &&
         (uVar9 = (**(code **)(*plVar13 + 0x10))(plVar13,puVar3), (uVar9 & 1) != 0)) {
        *(undefined1 *)((long)plVar13 + 0x5074) = 0;
        break;
      }
      plVar13 = (long *)(*(long *)((long)plVar13 + lVar14 + 8) - lVar14);
    } while (plVar13 != (long *)((lVar10 + 0xa8) - lVar14));
  }
LAB_01e5e4b0:
  return uVar6 & 1;
}

