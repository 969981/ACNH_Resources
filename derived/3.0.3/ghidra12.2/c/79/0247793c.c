
/* WARNING: Removing unreachable block (ram,0x02477a98) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0247793c(long param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  float *pfVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  uint local_48;
  undefined4 local_44;
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar5 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar6 + 0x278) * 999.99994);
    iVar2 = (int)(*(float *)(lVar6 + 0x27c) * 4.0);
    if (0x7ffe < iVar2) {
      iVar2 = 0x7fff;
    }
    if (iVar2 < -0x7fff) {
      iVar2 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar2;
    fVar9 = *(float *)(lVar6 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar9 * 999.99994);
    uVar5 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar5;
  cVar1 = *(char *)(param_1 + 0x190b);
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar7 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar8 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar7 + 0x2ec) = uVar8;
    *(undefined1 *)((long)puVar7 + 0x2e5) = 1;
  }
  if (*(char *)(param_1 + 0x945) == '\0') {
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    local_58 = 0;
    local_50 = (long *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    if (puVar7 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0);
        puVar7 = &DAT_05240280;
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar7 = &DAT_05240280;
      }
    }
    if (puVar7[0x227] == 0) {
      local_48 = 0;
    }
    else {
      local_48 = *(uint *)(puVar7 + 0x2d3) >> 1 & 1;
      local_44 = 0x3c;
      uVar3 = FUN_03850a90(puVar7[0x227],0x3c,&local_68,local_48);
      if ((uVar3 & 1) != 0) {
        if ((local_50 == (long *)0x0) || (lVar6 = *local_50, lVar6 == 0)) {
          uVar5 = 1;
        }
        else {
          fVar9 = *(float *)(lVar6 + 0x18);
          if (fVar9 < 0.0) {
            fVar9 = *(float *)(local_50[1] + 0xc);
          }
          uVar5 = (uint)(fVar9 - *(float *)(lVar6 + 0x14));
          if (uVar5 < 2) {
            uVar5 = 1;
          }
        }
        *(undefined4 *)(param_1 + 0x938) = 0;
        *(undefined1 *)(param_1 + 0x945) = 1;
        *(byte *)(param_1 + 0x944) = (byte)(uVar5 >> 0x1f);
        *(uint *)(param_1 + 0x940) = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
        *(uint *)(param_1 + 0x93c) = uVar5 & (int)uVar5 >> 0x1f;
        goto LAB_02477b2c;
      }
    }
    if (*(char *)(param_1 + 0x945) != '\0') goto LAB_02477b2c;
  }
  else {
LAB_02477b2c:
    uVar8 = (**(code **)(*(long *)(param_1 + 0x930) + (ulong)*(byte *)(param_1 + 0x944) * 8))
                      (param_1 + 0x930);
    *(undefined4 *)(param_1 + 0x938) = uVar8;
    if (*(char *)(param_1 + 0x945) != '\0') {
      iVar2 = *(int *)(param_1 + 0x940);
      fVar9 = 1.0;
      if (iVar2 != 0) {
        fVar9 = 1.0;
        if (*(int *)(param_1 + 0x938) < iVar2) {
          fVar10 = (float)*(int *)(param_1 + 0x938) / (float)iVar2;
          fVar11 = 1.0;
          if (fVar10 <= 1.0) {
            fVar11 = fVar10;
          }
          fVar9 = 0.0;
          if (0.0 <= fVar10) {
            fVar9 = fVar11;
          }
        }
      }
      if (cVar1 == '\0') {
        FUN_02472404(1.0 - fVar9,param_1);
        puVar7 = *(undefined8 **)(param_1 + 0x60);
        goto joined_r0x02477c14;
      }
      lVar6 = FUN_0251e98c(1);
      pfVar4 = (float *)(**(code **)(*(long *)(lVar6 + 0x2860) + 0xf0))(lVar6 + 0x2860);
      fVar11 = *pfVar4;
      lVar6 = FUN_0251e98c(1);
      pfVar4 = (float *)(**(code **)(*(long *)(lVar6 + 0x2860) + 0xf0))(lVar6 + 0x2860);
      FUN_0244d1b8(fVar11 + (1.0 - fVar9) * (1.0 - *pfVar4),param_1);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x60);
joined_r0x02477c14:
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar7 = &DAT_05240280;
      lVar6 = DAT_052413b8;
    }
    else {
      puVar7 = &DAT_05240280;
      lVar6 = DAT_052413b8;
    }
  }
  else {
    lVar6 = puVar7[0x227];
  }
  if (lVar6 == 0) {
    uVar3 = FUN_0170a6d0(puVar7,0);
  }
  else {
    local_68._4_4_ = (undefined4)((ulong)local_68 >> 0x20);
    local_68 = CONCAT44(local_68._4_4_,1);
    uVar3 = FUN_0170a6d0(puVar7,*(uint *)(puVar7 + 0x2d3) >> 1 & 1);
  }
  if (((((uVar3 & 1) != 0) || (*(int *)(param_1 + 0x1810) == 4)) &&
      (*(char *)(param_1 + 0x945) != '\0')) &&
     (*(int *)(param_1 + 0x940) <= *(int *)(param_1 + 0x938))) {
    if (*(char *)(param_1 + 0x190b) == '\0') {
      FUN_02472404(0,param_1);
      puVar7 = *(undefined8 **)(param_1 + 0x60);
    }
    else {
      FUN_0244d1b8(0,param_1);
      puVar7 = *(undefined8 **)(param_1 + 0x60);
    }
    if (puVar7 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar2 != 0) {
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
    FUN_01707f58(puVar7,6,1,0);
    if (*(int *)(param_1 + 0x178) == 0) {
      uVar5 = (uint)*(byte *)(param_1 + 0x190a);
      if (0xd < uVar5) {
        uVar5 = 0;
      }
      local_68 = CONCAT44(local_68._4_4_,uVar5);
      FUN_024771a8(param_1,&local_68);
    }
    else {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
    }
  }
  return;
}

