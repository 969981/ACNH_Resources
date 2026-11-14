
undefined8 FUN_015203fc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  uint *local_40;
  int local_38;
  uint local_34;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  local_38 = 0;
  *param_1 = *(undefined4 *)PTR_DAT_04bb3238;
  uVar8 = FUN_0277e294(param_2);
  puVar3 = PTR_DAT_04bb43c0;
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  local_40 = (uint *)0x0;
  local_50 = PTR_DAT_04bc0510 + 0x10;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar3 == 0) {
LAB_01520590:
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x76);
    local_34 = 0xbc;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01520590;
    lVar12 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_2);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar4) ||
       (puVar10 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8),
       puVar10 == (uint *)0x0)) goto LAB_01520590;
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x76);
    uVar4 = *puVar10;
    local_40 = puVar10;
    if (uVar4 == 0 || puVar10 == (uint *)(ulong)uVar4) {
LAB_01520578:
      local_34 = 0;
    }
    else {
      puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
      if (((*puVar11 == 0) || (uVar4 = puVar11[1], uVar4 == 0)) || ((ulong)(ushort)puVar11[2] == 0))
      goto LAB_01520578;
      lVar12 = 0xc;
      if (*(char *)((long)puVar11 + 10) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar11 + lVar12 + (ulong)(ushort)puVar11[2] * 8;
      if (lVar12 == 0) goto LAB_01520578;
      uVar6 = 0;
      if ((ulong)uVar4 != 0) {
        uVar6 = (uint)((ulong)((long)puVar10 - lVar12) / (ulong)uVar4);
      }
      if (*puVar11 <= uVar6) {
        uVar6 = 0xffffffff;
      }
      if ((*(uint *)PTR_DAT_04bc00c8 <= uVar6) ||
         (uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar6 * 2),
         local_34 = (uint)uVar2, 0xbc < uVar2)) goto LAB_01520578;
    }
  }
  puVar3 = PTR_DAT_04bb27c0;
  if (local_34 != (uint)local_68) {
    return 0;
  }
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 == 0) {
    return 0;
  }
  uVar4 = *(uint *)(DAT_0520f098 + 0x10);
  if (((uVar4 == 0) ||
      (plVar13 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                           ((ulong)(uVar4 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
     (((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar13 + 0x46) != uVar4)))) {
    plVar13 = (long *)0x0;
  }
  if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar9 + 0x60))();
    if (iVar5 < 0x11) {
      uVar4 = 1;
      goto joined_r0x01520668;
    }
    if (*(uint *)(lVar12 + 0x5e8) < 5) {
      uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01520668;
    }
  }
  uVar4 = 0;
joined_r0x01520668:
  if (plVar13 != (long *)0x0) {
    if (((*PTR_DAT_04bb7d58 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb7d58);
    }
    uVar6 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb7d50);
    if ((uVar4 & uVar6) == 1) {
      local_60 = 0;
      lVar12 = *(long *)PTR_DAT_04bb2720;
      if (lVar12 == 0) {
        puVar14 = &DAT_055c04a0;
      }
      else {
        puVar14 = &DAT_055c04a0;
        if (*(long *)(lVar12 + 0x330) != 0) {
          puVar14 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
          iVar5 = FUN_006bd550(*puVar14,0);
          puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar5 != 0x758f7eaf) {
            puVar14 = &DAT_055c04a0;
          }
        }
      }
      local_5c = *(undefined4 *)(puVar14 + 7);
      local_58 = FUN_017baf44();
      local_58 = local_58 & 1;
      puVar1 = param_2 + 2;
      local_68 = PTR_DAT_04bb3140 + 0x10;
      uVar8 = FUN_01a50590(&local_68,0,puVar1,param_2);
      if ((uVar8 & 1) != 0) {
        FUN_01a50970(&local_68,0,param_2,puVar1);
        local_6c = 0;
        local_34 = 3;
        uVar7 = FUN_014912c0(plVar13,&local_38,param_2,puVar1,&local_34,&local_6c);
        *param_1 = uVar7;
        if (local_38 == 9) {
          return 1;
        }
      }
    }
  }
  return 0;
}

