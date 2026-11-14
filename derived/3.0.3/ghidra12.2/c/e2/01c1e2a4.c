
/* WARNING: Removing unreachable block (ram,0x01c1e5f8) */

bool FUN_01c1e2a4(undefined8 param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  ulong uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined4 local_81c;
  undefined *local_818;
  undefined1 auStack_810 [1876];
  uint local_bc;
  uint local_b8;
  uint local_b4;
  int local_b0;
  uint local_a4;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined **local_88;
  uint *puStack_80;
  undefined1 auStack_68 [8];
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  lVar11 = *(long *)puVar2;
  if (lVar11 == 0) {
    return false;
  }
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (*(uint *)(lVar12 + 0x1d8) <= uVar3) {
    return false;
  }
  if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return false;
  }
  local_98 = *param_2;
  uStack_94 = param_2[1];
  local_90 = 0;
  local_a0 = PTR_DAT_04bc0510 + 0x10;
  uVar3 = FUN_0277d6c4(&local_98);
  if (*(long *)puVar2 == 0) {
    return false;
  }
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if (*(uint *)(lVar11 + 0x1d8) <= uVar3) {
    return false;
  }
  if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return false;
  }
  lVar11 = *(long *)PTR_DAT_04bc0428;
  uVar3 = FUN_0277d6c4(param_2);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if (*(uint *)(lVar11 + 0x1d8) <= uVar3) {
    return false;
  }
  puVar8 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar3 * 8);
  if (puVar8 == (uint *)0x0) {
    return false;
  }
  uVar9 = 0;
  uVar3 = *puVar8;
  if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
    puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
    uVar9 = 0;
    if (*puVar10 != 0) {
      uVar3 = puVar10[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
        lVar11 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar11 != 0) {
          uVar9 = 0;
          if ((ulong)uVar3 != 0) {
            uVar9 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar3);
          }
          if (*puVar10 <= uVar9) {
            uVar9 = 0xffffffff;
          }
          if ((uVar9 < DAT_05326ec0) &&
             (uVar9 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar9 * 2), uVar9 < 0xbd))
          goto LAB_01c1e444;
        }
      }
      uVar9 = 0;
    }
  }
LAB_01c1e444:
  local_88 = (undefined **)CONCAT44(local_88._4_4_,uVar9);
  if (uVar9 != 0x70) {
    return false;
  }
  uVar3 = *puVar8;
  if (uVar3 == 0) {
    return true;
  }
  if (puVar8 == (uint *)(ulong)uVar3) {
    return true;
  }
  puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
  if (*puVar10 == 0) {
    return true;
  }
  uVar3 = puVar10[1];
  if (uVar3 == 0) {
    return true;
  }
  if ((ulong)(ushort)puVar10[2] == 0) {
    return true;
  }
  lVar11 = 0xc;
  if (*(char *)((long)puVar10 + 10) != '\0') {
    lVar11 = 0x1c;
  }
  lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
  if (lVar11 == 0) {
    return true;
  }
  uVar9 = 0;
  if ((ulong)uVar3 != 0) {
    uVar9 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar3);
  }
  if (*puVar10 <= uVar9) {
    uVar9 = 0xffffffff;
  }
  if (DAT_05326fd0 <= uVar9) {
    return true;
  }
  uVar1 = *(ushort *)(DAT_05326fd8 + (long)(int)uVar9 * 2);
  local_a4 = (uint)uVar1;
  if (0x23 < uVar1) {
    return true;
  }
  if (local_a4 == 0) {
    return true;
  }
  local_818 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_810,0,0x754);
  uVar3 = nn::os::GetSystemTick();
  local_bc = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  local_b8 = (local_bc ^ local_bc >> 0x1e) * 0x6c078965 + 2;
  local_b4 = (local_b8 ^ local_b8 >> 0x1e) * 0x6c078965 + 3;
  local_b0 = (local_b4 ^ local_b4 >> 0x1e) * 0x6c078965 + 4;
  pvVar5 = (void *)FUN_01a451fc(&local_818);
  memset(pvVar5,0,0x754);
  pvVar5 = (void *)(**(code **)(local_818 + 0x18))(&local_818);
  memset(pvVar5,0,0x754);
  puStack_80 = &local_a4;
  local_88 = &PTR_FUN_049ff5d8;
  FUN_008a1ba0(&local_818,&local_88);
  uVar3 = 0;
  local_81c = 0x70;
  puStack_80 = &local_81c;
  local_88 = &PTR_FUN_049ff448;
  do {
    (**(code **)(local_818 + 0x10))(auStack_68,&local_818,uVar3);
    lVar11 = (**(code **)(local_818 + 0x20))(&local_818);
    uVar9 = 1 << (ulong)(uVar3 & 0x1f);
    if ((*(uint *)(lVar11 + (ulong)(uVar3 >> 5) * 4) & uVar9) != 0) {
      lVar11 = *(long *)puVar2;
      uVar4 = FUN_0277d6c4(auStack_68);
      if (*(long *)puVar2 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if (((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
           (uVar6 = (*(code *)*local_88)(&local_88,auStack_68), (uVar6 & 1) != 0))
        goto LAB_01c1e648;
      }
      lVar11 = (**(code **)(local_818 + 0x18))(&local_818);
      lVar12 = (ulong)(uVar3 >> 5) * 4;
      *(uint *)(lVar11 + lVar12) = *(uint *)(lVar11 + lVar12) & (uVar9 ^ 0xffffffff);
    }
LAB_01c1e648:
    uVar3 = uVar3 + 1;
    if (uVar3 == 15000) {
      lVar12 = (**(code **)(local_818 + 0x20))(&local_818);
      lVar11 = 0;
      iVar7 = 0;
      do {
        puVar8 = (uint *)(lVar12 + lVar11);
        lVar11 = lVar11 + 4;
        uVar3 = *puVar8 - (*puVar8 >> 1 & 0x55555555);
        uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
        uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
        uVar3 = uVar3 + (uVar3 >> 8);
        iVar7 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + iVar7;
      } while (lVar11 != 0x754);
      return iVar7 == 1;
    }
  } while( true );
}

