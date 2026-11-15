
bool FUN_01fb20f0(long param_1,undefined4 *param_2)

{
  void *__dest;
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ushort uVar7;
  long lVar8;
  ushort uVar9;
  uint *puVar10;
  void *__src;
  long lVar11;
  uint *puVar12;
  uint local_7c;
  undefined **local_78;
  void *local_70;
  undefined8 local_68;
  undefined1 local_5d;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_48 = (uint *)0x0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_50 = *param_2;
  uStack_4c = param_2[1];
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 == 0) {
LAB_01fb21bc:
    puVar12 = (uint *)0x0;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01fb21bc;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_2);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if (*(uint *)(lVar11 + 0x1d8) <= uVar4) goto LAB_01fb21bc;
    puVar12 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8);
    if (puVar12 != (uint *)0x0) {
      local_48 = puVar12;
    }
  }
  lVar11 = *(long *)(param_1 + 8);
  __dest = (void *)((long)&local_68 + 4);
  local_68 = CONCAT44(local_68._4_4_,8);
  local_5d = 0;
  local_78 = &PTR_LAB_04937050;
  local_70 = __dest;
  (**(code **)(*(long *)(lVar11 + 0x3e0) + 0x18))(lVar11 + 0x3e0);
  __src = *(void **)(lVar11 + 1000);
  if (__dest != __src) {
    (**(code **)(*(long *)(lVar11 + 0x3e0) + 0x18))(lVar11 + 0x3e0);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(lVar11 + 1000) + lVar8) == '\0') goto LAB_01fb226c;
      lVar1 = *(long *)(lVar11 + 1000) + lVar8;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_01fb226c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_01fb226c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_01fb226c:
    iVar6 = (int)lVar8;
    if ((int)local_68 <= (int)lVar8) {
      iVar6 = (int)local_68 + -1;
    }
    memcpy(__dest,__src,(long)iVar6);
    *(undefined1 *)((long)__dest + (long)iVar6) = 0;
  }
  local_78 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
  uVar5 = FUN_021dd320(&local_78);
  if (puVar12 == (uint *)0x0) {
    uVar7 = 0;
    uVar9 = 0;
LAB_01fb23b8:
    local_7c = 0;
  }
  else {
    puVar10 = (uint *)((long)puVar12 - (ulong)*puVar12);
    if ((*puVar12 == 0) || (puVar10 == (uint *)0x0)) {
      uVar7 = 0;
LAB_01fb23c4:
      uVar9 = 0;
    }
    else {
      uVar7 = 0;
      if (*puVar10 != 0) {
        uVar4 = puVar10[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar12 - lVar11) / (ulong)uVar4);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05327450) &&
               (uVar7 = *(ushort *)(DAT_05327458 + (long)(int)uVar2 * 2), uVar7 < 0x10))
            goto LAB_01fb2338;
          }
        }
        uVar7 = 0;
      }
LAB_01fb2338:
      if (((*puVar10 == 0) || (uVar4 = puVar10[1], uVar4 == 0)) || ((ulong)(ushort)puVar10[2] == 0))
      goto LAB_01fb23c4;
      lVar11 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
      uVar9 = 0;
      if (lVar11 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)puVar12 - lVar11) / (ulong)uVar4);
        }
        if (*puVar10 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((DAT_05327430 <= uVar2) ||
           (uVar9 = *(ushort *)(DAT_05327438 + (long)(int)uVar2 * 2), 0x2e < uVar9))
        goto LAB_01fb23c4;
      }
    }
    local_7c = 0;
    uVar4 = *puVar12;
    if ((uVar4 != 0) && (puVar12 != (uint *)(ulong)uVar4)) {
      puVar10 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
      local_7c = 0;
      if (*puVar10 != 0) {
        uVar4 = puVar10[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar12 - lVar11) / (ulong)uVar4);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05327440) &&
               (local_7c = (uint)*(ushort *)(DAT_05327448 + (long)(int)uVar2 * 2), local_7c < 0x2f))
            goto LAB_01fb2454;
          }
        }
        goto LAB_01fb23b8;
      }
    }
  }
LAB_01fb2454:
  switch(uVar5) {
  case 0:
    local_78 = (undefined **)0x400000001;
    local_70 = (void *)0xa00000009;
    if (uVar7 == 8) {
      return true;
    }
    if (uVar7 == 0xd) {
      return true;
    }
    if ((uVar9 < 2) && (uVar9 != 0)) {
      return true;
    }
    if ((uVar9 < 5) && (3 < uVar9)) {
      return true;
    }
    if ((uVar9 < 10) && (8 < uVar9)) {
      return true;
    }
    if ((uVar9 < 0xb) && (9 < uVar9)) {
      return true;
    }
    iVar6 = FUN_01fb2d44(&local_78,&local_7c);
    break;
  case 1:
    if ((uVar7 & 0xfffe) == 2) {
      return true;
    }
    if ((uVar9 < 6) && (4 < uVar9)) {
      return true;
    }
    if ((uVar9 < 0x12) && (0x10 < uVar9)) {
      return true;
    }
    if ((local_7c < 6) && (4 < local_7c)) {
      return true;
    }
    if (0x11 < local_7c) {
      return false;
    }
    if (local_7c < 0x11) {
      return false;
    }
    return true;
  case 2:
    if (uVar7 == 2) {
      return true;
    }
    return uVar9 == 0xf || local_7c == 0xf;
  case 3:
    if (uVar7 == 0xb) {
      return true;
    }
    if ((uVar9 < 0xe) && (0xc < uVar9)) {
      return true;
    }
    if ((uVar9 < 0x16) && (0x14 < uVar9)) {
      return true;
    }
    if ((uVar9 < 0x19) && (0x17 < uVar9)) {
      return true;
    }
    if (uVar9 == 0) {
      return true;
    }
    if (uVar9 == 0) {
      return true;
    }
    if (uVar9 == 0) {
      return true;
    }
    if ((local_7c < 0xe) && (0xc < local_7c)) {
      return true;
    }
    if ((local_7c < 0x16) && (0x14 < local_7c)) {
      return true;
    }
    if ((local_7c < 0x19) && (0x17 < local_7c)) {
      return true;
    }
    if (local_7c == 0) {
      return true;
    }
    if (local_7c == 0) {
      return true;
    }
    if (local_7c == 0) {
      return true;
    }
    return false;
  case 4:
    local_78 = (undefined **)0x600000003;
    local_70 = (void *)0x130000000b;
    local_68 = 0x1500000014;
    if ((uVar7 & 0xfffe) == 8) {
      return true;
    }
    if ((uVar9 < 4) && (2 < uVar9)) {
      return true;
    }
    if ((uVar9 < 7) && (5 < uVar9)) {
      return true;
    }
    if ((uVar9 < 0xc) && (10 < uVar9)) {
      return true;
    }
    if ((uVar9 < 0x14) && (0x12 < uVar9)) {
      return true;
    }
    if ((uVar9 < 0x15) && (0x13 < uVar9)) {
      return true;
    }
    if ((uVar9 < 0x16) && (0x14 < uVar9)) {
      return true;
    }
    iVar6 = FUN_01fb2dec(&local_78,&local_7c);
    break;
  case 5:
    local_68 = CONCAT44(local_68._4_4_,0x16);
    local_78 = (undefined **)0x200000001;
    local_70 = (void *)0x100000000c;
    if (uVar7 == 1) {
      return true;
    }
    if (uVar7 == 4) {
      return true;
    }
    if ((uVar9 < 2) && (uVar9 != 0)) {
      return true;
    }
    if ((uVar9 < 3) && (1 < uVar9)) {
      return true;
    }
    if ((uVar9 < 0xd) && (0xb < uVar9)) {
      return true;
    }
    if ((uVar9 < 0x11) && (0xf < uVar9)) {
      return true;
    }
    if ((uVar9 < 0x17) && (0x15 < uVar9)) {
      return true;
    }
    iVar6 = FUN_01fb2ee4(&local_78,&local_7c);
    break;
  default:
    goto switchD_01fb2478_default;
  }
  if (iVar6 != -1) {
    return true;
  }
switchD_01fb2478_default:
  return false;
}

