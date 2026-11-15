
/* WARNING: Removing unreachable block (ram,0x024750e4) */
/* WARNING: Removing unreachable block (ram,0x02474b4c) */
/* WARNING: Removing unreachable block (ram,0x02474f44) */
/* WARNING: Removing unreachable block (ram,0x024752e4) */

void FUN_02474a8c(long param_1)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_188;
  undefined8 uStack_180;
  long local_178;
  long *local_170;
  undefined8 local_168;
  undefined1 *local_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  byte local_48 [4];
  uint local_44;
  
  iVar13 = *(int *)(param_1 + 0x178);
  puVar20 = *(undefined8 **)(param_1 + 0x60);
  uVar17 = (uint)*(byte *)(param_1 + 0x1900);
  if (5 < uVar17) {
    uVar17 = 0;
  }
  if (puVar20 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_052461c0);
      puVar20 = &DAT_05240280;
      if (iVar12 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar20 = &DAT_05240280;
    }
  }
  if (uVar17 - 2 < 4) {
    bVar10 = true;
    *(undefined1 *)((long)puVar20 + 0x5e95) = 1;
    puVar20 = *(undefined8 **)(param_1 + 0x60);
joined_r0x02474c78:
    if (puVar20 != (undefined8 *)0x0) goto LAB_02474b08;
LAB_02474c7c:
    if ((DAT_052461c0 & 1) != 0) {
      puVar20 = &DAT_05240280;
      lVar14 = DAT_052413b8;
      goto joined_r0x02474c98;
    }
    iVar12 = __cxa_guard_acquire(&DAT_052461c0);
    if (iVar12 != 0) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
    }
    puVar20 = &DAT_05240280;
    lVar14 = DAT_052413b8;
    if (DAT_052413b8 != 0) goto LAB_02474b10;
LAB_02474c9c:
    local_188 = (ulong)local_188._4_4_ << 0x20;
    uVar17 = *(uint *)(param_1 + 0x17d0);
LAB_02474ca8:
    if ((uVar17 >> 7 & 1) != 0) goto LAB_02474e00;
    if (iVar13 == 1) {
      puVar20 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar20 = *(undefined8 **)(param_1 + 0x4c8);
      }
      local_168 = (undefined *)
                  CONCAT44((float)(int)*(short *)(param_1 + 0x18e9) * 0.25,
                           (float)*(int *)(param_1 + 0x18e5) * 0.001);
      local_160 = (undefined1 *)CONCAT44(local_160._4_4_,(float)*(int *)(param_1 + 0x18eb) * 0.001);
      FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar20 + 0x4f,&local_168);
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xffdfffff;
      if ((*(char *)(param_1 + 0x52d) == '\0') ||
         (*(int *)(param_1 + 0x520) < *(int *)(param_1 + 0x528))) {
        uVar17 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
        fVar21 = 0.0;
        if (*(char *)(param_1 + 0x52d) != '\0') {
          fVar21 = (float)(uint)(*(int *)(param_1 + 0x528) - *(int *)(param_1 + 0x520));
        }
        plVar2 = &DAT_054e9a58;
        if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
          plVar2 = *(long **)(param_1 + 0x4c8);
        }
        uVar4 = *(uint *)((long)plVar2 + 0x2b4);
        uVar3 = uVar4 + (uint)*(ushort *)(param_1 + 0x18ef) * -0x10000;
        if (uVar17 >= uVar4) {
          uVar3 = uVar17 - uVar4;
        }
        bVar9 = uVar4 <= uVar17;
        if (0x80000000 < uVar3) {
          bVar9 = uVar17 < uVar4;
          uVar3 = -uVar3;
        }
        uVar1 = 0;
        if (uVar4 != uVar17) {
          uVar1 = uVar3;
        }
        bVar8 = false;
        if (uVar4 != uVar17) {
          bVar8 = bVar9;
        }
        lVar14 = (**(code **)(*plVar2 + 0x148))();
        iVar13 = -(int)((float)uVar1 / fVar21);
        if (bVar8) {
          iVar13 = (int)((float)uVar1 / fVar21);
        }
        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + iVar13;
        if (*(char *)(param_1 + 0x52d) != '\0') {
          uVar11 = (**(code **)(*(long *)(param_1 + 0x518) + (ulong)*(byte *)(param_1 + 0x52c) * 8))
                             (param_1 + 0x518);
          *(undefined4 *)(param_1 + 0x520) = uVar11;
        }
      }
    }
  }
  else {
    *(undefined1 *)((long)puVar20 + 0x5e95) = 0;
    if (uVar17 == 0) {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xffefffff;
      if ((*(char *)(param_1 + 0x54d) == '\0') ||
         (*(int *)(param_1 + 0x540) < *(int *)(param_1 + 0x548))) {
        fVar21 = 0.0;
        if (*(char *)(param_1 + 0x54d) != '\0') {
          fVar21 = (float)(uint)(*(int *)(param_1 + 0x548) - *(int *)(param_1 + 0x540));
        }
        plVar2 = &DAT_054e9a58;
        if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
          plVar2 = *(long **)(param_1 + 0x4c8);
        }
        uVar3 = *(uint *)(plVar2 + 0x56);
        uVar17 = uVar3 + 0xfd82d82c;
        if (0x27d27d4 >= uVar3) {
          uVar17 = 0x27d27d4 - uVar3;
        }
        bVar10 = uVar3 < 0x27d27d5;
        if (0x80000000 < uVar17) {
          bVar10 = 0x27d27d4 < uVar3;
          uVar17 = -uVar17;
        }
        uVar4 = 0;
        if (uVar3 != 0x27d27d4) {
          uVar4 = uVar17;
        }
        bVar9 = false;
        if (uVar3 != 0x27d27d4) {
          bVar9 = bVar10;
        }
        piVar16 = (int *)(**(code **)(*plVar2 + 0x148))();
        iVar12 = -(int)((float)uVar4 / fVar21);
        if (bVar9) {
          iVar12 = (int)((float)uVar4 / fVar21);
        }
        *piVar16 = *piVar16 + iVar12;
        if (*(char *)(param_1 + 0x54d) != '\0') {
          uVar11 = (**(code **)(*(long *)(param_1 + 0x538) + (ulong)*(byte *)(param_1 + 0x54c) * 8))
                             (param_1 + 0x538);
          bVar10 = false;
          *(undefined4 *)(param_1 + 0x540) = uVar11;
          puVar20 = *(undefined8 **)(param_1 + 0x60);
          goto joined_r0x02474c68;
        }
      }
      bVar10 = false;
      puVar20 = *(undefined8 **)(param_1 + 0x60);
      goto joined_r0x02474c78;
    }
    bVar10 = true;
    puVar20 = *(undefined8 **)(param_1 + 0x60);
joined_r0x02474c68:
    if (puVar20 == (undefined8 *)0x0) goto LAB_02474c7c;
LAB_02474b08:
    lVar14 = puVar20[0x227];
joined_r0x02474c98:
    if (lVar14 == 0) goto LAB_02474c9c;
LAB_02474b10:
    local_188 = CONCAT44(local_188._4_4_,*(uint *)(puVar20 + 0x2d3) >> 1) & 0xffffffff00000001;
    local_168 = (undefined *)CONCAT44(local_168._4_4_,0x49);
    uVar15 = FUN_03850890(lVar14,0x49,0,*(uint *)(puVar20 + 0x2d3) >> 1 & 1);
    uVar17 = *(uint *)(param_1 + 0x17d0);
    if ((uVar15 & 1) == 0) goto LAB_02474ca8;
    *(uint *)(param_1 + 0x17d0) = uVar17 | 0x80;
LAB_02474e00:
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfff7ffff;
    puVar20 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar20 = *(undefined8 **)(param_1 + 0x4c8);
    }
    if ((*(char *)(param_1 + 0x4ed) == '\0') ||
       (*(int *)(param_1 + 0x4e0) < *(int *)(param_1 + 0x4e8))) {
      fVar23 = (float)(int)*(short *)(param_1 + 0x190b) * 0.25 - *(float *)(puVar20 + 0x4f);
      fVar22 = (float)(int)*(short *)(param_1 + 0x190f) * 0.25 - *(float *)(puVar20 + 0x50);
      fVar24 = fVar22 * fVar22;
      fVar21 = fVar23 * fVar23;
      fVar25 = SQRT(fVar23 * fVar23 + 0.0 + fVar22 * fVar22);
      if (0.0 < fVar25) {
        fVar25 = 1.0 / fVar25;
        fVar23 = fVar23 * fVar25;
        fVar22 = fVar22 * fVar25;
      }
      fVar25 = 0.0;
      if (*(char *)(param_1 + 0x4ed) != '\0') {
        fVar25 = (float)(uint)(*(int *)(param_1 + 0x4e8) - *(int *)(param_1 + 0x4e0));
      }
      fVar25 = SQRT(fVar24 + fVar21) / fVar25;
      *(float *)(puVar20 + 0x4f) = *(float *)(puVar20 + 0x4f) + fVar23 * fVar25;
      *(float *)(puVar20 + 0x50) = *(float *)(puVar20 + 0x50) + fVar22 * fVar25;
      if (*(char *)(param_1 + 0x4ed) != '\0') {
        uVar11 = (**(code **)(*(long *)(param_1 + 0x4d8) + (ulong)*(byte *)(param_1 + 0x4ec) * 8))
                           (param_1 + 0x4d8);
        *(undefined4 *)(param_1 + 0x4e0) = uVar11;
      }
    }
  }
  puVar20 = *(undefined8 **)(param_1 + 0x60);
  local_178 = 0;
  local_170 = (long *)0x0;
  local_188 = 0;
  uStack_180 = 0;
  if (puVar20 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar13 = __cxa_guard_acquire(&DAT_052461c0);
      puVar20 = &DAT_05240280;
      if (iVar13 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar20 = &DAT_05240280;
    }
  }
  if (puVar20[0x227] == 0) {
    local_44 = 0;
  }
  else {
    local_44 = *(uint *)(puVar20 + 0x2d3) >> 1 & 1;
    local_168 = (undefined *)CONCAT44(local_168._4_4_,0x11);
    uVar15 = FUN_03850890(puVar20[0x227],0x11,&local_188,local_44);
    if (((uVar15 & 1) != 0) && (local_170 != (long *)0x0)) {
      if (*local_170 == 0) {
        local_55 = 0;
        local_158 = 0x100;
        local_160 = local_154;
        local_154[0] = 0;
        local_168 = PTR_DAT_04bb21f8 + 0x10;
        lVar14 = *(long *)(local_170[2] + 8);
        FUN_038d1270(&local_168,"%s.as",
                     lVar14 + *(int *)(lVar14 + 0x24) + (long)*(int *)(lVar14 + 8));
      }
      else {
        iVar13 = *(int *)(*local_170 + 8);
        if (iVar13 < 0x60000000) {
          piVar16 = (int *)(*(long *)(local_170[2] + 8) + (long)iVar13);
          if (*piVar16 < 1) goto LAB_0247508c;
          piVar16 = (int *)(((ulong)(uint)piVar16[1] & 0xfffffff) + *(long *)(local_170[2] + 8) + 4)
          ;
        }
        else {
          uVar17 = iVar13 + 0xa0000000;
          if (*(uint *)(local_178 + 0x80) <= uVar17) {
            uVar17 = 0;
          }
          lVar14 = *(long *)(local_178 + 0x88) + (ulong)uVar17 * 0x32;
          piVar16 = (int *)(lVar14 + (ulong)*(byte *)(lVar14 + 0x20));
        }
        if (*piVar16 == 3) {
          sVar5 = *(short *)(param_1 + 0x18e9);
          fVar21 = (float)FUN_016e026c(0,param_1 + 0x2b0,0,0);
          if (fVar21 + (float)(int)sVar5 * -0.25 <= 10.0) {
            local_168 = (undefined *)CONCAT44(local_168._4_4_,3);
            FUN_01509afc(param_1 + 0x2b0,&local_168);
          }
        }
      }
    }
  }
LAB_0247508c:
  puVar20 = *(undefined8 **)(param_1 + 0x60);
  if (puVar20 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar13 = __cxa_guard_acquire(&DAT_052461c0);
      puVar20 = &DAT_05240280;
      if (iVar13 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar20 = &DAT_05240280;
    }
  }
  if (puVar20[0x227] == 0) {
    local_188 = (ulong)local_188._4_4_ << 0x20;
  }
  else {
    local_188 = CONCAT44(local_188._4_4_,*(uint *)(puVar20 + 0x2d3) >> 1) & 0xffffffff00000001;
    local_168 = (undefined *)CONCAT44(local_168._4_4_,0x2d);
    uVar15 = FUN_03850890(puVar20[0x227],0x2d,0,*(uint *)(puVar20 + 0x2d3) >> 1 & 1);
    if ((uVar15 & 1) != 0) {
      local_48[0] = *(byte *)(param_1 + 0x1ee8);
      if (*(int *)(param_1 + 0x178) != 0) {
        bVar10 = true;
      }
      if (!bVar10) {
        lVar14 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)local_48[0] * 0x740;
        if (7 < local_48[0]) {
          lVar14 = *(long *)PTR_DAT_04bb4f78 + 0x20;
        }
        if ((*(byte *)(lVar14 + 0x328) >> 3 & 1) != 0) {
          FUN_0231e380(param_1);
          local_48[0] = *(byte *)(param_1 + 0x1ee8);
        }
      }
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
      if (7 < local_48[0]) {
        local_48[0] = 0xff;
      }
      uVar17 = (uint)*(byte *)(param_1 + 0x191f);
      if (2 < uVar17) {
        uVar17 = 0;
      }
      local_188 = CONCAT44(local_188._4_4_,uVar17);
      if (uVar17 != 0) {
        local_168 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_168);
        local_168 = *(undefined **)(param_1 + 0x1917);
        FUN_02326130(local_48,&local_168,1);
      }
      if ((int)local_188 == 2) {
        lVar14 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)local_48[0] * 0x740;
        if (7 < local_48[0]) {
          lVar14 = *(long *)PTR_DAT_04bb4f78 + 0x20;
        }
        if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
          *(undefined4 *)(lVar14 + 0x24c) = 3;
          FUN_01393458(lVar14 + 0x2f0);
        }
        else {
          *(undefined4 *)(lVar14 + 0x24c) = 4;
        }
      }
      else if ((int)local_188 == 1) {
        lVar14 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)local_48[0] * 0x740;
        if (7 < local_48[0]) {
          lVar14 = *(long *)PTR_DAT_04bb4f78 + 0x20;
        }
        if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
          *(undefined4 *)(lVar14 + 0xc) = 3;
          FUN_01393458(lVar14 + 0xb0);
        }
        else {
          *(undefined4 *)(lVar14 + 0xc) = 4;
        }
      }
      sVar5 = *(short *)(param_1 + 0x1911);
      local_168 = (undefined *)CONCAT44(local_168._4_4_,1);
      sVar6 = *(short *)(param_1 + 0x1913);
      sVar7 = *(short *)(param_1 + 0x1915);
      uVar19 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
      uVar17 = (uint)*(byte *)(param_1 + 0x1ee8);
      bVar10 = 7 < uVar17;
      if (bVar10) {
        uVar17 = 0xff;
      }
      puVar18 = &DAT_0548ed14 + (ulong)uVar17 * 0x8c;
      if (bVar10) {
        puVar18 = &DAT_0548f0e8;
      }
      *(undefined4 *)(puVar18 + 0x28) = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
      *(float *)(puVar18 + 0x2c) = (float)(int)sVar5 * 0.25;
      puVar18[0x1c] = 1;
      *(undefined8 *)(puVar18 + 0x20) = uVar19;
      *(float *)(puVar18 + 0x30) = (float)(int)sVar6 * 0.25;
      *(float *)(puVar18 + 0x34) = (float)(int)sVar7 * 0.25;
    }
  }
  uVar15 = FUN_02473484(param_1);
  if ((uVar15 & 1) == 0) {
    puVar20 = *(undefined8 **)(param_1 + 0x60);
    if (puVar20 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_052461c0), iVar13 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar20 = &DAT_05240280;
      }
      else {
        puVar20 = &DAT_05240280;
      }
    }
    uVar15 = FUN_0170a6d0(puVar20,0);
    if ((uVar15 & 1) != 0) {
      if (*(int *)(param_1 + 0x178) == 0) {
        FUN_02373ee0(param_1,6,1,1);
      }
      else {
        *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
        FUN_023164ec(param_1,6);
      }
    }
  }
  return;
}

