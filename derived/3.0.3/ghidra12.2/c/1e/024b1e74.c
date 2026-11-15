
void FUN_024b1e74(long param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ushort uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  short local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  uint *local_40;
  short local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)(param_1 + 0x60);
  if (lVar9 == 0) {
    return;
  }
  lVar11 = *(long *)(lVar9 + 0x1480) +
           ((ulong)*(uint *)(*(long *)(lVar9 + 0x1480) + 0x10) & 1) * 0x20;
  local_48 = *(short *)(lVar11 + 0x14);
  local_46 = *(undefined1 *)(lVar11 + 0x16);
  local_45 = *(undefined1 *)(lVar11 + 0x17);
  local_44 = *(undefined4 *)(lVar11 + 0x18);
  if (local_48 == -2) {
    return;
  }
  local_40 = (uint *)0x0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  local_38 = local_48;
  local_36 = local_46;
  local_35 = local_45;
  local_34 = local_44;
  uVar2 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar1 == 0) {
LAB_024b2010:
    uVar6 = 0xbc;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_024b2010;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar2 = FUN_0277d6c4(&local_38);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar2) ||
       (puVar7 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar2 * 8), puVar7 == (uint *)0x0
       )) goto LAB_024b2010;
    uVar2 = *puVar7;
    uVar6 = 0;
    local_40 = puVar7;
    if ((uVar2 != 0) && (puVar7 != (uint *)(ulong)uVar2)) {
      puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar2);
      uVar6 = 0;
      if (*puVar8 != 0) {
        uVar2 = puVar8[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar8 + lVar11 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar11 != 0) {
            uVar4 = 0;
            if ((ulong)uVar2 != 0) {
              uVar4 = (uint)((ulong)((long)puVar7 - lVar11) / (ulong)uVar2);
            }
            if (*puVar8 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
               uVar6 < 0xbd)) goto LAB_024b2014;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_024b2014:
  puVar1 = PTR_DAT_04bb27c0;
  if (uVar6 != 0x18) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    return;
  }
  uVar2 = *(uint *)(*(long *)(lVar9 + 0x1480) +
                    ((ulong)*(uint *)(*(long *)(lVar9 + 0x1480) + 0x10) & 1) * 0x20 + 0x28);
  if ((((uVar2 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                            ((ulong)(uVar2 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar2)) {
    plVar10 = (long *)0x0;
  }
  if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar1;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar2 = 1;
      goto joined_r0x024b20ec;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar2 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x024b20ec;
    }
  }
  uVar2 = 0;
joined_r0x024b20ec:
  if (plVar10 != (long *)0x0) {
    if (((*PTR_DAT_04bbe260 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbe260), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bbe258 = PTR_DAT_04bbe250 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe260);
    }
    uVar4 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bbe258);
    if ((uVar2 & uVar4) == 1) {
      FUN_01744820(plVar10,param_2 & 1);
    }
  }
  return;
}

