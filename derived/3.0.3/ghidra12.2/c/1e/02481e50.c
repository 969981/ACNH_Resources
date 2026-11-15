
/* WARNING: Removing unreachable block (ram,0x02481fa8) */

void FUN_02481e50(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  float local_48;
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar8 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar5 + 0x278) * 999.99994);
    iVar4 = (int)(*(float *)(lVar5 + 0x27c) * 4.0);
    if (0x7ffe < iVar4) {
      iVar4 = 0x7fff;
    }
    if (iVar4 < -0x7fff) {
      iVar4 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar4;
    fVar10 = *(float *)(lVar5 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar10 * 999.99994);
    uVar8 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar8;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar7 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar11 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar7 + 0x2ec) = uVar11;
    *(undefined1 *)((long)puVar7 + 0x2e5) = 1;
  }
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar7 = &DAT_05240280;
      lVar5 = DAT_052413b8;
    }
    else {
      puVar7 = &DAT_05240280;
      lVar5 = DAT_052413b8;
    }
  }
  else {
    lVar5 = puVar7[0x227];
  }
  if (lVar5 != 0) {
    local_50._4_4_ = (undefined4)(local_50 >> 0x20);
    local_50 = CONCAT44(local_50._4_4_,0x14);
    uVar6 = FUN_03850890(lVar5,0x14,&local_70,*(uint *)(puVar7 + 0x2d3) >> 1 & 1);
    if ((uVar6 & 1) != 0) {
      local_50 = 0xfffe;
      FUN_0277d4ac(&local_50);
      local_50 = *(ulong *)(param_1 + 0x1900);
      if ((local_50 & 0xffff) == 0xfffe) {
        uVar11 = *(undefined4 *)(param_1 + 0x230);
        puVar7 = *(undefined8 **)(param_1 + 0x60);
        if (puVar7 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar4 = __cxa_guard_acquire(&DAT_052461c0,uVar11);
            if (iVar4 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
            puVar7 = &DAT_05240280;
          }
          else {
            puVar7 = &DAT_05240280;
          }
        }
        lVar5 = FUN_017067d4(puVar7,uVar11,0);
        if (lVar5 != 0) {
          *(uint *)(lVar5 + 0x11a0) = *(uint *)(lVar5 + 0x11a0) & 0xfffffffe;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x178) == 1) {
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    local_50 = CONCAT44((float)(int)*(short *)(param_1 + 0x18e9) * 0.25,
                        (float)*(int *)(param_1 + 0x18e5) * 0.001);
    local_48 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,plVar2 + 0x4f,&local_50);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_50 = CONCAT44(local_50._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_02482190;
    }
    iVar4 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar5 = (**(code **)(*plVar2 + 0x148))();
    iVar3 = iVar4 - *(int *)(lVar5 + 4);
    if (0xb60b5e < iVar3 + 0x5b05afU) {
      iVar9 = (int)((float)iVar3 * 0.1666667);
      iVar3 = 0x10000000;
      if (iVar9 < 1) {
        iVar3 = -0x5b05b0;
      }
      iVar4 = -0x10000000;
      if (0 < iVar9) {
        iVar4 = 0x5b05b0;
      }
      iVar1 = iVar9;
      if (iVar3 <= iVar9) {
        iVar1 = iVar3;
      }
      if (iVar4 <= iVar9) {
        iVar4 = iVar1;
      }
      iVar4 = iVar4 + *(int *)(lVar5 + 4);
    }
    *(int *)(lVar5 + 4) = iVar4;
  }
LAB_02482190:
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      lVar5 = DAT_052413b8;
      goto joined_r0x024821b4;
    }
    puVar7 = &DAT_05240280;
  }
  lVar5 = puVar7[0x227];
joined_r0x024821b4:
  if (lVar5 == 0) {
    uVar6 = FUN_0170a6d0(puVar7,0);
  }
  else {
    local_50._4_4_ = (undefined4)(local_50 >> 0x20);
    local_50 = CONCAT44(local_50._4_4_,1);
    uVar6 = FUN_0170a6d0(puVar7,*(uint *)(puVar7 + 0x2d3) >> 1 & 1);
  }
  if ((uVar6 & 1) != 0) {
    if (*(int *)(param_1 + 0x178) == 0) {
      uVar6 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar6 & 1) == 0) {
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

