
void FUN_0249c0dc(long param_1)

{
  short sVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined4 uVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_9c;
  float fStack_98;
  float local_94;
  undefined1 local_90;
  byte bStack_8f;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  undefined4 uStack_8c;
  char local_88;
  char local_86;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  
  *(undefined8 *)(param_1 + 0x398) = 0;
  local_68 = 0x3f800000;
  *(undefined2 *)(param_1 + 0x3a4) = 0x100;
  *(undefined4 *)(param_1 + 0x3a0) = 0x28;
  bVar10 = *(byte *)(param_1 + 0x1ee8);
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar10);
  local_64 = 1;
  local_70 = (char *)CONCAT44((float)*(int *)(param_1 + 0x1910) * 0.001,
                              (float)(int)*(short *)(param_1 + 0x190e) * 0.25);
  local_78 = (undefined *)CONCAT44((float)*(int *)(param_1 + 0x190a) * 0.001,(undefined4)local_78);
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_78,*(undefined4 *)(param_1 + 0x230),1);
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  iVar12 = *(int *)(param_1 + 0x190a);
  iVar15 = *(int *)(param_1 + 0x1910);
  fVar14 = *(float *)(*(long *)(param_1 + 0x68) + 0x278);
  fVar17 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar11 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  puVar2 = PTR_DAT_04bb2020;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  local_70 = "LogStickJumpDistanceCm";
  if (((puVar11[0x227] != 0) && (lVar9 = *(long *)(puVar11[0x227] + 0x78), lVar9 != 0)) &&
     (plVar5 = *(long **)(lVar9 + 0x48), plVar5 != (long *)0x0)) {
    fVar17 = fVar17 - (float)iVar15 * 0.001;
    fVar14 = fVar14 - (float)iVar12 * 0.001;
    (**(code **)(*plVar5 + 0x30))(SQRT(fVar17 * fVar17 + fVar14 * fVar14) * 10.0,plVar5,&local_78);
  }
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_052461c0);
      puVar11 = &DAT_05240280;
      if (iVar12 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  local_78 = puVar2 + 0x10;
  local_70 = "PlayerLongStick";
  FUN_017029bc(puVar11,&local_78,6,0,0);
  *(undefined4 *)(param_1 + 0x69c) = 0;
  *(undefined8 *)(param_1 + 0x694) = 0;
  *(undefined1 *)(param_1 + 0x6a2) = 0;
  *(undefined8 *)(param_1 + 0x1828) = 0x8000000000000000;
  lVar9 = *(long *)(param_1 + 0x68) + 0x278;
  *(undefined4 *)(param_1 + 0x1820) = 0;
  *(undefined4 *)(param_1 + 0x1830) = 0;
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x2a0) + 0xf0))(lVar6 + 0x2a0);
  fVar14 = *pfVar7;
  FUN_01261e40(fVar14 * 0.75,PTR_DAT_04bb5dc0,lVar9,0,0);
  FUN_01261e40(fVar14 * 0.75,PTR_DAT_04bbcd38,lVar9,0,1);
  uVar13 = *(undefined4 *)(param_1 + 0x230);
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_052461c0), iVar12 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar11 = &DAT_05240280;
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  lVar9 = FUN_017067d4(puVar11,uVar13,0);
  if (lVar9 != 0) {
    local_78 = puVar2 + 0x10;
    local_70 = "ToolLongStick_Jump";
    FUN_01752fd8(lVar9,&local_78,10,0,0);
  }
  plVar5 = *(long **)(param_1 + 0x60);
  if (plVar5 != (long *)0x0) {
    if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar12 != 0)) {
      *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37b8);
    }
    uVar8 = (**(code **)(*plVar5 + 0x10))(plVar5,PTR_DAT_04bb37b0);
    if ((uVar8 & 1) != 0) {
      (**(code **)(*plVar5 + 0x498))(plVar5,0);
    }
    puVar11 = *(undefined8 **)(param_1 + 0x60);
    if (puVar11 != (undefined8 *)0x0) goto LAB_0249c3c0;
  }
  if ((DAT_052461c0 & 1) == 0) {
    iVar12 = __cxa_guard_acquire(&DAT_052461c0);
    puVar11 = &DAT_05240280;
    if (iVar12 != 0) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
    }
  }
  else {
    puVar11 = &DAT_05240280;
  }
LAB_0249c3c0:
  local_7c = *(int *)(puVar11[0x290] + ((ulong)*(uint *)(puVar11[0x290] + 0x10) & 1) * 0x20 + 0x28);
  if (local_7c != 0) {
    uVar13 = *(undefined4 *)(param_1 + 0x230);
    local_90 = (undefined1)uVar13;
    bStack_8f = (byte)((uint)uVar13 >> 8);
    uStack_8e = (undefined1)((uint)uVar13 >> 0x10);
    uStack_8d = (undefined1)((uint)uVar13 >> 0x18);
    FUN_0071cb58(&local_78,&local_7c,&local_90,0);
    if ((((local_78 != (undefined *)0x0) && ((char)local_70 != '\0')) && (local_70._2_1_ != '\0'))
       && (*(int *)(local_78 + 0x15c) == 0xa0)) {
      local_9c = *(float *)(param_1 + 0x230);
      FUN_0071cb58(&local_90,&local_7c,&local_9c,0);
      plVar5 = (long *)CONCAT44(uStack_8c,
                                CONCAT13(uStack_8d,CONCAT12(uStack_8e,CONCAT11(bStack_8f,local_90)))
                               );
      if (plVar5 != (long *)0x0) {
        if (((*PTR_DAT_04bbe288 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbe288), iVar12 != 0)) {
          *(undefined **)PTR_DAT_04bbe280 = PTR_DAT_04bbe250 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbe288);
        }
        uVar8 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bbe280);
        if ((uVar8 & 1) == 0) {
          local_86 = '\0';
        }
      }
      lVar9 = CONCAT44(uStack_8c,
                       CONCAT13(uStack_8d,CONCAT12(uStack_8e,CONCAT11(bStack_8f,local_90))));
      if (((lVar9 != 0) && (local_88 != '\0')) && (local_86 != '\0')) {
        sVar1 = *(short *)(param_1 + 0x1904);
        fVar18 = (float)*(int *)(param_1 + 0x1900) * 0.001;
        fVar19 = (float)*(int *)(param_1 + 0x1906) * 0.001;
        uVar3 = FUN_006f0400((float)*(int *)(param_1 + 0x190a) * 0.001 - fVar18,
                             (float)*(int *)(param_1 + 0x1910) * 0.001 - fVar19);
        fVar14 = sinf((float)uVar3 * 1.4629181e-09);
        fVar17 = cosf((float)uVar3 * 1.4629181e-09);
        fVar16 = fVar14 * 0.0;
        local_9c = fVar18 + fVar16 * 0.0 + fVar17 * 0.0 + (fVar14 + 0.0) * 22.0;
        local_94 = fVar19 + (fVar17 * 0.0 * 0.0 - fVar14 * 0.0) + fVar17 * 22.0;
        fStack_98 = (float)(int)sVar1 * 0.25 +
                    (fVar16 * 0.0 + 1.0) * 0.0 + fVar17 * 0.0 * 0.0 + fVar16 * 22.0;
        fVar14 = fStack_98;
        uVar13 = FUN_01746d18(lVar9,&local_9c,0);
        lVar9 = *(long *)(param_1 + 0x80);
        if (lVar9 != 0) {
          *(undefined4 *)(lVar9 + 0x330) = uVar13;
          *(float *)(lVar9 + 0x334) = fVar14;
          *(float *)(lVar9 + 0x338) = fVar16;
        }
        *(undefined4 *)(param_1 + 0x2b0) = uVar13;
        *(float *)(param_1 + 0x2b4) = fVar14;
        *(float *)(param_1 + 0x2b8) = fVar16;
      }
    }
  }
  bStack_8f = *(byte *)(param_1 + 0x1ee8);
  if (7 < bStack_8f) {
    bStack_8f = 0xff;
  }
  local_90 = *(int *)(param_1 + 0x178) == 0;
  uStack_8e = 1;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_78 = puVar2 + 0x10;
    local_70 = "JumpWithPoleCount";
    FUN_0212944c(&local_78,1,(ulong)&local_90 | 1);
  }
  return;
}

