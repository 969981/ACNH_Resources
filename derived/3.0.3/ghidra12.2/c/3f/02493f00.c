
void FUN_02493f00(long param_1)

{
  float *pfVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_4c;
  float local_44;
  
  iVar14 = *(int *)(param_1 + 0x1900);
  sVar4 = *(short *)(param_1 + 0x1904);
  cVar3 = *(char *)(param_1 + 0x191a);
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  uVar9 = (uint)*(ushort *)(param_1 + 0x1918);
  if (0x48 < uVar9) {
    uVar9 = 0;
  }
  fVar17 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  local_4c = CONCAT44((float)(int)sVar4 * 0.25,(float)iVar14 * 0.001);
  *(uint *)((long)puVar13 + 0x5e7c) = uVar9;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  local_44 = fVar17;
  if (lVar10 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar14 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar14 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  if (DAT_055c1b60 != &DAT_055c1b58) {
    uVar9 = 0;
    puVar12 = DAT_055c1b60;
    do {
      if (*(int *)(puVar12 + -1) == *(int *)(puVar13 + 7)) {
        if (((uVar9 ^ 0xffffffff) & 0xffff) != 0) goto LAB_02494064;
        break;
      }
      puVar12 = (undefined8 *)puVar12[1];
      uVar9 = uVar9 + 1;
    } while (puVar12 != &DAT_055c1b58);
  }
  uVar9 = 0;
LAB_02494064:
  local_60 = (undefined *)(CONCAT44(local_60._4_4_,uVar9) & 0xffffffff0000ffff);
  local_60._0_5_ = CONCAT14(1,(float)local_60);
  uVar15 = FUN_016e06d0(0,&local_4c,0,0,&local_60,0);
  local_4c = CONCAT44(uVar15,(undefined4)local_4c);
  local_50 = 1;
  local_60 = (undefined *)CONCAT44(uVar15,(undefined4)local_4c);
  local_58._0_4_ = local_44;
  local_58._4_4_ = 0x101;
  FUN_016dec40(param_1,&local_60,1,1,0,0,1);
  local_4c = 0;
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  local_60._4_4_ = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  local_60._0_4_ = (float)*(int *)(param_1 + 0x190a) * 0.001;
  local_58 = (char *)CONCAT44(local_58._4_4_,(float)*(int *)(param_1 + 0x1910) * 0.001);
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar14 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar13 = &DAT_05240280;
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  FUN_01706fac(puVar13,&local_60,&local_4c);
  uVar15 = FUN_006f0400((float)*(int *)(param_1 + 0x1900) * 0.001 -
                        *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                        (float)*(int *)(param_1 + 0x1906) * 0.001 -
                        *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  local_4c = CONCAT44(local_4c._4_4_,uVar15);
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  local_60 = (undefined *)((ulong)(uint)local_60._4_4_ << 0x20);
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar14 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar13 = &DAT_05240280;
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  FUN_017071b4(puVar13,&local_4c,&local_60);
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar14 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar13 = &DAT_05240280;
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  if (cVar3 == '\0') {
    local_58 = "PlayerLinecarAction";
  }
  else {
    local_58 = "PlayerLinecarDeleteAction";
  }
  local_60 = PTR_DAT_04bb2020 + 0x10;
  FUN_017081d0(puVar13,&local_60,6,1,0);
  *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xffdfffff;
  lVar10 = *(long *)(param_1 + 0x68);
  iVar2 = *(int *)(lVar10 + 0x2b4);
  fVar17 = (float)(int)((int)((float)(int)*(float *)(lVar10 + 0x278) / 10.0) -
                       (uint)(*(float *)(lVar10 + 0x278) < 0.0)) * 10.0;
  fVar19 = fVar17 + 2.5;
  fVar16 = (float)(int)((int)((float)(int)*(float *)(lVar10 + 0x280) / 10.0) -
                       (uint)(*(float *)(lVar10 + 0x280) < 0.0)) * 10.0;
  fVar18 = fVar16 + 2.5;
  fVar17 = fVar17 + 10.0 + -2.5;
  fVar16 = fVar16 + 10.0 + -2.5;
  iVar8 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
  iVar5 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  iVar6 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar7 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  iVar14 = iVar8;
  if (iVar6 <= iVar8) {
    iVar14 = iVar6;
  }
  if (iVar8 <= iVar6) {
    iVar8 = iVar6;
  }
  iVar6 = iVar5;
  if (iVar7 <= iVar5) {
    iVar6 = iVar7;
  }
  if (iVar5 <= iVar7) {
    iVar5 = iVar7;
  }
  local_60 = (undefined *)(ulong)(uint)(((float)iVar14 * 5.0 + (float)iVar8 * 5.0 + 5.0) * 0.5);
  local_58 = (char *)CONCAT44(local_58._4_4_,((float)iVar6 * 5.0 + (float)iVar5 * 5.0 + 5.0) * 0.5);
  fVar17 = (float)FUN_016e026c(0,&local_60,0,0);
  uVar11 = (ulong)((float)(iVar2 + 0x20000000U >> 0x1e) * 90.0 * 11930465.0);
  fVar16 = (float)((uint)uVar11 & 0xffffff);
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + (uVar11 >> 0x18 & 0xff) * 0x10);
  fVar18 = *pfVar1;
  fVar19 = pfVar1[1];
  fVar20 = pfVar1[2];
  fVar21 = pfVar1[3];
  *(float *)(param_1 + 0x2290) = fVar17 + 0.0;
  *(float *)(param_1 + 0x228c) = (float)local_60 - (fVar18 + fVar19 * fVar16 * 5.9604645e-08) * 0.01
  ;
  *(float *)(param_1 + 0x2294) = (float)local_58 - (fVar20 + fVar21 * fVar16 * 5.9604645e-08) * 0.01
  ;
  return;
}

