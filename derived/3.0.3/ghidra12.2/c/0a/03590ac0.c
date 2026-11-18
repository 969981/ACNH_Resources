
/* WARNING: Removing unreachable block (ram,0x03590f84) */
/* WARNING: Removing unreachable block (ram,0x03590c94) */
/* WARNING: Removing unreachable block (ram,0x03590cb0) */
/* WARNING: Removing unreachable block (ram,0x03590fa0) */

void FUN_03590ac0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  byte bVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ushort *puVar13;
  ushort *puVar14;
  undefined2 uVar15;
  long lVar16;
  uint *puVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  long lVar22;
  long lVar23;
  ushort local_70;
  undefined1 auStack_6e [2];
  ushort local_6c [2];
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  uint *local_58;
  undefined8 local_4c;
  uint local_44;
  
  puVar7 = PTR_DAT_04bb2230;
  puVar14 = &local_70;
  lVar16 = 0;
  if (*(long *)PTR_DAT_04bb2230 != 0) {
    lVar16 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
  }
  local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
  if (DAT_05739db8 != 0) {
    lVar23 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar23 = 0;
    }
    if (*(char *)(lVar23 + 0x68) != '\0') {
      *(undefined1 *)(lVar23 + 0x69) = 1;
    }
  }
  *(undefined1 *)(lVar16 + 0x12) = 0;
  local_4c = 0xfffe;
  FUN_0277d4ac(&local_4c);
  FUN_035906b4(param_1,&local_4c,0);
  puVar1 = PTR_DAT_04bb43c0;
  local_58 = (uint *)0x0;
  local_68 = PTR_DAT_04bc0510 + 0x10;
  local_60 = (undefined4)local_4c;
  local_5c = local_4c._4_4_;
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar10 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar1 == 0) {
LAB_03590bd0:
    if (local_58 != (uint *)0x0) goto LAB_03590bd8;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar10) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_03590bd0;
    lVar16 = *(long *)PTR_DAT_04bc0428;
    uVar10 = FUN_0277d6c4(&local_4c);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar10) ||
       (puVar17 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8),
       puVar17 == (uint *)0x0)) goto LAB_03590bd0;
    local_58 = puVar17;
LAB_03590bd8:
    uVar10 = *local_58;
    uVar9 = 0;
    if ((uVar10 != 0) && (local_58 != (uint *)(ulong)uVar10)) {
      puVar17 = (uint *)((long)local_58 - (long)(ulong)uVar10);
      if ((*puVar17 != 0) &&
         ((uVar10 = puVar17[1], uVar10 != 0 && ((ulong)(ushort)puVar17[2] != 0)))) {
        lVar16 = 0xc;
        if (*(char *)((long)puVar17 + 10) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar17 + lVar16 + (ulong)(ushort)puVar17[2] * 8;
        if (lVar16 != 0) {
          uVar2 = 0;
          if ((ulong)uVar10 != 0) {
            uVar2 = (uint)((ulong)((long)local_58 - lVar16) / (ulong)uVar10);
          }
          if (*puVar17 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326af0) &&
             (uVar9 = *(ushort *)(DAT_05326af8 + (long)(int)uVar2 * 2), uVar9 < 0xa2))
          goto LAB_03590cc0;
        }
      }
      uVar9 = 0;
    }
LAB_03590cc0:
    uVar12 = FUN_01ae5024(uVar9);
    if ((uVar12 & 1) != 0) {
      FUN_01ae4e50(&local_68);
    }
  }
  if (((((*(byte *)(param_1 + 0x195c) >> 4 & 1) != 0) ||
       (iVar11 = FUN_01afcfa0(&local_68), iVar11 == 0)) ||
      (puVar13 = (ushort *)FUN_01afd600(&local_68), puVar13 == (ushort *)0x0)) ||
     ((*puVar13 & 0x18) != 0x10)) goto LAB_03590e30;
  if (DAT_04c487d4 == -1) {
LAB_03590da0:
    if (((DAT_04c8c100 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04c8c100), iVar11 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar12 = 0;
      do {
        if (*(int *)(DAT_04c8c0f8 + uVar12 * 4) == 0) goto LAB_03590de8;
        uVar12 = uVar12 + 1;
      } while (DAT_04c8c0f0 != uVar12);
    }
    uVar12 = 0;
LAB_03590de8:
    FUN_01afd2f0(&local_44,&local_68);
    local_70 = 0;
    uVar9 = (ushort)local_44;
    if (((DAT_04c8c100 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar11 != 0))
    {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    uVar10 = (uint)uVar12;
    if (DAT_04c8c0f0 <= uVar10) {
      uVar10 = 0;
    }
    local_70 = uVar9 & 0x7f | (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar10 * 4) << 0xb);
  }
  else {
    local_44 = 0x20;
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) == 0) goto LAB_03590da0;
    local_44 = (uint)*(ushort *)PTR_DAT_04bb3170;
    FUN_01afd2f0(local_6c,&local_68);
    FUN_0344d0c0(&local_44,local_6c[0] & 0x7f,0);
    FUN_007ef010(auStack_6e,&local_44);
    puVar14 = (ushort *)auStack_6e;
  }
  FUN_01afde50(&local_68,puVar14);
LAB_03590e30:
  lVar16 = *(long *)puVar7;
  local_4c = CONCAT44(local_5c,local_60);
  if (lVar16 == 0) {
    lVar16 = 0;
    cVar4 = cRam0000000000000058;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x28);
    cVar4 = *(char *)(lVar16 + 0x58);
  }
  if (cVar4 == '\0') {
    bVar8 = 1;
    uVar15 = (undefined2)local_60;
    uVar18 = local_60._2_1_;
    uVar19 = local_60._3_1_;
    uVar20 = local_5c;
  }
  else {
    bVar8 = (**(code **)(*(long *)(lVar16 + 0x50) + 0x18))((long *)(lVar16 + 0x50));
    *(undefined1 *)(lVar16 + 0x58) = 0;
    uVar15 = (undefined2)local_4c;
    uVar18 = local_4c._2_1_;
    uVar19 = local_4c._3_1_;
    uVar20 = local_4c._4_4_;
  }
  *(byte *)(lVar16 + 0x59) = bVar8 & 1;
  bVar8 = *(byte *)(param_1 + 0x195c);
  if ((bVar8 >> 4 & 1) == 0) {
    if ((bVar8 >> 5 & 1) == 0) {
      uVar21 = *(undefined4 *)(param_1 + 0x1940);
      uVar10 = -(bVar8 >> 6 & 1) & 3;
    }
    else {
      uVar21 = *(undefined4 *)(param_1 + 0x1940);
      uVar10 = 2;
    }
  }
  else {
    uVar21 = 0;
    uVar10 = 1;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1960);
  lVar22 = *(long *)puVar7;
  lVar23 = 0;
  if (lVar22 != 0) {
    lVar23 = *(long *)(lVar22 + 0x28);
  }
  local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
  uVar6 = *(undefined2 *)(lVar16 + 0x58);
  local_44 = 3;
  uVar5 = *(undefined1 *)(lVar16 + 0x5a);
  if (DAT_05739db8 != 0) {
    lVar16 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar16 = 0;
    }
    if (*(char *)(lVar16 + 0x6e) != '\0') {
      *(undefined1 *)(lVar16 + 0x6f) = 1;
    }
  }
  *(undefined2 *)(lVar23 + 0x5c) = uVar15;
  *(undefined2 *)(lVar23 + 0x58) = uVar6;
  *(undefined1 *)(lVar23 + 0x5a) = uVar5;
  *(undefined1 *)(lVar23 + 0x5e) = uVar18;
  *(undefined1 *)(lVar23 + 0x5f) = uVar19;
  *(undefined4 *)(lVar23 + 0x60) = uVar20;
  *(uint *)(lVar23 + 0x6c) = uVar10;
  *(ulong *)(lVar23 + 100) = CONCAT44(uVar3,uVar21);
  if (*(uint *)(param_1 + 0x248) < 2) {
    FUN_0251c840(param_1 + 0x1f8);
  }
  return;
}

