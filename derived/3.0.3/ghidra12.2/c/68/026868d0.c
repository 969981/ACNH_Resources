
/* WARNING: Removing unreachable block (ram,0x0268691c) */

void FUN_026868d0(void)

{
  uint uVar1;
  long *plVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  void *pvVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  undefined4 local_800;
  undefined4 local_7fc;
  undefined *local_7f8;
  undefined1 auStack_7f0 [1876];
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  undefined **local_88;
  undefined4 *local_80;
  undefined8 uStack_78;
  
  lVar15 = *(long *)PTR_DAT_04bb46b0;
  if (lVar15 != 0) {
    local_7f8 = (undefined *)CONCAT44(local_7f8._4_4_,1);
    if ((((*(byte *)(lVar15 + 0x50d) ^ 0xff) & 6) == 0) &&
       (lVar15 = (**(code **)(**(long **)(*(long *)(lVar15 + 0x10) + 0x188) + 0x30))(), lVar15 != 0)
       ) {
      plVar2 = (long *)(lVar15 + 0x5d3d98);
      if ((*(long *)(lVar15 + 0x5d3db8) == 0) ||
         (puVar9 = *(undefined8 **)(*(long *)(lVar15 + 0x5d3db8) + 0x10),
         puVar9 == (undefined8 *)0x0)) {
        uVar7 = 1;
      }
      else {
        uVar7 = (**(code **)*puVar9)();
        uVar7 = uVar7 ^ 1;
      }
      local_7f8 = PTR_DAT_04bbfe60 + 0x10;
      memset(auStack_7f0,0,0x754);
      uVar8 = nn::os::GetSystemTick();
      local_9c = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
      local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 2;
      local_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 3;
      local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 4;
      pvVar10 = (void *)FUN_01a451fc(&local_7f8);
      memset(pvVar10,0,0x754);
      pvVar10 = (void *)(**(code **)(local_7f8 + 0x18))(&local_7f8);
      memset(pvVar10,0,0x754);
      local_80 = &local_800;
      local_800 = 0x13d;
      local_88 = &PTR_FUN_049ff4e8;
      FUN_008a1ba0(&local_7f8,&local_88);
      lVar11 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
      uVar17 = 0;
      do {
        if ((*(uint *)(lVar11 + (uVar17 >> 5) * 4) >> (ulong)((uint)uVar17 & 0x1f) & 1) != 0)
        goto LAB_02686a80;
        uVar8 = (uint)uVar17 + 1;
        uVar17 = (ulong)uVar8;
      } while (uVar8 != 15000);
      uVar17 = 0;
LAB_02686a80:
      lVar12 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
      puVar6 = PTR_DAT_04bbfe58;
      puVar5 = PTR_DAT_04bb37e0;
      iVar16 = 15000;
      do {
        if ((*(uint *)(lVar12 + (ulong)(iVar16 - 1U >> 5) * 4) >> (ulong)(iVar16 - 1U & 0x1f) & 1)
            != 0) break;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
      if (iVar16 != (int)uVar17) {
LAB_02686b40:
        puVar3 = (ushort *)(puVar6 + uVar17 * 8);
        if (0x752 < (uint)(uVar17 >> 3)) {
          puVar3 = (ushort *)puVar6;
        }
        puVar4 = (ushort *)puVar5;
        if ((uint)uVar17 < 0x3a99) {
          puVar4 = puVar3;
        }
        local_800 = *(undefined4 *)puVar4;
        local_7fc = *(undefined4 *)(puVar4 + 2);
        if (*puVar4 - 0x323b < 3) {
          if ((*(long *)(lVar15 + 0x5d3db8) != 0) &&
             (plVar13 = *(long **)(*(long *)(lVar15 + 0x5d3db8) + 0x20), plVar13 != (long *)0x0)) {
            local_88 = (undefined **)*plVar2;
            local_80 = *(undefined4 **)(lVar15 + 0x5d3da0);
            uStack_78 = 0x754;
            (**(code **)(*plVar13 + 0x20))(plVar13,&local_88);
          }
          uVar14 = FUN_0277a1f4(*(long *)(lVar15 + 0x5d3da0) + *plVar2,&local_800);
          if ((uVar14 & 1) != 0) {
            if ((*(long *)(lVar15 + 0x5d3db8) != 0) &&
               (plVar13 = *(long **)(*(long *)(lVar15 + 0x5d3db8) + 0x20), plVar13 != (long *)0x0))
            {
              local_88 = (undefined **)*plVar2;
              local_80 = *(undefined4 **)(lVar15 + 0x5d3da0);
              uStack_78 = 0x754;
              (**(code **)(*plVar13 + 0x20))(plVar13,&local_88);
            }
            FUN_0277a328(*(long *)(lVar15 + 0x5d3da0) + *plVar2,&local_800);
          }
        }
        do {
          uVar8 = (int)uVar17 + 1;
          uVar17 = (ulong)uVar8;
          if (0x752 < uVar8 >> 3) {
            uVar8 = 0x3a95;
            goto LAB_02686c30;
          }
        } while ((*(uint *)(lVar11 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) == 0);
        goto LAB_02686b38;
      }
LAB_02686ac4:
      if ((((uVar7 & 1) == 0) && (*(long *)(lVar15 + 0x5d3db8) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar15 + 0x5d3db8) + 0x18),
         puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)();
      }
    }
  }
  return;
  while( true ) {
    if ((*(uint *)(lVar11 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) != 0)
    goto LAB_02686b34;
    uVar8 = uVar8 - 3;
    if (uVar8 == 0xfffffffd) break;
LAB_02686c30:
    uVar1 = uVar8 + 2;
    if (((*(uint *)(lVar11 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0) ||
       (uVar1 = uVar8 + 1,
       (*(uint *)(lVar11 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      uVar8 = uVar1;
LAB_02686b34:
      uVar17 = (ulong)(uVar8 + 1);
      goto LAB_02686b38;
    }
  }
  uVar17 = 0;
LAB_02686b38:
  if (iVar16 == (int)uVar17) goto LAB_02686ac4;
  goto LAB_02686b40;
}

