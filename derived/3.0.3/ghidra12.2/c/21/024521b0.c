
/* WARNING: Removing unreachable block (ram,0x02452584) */

void FUN_024521b0(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  float *pfVar10;
  uint uVar11;
  long lVar12;
  byte bVar13;
  byte bVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_b0;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined8 local_88;
  ulong local_80;
  int *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_54;
  
  cVar3 = *(char *)(param_1 + 0x190d);
  fVar18 = (float)*(int *)(param_1 + 0x1901) * 0.001;
  cVar4 = *(char *)(param_1 + 0x1900);
  iVar7 = *(int *)(param_1 + 0x178);
  fVar19 = (float)(int)*(short *)(param_1 + 0x1905) * 0.25;
  fVar20 = (float)*(int *)(param_1 + 0x1907) * 0.001;
  if (iVar7 == 0) {
    puVar15 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar15 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(undefined1 *)((long)puVar15 + 0x2e4) = 1;
    *(float *)(puVar15 + 0x5d) = fVar18;
    *(float *)((long)puVar15 + 0x2ec) = fVar19;
    *(float *)(puVar15 + 0x5e) = fVar20;
    *(undefined2 *)((long)puVar15 + 0x2e5) = 0x101;
    uVar11 = *(uint *)(param_1 + 0x17d4);
  }
  else {
    uVar11 = *(uint *)(param_1 + 0x17d4);
  }
  if ((uVar11 >> 1 & 1) == 0) {
    lVar12 = *(long *)(param_1 + 0x68);
    fVar16 = fVar18 - *(float *)(lVar12 + 0x278);
    fVar17 = fVar20 - *(float *)(lVar12 + 0x280);
    if (SQRT(fVar17 * fVar17 + fVar16 * fVar16) < 10.0) {
      bVar14 = *(byte *)(param_1 + 0x1ee8);
      *(uint *)(param_1 + 0x17d4) = uVar11 | 2;
      local_b0 = CONCAT44(fVar18,(undefined4)local_b0);
      uStack_98 = *(undefined4 *)(lVar12 + 0x280);
      local_80 = (ulong)&local_b0 | 1;
      if (7 < bVar14) {
        bVar14 = 0xff;
      }
      local_b0 = CONCAT71(CONCAT61(local_b0._2_6_,bVar14),*(int *)(param_1 + 0x178) == 0);
      local_a0 = (undefined4)*(undefined8 *)(lVar12 + 0x278);
      uStack_9c = (undefined4)((ulong)*(undefined8 *)(lVar12 + 0x278) >> 0x20);
      local_88 = &PTR_FUN_04a72ec8;
      iVar5 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
      local_a8 = fVar19;
      local_a4 = fVar20;
      if (iVar5 != 0) {
        lVar12 = (long)iVar5 << 3;
        puVar15 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
        do {
          (*(code *)*local_88)(&local_88,*puVar15);
          lVar12 = lVar12 + -8;
          puVar15 = puVar15 + 1;
        } while (lVar12 != 0);
      }
    }
  }
  if (cVar4 == '\x02' && iVar7 == 1) {
    if (*(char *)(param_1 + 0x920) != '\0') {
      *(undefined1 *)(param_1 + 0x920) = 0;
      uVar8 = FUN_02b66360();
      if ((uVar8 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x921) = 1;
        return;
      }
      if (cVar3 == '\0') {
        FUN_02b66670();
        return;
      }
      FUN_02b66970();
      return;
    }
    if (*(char *)(param_1 + 0x921) == '\0') {
      uVar8 = FUN_02b66af0();
      if ((uVar8 & 1) == 0) {
        return;
      }
      *(undefined1 *)(param_1 + 0x921) = 1;
    }
  }
  if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x11889761 && *(int *)(param_1 + 0x178) == 1) &&
     (*(char *)(param_1 + 0x920) != '\0')) {
    *(undefined1 *)(param_1 + 0x920) = 0;
    lVar12 = *(long *)PTR_DAT_04bb26a8;
    *(undefined4 *)(lVar12 + 0x11faac) = 0;
    *(undefined1 *)(lVar12 + 0x11fab4) = 1;
  }
  else {
    plVar9 = *(long **)(param_1 + 0x60);
    if (plVar9 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        plVar9 = &DAT_05240280;
      }
      else {
        plVar9 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar9 + 0x4e8))(plVar9,1);
    local_88 = (undefined **)CONCAT44(fVar19,fVar18);
    local_80 = CONCAT44(local_80._4_4_,fVar20);
    local_70 = 0;
    uStack_68 = 6;
    local_54 = (uint)*(ushort *)(param_1 + 0x190b) << 0x10;
    local_78 = &local_54;
    uVar8 = FUN_02416248(param_1,&local_88);
    if ((uVar8 & 1) != 0) {
      pfVar10 = (float *)(**(code **)(**(long **)(param_1 + 0x68) + 0xf8))();
      *pfVar10 = fVar18;
      pfVar10[1] = fVar19;
      pfVar10[2] = fVar20;
      puVar6 = PTR_DAT_04bb4718;
      if (*(int *)(param_1 + 0x178) == 0) {
        if (*(long *)PTR_DAT_04bb6270 != 0) {
          bVar14 = *(byte *)(param_1 + 0x1ee8);
          uVar11 = 0;
          if (7 < bVar14) {
            bVar14 = 0xff;
          }
          do {
            pbVar1 = (byte *)(*(long *)PTR_DAT_04bb6270 + 0x10 +
                             ((long)((ulong)uVar11 << 0x20) >> 0x1b));
            bVar13 = *pbVar1;
            local_b0 = CONCAT44(local_b0._4_4_,*(int *)(pbVar1 + 0x10));
            if (*(int *)(pbVar1 + 0x10) < 0x13) {
              if (7 < bVar13) {
                bVar13 = 0xff;
              }
              if (bVar13 == bVar14 && pbVar1[0x18] == 3) {
                uVar11 = 0;
                goto LAB_024524f4;
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 != 0x20);
        }
        uVar11 = 1;
LAB_024524f4:
        if (*(long *)PTR_DAT_04bb4718 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar7 = __cxa_guard_acquire(&DAT_054f0960);
            puVar15 = &DAT_054f0958;
            if (iVar7 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
            }
          }
          else {
            puVar15 = &DAT_054f0958;
          }
        }
        else {
          puVar15 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
          if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
            puVar15 = puVar15 + *(byte *)(param_1 + 0x1ee8);
          }
        }
        local_b0._0_4_ = 0x21;
        uVar2 = *(uint *)((long)puVar15 + 4);
        if (*(long *)puVar6 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar7 = __cxa_guard_acquire(&DAT_054f0960);
            puVar15 = &DAT_054f0958;
            if (iVar7 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
            }
          }
          else {
            puVar15 = &DAT_054f0958;
          }
        }
        else {
          puVar15 = (undefined8 *)(*(long *)puVar6 + 0x204);
          if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
            puVar15 = puVar15 + *(byte *)(param_1 + 0x1ee8);
          }
        }
        local_b0 = CONCAT44(local_b0._4_4_,0x21);
        *(uint *)((long)puVar15 + 4) = *(uint *)((long)puVar15 + 4) & 0xfffffffd;
        uVar8 = FUN_02324290(param_1);
        if ((((uVar8 & 1) == 0) && (uVar8 = FUN_02324528(param_1), (uVar8 & 1) == 0)) &&
           (uVar8 = FUN_023247cc(param_1), (uVar8 & 1) == 0)) {
          if ((uVar11 & uVar2 >> 1 & 1) == 0) {
            local_a8 = 0.0;
            local_a4 = (float)((uint)local_a4 & 0xffffff00);
            local_b0 = 0x1000000000006;
            FUN_02374564(param_1,&local_b0);
          }
          else {
            FUN_023240f4(param_1,1);
            local_90 = 0;
            local_a4 = (float)CONCAT22(local_a4._2_2_,1);
            local_a0 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x2b4);
            local_a8 = 2.8026e-45;
            local_b0 = 0x12;
            local_94 = 0x10000;
            uStack_9c = 0x14;
            uStack_98 = 0x3f000000;
            FUN_023ca3ec(param_1,&local_b0);
          }
        }
      }
      else {
        uVar8 = FUN_0235b810(param_1,0,0,0);
        if ((uVar8 & 1) == 0) {
          FUN_0231ade8(param_1,6);
        }
      }
    }
  }
  return;
}

