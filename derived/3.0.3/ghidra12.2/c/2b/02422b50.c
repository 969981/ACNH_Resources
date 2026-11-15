
void FUN_02422b50(long param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined6 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined2 extraout_var;
  ulong uVar7;
  ushort uVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  byte *pbVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  byte local_24 [4];
  
  uVar2 = *(ushort *)(param_1 + 0x1954);
  pbVar12 = (byte *)(param_1 + 0x1ee8);
  if (*(int *)(param_1 + 0x178) != 0) goto LAB_02422ccc;
  uVar7 = FUN_00a738a0(pbVar12,0);
  iVar9 = 0;
  if ((uVar7 & 1) != 0) {
    uVar6 = FUN_00a74b78(pbVar12);
    iVar9 = 1;
    if (uVar6 < 0xf) {
      if ((1 << (ulong)(uVar6 & 0x1f) & 0x600dU) == 0) {
        if ((uVar6 == 7) || (uVar6 == 9)) {
          iVar9 = (uint)((*(byte *)(param_1 + 0x17d0) & 6) != 0) << 1;
        }
      }
      else {
        iVar9 = 2;
      }
    }
  }
  *(char *)(param_1 + 0x1953) = (char)iVar9;
  uVar8 = *(ushort *)(param_1 + 0x1954);
  if ((uVar8 >> 6 & 1) == 0) {
    if ((uVar8 >> 7 & 1) != 0) {
      iVar9 = 4;
      goto LAB_02422c18;
    }
  }
  else {
    iVar9 = 6;
LAB_02422c18:
    *(char *)(param_1 + 0x1953) = (char)iVar9;
  }
  local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar9);
  uVar8 = uVar8 >> 2 & 3;
  if (uVar8 == 3) {
    FUN_023b7030(param_1,&local_50,0,0);
    FUN_006f0400((float)local_50 - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                 (float)local_48 - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
    *(undefined2 *)(param_1 + 0x1951) = extraout_var;
LAB_02422c9c:
    uVar8 = *(ushort *)(*(long *)(param_1 + 0x68) + 0x2b6);
  }
  else if (uVar8 == 2) {
    local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(param_1 + 0x230));
    FUN_016f742c(&local_50,&local_58,0);
    uVar8 = local_50._2_2_ ^ 0x8000;
  }
  else {
    if (uVar8 != 1) goto LAB_02422c9c;
    local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(param_1 + 0x230));
    FUN_016f742c(&local_50,&local_58,0);
    uVar8 = local_50._2_2_;
  }
  *(ushort *)(param_1 + 0x1951) = uVar8;
LAB_02422ccc:
  *(undefined1 *)(param_1 + 0x89c) = 0;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
  if ((*(byte *)(param_1 + 0x1955) & 1) == 0) {
    local_24[0] = *pbVar12;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    FUN_024232e0(local_24,param_1 + 0x18e0);
  }
  FUN_023203ac(param_1,1,0);
  local_48 = (char *)CONCAT44(local_48._4_4_,6);
  uVar5 = local_48;
  local_50 = (undefined *)CONCAT35(local_50._5_3_,1);
  local_48._0_6_ = (undefined6)uVar5;
  uVar4 = (undefined6)local_48;
  local_48 = (char *)((ulong)local_48._7_1_ << 0x38);
  local_48 = (char *)(CONCAT26(local_48._6_2_,uVar4) & 0xffff0000ffffffff);
  FUN_02321e44(&local_58,param_1,&local_50);
  if ((*(ushort *)(param_1 + 0x1954) >> 1 & 1) != 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    if (puVar10 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        puVar10 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar10 = &DAT_05240280;
      }
    }
    puVar3 = PTR_DAT_04bb37e0;
    *(undefined2 *)(puVar10 + 0xb86) = *(undefined2 *)PTR_DAT_04bb37e0;
    *(undefined *)((long)puVar10 + 0x5c32) = puVar3[2];
    *(undefined *)((long)puVar10 + 0x5c33) = puVar3[3];
    *(undefined4 *)((long)puVar10 + 0x5c34) = *(undefined4 *)(puVar3 + 4);
    if ((uVar2 & 1) == 0) {
      local_50 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_50);
      puVar3 = PTR_DAT_04bb43c0;
      local_50 = *(undefined **)(param_1 + 0x1949);
      lVar11 = *(long *)PTR_DAT_04bb43c0;
      uVar6 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar3 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          puVar10 = *(undefined8 **)(param_1 + 0x60);
          if (puVar10 == (undefined8 *)0x0) {
            if ((DAT_052461c0 & 1) == 0) {
              iVar9 = __cxa_guard_acquire(&DAT_052461c0);
              puVar10 = &DAT_05240280;
              if (iVar9 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
            }
            else {
              puVar10 = &DAT_05240280;
            }
          }
          *(undefined2 *)(puVar10 + 0xb86) = (undefined2)local_50;
          *(undefined1 *)((long)puVar10 + 0x5c32) = local_50._2_1_;
          *(undefined1 *)((long)puVar10 + 0x5c33) = local_50._3_1_;
          *(undefined4 *)((long)puVar10 + 0x5c34) = local_50._4_4_;
        }
      }
    }
    if (*(char *)(param_1 + 0x1948) != '\0') {
      uVar6 = 0;
      pbVar12 = (byte *)(param_1 + 0x1908);
      do {
        local_58 = 0xfffe;
        FUN_0277d4ac(&local_58);
        if ((uVar6 < 8) && (uVar6 < *(byte *)(param_1 + 0x1948))) {
          local_50 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_50);
          local_58 = *(undefined8 *)(pbVar12 + -8);
          bVar1 = *pbVar12;
          if (0xd < bVar1) {
            bVar1 = 0;
          }
          switch(bVar1) {
          case 1:
          case 2:
          case 3:
            puVar10 = *(undefined8 **)(param_1 + 0x60);
            if (puVar10 == (undefined8 *)0x0) {
              if ((DAT_052461c0 & 1) == 0) {
                iVar9 = __cxa_guard_acquire(&DAT_052461c0);
                puVar10 = &DAT_05240280;
                if (iVar9 != 0) {
                  FUN_016fcf10(&DAT_05240280);
                  FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                  __cxa_guard_release(&DAT_052461c0);
                }
              }
              else {
                puVar10 = &DAT_05240280;
              }
            }
            local_48 = "PlayerOutfitChangeHead";
            break;
          case 4:
          case 5:
          case 6:
          case 9:
            puVar10 = *(undefined8 **)(param_1 + 0x60);
            if (puVar10 == (undefined8 *)0x0) {
              if ((DAT_052461c0 & 1) == 0) {
                iVar9 = __cxa_guard_acquire(&DAT_052461c0);
                puVar10 = &DAT_05240280;
                if (iVar9 != 0) {
                  FUN_016fcf10(&DAT_05240280);
                  FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                  __cxa_guard_release(&DAT_052461c0);
                }
              }
              else {
                puVar10 = &DAT_05240280;
              }
            }
            local_48 = "PlayerOutfitChange";
            break;
          case 7:
          case 8:
            puVar10 = *(undefined8 **)(param_1 + 0x60);
            if (puVar10 == (undefined8 *)0x0) {
              if ((DAT_052461c0 & 1) == 0) {
                iVar9 = __cxa_guard_acquire(&DAT_052461c0);
                puVar10 = &DAT_05240280;
                if (iVar9 != 0) {
                  FUN_016fcf10(&DAT_05240280);
                  FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                  __cxa_guard_release(&DAT_052461c0);
                }
              }
              else {
                puVar10 = &DAT_05240280;
              }
            }
            local_48 = "PlayerOutfitChangeFoot";
            break;
          case 10:
            puVar10 = (undefined8 *)FUN_016e3954(param_1);
            local_48 = "PlayerOutfitChangeBag";
            break;
          default:
            puVar10 = (undefined8 *)FUN_016e3954(param_1);
            local_48 = "PlayerOutfitChangeHead";
          }
          local_50 = PTR_DAT_04bb2020 + 0x10;
          FUN_017081d0(puVar10,&local_50,6,0,0);
          return;
        }
        uVar6 = uVar6 + 1;
        pbVar12 = pbVar12 + 9;
      } while (uVar6 < *(byte *)(param_1 + 0x1948));
    }
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    if (puVar10 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        puVar10 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar10 = &DAT_05240280;
      }
    }
    local_50 = PTR_DAT_04bb2020 + 0x10;
    local_48 = "PlayerOutfitChange";
    FUN_017081d0(puVar10,&local_50,6,0,0);
  }
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar6 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar11 + 0x278) * 999.99994);
    iVar9 = (int)(*(float *)(lVar11 + 0x27c) * 4.0);
    if (0x7ffe < iVar9) {
      iVar9 = 0x7fff;
    }
    if (iVar9 < -0x7fff) {
      iVar9 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar9;
    fVar13 = *(float *)(lVar11 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar13 * 999.99994);
    uVar6 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar6;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar10 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar14 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar10 + 0x2ec) = uVar14;
    *(undefined1 *)((long)puVar10 + 0x2e5) = 1;
  }
  return;
}

