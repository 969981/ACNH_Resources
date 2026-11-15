
void FUN_024ed510(long param_1)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_38;
  
  FUN_023164ec(param_1,6);
  *(undefined1 *)(param_1 + 0x1916) = 1;
  lVar4 = *(long *)(param_1 + 0x68);
  fVar10 = *(float *)(lVar4 + 0x278) * 999.99994;
  *(int *)(param_1 + 0x1924) = (int)fVar10;
  iVar5 = (int)(*(float *)(lVar4 + 0x27c) * 4.0);
  if (0x7ffe < iVar5) {
    iVar5 = 0x7fff;
  }
  if (iVar5 < -0x7fff) {
    iVar5 = -0x8000;
  }
  *(short *)(param_1 + 0x1928) = (short)iVar5;
  fVar12 = *(float *)(lVar4 + 0x280) * 999.99994;
  fVar10 = (float)(int)fVar10 * 0.001;
  *(int *)(param_1 + 0x192a) = (int)fVar12;
  fVar12 = (float)(int)fVar12 * 0.001;
  iVar8 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
  iVar7 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  local_38 = 0x35ff;
  FUN_0277d4ac(&local_38);
  local_58 = 0;
  local_68 = PTR_DAT_04bbc1a0 + 0x10;
  local_60 = PTR_DAT_04bb2010 + 0x10;
  local_48 = 0;
  local_50 = local_60;
  FUN_0277f02c(&local_38,&local_68);
  plVar2 = *(long **)(param_1 + 0x68);
  iVar5 = (int)local_58 + iVar8;
  iVar3 = local_58._4_4_ + iVar7;
  iVar8 = (int)local_48 + iVar8;
  iVar7 = local_48._4_4_ + iVar7;
  uVar1 = *(int *)((long)plVar2 + 0x2b4) + 0x10000000U >> 0x1d;
  local_38 = CONCAT44(local_38._4_4_,uVar1);
  switch(uVar1) {
  case 0:
    goto LAB_024ed6f8;
  case 1:
    iVar5 = iVar5 + 2;
    iVar8 = iVar8 + 2;
    goto LAB_024ed6f8;
  case 2:
    iVar5 = iVar5 + 2;
    iVar8 = iVar8 + 2;
    break;
  case 3:
    iVar5 = iVar5 + 2;
    iVar3 = iVar3 + -2;
    iVar8 = iVar8 + 2;
    iVar7 = iVar7 + -2;
    break;
  case 4:
    iVar3 = iVar3 + -2;
    iVar7 = iVar7 + -2;
    break;
  case 5:
    iVar5 = iVar5 + -2;
    iVar3 = iVar3 + -2;
    iVar8 = iVar8 + -2;
    iVar7 = iVar7 + -2;
    break;
  case 6:
    iVar5 = iVar5 + -2;
    iVar8 = iVar8 + -2;
    break;
  case 7:
    iVar5 = iVar5 + -2;
    iVar8 = iVar8 + -2;
LAB_024ed6f8:
    iVar3 = iVar3 + 2;
    iVar7 = iVar7 + 2;
  }
  *(undefined2 *)(param_1 + 0x191c) = 0;
  *(int *)(param_1 + 0x1918) =
       (int)(((float)iVar5 * 5.0 + (float)iVar8 * 5.0 + 5.0) * 0.5 * 999.99994);
  *(int *)(param_1 + 0x191e) =
       (int)(((float)iVar3 * 5.0 + (float)iVar7 * 5.0 + 5.0) * 0.5 * 999.99994);
  uVar11 = *(undefined4 *)((long)plVar2 + 0x2b4);
  *(short *)(param_1 + 0x1922) = (short)((uint)uVar11 >> 0x10);
  local_68 = (undefined *)(CONCAT44(local_68._4_4_,uVar11) & 0xffffffffffff0000);
  (**(code **)(*plVar2 + 0x160))(plVar2,&local_68);
  plVar2 = *(long **)(param_1 + 0x60);
  if (plVar2 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      plVar2 = &DAT_05240280;
    }
    else {
      plVar2 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar2 + 0x4e0))(0);
  fVar10 = (float)*(int *)(param_1 + 0x192a) * 0.001;
  local_68 = (undefined *)
             CONCAT44((float)(int)*(short *)(param_1 + 0x1928) * 0.25,
                      (float)*(int *)(param_1 + 0x1924) * 0.001);
  lVar4 = *(long *)PTR_DAT_04bb2720;
  local_60._0_4_ = fVar10;
  if (lVar4 == 0) {
    puVar9 = &DAT_055c04a0;
  }
  else {
    puVar9 = &DAT_055c04a0;
    if (*(long *)(lVar4 + 0x330) != 0) {
      puVar9 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar4 + 0x338));
      iVar5 = FUN_006bd550(*puVar9,0);
      puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar9 = &DAT_055c04a0;
      }
    }
  }
  if (DAT_055c1b60 != &DAT_055c1b58) {
    puVar6 = DAT_055c1b60;
    do {
      if (*(int *)(puVar6 + -1) == *(int *)(puVar9 + 7)) break;
      puVar6 = (undefined8 *)puVar6[1];
    } while (puVar6 != &DAT_055c1b58);
  }
  local_38 = CONCAT35(local_38._5_3_,0x100000000);
  local_38 = CONCAT44(local_38._4_4_,0x10000);
  local_38 = CONCAT62(local_38._2_6_,*(undefined2 *)PTR_DAT_04bb6298);
  uVar11 = FUN_016e80f0(&local_68,0,&local_38);
  local_68 = (undefined *)CONCAT44(uVar11,(int)local_68);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x140))(*(long **)(param_1 + 0x68),&local_68,1);
  FUN_0230f780(param_1,0);
  local_68._0_4_ = (float)*(int *)(param_1 + 0x1924) * 0.001;
  local_60._0_4_ = (float)*(int *)(param_1 + 0x192a) * 0.001;
  local_68 = (undefined *)CONCAT44((float)(int)*(short *)(param_1 + 0x1928) * 0.25,(float)local_68);
  lVar4 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0xa8) == 0)) || (*(char *)(lVar4 + 0x11c8) != '\0')) {
    fVar10 = -491.0;
  }
  else {
    fVar10 = (float)FUN_0093a950(lVar4 + 0x28,&local_68,0);
    fVar10 = fVar10 + 9.0;
  }
  local_68 = (undefined *)CONCAT44(fVar10,(float)local_68);
  FUN_023343f0(param_1,&local_68,1);
  return;
}

