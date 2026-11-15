
/* WARNING: Removing unreachable block (ram,0x0236db14) */

void FUN_0236d990(long param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  long *plVar11;
  float fVar12;
  uint local_50;
  undefined1 local_4c;
  undefined4 local_48 [2];
  long local_40;
  uint local_34;
  
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  local_50 = 0;
  if (puVar10[0x227] != 0) {
    lVar6 = *(long *)(puVar10[0x227] + 0x88);
    plVar11 = (long *)(lVar6 + 0x60);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcVar9 = *(char **)(lVar6 + 0x68);
    if (pcVar9 == "CommonCharaEditLandSideWalk") {
LAB_0236da80:
      *(undefined4 *)(param_1 + 0x1bf4) = 0x3f000000;
      lVar6 = FUN_0251e98c(1);
      pfVar3 = (float *)(**(code **)(*(long *)(lVar6 + 0x2a0) + 0xf0))(lVar6 + 0x2a0);
      fVar12 = *pfVar3;
      *(undefined4 *)(param_1 + 0x1bf4) = 0x3f800000;
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x400;
      *(float *)(param_1 + 0x1bf0) = fVar12 * 0.5;
    }
    else if (*pcVar9 == 'C') {
      uVar4 = 0;
      do {
        uVar8 = uVar4;
        if ((uVar8 == 0x80000) || (pcVar9[uVar8 + 1] != "CommonCharaEditLandSideWalk"[uVar8 + 1]))
        goto LAB_0236dac8;
        uVar4 = uVar8 + 1;
      } while (pcVar9[uVar8 + 1] != '\0');
      if (uVar8 >> 0x13 == 0) goto LAB_0236da80;
    }
  }
LAB_0236dac8:
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 == 0)) {
      puVar10 = &DAT_05240280;
      goto LAB_0236dae8;
    }
    FUN_016fcf10(&DAT_05240280);
    FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_052461c0);
    puVar10 = &DAT_05240280;
    if (DAT_052413b8 != 0) goto LAB_0236daf0;
    local_50 = 0;
  }
  else {
LAB_0236dae8:
    local_50 = 0;
    if (puVar10[0x227] != 0) {
LAB_0236daf0:
      local_50 = *(uint *)(puVar10 + 0x2d3) >> 1 & 1;
    }
  }
  uVar4 = FUN_0073da08(puVar10,local_50);
  if (((uVar4 & 1) == 0) || (*(int *)(param_1 + 0x178) != 0)) goto LAB_0236de04;
  puVar10 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar4 = FUN_016d7524(puVar10 + 0x4f);
  if ((uVar4 & 1) == 0) {
    puVar10 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar5 = FUN_016e1014(puVar10 + 0x4f,0,0);
    lVar6 = *(long *)PTR_DAT_04bbbc68;
    if (((((lVar6 != 0) && (*(long *)(lVar6 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(lVar6 + 0xb0) + 8) != 0)) &&
        ((*(long *)(lVar6 + 0x488) != 0 && (*(long *)(*(long *)(lVar6 + 0x488) + 8) != 0)))) &&
       ((*(long *)(lVar6 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar6 + 0x2b0) + 8) != 0)))) {
      uVar1 = FUN_0277d6c4();
      uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar1 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar1 * 8) != 0)) {
        FUN_0124c030(&local_50,uVar5);
        iVar2 = FUN_0123db50(local_48,local_40);
        if (((iVar2 - 2U & 0xfffffff9) == 0) && (local_40 != 0)) {
          local_34 = 5;
          lVar6 = FUN_01246470(local_40,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98);
          if (lVar6 != 0) {
            uVar1 = local_34 + 7;
            if (-1 < (int)local_34) {
              uVar1 = local_34;
            }
            if ((*(byte *)(lVar6 + (ulong)(uint)((int)uVar1 >> 3)) >> (ulong)(local_34 & 7) & 1) !=
                0) {
              FUN_02372864(param_1,0xc9,0,1);
              goto LAB_0236de04;
            }
          }
        }
      }
    }
    puVar10 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar4 = FUN_016d77dc(puVar10 + 0x4f);
    if ((uVar4 & 1) != 0) {
      local_50 = 0x6f;
      goto LAB_0236dc24;
    }
    puVar10 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar4 = FUN_0245bbd8(puVar10 + 0x4f);
    if ((uVar4 & 1) == 0) {
      uVar4 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar4 & 1) == 0) {
        local_48[0] = 0;
        local_50 = 6;
        local_4c = 1;
        FUN_02374e74(param_1,&local_50);
      }
      goto LAB_0236de04;
    }
    local_50 = 0x114;
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
    *(undefined8 *)(param_1 + 0x18c0) = 0;
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
    *(undefined8 *)(param_1 + 0x18c8) = 0;
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
    *(undefined8 *)(param_1 + 0x18d0) = 0;
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x18a0) = 0;
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
    *(undefined8 *)(param_1 + 0x18a8) = 0;
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
    *(undefined8 *)(param_1 + 0x18b0) = 0;
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
    *(undefined8 *)(param_1 + 0x18b8) = 0;
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
    *(undefined8 *)(param_1 + 0x1890) = 0;
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1898) = 0;
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
    lVar6 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar6 = *(long *)(param_1 + 0x70) + 0x278;
    }
  }
  else {
    local_50 = 0x66;
LAB_0236dc24:
    lVar7 = *(long *)(param_1 + 0x70);
    uVar1 = 0;
    lVar6 = 0;
    if (lVar7 != 0) {
      uVar1 = 0;
      if (*(uint *)(lVar7 + 0x280) < 0x149) {
        uVar1 = *(uint *)(lVar7 + 0x280);
      }
      lVar6 = lVar7 + 0x278;
    }
    if ((uVar1 == local_50) || (0x148 < local_50)) goto LAB_0236de04;
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
    *(undefined8 *)(param_1 + 0x18c0) = 0;
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
    *(undefined8 *)(param_1 + 0x18c8) = 0;
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
    *(undefined8 *)(param_1 + 0x18d0) = 0;
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x18a0) = 0;
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
    *(undefined8 *)(param_1 + 0x18a8) = 0;
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
    *(undefined8 *)(param_1 + 0x18b0) = 0;
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
    *(undefined8 *)(param_1 + 0x18b8) = 0;
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
    *(undefined8 *)(param_1 + 0x1890) = 0;
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1898) = 0;
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
    local_34 = local_50;
  }
  *(undefined8 *)(param_1 + 0x1888) = 0;
  *(undefined8 *)(param_1 + 0x1880) = 0;
  FUN_03ebb160(lVar6,local_50);
LAB_0236de04:
  *(undefined4 *)(param_1 + 0x1830) = 0;
  *(undefined4 *)(param_1 + 0x1828) = 0;
  return;
}

