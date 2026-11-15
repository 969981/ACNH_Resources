
void FUN_0249efc0(long param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  uint *puVar14;
  long *plVar15;
  short local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined8 local_60;
  short local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  
  puVar4 = PTR_DAT_04bb43c0;
  if (*(long *)(param_1 + 0x60) == 0) {
    return;
  }
  lVar11 = *(long *)(*(long *)(param_1 + 0x60) + 0x1480);
  if (*(char *)(lVar11 + 0xee) == '\0') {
    return;
  }
  lVar11 = lVar11 + ((ulong)*(uint *)(lVar11 + 0x10) & 1) * 0x20;
  local_68 = *(short *)(lVar11 + 0x14);
  local_66 = *(undefined1 *)(lVar11 + 0x16);
  local_65 = *(undefined1 *)(lVar11 + 0x17);
  local_64 = *(undefined4 *)(lVar11 + 0x18);
  if (local_68 == -2) {
    return;
  }
  local_60 = 0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  local_58 = local_68;
  local_56 = local_66;
  local_55 = local_65;
  local_54 = local_64;
  uVar6 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar4 == 0) {
    return;
  }
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if (*(uint *)(lVar11 + 0x1d8) <= uVar6) {
    return;
  }
  if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04bc0428;
  uVar6 = FUN_0277d6c4(&local_58);
  puVar4 = PTR_DAT_04bb27c0;
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if (*(uint *)(lVar11 + 0x1d8) <= uVar6) {
    return;
  }
  puVar12 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8);
  if (puVar12 == (uint *)0x0) {
    return;
  }
  uVar6 = *puVar12;
  if (uVar6 == 0) {
    return;
  }
  if (puVar12 == (uint *)(ulong)uVar6) {
    return;
  }
  puVar14 = (uint *)((long)puVar12 - (long)(ulong)uVar6);
  if (*puVar14 == 0) {
    return;
  }
  uVar6 = puVar14[1];
  if (uVar6 == 0) {
    return;
  }
  if ((ulong)(ushort)puVar14[2] == 0) {
    return;
  }
  lVar11 = 0xc;
  if (*(char *)((long)puVar14 + 10) != '\0') {
    lVar11 = 0x1c;
  }
  lVar11 = (long)puVar14 + lVar11 + (ulong)(ushort)puVar14[2] * 8;
  if (lVar11 == 0) {
    return;
  }
  uVar2 = 0;
  if ((ulong)uVar6 != 0) {
    uVar2 = (uint)((ulong)((long)puVar12 - lVar11) / (ulong)uVar6);
  }
  if (*puVar14 <= uVar2) {
    uVar2 = 0xffffffff;
  }
  if (*(uint *)PTR_DAT_04bc00c8 <= uVar2) {
    return;
  }
  uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2);
  if (0xbc < uVar3) {
    return;
  }
  if (uVar3 != 0x19) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    return;
  }
  lVar13 = *(long *)(*(long *)(param_1 + 0x60) + 0x1480);
  uVar6 = *(uint *)(lVar13 + ((ulong)*(uint *)(lVar13 + 0x10) & 1) * 0x20 + 0x28);
  if ((((uVar6 == 0) ||
       (plVar15 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                            ((ulong)(uVar6 >> 0x11) & 0x7ff8)), plVar15 == (long *)0x0)) ||
      ((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar15 + 0x46) != uVar6)) {
    plVar15 = (long *)0x0;
  }
  if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar4;
    iVar7 = (**(code **)(*plVar9 + 0x60))();
    if (iVar7 < 0x11) {
      uVar6 = 1;
      goto LAB_0249f22c;
    }
    if (*(uint *)(lVar11 + 0x5e8) < 5) {
      uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      goto LAB_0249f22c;
    }
  }
  uVar6 = 0;
LAB_0249f22c:
  if (plVar15 != (long *)0x0) {
    lVar11 = plVar15[0x2a];
    uVar2 = *(uint *)(plVar15 + 0x49);
    if (((*PTR_DAT_04bbe298 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbe298), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bbe290 = PTR_DAT_04bbe250 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe298);
    }
    uVar8 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bbe290);
    puVar5 = PTR_DAT_04bb30c8;
    puVar4 = PTR_DAT_04bb30c0;
    if ((((uVar8 & uVar6) == 1) && ((int)lVar11 == 1)) && ((uVar2 >> 4 & 1) != 0)) {
      if ((long *)plVar15[0x16] != plVar15 + 0x15) {
        lVar11 = (long)*(int *)((long)plVar15 + 0xbc);
        plVar9 = (long *)(plVar15[0x16] - lVar11);
        puVar1 = PTR_DAT_04bb2e38 + 0x10;
        do {
          if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
            *(undefined **)puVar4 = puVar1;
            __cxa_guard_release(puVar5);
          }
          if ((plVar9 != (long *)0x0) &&
             (uVar10 = (**(code **)(*plVar9 + 0x10))(plVar9,puVar4), (uVar10 & 1) != 0)) {
            lVar11 = plVar9[0x51];
            if (lVar11 == 0) {
              return;
            }
            if ((param_2 & 1) == (*(uint *)(lVar11 + 0x48) & 0x10000) >> 0x10) {
              return;
            }
            uVar6 = 0x10000;
            if ((param_2 & 1) == 0) {
              uVar6 = 0;
            }
            *(uint *)(lVar11 + 0x48) = *(uint *)(lVar11 + 0x48) & 0xfffeffff | uVar6;
            return;
          }
          plVar9 = (long *)(*(long *)((long)plVar9 + lVar11 + 8) - lVar11);
        } while (plVar9 != (long *)((long)(plVar15 + 0x15) - lVar11));
      }
    }
  }
  return;
}

