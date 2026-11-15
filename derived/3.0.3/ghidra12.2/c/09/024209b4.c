
/* WARNING: Removing unreachable block (ram,0x02420dc4) */

void FUN_024209b4(long param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  undefined *puVar8;
  float fVar9;
  long lVar10;
  float *pfVar11;
  undefined4 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  int iVar16;
  uint uVar17;
  long *plVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined4 uVar21;
  float fVar22;
  float local_6c;
  undefined4 local_68;
  float local_64;
  ulong local_60;
  undefined4 local_58;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    uVar6 = *(ushort *)(param_1 + 0x18ef);
    lVar10 = FUN_0251e98c(1);
    pfVar11 = (float *)(**(code **)(*(long *)(lVar10 + 0x13b0) + 0xf0))(lVar10 + 0x13b0);
    fVar22 = *pfVar11;
    if (*(int *)(param_1 + 0x178) == 0) {
      local_6c = 1.4013e-44;
      local_60 = CONCAT44(local_60._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_02420a70;
    }
    else {
LAB_02420a70:
      iVar20 = (uint)uVar6 * 0x10000;
      plVar18 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar18 = *(long **)(param_1 + 0x4c8);
      }
      lVar10 = (**(code **)(*plVar18 + 0x148))();
      iVar16 = iVar20 - *(int *)(lVar10 + 4);
      if (0xb60b5e < iVar16 + 0x5b05afU) {
        iVar7 = 0x15555560;
        iVar20 = -0x15555560;
        iVar16 = (int)(fVar22 * (float)iVar16);
        if (iVar16 < 1) {
          iVar7 = -0x5b05b0;
        }
        else {
          iVar20 = 0x5b05b0;
        }
        iVar1 = iVar16;
        if (iVar7 <= iVar16) {
          iVar1 = iVar7;
        }
        if (iVar20 <= iVar16) {
          iVar20 = iVar1;
        }
        iVar20 = iVar20 + *(int *)(lVar10 + 4);
      }
      *(int *)(lVar10 + 4) = iVar20;
    }
    iVar20 = *(int *)(param_1 + 0x18e5);
    iVar16 = *(int *)(param_1 + 0x18eb);
    lVar10 = FUN_0251e98c(1);
    puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar10 + 0x1380) + 0xf0))(lVar10 + 0x1380);
    local_68 = 0;
    puVar19 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar19 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_58 = *(undefined4 *)(puVar19 + 0x50);
    local_60 = puVar19[0x4f] & 0xffffffff;
    local_6c = (float)iVar20 * 0.001;
    local_64 = (float)iVar16 * 0.001;
    FUN_03eb4b60(*puVar12,0x41200000,0x3e4ccccc,&local_60,&local_6c);
    *(undefined4 *)(puVar19 + 0x4f) = (undefined4)local_60;
    *(undefined4 *)(puVar19 + 0x50) = local_58;
  }
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar17 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar10 + 0x278) * 999.99994);
    iVar20 = (int)(*(float *)(lVar10 + 0x27c) * 4.0);
    if (0x7ffe < iVar20) {
      iVar20 = 0x7fff;
    }
    if (iVar20 < -0x7fff) {
      iVar20 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar20;
    fVar22 = *(float *)(lVar10 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar22 * 999.99994);
    uVar17 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar17;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar19 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar19 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar21 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar19 + 0x2ec) = uVar21;
    *(undefined1 *)((long)puVar19 + 0x2e5) = 1;
    if (*(int *)(param_1 + 0x1810) == 2) {
      FUN_016f8230(param_1,1,0,0);
    }
  }
  cVar3 = *(char *)(param_1 + 0x1913);
  cVar4 = *(char *)(param_1 + 0x1912);
  puVar19 = *(undefined8 **)(param_1 + 0x60);
  if (puVar19 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar20 = __cxa_guard_acquire(&DAT_052461c0);
      puVar19 = &DAT_05240280;
      if (iVar20 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar19 = &DAT_05240280;
    }
  }
  lVar10 = puVar19[0x227];
  fVar22 = 1.4013e-45;
  if (cVar3 != '\0') {
    fVar22 = 2.8026e-45;
  }
  local_6c = fVar22;
  if (cVar3 == '\0' && cVar4 == '\0') {
    if (lVar10 == 0) {
      local_6c = 0.0;
    }
    else {
      local_6c = (float)(*(uint *)(puVar19 + 0x2d3) >> 1 & 1);
    }
  }
  local_60 = CONCAT44(local_60._4_4_,local_6c);
  if (lVar10 == 0) {
LAB_02420d44:
    uVar13 = 1;
    puVar19 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    uVar13 = FUN_03850368(lVar10,local_6c);
    fVar9 = local_6c;
    if ((((uVar13 & 1) != 0) || (puVar19[0x227] == 0)) ||
       (uVar13 = FUN_03850368(puVar19[0x227],local_6c), (uVar13 & 1) != 0)) goto LAB_02420d44;
    uVar13 = FUN_0384fca4(puVar19[0x227],fVar9);
    uVar13 = uVar13 & 0xffffffff;
    puVar19 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar19 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar20 = __cxa_guard_acquire(&DAT_052461c0);
      puVar19 = &DAT_05240280;
      if (iVar20 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar19 = &DAT_05240280;
    }
  }
  if (puVar19[0x227] == 0) {
    local_6c = 0.0;
joined_r0x02420d9c:
    if ((uVar13 & 1) != 0) goto LAB_02420df8;
LAB_02420da0:
    puVar19 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    local_6c = (float)(*(uint *)(puVar19 + 0x2d3) >> 1 & 1);
    local_60 = CONCAT44(local_60._4_4_,0x46);
    uVar14 = FUN_03850890(puVar19[0x227],0x46,0,local_6c);
    if ((uVar14 & 1) == 0) goto joined_r0x02420d9c;
    FUN_0221ffb0();
    if ((uVar13 & 1) == 0) goto LAB_02420da0;
LAB_02420df8:
    if (cVar3 != '\0' || cVar4 != '\0') {
      puVar19 = *(undefined8 **)(param_1 + 0x60);
      if (puVar19 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar20 = __cxa_guard_acquire(&DAT_052461c0);
          puVar19 = &DAT_05240280;
          if (iVar20 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar19 = &DAT_05240280;
        }
      }
      FUN_01702b70(puVar19,6,fVar22);
    }
    bVar5 = *(byte *)(param_1 + 0x1910);
    if (7 < bVar5) {
      bVar5 = 0;
    }
    if (*(int *)(param_1 + 0x178) == 0) {
      FUN_023752f4(param_1,bVar5,6);
      puVar19 = *(undefined8 **)(param_1 + 0x60);
    }
    else {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      if (bVar5 == 1) {
        FUN_0231b68c(param_1,6);
        puVar19 = *(undefined8 **)(param_1 + 0x60);
      }
      else {
        FUN_023164ec(param_1,6);
        puVar19 = *(undefined8 **)(param_1 + 0x60);
      }
    }
  }
  if (puVar19 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar20 = __cxa_guard_acquire(&DAT_052461c0);
      puVar19 = &DAT_05240280;
      if (iVar20 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar19 = &DAT_05240280;
    }
  }
  local_6c = 0.0;
  local_60 = CONCAT44(local_60._4_4_,4);
  if (puVar19[0x227] == 0) {
    return;
  }
  uVar13 = FUN_03850890(puVar19[0x227],4,0,0);
  puVar8 = PTR_DAT_04bb27c0;
  if ((uVar13 & 1) == 0) {
    return;
  }
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return;
  }
  if ((((uint)DAT_05407638 == 0) ||
      (plVar18 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                           ((ulong)((uint)DAT_05407638 >> 0x11) & 0x7ff8)), plVar18 == (long *)0x0))
     || (((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0 ||
         (*(uint *)(plVar18 + 0x46) != (uint)DAT_05407638)))) {
    plVar18 = (long *)0x0;
  }
  if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
    plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar8;
    iVar20 = (**(code **)(*plVar15 + 0x60))();
    if (iVar20 < 0x11) {
      uVar17 = 1;
      goto joined_r0x02420f78;
    }
    if (*(uint *)(lVar10 + 0x5e8) < 5) {
      uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02420f78;
    }
  }
  uVar17 = 0;
joined_r0x02420f78:
  if (plVar18 != (long *)0x0) {
    lVar10 = plVar18[0x2a];
    if (((*PTR_DAT_04bc2240 & 1) == 0) &&
       (iVar20 = __cxa_guard_acquire(PTR_DAT_04bc2240), iVar20 != 0)) {
      *(undefined **)PTR_DAT_04bc2238 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc2240);
    }
    uVar13 = (**(code **)(*plVar18 + 0x20))(plVar18,PTR_DAT_04bc2238);
    uVar2 = 0;
    if ((int)lVar10 == 1) {
      uVar2 = uVar17;
    }
    if (((uVar13 & 1) != 0) && (uVar2 != 0)) {
      lVar10 = 0;
      if (plVar18[0xe] != 0) {
        lVar10 = plVar18[0xe] + 0x278;
      }
      FUN_03ebb160(lVar10,0);
    }
  }
  return;
}

