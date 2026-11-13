
bool FUN_0142ce9c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  long *plVar9;
  undefined2 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  uint local_5c;
  long local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  
  puVar1 = PTR_DAT_04bb26a8;
  lVar11 = *(long *)(param_1 + 0x2e8);
  local_74 = -1;
  local_6c = 0xffffffff;
  if (lVar11 == 0) {
    puVar10 = (undefined2 *)0x0;
LAB_0142cf5c:
    lVar11 = *(long *)puVar1;
    iVar3 = *(int *)(lVar11 + 0x7c0);
    if (iVar3 != -1) {
      if (iVar3 != 0) {
        uVar4 = iVar3 - 1;
        if (*(uint *)(lVar11 + 0x2e70) <= uVar4) {
          uVar4 = 0;
        }
        lVar11 = *(long *)(lVar11 + 0x2e78) + (long)(int)uVar4 * 0x228 + 0x38;
        goto LAB_0142d010;
      }
      lVar11 = FUN_0299a520(lVar11 + 0x7c8,&local_74,2);
joined_r0x0142cf80:
      if (lVar11 != 0) {
        lVar11 = lVar11 + 8;
LAB_0142d010:
        if (*(int *)(lVar11 + 4) < 1) {
          return false;
        }
        return true;
      }
    }
  }
  else {
    plVar9 = *(long **)(lVar11 + 0x80);
    if (((*PTR_DAT_04bb3160 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3160), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3158 = PTR_DAT_04bb3040 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3160);
    }
    if ((plVar9 == (long *)0x0) ||
       (uVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,PTR_DAT_04bb3158), (uVar5 & 1) == 0)) {
      puVar10 = (undefined2 *)(lVar11 + 0x288);
      goto LAB_0142cf5c;
    }
    local_74 = plVar9[0x71];
    local_6c = (undefined4)plVar9[0x72];
    puVar10 = (undefined2 *)(lVar11 + 0x288);
    if ((int)plVar9[0xae] != 4) goto LAB_0142cf5c;
    lVar11 = *(long *)puVar1;
    iVar3 = *(int *)(lVar11 + 0x7c0);
    if (iVar3 != -1) {
      if (iVar3 != 0) {
        uVar4 = iVar3 - 1;
        if (*(uint *)(lVar11 + 0x2e70) <= uVar4) {
          uVar4 = 0;
        }
        lVar11 = *(long *)(lVar11 + 0x2e78) + (long)(int)uVar4 * 0x228 + 0x138;
        goto LAB_0142d010;
      }
      lVar11 = FUN_0299a520(lVar11 + 0x7c8,&local_74,4);
      goto joined_r0x0142cf80;
    }
  }
  puVar2 = PTR_DAT_04bb2720;
  lVar11 = *(long *)PTR_DAT_04bb2720;
  if (lVar11 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(lVar11 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
      iVar3 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  if (*(int *)(puVar12 + 7) == -0x78855454) {
    return false;
  }
  lVar11 = *(long *)puVar2;
  if (lVar11 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(lVar11 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
      iVar3 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  puVar2 = PTR_DAT_04bb43c0;
  if (*(int *)(puVar12 + 7) == -0x24a26848) {
    return false;
  }
  lVar11 = *(long *)PTR_DAT_04bb5c90;
  if ((int)local_74 < *(int *)(lVar11 + 0x28)) {
    return false;
  }
  if (*(int *)(lVar11 + 0x38) < (int)local_74) {
    return false;
  }
  if (local_74._4_4_ < *(int *)(lVar11 + 0x2c)) {
    return false;
  }
  if (*(int *)(lVar11 + 0x3c) < local_74._4_4_) {
    return false;
  }
  if (puVar10 == (undefined2 *)0x0) {
    uStack_4c = 0xffffffff;
    goto LAB_0142d29c;
  }
  local_68 = PTR_DAT_04bc0510 + 0x10;
  local_60 = *puVar10;
  local_5e = *(undefined1 *)(puVar10 + 1);
  local_5d = *(undefined1 *)((long)puVar10 + 3);
  local_5c = *(uint *)(puVar10 + 2);
  local_58 = 0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar2 == 0) {
LAB_0142d244:
    uVar6 = 0;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0142d244;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(puVar10);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
       (puVar7 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8), puVar7 == (uint *)0x0
       )) goto LAB_0142d244;
    uVar4 = *puVar7;
    uVar6 = 0;
    if ((uVar4 != 0) && (puVar7 != (uint *)(ulong)uVar4)) {
      puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
      uVar6 = 0;
      if (*puVar8 != 0) {
        uVar4 = puVar8[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar8 + lVar11 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar11 != 0) {
            uVar6 = 0;
            if ((ulong)uVar4 != 0) {
              uVar6 = (uint)((ulong)((long)puVar7 - lVar11) / (ulong)uVar4);
            }
            if (*puVar8 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < *(uint *)PTR_DAT_04bc0018) &&
               (uVar6 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar6 * 2),
               uVar6 < 6)) goto LAB_0142d248;
          }
        }
        goto LAB_0142d244;
      }
    }
  }
LAB_0142d248:
  if (uVar6 - 1 < 5) {
    uStack_4c = *(undefined4 *)(&DAT_041754f8 + (long)(int)(uVar6 - 1) * 4);
  }
  else {
    uStack_4c = 0;
  }
LAB_0142d29c:
  if (*(int *)(*(long *)puVar1 + 0x7c0) == 0) {
    local_68._0_4_ = (uint)local_68 & 0xffffff00;
    local_5c = local_5c & 0xffffff00;
    local_68._4_4_ = 0;
    local_60 = 0xffff;
    local_5e = 0xff;
    local_5d = 0xff;
    local_44 = 0;
    local_3c = 0;
    local_50 = local_6c;
    local_58 = local_74;
    local_48 = 2;
    lVar11 = FUN_02999f48(*(long *)puVar1 + 0x7c8,0,&local_68);
    return lVar11 != 0;
  }
  return false;
}

