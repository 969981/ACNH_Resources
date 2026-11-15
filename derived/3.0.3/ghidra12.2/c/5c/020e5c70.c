
void FUN_020e5c70(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  uint *puVar9;
  long *plVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  undefined **local_88;
  uint *puStack_80;
  code *local_78;
  undefined8 uStack_70;
  uint local_64;
  
  puVar5 = PTR_DAT_04bb3968;
  puVar4 = PTR_DAT_04bb27c0;
  uVar11 = 0;
  puVar1 = PTR_DAT_04bb3750 + 0x10;
  do {
    if ((*(uint *)(param_1 + 0x208 + (ulong)(uVar11 >> 5) * 4) >> (ulong)(uVar11 & 0x1f) & 1) != 0)
    {
      iVar6 = *(int *)(*(long *)puVar5 + 0xb88);
      local_78 = FUN_020e4178;
      uStack_70 = 0;
      local_88 = &PTR_FUN_04a74088;
      puStack_80 = &local_64;
      local_64 = uVar11;
      if (iVar6 == 0) {
        lVar14 = *(long *)puVar4;
        puVar9 = (uint *)PTR_DAT_04bb3238;
      }
      else {
        puVar12 = *(undefined8 **)(*(long *)puVar5 + 0xb90);
        lVar14 = (long)iVar6 << 3;
        do {
          puVar9 = (uint *)*puVar12;
          uVar7 = (*(code *)*local_88)(&local_88,puVar9);
          if ((uVar7 & 1) != 0) goto LAB_020e5d40;
          puVar12 = puVar12 + 1;
          lVar14 = lVar14 + -8;
        } while (lVar14 != 0);
        puVar9 = (uint *)PTR_DAT_04bb3238;
LAB_020e5d40:
        lVar14 = *(long *)puVar4;
      }
      if (lVar14 != 0) {
        uVar13 = *puVar9;
        if ((((uVar13 == 0) ||
             (plVar10 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                  ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
            ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar13)) {
          plVar10 = (long *)0x0;
        }
        if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
          plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar14 = *(long *)puVar4;
          iVar6 = (**(code **)(*plVar8 + 0x60))();
          if (iVar6 < 0x11) {
            uVar13 = 1;
          }
          else {
            if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_020e5df4;
            uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_020e5df4:
          uVar13 = 0;
        }
        if (plVar10 != (long *)0x0) {
          lVar14 = plVar10[0x2a];
          if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
            *(undefined **)PTR_DAT_04bb37d0 = puVar1;
            __cxa_guard_release(PTR_DAT_04bb37d8);
          }
          uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
          uVar3 = 0;
          if ((int)lVar14 == 1) {
            uVar3 = uVar13;
          }
          if (((uVar7 & 1) != 0) && (uVar3 != 0)) {
            FUN_006fb3d0(plVar10);
          }
        }
      }
    }
    uVar11 = uVar11 + 1;
    if (uVar11 == 0x10) {
      *(undefined8 *)(param_1 + 0x230) = 0;
      *(undefined8 *)(param_1 + 0x238) = 0;
      *(undefined8 *)(param_1 + 0x220) = 0;
      *(undefined8 *)(param_1 + 0x228) = 0;
      *(undefined8 *)(param_1 + 0x218) = 0;
      ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      *(undefined8 *)(param_1 + 0x208) = 0;
      *(undefined8 *)(param_1 + 0x210) = 0;
      puStack_80 = (uint *)0x40cfeb6;
      local_88 = ppuVar2;
      FUN_02743234(&local_88,0);
      puStack_80 = (uint *)0x40ea592;
      local_88 = ppuVar2;
      FUN_02743234(&local_88,0);
      puStack_80 = (uint *)0x40dfdc7;
      local_88 = ppuVar2;
      FUN_02743234(&local_88,0);
      puStack_80 = (uint *)0x40fa556;
      local_88 = ppuVar2;
      FUN_02743234(&local_88,0);
      return;
    }
  } while( true );
}

