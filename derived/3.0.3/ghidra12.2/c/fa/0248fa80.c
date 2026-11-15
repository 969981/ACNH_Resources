
/* WARNING: Removing unreachable block (ram,0x0248fae4) */
/* WARNING: Removing unreachable block (ram,0x0248fdb8) */
/* WARNING: Removing unreachable block (ram,0x02490088) */

void FUN_0248fa80(long param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  byte bVar11;
  int iVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  float fVar16;
  undefined4 uVar17;
  undefined1 auStack_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_5c [2];
  byte local_54 [4];
  uint local_38;
  undefined4 uStack_34;
  
  local_80 = CONCAT44(local_80._4_4_,3);
  puVar13 = &DAT_0548ed14 + (ulong)*(byte *)(param_1 + 0x1ee8) * 0x8c;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    puVar13 = &DAT_0548f0e8;
  }
  puVar13[0x54] = 1;
  lVar14 = *(long *)(param_1 + 0x68);
  *(undefined4 *)(puVar13 + 0x58) = *(undefined4 *)(lVar14 + 0x278);
  *(undefined4 *)(puVar13 + 0x5c) = *(undefined4 *)(lVar14 + 0x27c);
  *(undefined4 *)(puVar13 + 0x60) = *(undefined4 *)(lVar14 + 0x280);
  *(undefined4 *)(puVar13 + 100) = *(undefined4 *)(param_1 + 0x2b0);
  *(undefined4 *)(puVar13 + 0x68) = *(undefined4 *)(param_1 + 0x2b4);
  *(undefined4 *)(puVar13 + 0x6c) = *(undefined4 *)(param_1 + 0x2b8);
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar6 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar14 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar14 + 0x278) * 999.99994);
    iVar7 = (int)(*(float *)(lVar14 + 0x27c) * 4.0);
    if (0x7ffe < iVar7) {
      iVar7 = 0x7fff;
    }
    if (iVar7 < -0x7fff) {
      iVar7 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar7;
    fVar16 = *(float *)(lVar14 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar16 * 999.99994);
    uVar6 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar6;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar15 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar15 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar17 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar15 + 0x2ec) = uVar17;
    *(undefined1 *)((long)puVar15 + 0x2e5) = 1;
  }
  if (*(int *)(param_1 + 0x178) == 1) {
    puVar15 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar15 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_80 = CONCAT44((float)(int)*(short *)(param_1 + 0x18e9) * 0.25,
                        (float)*(int *)(param_1 + 0x18e5) * 0.001);
    local_78 = CONCAT44(local_78._4_4_,(float)*(int *)(param_1 + 0x18eb) * 0.001);
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar15 + 0x4f,&local_80);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_38 = 10;
      local_80 = CONCAT44(local_80._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_0248fd5c;
    }
    iVar7 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar9 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar9 = *(long **)(param_1 + 0x4c8);
    }
    lVar14 = (**(code **)(*plVar9 + 0x148))();
    iVar3 = iVar7 - *(int *)(lVar14 + 4);
    if (0xb60b5e < iVar3 + 0x5b05afU) {
      iVar12 = (int)((float)iVar3 * 0.1666667);
      iVar3 = 0x10000000;
      if (iVar12 < 1) {
        iVar3 = -0x5b05b0;
      }
      iVar7 = -0x10000000;
      if (0 < iVar12) {
        iVar7 = 0x5b05b0;
      }
      iVar2 = iVar12;
      if (iVar3 <= iVar12) {
        iVar2 = iVar3;
      }
      if (iVar7 <= iVar12) {
        iVar7 = iVar2;
      }
      iVar7 = iVar7 + *(int *)(lVar14 + 4);
    }
    *(int *)(lVar14 + 4) = iVar7;
  }
LAB_0248fd5c:
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  if (puVar15[0x227] == 0) {
    local_38 = 0;
  }
  else {
    local_38 = *(uint *)(puVar15 + 0x2d3) >> 1 & 1;
    local_80 = CONCAT44(local_80._4_4_,0x14);
    uVar8 = FUN_03850890(puVar15[0x227],0x14,0,local_38);
    if ((uVar8 & 1) != 0) {
      FUN_0252d8f0(&local_80,pbVar1);
      FUN_01af3d60(&local_38,&local_80,1);
      puVar4 = PTR_DAT_04bb43c0;
      lVar14 = *(long *)PTR_DAT_04bb43c0;
      uVar6 = FUN_0277d6c4(&local_38);
      puVar5 = PTR_DAT_04bb4f78;
      if (*(long *)puVar4 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) goto LAB_0249001c;
      }
      local_54[0] = *pbVar1;
      if (7 < local_54[0]) {
        local_54[0] = 0xff;
      }
      local_5c[0] = CONCAT31(local_5c[0]._1_3_,local_54[0]);
      lVar14 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_5c,1);
      if (lVar14 != 0) {
        if ((*(long **)(lVar14 + 0x1aa0) == (long *)0x0) ||
           (puVar15 = (undefined8 *)**(long **)(lVar14 + 0x1aa0), puVar15 == (undefined8 *)0x0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)*puVar15)();
          uVar8 = uVar8 & 0xffffffff;
        }
        uVar6 = FUN_028169a0(*(long *)(lVar14 + 0x1a88) + *(long *)(lVar14 + 0x1a80));
        if ((((uVar8 & 1) != 0) && (*(long *)(lVar14 + 0x1aa0) != 0)) &&
           (puVar15 = *(undefined8 **)(*(long *)(lVar14 + 0x1aa0) + 8), puVar15 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar15)();
        }
        if (uVar6 < 0x28) {
          FUN_02674700(local_54,uVar6,PTR_DAT_04bb37e0,1,0);
        }
      }
      bVar11 = local_54[0];
      if (7 < local_54[0]) {
        bVar11 = 0xff;
      }
      local_80 = CONCAT71(local_80._1_7_,bVar11);
      lVar14 = FUN_02583354(*(undefined8 *)puVar5,&local_80,1);
      if (lVar14 != 0) {
        lVar10 = *(long *)(lVar14 + 0x1aa0);
        if (lVar10 == 0) {
          FUN_02816c30(*(long *)(lVar14 + 0x1a88) + *(long *)(lVar14 + 0x1a80),PTR_DAT_04bb37e0,
                       *(undefined4 *)PTR_DAT_04bb4e20,0);
        }
        else {
          if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
            uVar8 = 0;
LAB_0248ff80:
            plVar9 = *(long **)(lVar10 + 0x20);
            if (plVar9 != (long *)0x0) {
              local_80 = *(ulong *)(lVar14 + 0x1a80);
              local_78 = *(ulong *)(lVar14 + 0x1a88);
              local_70 = 0x8b8;
              (**(code **)(*plVar9 + 0x20))(plVar9,&local_80);
            }
          }
          else {
            uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
            lVar10 = *(long *)(lVar14 + 0x1aa0);
            uVar8 = uVar8 & 0xffffffff;
            if (lVar10 != 0) goto LAB_0248ff80;
          }
          FUN_02816c30(*(long *)(lVar14 + 0x1a88) + *(long *)(lVar14 + 0x1a80),PTR_DAT_04bb37e0,
                       *(undefined4 *)PTR_DAT_04bb4e20,0);
          if ((((uVar8 & 1) != 0) && (*(long *)(lVar14 + 0x1aa0) != 0)) &&
             (puVar15 = *(undefined8 **)(*(long *)(lVar14 + 0x1aa0) + 0x18),
             puVar15 != (undefined8 *)0x0)) {
            (**(code **)*puVar15)();
          }
        }
      }
      local_80 = local_80 & 0xffffff0000000000;
      local_78 = CONCAT17(local_78._7_1_,6);
      local_78 = CONCAT26(local_78._6_2_,6);
      FUN_02321e44(local_5c,param_1,&local_80);
    }
  }
LAB_0249001c:
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x178) == 0) {
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    local_78 = 0;
    if (puVar15 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) != 0) || (iVar7 = __cxa_guard_acquire(&DAT_052461c0), iVar7 == 0)) {
        puVar15 = &DAT_05240280;
        goto LAB_0249005c;
      }
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      lVar14 = DAT_052413b8;
      if (DAT_052413b8 == 0) goto LAB_02490258;
LAB_02490064:
      local_5c[0] = *(uint *)(puVar15 + 0x2d3) >> 1 & 1;
      local_38 = 0;
      uVar8 = FUN_03850a90(lVar14,0,&local_80,local_5c[0]);
      if ((((uVar8 & 1) != 0) && (*(char *)(param_1 + 0x17ac) == '\0')) &&
         (local_38 = 0, (*(uint *)(param_1 + 0xed0) & 1) != 0)) {
        local_38 = 0xf0;
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
        *(undefined8 *)(param_1 + 0x1880) = 0;
        *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
        *(undefined8 *)(param_1 + 0x1888) = 0;
        *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
        *(undefined8 *)(param_1 + 0x1890) = 0;
        *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
        *(undefined8 *)(param_1 + 0x1898) = 0;
        *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
        *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
        *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
        *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
        lVar14 = 0;
        if (*(long *)(param_1 + 0x70) != 0) {
          lVar14 = *(long *)(param_1 + 0x70) + 0x278;
        }
        FUN_03ebb160(lVar14,0xf0);
      }
    }
    else {
LAB_0249005c:
      lVar14 = puVar15[0x227];
      if (puVar15[0x227] != 0) goto LAB_02490064;
LAB_02490258:
      local_5c[0] = 0;
    }
    puVar15 = *(undefined8 **)(param_1 + 0x60);
    if (puVar15 != (undefined8 *)0x0) goto LAB_0249002c;
LAB_02490268:
    if (((DAT_052461c0 & 1) != 0) || (iVar7 = __cxa_guard_acquire(&DAT_052461c0), iVar7 == 0)) {
      puVar15 = &DAT_05240280;
      lVar14 = DAT_052413b8;
      goto joined_r0x02490284;
    }
    FUN_016fcf10(&DAT_05240280);
    FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_052461c0);
    puVar15 = &DAT_05240280;
    if (DAT_052413b8 != 0) goto LAB_02490288;
LAB_02490304:
    uVar8 = FUN_0170a6d0(puVar15,0);
  }
  else {
    if (puVar15 == (undefined8 *)0x0) goto LAB_02490268;
LAB_0249002c:
    lVar14 = puVar15[0x227];
joined_r0x02490284:
    if (lVar14 == 0) goto LAB_02490304;
LAB_02490288:
    local_80 = CONCAT44(local_80._4_4_,1);
    uVar8 = FUN_0170a6d0(puVar15,*(uint *)(puVar15 + 0x2d3) >> 1 & 1);
  }
  if ((uVar8 & 1) != 0) {
    if (*(int *)(param_1 + 0x178) == 0) {
      *(undefined1 *)(param_1 + 0x1908) = 1;
      local_38 = *(uint *)PTR_DAT_04bb37e0;
      uStack_34 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      FUN_0252d8f0(local_5c,pbVar1);
      puVar4 = PTR_DAT_04bb43c0;
      lVar10 = *(long *)PTR_DAT_04bb43c0;
      uVar6 = FUN_0277d6c4(local_5c);
      lVar14 = *(long *)puVar4;
      if (lVar14 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          FUN_0252d8f0(auStack_88,pbVar1);
          FUN_01af3d60(&local_80,auStack_88,1);
          local_38 = (uint)local_80;
          uStack_34 = local_80._4_4_;
          lVar14 = *(long *)puVar4;
        }
      }
      *(ulong *)(param_1 + 0x1900) = CONCAT44(uStack_34,local_38);
      uVar6 = FUN_0277d6c4(&local_38);
      if (*(long *)puVar4 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          FUN_025279fc(pbVar1,*(undefined4 *)PTR_DAT_04bb3238);
          goto LAB_02490330;
        }
      }
      uVar8 = FUN_02546f34(pbVar1,*(undefined4 *)(param_1 + 0x230));
      if ((uVar8 & 1) == 0) {
        local_78 = local_78 & 0xffffffff00000000;
        local_80 = CONCAT35(local_80._5_3_,0x100000006);
        FUN_02374e74(param_1,&local_80);
      }
    }
    else {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
    }
  }
LAB_02490330:
  *(int *)(param_1 + 0xb34) = *(int *)(param_1 + 0xb34) + 1;
  return;
}

