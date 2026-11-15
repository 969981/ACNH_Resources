
/* WARNING: Removing unreachable block (ram,0x024225e4) */
/* WARNING: Removing unreachable block (ram,0x02422820) */

void FUN_02421f40(long param_1)

{
  short sVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  undefined8 uVar14;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  byte local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined1 local_59;
  undefined4 local_58;
  undefined1 local_54 [4];
  
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  puVar2 = PTR_DAT_04bb43c0;
  lVar10 = puVar7[0x290];
  if (*(char *)(lVar10 + 0x1d5) == '\0') {
LAB_02422000:
    puVar8 = (undefined4 *)(lVar10 + 0xd4);
  }
  else {
    lVar12 = *(long *)PTR_DAT_04bb43c0;
    puVar8 = (undefined4 *)(lVar10 + 0xcc);
    uVar3 = FUN_0277d6c4(puVar8);
    if (*(long *)puVar2 == 0) {
LAB_02421fe4:
      iVar4 = FUN_0277d6c4(puVar8);
      if (iVar4 != 0xfffd) goto LAB_02422000;
      puVar8 = (undefined4 *)PTR_DAT_04bb37e0;
    }
    else {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((*(uint *)(lVar12 + 0x1d8) <= uVar3) ||
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_02421fe4;
    }
  }
  lVar10 = *(long *)puVar2;
  uVar3 = FUN_0277d6c4(puVar8);
  if (*(long *)puVar2 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      if ((*(long *)(param_1 + 0x60) == 0) &&
         (((DAT_052461c0 & 1) == 0 && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)))) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      local_70 = CONCAT44(local_70._4_4_,4);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  lVar10 = puVar7[0x292];
  if (*(char *)(lVar10 + 0x1d5) == '\0') {
LAB_02422108:
    puVar9 = (undefined *)(lVar10 + 0xd4);
  }
  else {
    lVar12 = *(long *)puVar2;
    puVar9 = (undefined *)(lVar10 + 0xcc);
    uVar3 = FUN_0277d6c4(puVar9);
    if (*(long *)puVar2 == 0) {
LAB_024220ec:
      iVar4 = FUN_0277d6c4(puVar9);
      if (iVar4 != 0xfffd) goto LAB_02422108;
      puVar9 = PTR_DAT_04bb37e0;
    }
    else {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((*(uint *)(lVar12 + 0x1d8) <= uVar3) ||
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_024220ec;
    }
  }
  lVar10 = *(long *)puVar2;
  uVar3 = FUN_0277d6c4(puVar9);
  if (*(long *)puVar2 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      if ((*(long *)(param_1 + 0x60) == 0) &&
         (((DAT_052461c0 & 1) == 0 && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)))) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      local_70 = CONCAT44(local_70._4_4_,5);
    }
  }
  sVar1 = *(short *)PTR_DAT_04bb6298;
  if (sVar1 != -1) {
    local_70 = CONCAT44(local_70._4_4_,0x20);
    puVar9 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar1 * 8;
    if (0xff < (uint)(int)sVar1) {
      puVar9 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar9 + 4) & 1) != 0) {
      puVar7 = *(undefined8 **)(param_1 + 0x60);
      if (puVar7 == (undefined8 *)0x0) {
        if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          puVar7 = &DAT_05240280;
        }
        else {
          puVar7 = &DAT_05240280;
        }
      }
      local_70._4_4_ = (uint)((ulong)local_70 >> 0x20) & 0xffffff00;
      local_70 = CONCAT44(local_70._4_4_,6);
      local_60 = 0;
      local_68 = *(undefined2 *)PTR_DAT_04bb37e0;
      local_66 = PTR_DAT_04bb37e0[2];
      local_65 = PTR_DAT_04bb37e0[3];
      local_64 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      local_54._0_3_ = 0x101;
      local_5c = local_68;
      local_5a = local_66;
      local_59 = local_65;
      local_58 = local_64;
      FUN_0170f380(puVar7,&local_70);
    }
  }
  if (*(char *)(param_1 + 0x89c) == '\0') {
    pcVar13 = (char *)(param_1 + 0x1908);
    if (*(char *)(param_1 + 0x1948) == '\0') {
      return;
    }
    uVar11 = 0;
    do {
      local_78 = 0xfffe;
      FUN_0277d4ac(&local_78);
      uVar6 = (ulong)*(byte *)(param_1 + 0x1948);
      if ((uVar11 < 8) && (uVar11 < uVar6)) {
        local_70 = 0xfffe;
        FUN_0277d4ac(&local_70);
        local_78 = *(undefined8 *)(pcVar13 + -8);
        if (*pcVar13 == '\t') {
          lVar10 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(puVar8);
          if (*(long *)puVar2 != 0) {
            lVar10 = *(long *)(lVar10 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
              iVar4 = FUN_0277d6c4(puVar8);
              if (iVar4 != 0x3661) {
                FUN_02472404(0x3f800000,param_1);
              }
              lVar10 = *(long *)puVar2;
              local_90 = PTR_DAT_04bc0510 + 0x10;
              local_88 = *puVar8;
              local_84 = puVar8[1];
              local_80 = 0;
              uVar3 = FUN_0277d6c4(&local_88);
              if (*(long *)puVar2 != 0) {
                lVar10 = *(long *)(lVar10 + 0x57e58);
                uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
                  lVar10 = *(long *)PTR_DAT_04bc0428;
                  uVar3 = FUN_0277d6c4(puVar8);
                  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                  if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
                     (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8),
                     lVar10 != 0)) {
                    local_80 = lVar10;
                  }
                }
              }
              iVar4 = FUN_01ad78cc(&local_90);
              if (iVar4 != 0x48) {
                return;
              }
              puVar7 = *(undefined8 **)(param_1 + 0x60);
              if (puVar7 == (undefined8 *)0x0) {
                if ((DAT_052461c0 & 1) == 0) {
                  iVar4 = __cxa_guard_acquire(&DAT_052461c0);
                  puVar7 = &DAT_05240280;
                  if (iVar4 != 0) {
                    FUN_016fcf10(&DAT_05240280);
                    FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                    __cxa_guard_release(&DAT_052461c0);
                  }
                }
                else {
                  puVar7 = &DAT_05240280;
                }
              }
              local_70._4_4_ = (uint)((ulong)local_70 >> 0x20) & 0xffffff00;
              local_70 = CONCAT44(local_70._4_4_,6);
              local_5c = *(undefined2 *)PTR_DAT_04bb37e0;
              local_5a = PTR_DAT_04bb37e0[2];
              local_59 = PTR_DAT_04bb37e0[3];
              local_58 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
              local_60 = 0;
              local_54._0_3_ = 0x101;
              goto LAB_024227f4;
            }
          }
          FUN_02472404(0,param_1);
          return;
        }
        uVar6 = (ulong)*(byte *)(param_1 + 0x1948);
      }
      uVar11 = uVar11 + 1;
      pcVar13 = pcVar13 + 9;
      if (uVar6 <= uVar11) {
        return;
      }
    } while( true );
  }
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x89c) = 1;
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  lVar10 = puVar7[0x290];
  if (*(char *)(lVar10 + 0x1d5) == '\0') {
LAB_024222ec:
    puVar9 = (undefined *)(lVar10 + 0xd4);
  }
  else {
    lVar12 = *(long *)puVar2;
    puVar9 = (undefined *)(lVar10 + 0xcc);
    uVar3 = FUN_0277d6c4(puVar9);
    if (*(long *)puVar2 == 0) {
LAB_024222d0:
      iVar4 = FUN_0277d6c4(puVar9);
      if (iVar4 != 0xfffd) goto LAB_024222ec;
      puVar9 = PTR_DAT_04bb37e0;
    }
    else {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((*(uint *)(lVar12 + 0x1d8) <= uVar3) ||
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_024222d0;
    }
  }
  lVar10 = *(long *)puVar2;
  uVar3 = FUN_0277d6c4(puVar9);
  if (*(long *)puVar2 == 0) {
LAB_02422384:
    uVar3 = 0;
    puVar7 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_02422384;
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    if (puVar7 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0);
        puVar7 = &DAT_05240280;
        if (iVar4 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar7 = &DAT_05240280;
      }
    }
    local_70 = CONCAT44(local_70._4_4_,4);
    uVar3 = *(uint *)((long)puVar7 + 0x15f4) >> 4 & 1 ^ 1;
    puVar7 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  lVar10 = puVar7[0x292];
  if (*(char *)(lVar10 + 0x1d5) == '\0') {
LAB_02422664:
    puVar9 = (undefined *)(lVar10 + 0xd4);
  }
  else {
    lVar12 = *(long *)puVar2;
    puVar9 = (undefined *)(lVar10 + 0xcc);
    uVar5 = FUN_0277d6c4(puVar9);
    if (*(long *)puVar2 == 0) {
LAB_02422648:
      iVar4 = FUN_0277d6c4(puVar9);
      if (iVar4 != 0xfffd) goto LAB_02422664;
      puVar9 = PTR_DAT_04bb37e0;
    }
    else {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((*(uint *)(lVar12 + 0x1d8) <= uVar5) ||
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_02422648;
    }
  }
  lVar10 = *(long *)puVar2;
  uVar5 = FUN_0277d6c4(puVar9);
  if (*(long *)puVar2 == 0) {
LAB_02422700:
    uVar5 = 0;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_02422700;
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    if (puVar7 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0);
        puVar7 = &DAT_05240280;
        if (iVar4 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar7 = &DAT_05240280;
      }
    }
    local_70 = CONCAT44(local_70._4_4_,5);
    uVar5 = (uint)((*(uint *)((long)puVar7 + 0x15f4) >> 5 & 1) == 0);
  }
  if ((uVar3 | uVar5) != 1) {
    return;
  }
  local_90 = (undefined *)
             (CONCAT44(local_90._4_4_,(uint)(*(ushort *)(param_1 + 0x1954) >> 4)) &
             0xffffffff00000003);
  if ((int)local_90 == 2) {
    if (uVar3 != 0) {
      FUN_02472404(0x3f800000,param_1);
    }
    if (uVar5 == 0) {
      puVar7 = *(undefined8 **)(param_1 + 0x60);
      goto joined_r0x0242275c;
    }
    uVar14 = 0x3f800000;
  }
  else {
    if ((int)local_90 != 1) {
      return;
    }
    uVar14 = 0;
    FUN_02472404(0,param_1);
  }
  FUN_0244d1b8(uVar14,param_1);
  puVar7 = *(undefined8 **)(param_1 + 0x60);
joined_r0x0242275c:
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  local_60 = (byte)uVar3 ^ 1;
  local_70 = CONCAT35(local_70._5_3_,6);
  local_5c = *(undefined2 *)PTR_DAT_04bb37e0;
  local_5a = PTR_DAT_04bb37e0[2];
  local_59 = PTR_DAT_04bb37e0[3];
  local_58 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_54._1_2_ = 1;
  local_54[0] = (byte)uVar5 ^ 1;
LAB_024227f4:
  local_68 = local_5c;
  local_66 = local_5a;
  local_65 = local_59;
  local_64 = local_58;
  FUN_0170f380(puVar7,&local_70);
  return;
}

