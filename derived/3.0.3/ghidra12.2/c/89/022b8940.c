
/* WARNING: Removing unreachable block (ram,0x022b8a70) */

bool FUN_022b8940(undefined8 param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  byte local_78;
  undefined *local_70;
  int local_68;
  int iStack_64;
  
  if (((DAT_0547a4d0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_0547a4d0), iVar9 != 0)) {
    DAT_0547a4c8 = 0;
    DAT_0547a4c0 = 0;
    __cxa_guard_release(&DAT_0547a4d0);
  }
  if (((DAT_0547a4e8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_0547a4e8), iVar9 != 0)) {
    DAT_0547a4e0 = 0;
    DAT_0547a4d8 = 0;
    __cxa_guard_release(&DAT_0547a4e8);
  }
  DAT_0547a4c8 = 0;
  DAT_0547a4c0 = 0;
  puVar14 = &DAT_055c04a0;
  DAT_0547a4d8 = 0;
  DAT_0547a4e0 = 0;
  lVar12 = *(long *)PTR_DAT_04bb2720;
  if ((lVar12 != 0) && (*(long *)(lVar12 + 0x330) != 0)) {
    puVar14 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
    iVar9 = FUN_006bd550(*puVar14,0);
    puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
    if (iVar9 != 0x758f7eaf) {
      puVar14 = &DAT_055c04a0;
    }
  }
  FUN_017baf44(*(undefined4 *)(puVar14 + 7));
  uVar7 = *(ushort *)PTR_DAT_04bb6298;
  uVar13 = (ulong)(short)uVar7;
  if (uVar13 == 0xffffffffffffffff) {
    uVar15 = 0;
    uVar16 = 0;
  }
  else {
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (uVar13 & 0xffffffff) * 8);
    if (0xff < uVar7) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar15 = *puVar4 >> 3 & 1;
    local_88 = (undefined *)CONCAT44(local_88._4_4_,1);
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (uVar13 & 0xffffffff) * 8);
    if (0xff < uVar7) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar16 = *puVar4 >> 1 & 1;
  }
  uVar13 = 0;
  bVar8 = true;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  puVar2 = PTR_DAT_04bb6268 + 0x10;
  if ((param_3 & 1) == 0) {
    do {
      iVar3 = (&DAT_04057ba0)[uVar13];
      iVar5 = (&DAT_04058580)[uVar13];
      iVar6 = *(int *)(param_2 + 8) - iVar3;
      iVar9 = *(int *)(param_2 + 0xc) + iVar5;
      local_70 = puVar1;
      local_68 = iVar6;
      iStack_64 = iVar9;
      uVar11 = FUN_022aac60(param_1,&local_70,uVar15,uVar16);
      if ((uVar11 & 1) != 0) {
        local_80 = 0;
        lVar12 = *(long *)PTR_DAT_04bb2720;
        if ((lVar12 == 0) || (*(long *)(lVar12 + 0x330) == 0)) {
          puVar14 = &DAT_055c04a0;
        }
        else {
          puVar14 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
          iVar10 = FUN_006bd550(*puVar14,0);
          puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar10 != 0x758f7eaf) {
            puVar14 = &DAT_055c04a0;
          }
        }
        local_7c = *(undefined4 *)(puVar14 + 7);
        local_78 = FUN_017baf44();
        local_78 = local_78 & 1;
        local_98 = PTR_DAT_04bb2010 + 0x10;
        local_90 = iVar6;
        iStack_8c = iVar9;
        local_88 = puVar2;
        uVar11 = FUN_022aa6c0(&local_88,&local_98,-iVar3,iVar5);
        if ((uVar11 & 1) != 0) {
          return bVar8;
        }
      }
      bVar8 = uVar13 < 7;
      uVar13 = uVar13 + 1;
    } while (uVar13 != 8);
  }
  else {
    do {
      iVar5 = (&DAT_04057ba0)[uVar13];
      iVar6 = (&DAT_04058580)[uVar13];
      iVar9 = *(int *)(param_2 + 8) + iVar5;
      iVar3 = *(int *)(param_2 + 0xc) + iVar6;
      local_70 = puVar1;
      local_68 = iVar9;
      iStack_64 = iVar3;
      uVar11 = FUN_022aac60(param_1,&local_70,uVar15,uVar16);
      if ((uVar11 & 1) != 0) {
        local_80 = 0;
        lVar12 = *(long *)PTR_DAT_04bb2720;
        if ((lVar12 == 0) || (*(long *)(lVar12 + 0x330) == 0)) {
          puVar14 = &DAT_055c04a0;
        }
        else {
          puVar14 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
          iVar10 = FUN_006bd550(*puVar14,0);
          puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar10 != 0x758f7eaf) {
            puVar14 = &DAT_055c04a0;
          }
        }
        local_7c = *(undefined4 *)(puVar14 + 7);
        local_78 = FUN_017baf44();
        local_78 = local_78 & 1;
        local_98 = PTR_DAT_04bb2010 + 0x10;
        local_90 = iVar9;
        iStack_8c = iVar3;
        local_88 = puVar2;
        uVar11 = FUN_022aa6c0(&local_88,&local_98,iVar5,iVar6);
        if ((uVar11 & 1) != 0) {
          return bVar8;
        }
      }
      bVar8 = uVar13 < 7;
      uVar13 = uVar13 + 1;
    } while (uVar13 != 8);
  }
  return bVar8;
}

