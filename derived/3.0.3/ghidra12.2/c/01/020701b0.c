
void FUN_020701b0(long param_1,long param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined1 *puVar22;
  undefined4 *puVar23;
  int iVar24;
  undefined **local_e0;
  undefined4 local_d8;
  uint uStack_d4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined2 local_ac;
  undefined2 local_aa;
  int local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined4 local_9c;
  undefined2 local_98;
  undefined1 local_96;
  undefined2 local_95;
  undefined1 local_93;
  undefined2 local_92;
  undefined1 local_90;
  undefined2 local_8f;
  undefined1 local_8d;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined2 local_89;
  undefined1 local_87;
  undefined2 local_86;
  undefined1 local_84;
  undefined2 local_83;
  undefined1 local_81;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar8 = PTR_DAT_04bb9cf0;
  local_80 = 0;
  uStack_78 = 0;
  local_98 = *(undefined2 *)PTR_DAT_04bb9cf0;
  local_70 = 0;
  uStack_68 = 0;
  local_96 = FUN_020fd7d8(PTR_DAT_04bb9cf0);
  local_95 = *(undefined2 *)puVar8;
  local_93 = FUN_020fd7d8(puVar8);
  local_92 = *(undefined2 *)puVar8;
  local_90 = FUN_020fd7d8(puVar8);
  local_8f = *(undefined2 *)puVar8;
  local_8d = FUN_020fd7d8(puVar8);
  local_8c = *(undefined2 *)puVar8;
  local_8a = FUN_020fd7d8(puVar8);
  local_89 = *(undefined2 *)puVar8;
  local_87 = FUN_020fd7d8(puVar8);
  local_86 = *(undefined2 *)puVar8;
  local_84 = FUN_020fd7d8(puVar8);
  local_83 = *(undefined2 *)puVar8;
  local_81 = FUN_020fd7d8(puVar8);
  puVar8 = PTR_DAT_04bb2268;
  iVar24 = 0;
  do {
    puVar23 = (undefined4 *)(param_1 + 0x26bc + (long)iVar24 * 0xc);
    if (*(char *)(puVar23 + 2) != '\0' || *(char *)((long)puVar23 + 9) != '\0') {
      lVar21 = *(long *)puVar8;
      if (*(char *)(lVar21 + 0xb1) == '\0') {
        FUN_02608674(*(undefined8 *)(lVar21 + 0x98),puVar23);
        lVar20 = *(long *)PTR_DAT_04bb3350;
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(lVar20 + 0x68));
        if ((*(long *)(lVar20 + 0x60) != lVar18) &&
           (uVar17 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar17 & 1) == 0)) {
          *(undefined1 *)(lVar21 + 0xb1) = 1;
        }
      }
      uVar14 = FUN_02662ba0(*puVar23);
      if (uVar14 != 0xffffffff) {
        uVar17 = (ulong)uVar14;
        if (7 < uVar14) {
          uVar17 = 0;
        }
        iVar15 = *(int *)((long)&local_80 + uVar17 * 4);
        *(int *)((long)&local_80 + uVar17 * 4) = iVar15 + 1;
        if (iVar15 == 0) {
          lVar21 = FUN_0265c2a0(*puVar23);
          if (lVar21 == 0) {
            puVar22 = PTR_DAT_04bb9cf0;
          }
          else if ((*(long **)(lVar21 + 0x28) == (long *)0x0) ||
                  (puVar16 = (undefined8 *)**(long **)(lVar21 + 0x28), puVar16 == (undefined8 *)0x0)
                  ) {
            puVar22 = (undefined1 *)(*(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8));
          }
          else {
            uVar17 = (**(code **)*puVar16)();
            puVar22 = (undefined1 *)(*(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8));
            if ((((uVar17 & 1) != 0) && (*(long *)(lVar21 + 0x28) != 0)) &&
               (puVar16 = *(undefined8 **)(*(long *)(lVar21 + 0x28) + 8),
               puVar16 != (undefined8 *)0x0)) {
              (**(code **)*puVar16)();
            }
          }
          lVar21 = (ulong)uVar14 * 3;
          bVar12 = 7 < uVar14;
          puVar3 = (undefined2 *)((long)&local_98 + lVar21);
          if (bVar12) {
            puVar3 = &local_98;
          }
          *(undefined1 *)puVar3 = *puVar22;
          puVar4 = (undefined1 *)((ulong)&local_98 | 1);
          if (!bVar12) {
            puVar4 = (undefined1 *)((long)&local_98 + lVar21 + 1);
          }
          *puVar4 = puVar22[1];
          puVar4 = &local_96 + lVar21;
          if (bVar12) {
            puVar4 = (undefined1 *)((ulong)&local_98 | 2);
          }
          uVar13 = FUN_020fd7d8(puVar22);
          *puVar4 = uVar13;
        }
      }
    }
    puVar10 = PTR_DAT_04bb8aa0;
    puVar9 = PTR_DAT_04bb37e0;
    iVar24 = iVar24 + 1;
  } while (iVar24 != 10);
  lVar21 = 0;
  ppuVar1 = (undefined **)(PTR_DAT_04bc0568 + 0x10);
  do {
    iVar24 = *(int *)((long)&local_80 + lVar21 * 4);
    if (0 < iVar24) {
      local_9c = (undefined4)lVar21;
      if (iVar24 == 1) {
        local_a0 = *(undefined2 *)((long)&local_98 + lVar21 * 3);
        local_9e = FUN_020fd7d8();
        FUN_01b46be0(&local_e0);
        uVar11 = local_9c;
        local_e0 = &PTR_LAB_04a71270;
        local_aa = 0x23;
        local_a8._0_1_ = 8;
        if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar15 != 0)) {
          FUN_00dd5f80(puVar10);
          __cxa_guard_release(PTR_DAT_04bb8aa8);
        }
        if (0 < (int)*(uint *)puVar10) {
          uVar17 = 0;
          do {
            if (*(int *)(*(long *)(puVar10 + 8) + uVar17 * 4) == 0x19) goto LAB_0207050c;
            uVar17 = uVar17 + 1;
          } while (*(uint *)puVar10 != uVar17);
        }
        uVar17 = 0;
LAB_0207050c:
        uVar7 = *(ushort *)(param_2 + 0x10);
        bVar5 = *(byte *)(param_2 + 0x12);
        bVar6 = *(byte *)(param_2 + 0x13);
        nn::time::IsValidDate((uint)uVar7,(uint)bVar5,(uint)bVar6);
        local_ac = 0;
        local_c0 = (undefined4)uVar17;
        uStack_bc = 8;
        local_b8 = 0x19;
        local_b4 = *(undefined4 *)puVar9;
        uStack_b0 = *(undefined4 *)(puVar9 + 4);
        uStack_d4 = (uint)bVar6 << 0x18 | (uint)bVar5 << 0x10 | (uint)uVar7;
        local_d8 = uVar11;
        local_aa = local_a0;
        uVar13 = FUN_020fd7d8(&local_a0);
        local_a8 = CONCAT31(local_a8._1_3_,uVar13);
        lVar18 = (*(code *)local_e0[4])(&local_e0,*(undefined8 *)PTR_DAT_04bc0580);
      }
      else {
        FUN_01b46be0(&local_e0);
        uVar11 = local_9c;
        local_a8 = 0;
        local_e0 = ppuVar1;
        if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar15 != 0)) {
          FUN_00dd5f80(puVar10);
          __cxa_guard_release(PTR_DAT_04bb8aa8);
        }
        if (0 < (int)*(uint *)puVar10) {
          uVar17 = 0;
          do {
            if (*(int *)(*(long *)(puVar10 + 8) + uVar17 * 4) == 0x19) goto LAB_020705ec;
            uVar17 = uVar17 + 1;
          } while (*(uint *)puVar10 != uVar17);
        }
        uVar17 = 0;
LAB_020705ec:
        uVar7 = *(ushort *)(param_2 + 0x10);
        bVar5 = *(byte *)(param_2 + 0x12);
        bVar6 = *(byte *)(param_2 + 0x13);
        nn::time::IsValidDate((uint)uVar7,(uint)bVar5,(uint)bVar6);
        local_ac = 0;
        local_c0 = (undefined4)uVar17;
        uStack_bc = 8;
        local_b8 = 0x1a;
        local_b4 = *(undefined4 *)puVar9;
        uStack_b0 = *(undefined4 *)(puVar9 + 4);
        uStack_d4 = (uint)bVar6 << 0x18 | (uint)bVar5 << 0x10 | (uint)uVar7;
        local_d8 = uVar11;
        local_a8 = iVar24 * 1000;
        lVar18 = (*(code *)local_e0[4])(&local_e0,*(undefined8 *)PTR_DAT_04bc0580);
      }
      if (lVar18 != 0) {
        plVar19 = *(long **)PTR_DAT_04bb4fa8;
        lVar20 = *plVar19;
        plVar2 = (long *)(*(int *)((long)plVar19 + 0x14) + lVar18);
        *plVar19 = (long)plVar2;
        *plVar2 = lVar20;
        plVar2[1] = (long)plVar19;
        if (lVar20 != 0) {
          *(long **)(lVar20 + 8) = plVar2;
        }
        *(int *)(plVar19 + 2) = (int)plVar19[2] + 1;
      }
      FUN_027a19d8(&local_9c,iVar24 * 1000);
    }
    lVar21 = lVar21 + 1;
    if (lVar21 == 8) {
      return;
    }
  } while( true );
}

