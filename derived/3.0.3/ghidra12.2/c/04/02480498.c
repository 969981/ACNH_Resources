
/* WARNING: Removing unreachable block (ram,0x024808f0) */

void FUN_02480498(long param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined *puVar3;
  char *pcVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  uint *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  long local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  uint local_130;
  undefined1 auStack_e8 [88];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 local_78;
  undefined4 local_74;
  undefined4 local_68;
  uint local_58;
  byte local_54 [4];
  
  if (*(int *)(param_1 + 0x178) == 1) {
    puVar12 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar12 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_140 = (undefined *)
                CONCAT44((float)(int)*(short *)(param_1 + 0x18e9) * 0.25,
                         (float)*(int *)(param_1 + 0x18e5) * 0.001);
    local_138 = (char *)CONCAT44(local_138._4_4_,(float)*(int *)(param_1 + 0x18eb) * 0.001);
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar12 + 0x4f,&local_140);
  }
  uVar2 = *(undefined2 *)(param_1 + 0x190a);
  cVar1 = *(char *)(param_1 + 0x190c);
  lVar8 = FUN_0251e98c(1);
  pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x13b0) + 0xf0))(lVar8 + 0x13b0);
  fVar15 = *pfVar9;
  lVar8 = FUN_0251e98c(1);
  pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x22f0) + 0xf0))(lVar8 + 0x22f0);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x9c4) == '\0') {
      local_130 = local_130 & 0xffffff00;
      local_138 = (char *)0x41a0000040000000;
      local_140 = (undefined *)((ulong)CONCAT42(fVar15 * *pfVar9,uVar2) << 0x10);
      bVar5 = FUN_023b7bb8(param_1,&local_140);
      *(byte *)(param_1 + 0x9c4) = bVar5 & 1;
      if ((bVar5 & 1) == 0) {
        return;
      }
    }
LAB_02480638:
    lVar8 = FUN_0251e98c(1);
    puVar10 = (uint *)(**(code **)(*(long *)(lVar8 + 0x1290) + 0xf0))(lVar8 + 0x1290);
    uVar6 = *(uint *)(param_1 + 0x9c0);
    if (uVar6 < *puVar10) {
      FUN_023164ec(param_1,6);
      uVar6 = *(uint *)(param_1 + 0x9c0);
      lVar8 = FUN_0251e98c(1);
      puVar10 = (uint *)(**(code **)(*(long *)(lVar8 + 0x1260) + 0xf0))(lVar8 + 0x1260);
      if (uVar6 < *puVar10) {
        puVar12 = *(undefined8 **)(param_1 + 0x60);
        if (puVar12 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar7 = __cxa_guard_acquire(&DAT_052461c0);
            puVar12 = &DAT_05240280;
            if (iVar7 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar12 = &DAT_05240280;
          }
        }
        *(undefined4 *)(puVar12 + 0x25a) = 0;
        *(undefined1 *)((long)puVar12 + 0x142d) = 0;
        *(undefined1 *)puVar12[0x25c] = 0;
        *(undefined4 *)(puVar12 + 0x285) = 0;
        *(undefined8 *)((long)puVar12 + 0x1334) = 0;
        *(undefined8 *)((long)puVar12 + 0x133c) = 0;
        *(undefined4 *)((long)puVar12 + 0x1344) = 0;
        *(undefined4 *)(puVar12 + 0x266) = 0xffffffff;
      }
      else {
        puVar12 = *(undefined8 **)(param_1 + 0x60);
        if (puVar12 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar7 = __cxa_guard_acquire(&DAT_052461c0);
            puVar12 = &DAT_05240280;
            if (iVar7 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar12 = &DAT_05240280;
          }
        }
        FUN_016ff8c0(puVar12,6,&local_140);
        puVar12 = *(undefined8 **)(param_1 + 0x60);
        if (puVar12 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar7 = __cxa_guard_acquire(&DAT_052461c0);
            puVar12 = &DAT_05240280;
            if (iVar7 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar12 = &DAT_05240280;
          }
        }
        if (*(int *)(puVar12 + 0x285) != 1) {
          fVar15 = *(float *)((long)puVar12 + 0x133c) - (float)local_140;
          fVar14 = *(float *)((long)puVar12 + 0x1344) - (float)local_138;
          if (2.0 < SQRT((*(float *)(puVar12 + 0x268) - local_140._4_4_) *
                         (*(float *)(puVar12 + 0x268) - local_140._4_4_) + fVar15 * fVar15 +
                         fVar14 * fVar14)) {
            *(undefined1 *)((long)puVar12 + 0x142d) = 0;
          }
        }
        *(undefined4 *)(puVar12 + 0x25a) = 0;
        *(undefined1 *)puVar12[0x25c] = 0;
        *(undefined8 *)((long)puVar12 + 0x1334) = 0;
        *(undefined **)((long)puVar12 + 0x133c) = local_140;
        *(float *)((long)puVar12 + 0x1344) = (float)local_138;
        *(undefined4 *)(puVar12 + 0x285) = 1;
      }
    }
    else {
      if (uVar6 != *puVar10) {
        *(uint *)(param_1 + 0x9c0) = uVar6 + 1;
        puVar12 = *(undefined8 **)(param_1 + 0x60);
        goto joined_r0x024808b0;
      }
      puVar12 = *(undefined8 **)(param_1 + 0x60);
      if (puVar12 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(&DAT_052461c0);
          puVar12 = &DAT_05240280;
          if (iVar7 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar12 = &DAT_05240280;
        }
      }
      *(undefined4 *)(puVar12 + 0x25a) = 0;
      *(undefined1 *)((long)puVar12 + 0x142d) = 0;
      *(undefined1 *)puVar12[0x25c] = 0;
      *(undefined4 *)(puVar12 + 0x285) = 0;
      *(undefined8 *)((long)puVar12 + 0x1334) = 0;
      *(undefined8 *)((long)puVar12 + 0x133c) = 0;
      *(undefined4 *)((long)puVar12 + 0x1344) = 0;
      *(undefined4 *)(puVar12 + 0x266) = 0xffffffff;
      puVar12 = *(undefined8 **)(param_1 + 0x60);
      if (puVar12 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(&DAT_052461c0);
          puVar12 = &DAT_05240280;
          if (iVar7 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar12 = &DAT_05240280;
        }
      }
      local_140 = PTR_DAT_04bb2020 + 0x10;
      local_138 = "PlayerToolBreak";
      FUN_017081d0(puVar12,&local_140,6,0,0);
    }
    *(int *)(param_1 + 0x9c0) = *(int *)(param_1 + 0x9c0) + 1;
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    local_140 = PTR_DAT_04bb2020 + 0x10;
    local_138 = "PlayerToolBreakKeep";
    FUN_017081d0(puVar12,&local_140,6,1,0);
    if (*(char *)(param_1 + 0x9c4) != '\0') goto LAB_02480638;
  }
  puVar12 = *(undefined8 **)(param_1 + 0x60);
joined_r0x024808b0:
  if (puVar12 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_052461c0), iVar7 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar12 = &DAT_05240280;
    }
    else {
      puVar12 = &DAT_05240280;
    }
  }
  if (puVar12[0x227] == 0) {
    local_160 = (undefined *)((ulong)local_160._4_4_ << 0x20);
  }
  else {
    local_160 = (undefined *)
                (CONCAT44(local_160._4_4_,*(uint *)(puVar12 + 0x2d3) >> 1) & 0xffffffff00000001);
    local_140 = (undefined *)CONCAT44(local_140._4_4_,0x35);
    uVar11 = FUN_03850890(puVar12[0x227],0x35,0,*(uint *)(puVar12 + 0x2d3) >> 1 & 1);
    if ((uVar11 & 1) != 0) {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
      local_54[0] = *(byte *)(param_1 + 0x1ee8);
      if (7 < local_54[0]) {
        local_54[0] = 0xff;
      }
      FUN_024802e4(local_54,param_1 + 0x18e0);
      local_140 = (undefined *)((ulong)local_140 & 0xffffff0000000000);
      local_138 = (char *)CONCAT17(local_138._7_1_,6);
      local_138 = (char *)CONCAT26(local_138._6_2_,6);
      FUN_02321e44(&local_160,param_1,&local_140);
    }
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    local_160 = (undefined *)((ulong)local_160 & 0xffffffff00000000);
    local_140 = (undefined *)CONCAT44(local_140._4_4_,0x32);
    if ((puVar12[0x227] != 0) && (uVar11 = FUN_03850890(puVar12[0x227],0x32,0,0), (uVar11 & 1) != 0)
       ) {
      *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) | 0x100;
    }
  }
  if ((*(byte *)(param_1 + 0x17d1) & 1) != 0) {
    FUN_0230e2b0(&local_140);
    local_148 = 0xfffe;
    FUN_0277d4ac(&local_148);
    puVar3 = PTR_DAT_04bb43c0;
    local_148 = *(undefined8 *)(param_1 + 0x1900);
    local_58 = 9;
    lVar13 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_148);
    lVar8 = *(long *)puVar3;
    if (lVar8 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        local_150 = 0;
        local_160 = PTR_DAT_04bc0510 + 0x10;
        local_158 = (undefined4)local_148;
        uStack_154 = local_148._4_4_;
        uVar6 = FUN_0277d6c4(&local_158);
        if (*(long *)puVar3 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            lVar8 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(&local_148);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
               (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8), lVar8 != 0)) {
              local_150 = lVar8;
            }
          }
        }
        local_58 = FUN_01ad78cc(&local_160);
      }
    }
    if (local_58 < 0x75) {
      puVar12 = *(undefined8 **)(PTR_DAT_04bb4678 + (ulong)local_58 * 8 + 0x370);
    }
    else {
      puVar12 = &DAT_0407ebb1;
    }
    FUN_038d1270(auStack_e8,"ToolBreak_%s",puVar12);
    pcVar4 = local_138;
    if (local_138 != "Player_ToolBreak") {
      iVar7 = 0x10;
      if ((int)local_130 < 0x11) {
        iVar7 = local_130 - 1;
      }
      memcpy(local_138,"Player_ToolBreak",(long)iVar7);
      pcVar4[iVar7] = '\0';
    }
    local_78 = 1;
    local_74 = 7;
    local_90 = (undefined4)local_148;
    uStack_8c = local_148._4_4_;
    local_68 = 0x3c;
    uVar11 = FUN_02328d9c(param_1,&local_140);
    if ((uVar11 & 1) != 0) {
      *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffeff;
    }
  }
  puVar12 = *(undefined8 **)(param_1 + 0x60);
  if (puVar12 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_052461c0), iVar7 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar12 = &DAT_05240280;
    }
    else {
      puVar12 = &DAT_05240280;
    }
  }
  uVar11 = FUN_0170a6d0(puVar12,0);
  if (((uVar11 & 1) != 0) && (*(int *)(param_1 + 0x178) == 0)) {
    *(undefined1 *)(param_1 + 0x190c) = 1;
    uVar11 = FUN_0231eddc(param_1,0);
    if (((uVar11 & 1) != 0) &&
       ((uVar11 = FUN_02372a04(param_1), (uVar11 & 1) == 0 &&
        (uVar11 = FUN_02546f34((byte *)(param_1 + 0x1ee8),*(undefined4 *)(param_1 + 0x230)),
        (uVar11 & 1) == 0)))) {
      local_138 = (char *)((ulong)local_138 & 0xffffffff00000000);
      local_140 = (undefined *)CONCAT35(local_140._5_3_,0x100000006);
      FUN_02374e74(param_1,&local_140);
    }
  }
  return;
}

