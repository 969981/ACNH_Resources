
void FUN_027cfb40(long param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  undefined1 *puVar14;
  ushort uVar15;
  long lVar16;
  uint *puVar17;
  uint *puVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  undefined4 *puVar24;
  uint uVar25;
  undefined8 local_900;
  long lStack_8f8;
  undefined8 local_8f0;
  long local_7d0;
  uint local_7b8;
  undefined1 auStack_218 [152];
  undefined **local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 local_6d;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_0074fda4(auStack_218,"Param/NpcRoom/%s.byml",param_2[1]);
  uVar11 = FUN_03eba3a0(auStack_218);
  if ((uVar11 & 1) != 0) {
    plVar19 = *(long **)(*(long *)PTR_DAT_04bb3968 + 0x17598);
    if (plVar19 != (long *)0x0) {
      iVar22 = 0;
      puVar1 = (undefined4 *)(param_1 + 0x14);
      do {
        puVar24 = puVar1 + (long)iVar22 * 3;
        local_8f0 = 0xfffe;
        FUN_0277d4ac(&local_8f0);
        iVar22 = iVar22 + 1;
        puVar24[2] = 0xffff;
        *puVar24 = (undefined4)local_8f0;
        puVar24[1] = local_8f0._4_4_;
      } while (iVar22 != 0x24);
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      lVar16 = *(long *)(lVar12 + 0xa8);
      *(long **)(lVar12 + 0xa8) = plVar19;
      local_178 = "NpcRoom";
      local_180 = &PTR_LAB_048f9770;
      (**(code **)(*param_2 + 0x18))(param_2);
      lStack_8f8 = param_2[1];
      local_900._0_4_ = 0x48f9770;
      local_900._4_4_ = 0;
      FUN_00b62c50(&local_8f0,&local_180,&local_900,0);
      local_178 = (char *)((long)&local_170 + 4);
      local_6d = 0;
      local_170 = (uint *)CONCAT35(local_170._5_3_,0x100);
      local_180 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
      uVar11 = (**(code **)(local_8f0 + 0xf0))(&local_8f0,&local_180,1);
      if ((uVar11 & 1) != 0) {
        FUN_03c27e60(&local_8f0,&local_180,plVar19);
      }
      puVar8 = PTR_DAT_04bc00c8;
      if (0 < (int)local_7b8) {
        uVar11 = 0;
        uVar25 = 0;
        ppuVar2 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        do {
          lVar21 = *(long *)(local_7d0 + uVar11 * 8);
          puVar13 = (ulong *)(**(code **)(*(long *)(lVar21 + 0x60) + 0xf0))();
          uVar20 = *puVar13;
          local_900 = uVar20 & 0xffff;
          FUN_0277d4ac(&local_900);
          puVar7 = PTR_DAT_04bb43c0;
          local_900._0_4_ =
               CONCAT13((char)(uVar20 >> 0x18),
                        CONCAT12((char)(uVar20 >> 0x10),(undefined2)local_900));
          local_900._4_4_ = (undefined4)(uVar20 >> 0x20);
          lVar12 = *(long *)PTR_DAT_04bb43c0;
          uVar10 = FUN_0277d6c4(&local_900);
          lVar23 = *(long *)puVar7;
          if (lVar23 != 0) {
            lVar12 = *(long *)(lVar12 + 0x57e58);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar12 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
              local_170 = (uint *)0x0;
              local_178 = (char *)CONCAT44(local_900._4_4_,(undefined4)local_900);
              local_180 = ppuVar2;
              uVar10 = FUN_0277d6c4(&local_178);
              if (DAT_053274a0 == 0) {
LAB_027cfeb4:
                uVar15 = 0xbc;
              }
              else {
                lVar12 = *(long *)(lVar23 + 0x57e58);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
                if ((*(uint *)(lVar12 + 0x1d8) <= uVar10) ||
                   (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
                goto LAB_027cfeb4;
                lVar12 = *(long *)PTR_DAT_04bc0428;
                uVar10 = FUN_0277d6c4(&local_900);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
                if ((*(uint *)(lVar12 + 0x1d8) <= uVar10) ||
                   (puVar17 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar10 * 8),
                   puVar17 == (uint *)0x0)) goto LAB_027cfeb4;
                uVar10 = *puVar17;
                local_170 = puVar17;
                uVar15 = 0;
                if ((uVar10 != 0) && (puVar17 != (uint *)(ulong)uVar10)) {
                  puVar18 = (uint *)((long)puVar17 - (long)(ulong)uVar10);
                  uVar15 = 0;
                  if (*puVar18 != 0) {
                    uVar10 = puVar18[1];
                    if ((uVar10 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                      lVar12 = 0xc;
                      if (*(char *)((long)puVar18 + 10) != '\0') {
                        lVar12 = 0x1c;
                      }
                      lVar12 = (long)puVar18 + lVar12 + (ulong)(ushort)puVar18[2] * 8;
                      if (lVar12 != 0) {
                        uVar3 = 0;
                        if ((ulong)uVar10 != 0) {
                          uVar3 = (uint)((ulong)((long)puVar17 - lVar12) / (ulong)uVar10);
                        }
                        if (*puVar18 <= uVar3) {
                          uVar3 = 0xffffffff;
                        }
                        if ((uVar3 < *(uint *)puVar8) &&
                           (uVar15 = *(ushort *)(*(long *)(puVar8 + 8) + (long)(int)uVar3 * 2),
                           uVar15 < 0xbd)) goto LAB_027cfeb8;
                      }
                    }
                    uVar15 = 0;
                  }
                }
              }
LAB_027cfeb8:
              if (uVar15 != 0xb6) {
                puVar14 = (undefined1 *)(**(code **)(*(long *)(lVar21 + 0x98) + 0xf0))();
                uVar4 = *puVar14;
                puVar14 = (undefined1 *)(**(code **)(*(long *)(lVar21 + 200) + 0xf0))();
                uVar5 = *puVar14;
                puVar24 = puVar1 + (ulong)uVar25 * 3;
                if (0x23 < uVar25) {
                  puVar24 = puVar1;
                }
                uVar9 = FUN_01ae98d0(&local_180);
                puVar14 = (undefined1 *)
                          (**(code **)(*(long *)(lVar21 + 0xf8) + 0xf0))((long *)(lVar21 + 0xf8));
                uVar6 = *puVar14;
                *(undefined1 *)((long)puVar24 + 9) = uVar5;
                *puVar24 = (undefined4)local_900;
                puVar24[1] = local_900._4_4_;
                *(undefined1 *)(puVar24 + 2) = uVar4;
                *(undefined1 *)((long)puVar24 + 10) = uVar9;
                *(undefined1 *)((long)puVar24 + 0xb) = uVar6;
                uVar25 = uVar25 + 1;
              }
            }
          }
          uVar11 = uVar11 + 1;
        } while (local_7b8 != uVar11);
      }
      (**(code **)(local_8f0 + 0x20))(&local_8f0);
      (**(code **)(*plVar19 + 0x58))();
      FUN_00b634e0(&local_8f0);
      if (lVar16 != 1) {
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        *(long *)(lVar12 + 0xa8) = lVar16;
      }
    }
  }
  return;
}

