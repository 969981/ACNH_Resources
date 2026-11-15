
/* WARNING: Removing unreachable block (ram,0x024a8148) */

void FUN_024a7ff0(long param_1)

{
  int iVar1;
  uint *puVar2;
  long *plVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  float local_48;
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar10 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar7 + 0x278) * 999.99994);
    iVar6 = (int)(*(float *)(lVar7 + 0x27c) * 4.0);
    if (0x7ffe < iVar6) {
      iVar6 = 0x7fff;
    }
    if (iVar6 < -0x7fff) {
      iVar6 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar6;
    fVar12 = *(float *)(lVar7 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar12 * 999.99994);
    uVar10 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar10;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar9 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar13 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar9 + 0x2ec) = uVar13;
    *(undefined1 *)((long)puVar9 + 0x2e5) = 1;
  }
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar9 = &DAT_05240280;
      lVar7 = DAT_052413b8;
    }
    else {
      puVar9 = &DAT_05240280;
      lVar7 = DAT_052413b8;
    }
  }
  else {
    lVar7 = puVar9[0x227];
  }
  if (lVar7 != 0) {
    local_50._4_4_ = (undefined4)(local_50 >> 0x20);
    local_50 = CONCAT44(local_50._4_4_,0x14);
    uVar8 = FUN_03850890(lVar7,0x14,&local_70,*(uint *)(puVar9 + 0x2d3) >> 1 & 1);
    if ((uVar8 & 1) != 0) {
      sVar4 = *(short *)PTR_DAT_04bb6298;
      if (sVar4 != -1) {
        local_50 = CONCAT44(local_50._4_4_,1);
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
        if (0xff < (uint)(int)sVar4) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar2 >> 1 & 1) != 0) {
          FUN_019578d0(0);
        }
      }
      local_50 = 0xfffe;
      FUN_0277d4ac(&local_50);
      local_50 = *(ulong *)(param_1 + 0x1900);
      if ((local_50 & 0xffff) == 0xfffe) {
        uVar13 = *(undefined4 *)(param_1 + 0x230);
        puVar9 = *(undefined8 **)(param_1 + 0x60);
        if (puVar9 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar6 = __cxa_guard_acquire(&DAT_052461c0,uVar13);
            if (iVar6 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
            puVar9 = &DAT_05240280;
          }
          else {
            puVar9 = &DAT_05240280;
          }
        }
        lVar7 = FUN_017067d4(puVar9,uVar13,0);
        if (lVar7 != 0) {
          *(uint *)(lVar7 + 0x11a0) = *(uint *)(lVar7 + 0x11a0) & 0xfffffffe;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x178) == 1) {
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    local_50 = CONCAT44((float)(int)*(short *)(param_1 + 0x18e9) * 0.25,
                        (float)*(int *)(param_1 + 0x18e5) * 0.001);
    local_48 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,plVar3 + 0x4f,&local_50);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_50 = CONCAT44(local_50._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024a8388;
    }
    iVar6 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar7 = (**(code **)(*plVar3 + 0x148))();
    iVar5 = iVar6 - *(int *)(lVar7 + 4);
    if (0xb60b5e < iVar5 + 0x5b05afU) {
      iVar11 = (int)((float)iVar5 * 0.1666667);
      iVar5 = 0x10000000;
      if (iVar11 < 1) {
        iVar5 = -0x5b05b0;
      }
      iVar6 = -0x10000000;
      if (0 < iVar11) {
        iVar6 = 0x5b05b0;
      }
      iVar1 = iVar11;
      if (iVar5 <= iVar11) {
        iVar1 = iVar5;
      }
      if (iVar6 <= iVar11) {
        iVar6 = iVar1;
      }
      iVar6 = iVar6 + *(int *)(lVar7 + 4);
    }
    *(int *)(lVar7 + 4) = iVar6;
  }
LAB_024a8388:
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      lVar7 = DAT_052413b8;
      goto joined_r0x024a83ac;
    }
    puVar9 = &DAT_05240280;
  }
  lVar7 = puVar9[0x227];
joined_r0x024a83ac:
  if (lVar7 == 0) {
    uVar8 = FUN_0170a6d0(puVar9,0);
  }
  else {
    local_50._4_4_ = (undefined4)(local_50 >> 0x20);
    local_50 = CONCAT44(local_50._4_4_,1);
    uVar8 = FUN_0170a6d0(puVar9,*(uint *)(puVar9 + 0x2d3) >> 1 & 1);
  }
  if ((uVar8 & 1) != 0) {
    if (*(int *)(param_1 + 0x178) == 0) {
      uVar8 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar8 & 1) == 0) {
        local_48 = 0.0;
        local_50 = CONCAT35(local_50._5_3_,0x100000006);
        FUN_02374e74(param_1,&local_50);
      }
    }
    else {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
    }
  }
  return;
}

