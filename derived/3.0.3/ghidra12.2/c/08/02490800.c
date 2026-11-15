
/* WARNING: Removing unreachable block (ram,0x0249085c) */

void FUN_02490800(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  long lVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 local_48;
  char *local_40;
  undefined4 local_34;
  
  local_48._0_4_ = 4.2039e-45;
  puVar10 = &DAT_0548ed14 + (ulong)*(byte *)(param_1 + 0x1ee8) * 0x8c;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    puVar10 = &DAT_0548f0e8;
  }
  puVar10[0x54] = 1;
  lVar11 = *(long *)(param_1 + 0x68);
  *(undefined4 *)(puVar10 + 0x58) = *(undefined4 *)(lVar11 + 0x278);
  *(undefined4 *)(puVar10 + 0x5c) = *(undefined4 *)(lVar11 + 0x27c);
  *(undefined4 *)(puVar10 + 0x60) = *(undefined4 *)(lVar11 + 0x280);
  *(undefined4 *)(puVar10 + 100) = *(undefined4 *)(param_1 + 0x2b0);
  *(undefined4 *)(puVar10 + 0x68) = *(undefined4 *)(param_1 + 0x2b4);
  *(undefined4 *)(puVar10 + 0x6c) = *(undefined4 *)(param_1 + 0x2b8);
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar8 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar11 + 0x278) * 999.99994);
    iVar4 = (int)(*(float *)(lVar11 + 0x27c) * 4.0);
    if (0x7ffe < iVar4) {
      iVar4 = 0x7fff;
    }
    if (iVar4 < -0x7fff) {
      iVar4 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar4;
    fVar12 = *(float *)(lVar11 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar12 * 999.99994);
    uVar8 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar8;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar5 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar13 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar5 + 0x2ec) = uVar13;
    *(undefined1 *)((long)puVar5 + 0x2e5) = 1;
  }
  if (*(int *)(param_1 + 0x178) == 1) {
    local_48._4_4_ = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    puVar5 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_48._0_4_ = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_40 = (char *)CONCAT44(local_40._4_4_,(float)*(int *)(param_1 + 0x18eb) * 0.001);
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar5 + 0x4f,&local_48);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_34 = 10;
      local_48._0_4_ = 1.4013e-44;
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_02490ad4;
    }
    iVar4 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar7 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar7 = *(long **)(param_1 + 0x4c8);
    }
    lVar11 = (**(code **)(*plVar7 + 0x148))();
    iVar2 = iVar4 - *(int *)(lVar11 + 4);
    if (0xb60b5e < iVar2 + 0x5b05afU) {
      iVar9 = (int)((float)iVar2 * 0.1666667);
      iVar2 = 0x10000000;
      if (iVar9 < 1) {
        iVar2 = -0x5b05b0;
      }
      iVar4 = -0x10000000;
      if (0 < iVar9) {
        iVar4 = 0x5b05b0;
      }
      iVar1 = iVar9;
      if (iVar2 <= iVar9) {
        iVar1 = iVar2;
      }
      if (iVar4 <= iVar9) {
        iVar4 = iVar1;
      }
      iVar4 = iVar4 + *(int *)(lVar11 + 4);
    }
    *(int *)(lVar11 + 4) = iVar4;
  }
LAB_02490ad4:
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      lVar11 = DAT_052413b8;
      goto joined_r0x02490af8;
    }
    puVar5 = &DAT_05240280;
  }
  lVar11 = puVar5[0x227];
joined_r0x02490af8:
  if (lVar11 == 0) {
    uVar6 = FUN_0170a6d0(puVar5,0);
  }
  else {
    local_48._0_4_ = 1.4013e-45;
    uVar6 = FUN_0170a6d0(puVar5,*(uint *)(puVar5 + 0x2d3) >> 1 & 1);
  }
  if ((uVar6 & 1) != 0) {
    if (*(int *)(param_1 + 0x178) == 0) {
      local_48 = (undefined *)CONCAT44(local_48._4_4_,0xef);
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
      lVar11 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar11 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar11,0xef);
    }
    else {
      puVar5 = *(undefined8 **)(param_1 + 0x60);
      if (puVar5 == (undefined8 *)0x0) {
        if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          puVar5 = &DAT_05240280;
        }
        else {
          puVar5 = &DAT_05240280;
        }
      }
      puVar3 = PTR_DAT_04bb2020;
      local_48 = PTR_DAT_04bb2020 + 0x10;
      local_40 = "StartFrame";
      if (((puVar5[0x227] != 0) && (lVar11 = *(long *)(puVar5[0x227] + 0x78), lVar11 != 0)) &&
         (plVar7 = *(long **)(lVar11 + 0x48), plVar7 != (long *)0x0)) {
        (**(code **)(*plVar7 + 0x30))((float)*(int *)(param_1 + 0xb34),plVar7,&local_48);
      }
      puVar5 = *(undefined8 **)(param_1 + 0x60);
      if (puVar5 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(&DAT_052461c0);
          if (iVar4 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
          puVar5 = &DAT_05240280;
        }
        else {
          puVar5 = &DAT_05240280;
        }
      }
      local_48 = puVar3 + 0x10;
      local_40 = "CommonFireworkSetOff";
      FUN_017081d0(puVar5,&local_48,6,0,0);
    }
  }
  *(int *)(param_1 + 0xb34) = *(int *)(param_1 + 0xb34) + 1;
  return;
}

