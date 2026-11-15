
bool FUN_021ade80(long param_1,undefined1 *param_2,int param_3,uint param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  void *__s;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  undefined8 *puVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  uint local_7f4;
  ulong local_7f0;
  undefined *local_7e8;
  undefined1 auStack_7e0 [1876];
  uint local_8c;
  uint local_88;
  uint local_84;
  int local_80;
  undefined8 local_68;
  
  *param_2 = 0;
  lVar22 = *(long *)PTR_DAT_04bb4828;
  lVar18 = *(long *)PTR_DAT_04bb2720;
  if (lVar18 == 0) {
    puVar19 = &DAT_055c04a0;
  }
  else {
    puVar19 = &DAT_055c04a0;
    if (*(long *)(lVar18 + 0x330) != 0) {
      puVar19 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
      iVar7 = FUN_006bd550(*puVar19,0);
      puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar19 = &DAT_055c04a0;
      }
    }
  }
  lVar18 = *(long *)PTR_DAT_04bb46b0;
  if (lVar18 == 0) {
    return false;
  }
  uVar3 = *(undefined4 *)(puVar19 + 7);
  puVar19 = *(undefined8 **)(lVar18 + 0x10);
  if ((*(byte *)(lVar18 + 0x453) & 1) == 0) {
    lVar11 = (**(code **)(*(long *)*puVar19 + 0x38))();
    lVar18 = 0;
    if (lVar11 != 0) {
      lVar18 = lVar11 + 0x70;
    }
  }
  else {
    if (puVar19 == (undefined8 *)0x0) {
      return false;
    }
    if ((long *)puVar19[0x26] == (long *)0x0) {
      return false;
    }
    lVar18 = (**(code **)(*(long *)puVar19[0x26] + 0x38))();
  }
  if (lVar22 == 0) {
    return false;
  }
  if (lVar18 == 0) {
    return false;
  }
  uVar12 = FUN_01c27a50(lVar22,uVar3);
  if ((uVar12 & 1) == 0) {
    return false;
  }
  if ((*(long **)(lVar18 + 0x1bf1b8) == (long *)0x0) ||
     (puVar19 = (undefined8 *)**(long **)(lVar18 + 0x1bf1b8), puVar19 == (undefined8 *)0x0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = (**(code **)*puVar19)();
    uVar12 = uVar12 & 0xffffffff;
  }
  local_68 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  local_7e8 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7e0,0,0x754);
  uVar8 = nn::os::GetSystemTick();
  local_8c = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
  local_88 = (local_8c ^ local_8c >> 0x1e) * 0x6c078965 + 2;
  local_84 = (local_88 ^ local_88 >> 0x1e) * 0x6c078965 + 3;
  local_80 = (local_84 ^ local_84 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_7e8);
  memset(__s,0,0x754);
  iVar7 = FUN_01c281f0(lVar22,&local_7e8,uVar3,1);
  bVar6 = iVar7 != 0;
  if (iVar7 != 0) {
    fVar25 = 20.0;
    if (param_3 != 0) {
      fVar25 = 25.0;
    }
    fVar24 = (float)FUN_01c28760(lVar22,uVar3);
    local_7f4 = (uint)(fVar25 * fVar24);
    lVar11 = (**(code **)(local_7e8 + 0x20))(&local_7e8);
    uVar21 = 0;
    do {
      if ((*(uint *)(lVar11 + (uVar21 >> 5) * 4) >> (ulong)((uint)uVar21 & 0x1f) & 1) != 0)
      goto LAB_021ae120;
      uVar8 = (uint)uVar21 + 1;
      uVar21 = (ulong)uVar8;
    } while (uVar8 != 15000);
    uVar21 = 0;
LAB_021ae120:
    lVar13 = (**(code **)(local_7e8 + 0x20))(&local_7e8);
    uVar8 = 15000;
    do {
      if ((*(uint *)(lVar13 + (ulong)(uVar8 - 1 >> 5) * 4) >> (ulong)(uVar8 - 1 & 0x1f) & 1) != 0)
      break;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
LAB_021ae168:
    uVar20 = (uint)uVar21;
    if (uVar8 != uVar20) {
      puVar1 = (ulong *)(PTR_DAT_04bbfe58 + uVar21 * 8);
      if (0x752 < uVar20 >> 3) {
        puVar1 = (ulong *)PTR_DAT_04bbfe58;
      }
      puVar2 = (ulong *)PTR_DAT_04bb37e0;
      if (uVar20 < 0x3a99) {
        puVar2 = puVar1;
      }
      local_7f0 = *puVar2;
      uVar14 = FUN_027bf380(*(long *)(lVar18 + 0x1bf1a0) + *(long *)(lVar18 + 0x1bf198),&local_7f0);
      uVar17 = (uint)((ulong)uVar14 >> 0x18) & 0xff;
      uVar9 = (uint)uVar14;
      uVar20 = uVar9 & 0xffff;
      uVar23 = (ulong)uVar20;
      uVar4 = uVar9 >> 0x10 & 0xff;
      uVar15 = nn::time::IsValidDate(uVar20,uVar4,uVar17);
      if ((uVar15 & 1) != 0) {
        uVar15 = nn::time::IsValidDate(uVar20,uVar4,uVar17);
        if ((uVar15 & 1) == 0) {
          local_7f0 = 0x10107d0;
        }
        else {
          uVar10 = nn::time::IsValidDate(uVar20,uVar4,uVar17);
          uVar15 = nn::time::IsValidDate(uVar20,uVar4,uVar17);
          uVar16 = nn::time::IsValidDate(uVar20,uVar4,uVar17);
          local_7f0 = (ulong)(uVar9 & 0xff000000);
          if ((uVar16 & 1) == 0) {
            local_7f0 = 0x1000000;
          }
          uVar16 = (ulong)(uVar9 & 0xff0000);
          if ((uVar15 & 1) == 0) {
            uVar16 = 0x10000;
          }
          if ((uVar10 & 1) == 0) {
            uVar23 = 2000;
          }
          local_7f0 = uVar16 | uVar23 | local_7f0;
        }
        iVar7 = FUN_00a82474(&local_68,&local_7f0);
        if (iVar7 == 0) {
          local_7f0 = *puVar2;
          uVar23 = FUN_01c27700(lVar22,&local_7f0);
          if ((uVar23 & 1) != 0) {
            bVar5 = 0;
            local_7f4 = 0x46;
            goto LAB_021ae364;
          }
        }
        uVar20 = local_7f4 + 5;
        if (8 < iVar7) {
          uVar20 = local_7f4;
        }
        local_7f4 = uVar20;
      }
      do {
        uVar20 = (int)uVar21 + 1;
        uVar21 = (ulong)uVar20;
        if (0x752 < uVar20 >> 3) {
          uVar20 = 0x3a95;
          goto LAB_021ae310;
        }
      } while ((*(uint *)(lVar11 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) == 0);
      goto LAB_021ae168;
    }
    bVar5 = 1;
LAB_021ae364:
    uVar8 = 0x32;
    if (!(bool)(bVar5 & 0x32 < local_7f4)) {
      uVar8 = local_7f4;
    }
    if (uVar8 + *(int *)(param_1 + 0x55d08) <= param_4) {
      *param_2 = 1;
      if ((uVar12 & 1) == 0) {
        return false;
      }
      lVar18 = *(long *)(lVar18 + 0x1bf1b8);
      if (lVar18 == 0) {
        return false;
      }
      bVar6 = false;
      goto LAB_021ae3d0;
    }
  }
  if ((uVar12 & 1) == 0) {
    return bVar6;
  }
  lVar18 = *(long *)(lVar18 + 0x1bf1b8);
  if (lVar18 == 0) {
    return bVar6;
  }
LAB_021ae3d0:
  if (*(undefined8 **)(lVar18 + 8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(lVar18 + 8))();
  }
  return bVar6;
  while( true ) {
    uVar4 = uVar20 + 1;
    if ((*(uint *)(lVar11 + (ulong)(uVar4 >> 5) * 4) >> (ulong)(uVar4 & 0x1f) & 1) != 0)
    goto LAB_021ae160;
    if ((*(uint *)(lVar11 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0)
    goto LAB_021ae164;
    uVar20 = uVar20 - 3;
    if (uVar20 == 0xfffffffd) break;
LAB_021ae310:
    uVar4 = uVar20 + 2;
    if ((*(uint *)(lVar11 + (ulong)(uVar4 >> 5) * 4) >> (ulong)(uVar4 & 0x1f) & 1) != 0) {
LAB_021ae160:
      uVar20 = uVar4;
LAB_021ae164:
      uVar21 = (ulong)(uVar20 + 1);
      goto LAB_021ae168;
    }
  }
  uVar21 = 0;
  goto LAB_021ae168;
}

