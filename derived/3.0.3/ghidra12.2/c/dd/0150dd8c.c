
undefined8 FUN_0150dd8c(undefined8 param_1,uint *param_2,byte *param_3)

{
  uint uVar1;
  short sVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  uint *puVar10;
  uint *puVar11;
  long *plVar12;
  uint uVar13;
  bool bVar14;
  long lVar15;
  uint local_80;
  uint local_7c;
  undefined *local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  uint local_6c;
  uint *local_68;
  uint local_44;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_70 = (undefined2)*param_2;
  local_68 = (uint *)0x0;
  local_6e = *(undefined1 *)((long)param_2 + 2);
  local_6d = *(undefined1 *)((long)param_2 + 3);
  uVar6 = *param_2;
  uVar13 = param_2[1];
  local_78 = PTR_DAT_04bc0510 + 0x10;
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  local_6c = uVar13;
  uVar4 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar3 == 0) {
LAB_0150de9c:
    puVar11 = (uint *)0x0;
    local_44 = 0xbc;
    bVar14 = true;
  }
  else {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0150de9c;
    lVar15 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_2);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar4) ||
       (puVar11 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar4 * 8),
       puVar11 == (uint *)0x0)) goto LAB_0150de9c;
    uVar4 = *puVar11;
    local_68 = puVar11;
    if (uVar4 == 0 || puVar11 == (uint *)(ulong)uVar4) goto LAB_0150de90;
    puVar10 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
    local_44 = 0;
    if (*puVar10 == 0) {
LAB_0150de94:
      bVar14 = false;
    }
    else {
      uVar4 = puVar10[1];
      if ((uVar4 == 0) || ((ulong)(ushort)puVar10[2] == 0)) {
LAB_0150de90:
        local_44 = 0;
        goto LAB_0150de94;
      }
      lVar15 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar15 = 0x1c;
      }
      lVar15 = (long)puVar10 + lVar15 + (ulong)(ushort)puVar10[2] * 8;
      if (lVar15 == 0) goto LAB_0150de90;
      uVar1 = 0;
      if ((ulong)uVar4 != 0) {
        uVar1 = (uint)((ulong)((long)puVar11 - lVar15) / (ulong)uVar4);
      }
      if (*puVar10 <= uVar1) {
        uVar1 = 0xffffffff;
      }
      if (*(uint *)PTR_DAT_04bc00c8 <= uVar1) goto LAB_0150de90;
      local_44 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2);
      if (local_44 < 0xbd) goto LAB_0150de94;
      bVar14 = false;
      local_44 = 0;
    }
  }
  if (local_44 == 0x76) {
    sVar2 = *(short *)PTR_DAT_04bb6298;
    if (sVar2 == -1) {
      return 0;
    }
    local_80 = 3;
    puVar10 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar10 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar10 >> 3 & 1) == 0) {
      return 0;
    }
    if (7 < *param_3) {
      return 0;
    }
    local_44 = (uint)*param_3;
    iVar5 = FUN_02582fe0(&local_44);
    if (iVar5 == -1) {
      return 0;
    }
    local_80 = 0;
    uVar7 = FUN_02b5e950(&local_80,iVar5);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    if (bVar14) {
      local_44 = 0xbc;
    }
    else {
      uVar4 = *puVar11;
      local_44 = 0;
      if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
        puVar10 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
        local_44 = 0;
        if (*puVar10 != 0) {
          uVar4 = puVar10[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar15 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar10 + lVar15 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar15 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar11 - lVar15) / (ulong)uVar4);
              }
              if (*puVar10 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_44 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                 local_44 < 0xbd)) goto LAB_0150e070;
            }
          }
          local_44 = 0;
        }
      }
    }
LAB_0150e070:
    if (local_44 == 0x76) {
      uVar13 = uVar13 & 0xfffffff0 | local_80 & 0xf;
      local_6c = uVar13;
    }
  }
  puVar3 = PTR_DAT_04bb27c0;
  lVar15 = *(long *)PTR_DAT_04bb27c0;
  if (lVar15 == 0) {
    return 0;
  }
  uVar4 = *(uint *)(DAT_0520f098 + 0x10);
  if ((((uVar4 == 0) ||
       (plVar12 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                            ((ulong)(uVar4 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
      ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar4)) {
    plVar12 = (long *)0x0;
  }
  local_80 = uVar6;
  local_7c = uVar13;
  if ((*(int *)(lVar15 + 0x288) == 1) || (*(int *)(lVar15 + 0x288) == -1)) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar15 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar8 + 0x60))();
    if (iVar5 < 0x11) {
      uVar13 = 1;
      goto joined_r0x0150e160;
    }
    if (*(uint *)(lVar15 + 0x5e8) < 5) {
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar15 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0150e160;
    }
  }
  uVar13 = 0;
joined_r0x0150e160:
  if (plVar12 != (long *)0x0) {
    if (((*PTR_DAT_04bb7d58 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb7d58);
    }
    uVar6 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb7d50);
    if ((uVar13 & uVar6) == 1) {
      uVar9 = FUN_0148a260(param_1,&local_80,param_3);
      return uVar9;
    }
  }
  return 0;
}

