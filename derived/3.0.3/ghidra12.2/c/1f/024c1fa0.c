
void FUN_024c1fa0(long param_1)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  byte bVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  undefined4 local_88 [2];
  float local_80;
  float fStack_7c;
  float local_78;
  float local_74;
  float fStack_70;
  float local_6c;
  undefined8 local_68;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_24;
  
  fStack_70 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  fStack_7c = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  local_74 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  local_6c = (float)*(int *)(param_1 + 0x1906) * 0.001;
  local_80 = (float)*(int *)(param_1 + 0x190a) * 0.001;
  local_78 = (float)*(int *)(param_1 + 0x1910) * 0.001;
  FUN_0257d568(0x4120cccd,param_1 + 0x6f8,&local_74,&local_80);
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar11 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  *(undefined1 *)((long)puVar9 + 0x12b5) = 0;
  iVar11 = (int)local_74;
  *(undefined4 *)(puVar9 + 0x255) = *(undefined4 *)((long)puVar9 + 0x12ac);
  bVar4 = local_74 < 0.0;
  bVar5 = local_6c < 0.0;
  iVar12 = (int)local_6c;
  local_68._4_4_ = (float)FUN_016e026c(0,&local_74,0,0);
  local_68._0_4_ = (float)(int)((int)((float)iVar11 / 5.0) - (uint)bVar4 & 0xfffffffe) * 5.0 + 5.0;
  local_60 = (float)(int)((int)((float)iVar12 / 5.0) - (uint)bVar5 & 0xfffffffe) * 5.0 + 5.0;
  FUN_0231ece4(param_1,&local_80,&local_68);
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_052461c0), iVar11 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar9 = &DAT_05240280;
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  local_68 = PTR_DAT_04bb2020 + 0x10;
  local_60 = 1.6045995e-36;
  local_5c = 0.0;
  FUN_017081d0(puVar9,&local_68,6,0,0);
  FUN_016dec40(param_1,&local_74,0,0,0,0,0);
  local_68._0_4_ = 0.0;
  *(uint *)(param_1 + 0x718) = *(uint *)(param_1 + 0x718) | 4;
  *(undefined1 *)(param_1 + 0x8f0) = 0;
  *(undefined1 *)(param_1 + 0x8c5) = 0;
  *(undefined1 *)(param_1 + 0x8e5) = 0;
  *(undefined4 *)(param_1 + 0x8f4) = 0;
  *(undefined2 *)(param_1 + 0x8f8) = 0;
  *(undefined4 *)(param_1 + 0x8b8) = *(undefined4 *)(param_1 + 0x8bc);
  *(undefined4 *)(param_1 + 0x8d8) = *(undefined4 *)(param_1 + 0x8dc);
  if (*(int *)(param_1 + 0x178) != 0) goto LAB_024c21d4;
  local_68._0_4_ = 9.18327e-41;
  local_68._4_4_ = 0.0;
  FUN_0277d4ac(&local_68);
  local_68._0_4_ = (float)*(undefined8 *)(param_1 + 0x1918);
  local_68._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x1918) >> 0x20);
  local_24 = 1;
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 == -1) {
LAB_024c22d4:
    bVar8 = *(byte *)(param_1 + 0x1ee8);
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    local_88[0] = CONCAT31(local_88[0]._1_3_,bVar8);
    FUN_02669430(local_88);
    uVar7 = FUN_025579bc(param_1 + 0x1ee8,&local_68,&local_24);
    uVar6 = *(uint *)(param_1 + 0x17cc);
    if ((uVar7 & 1) == 0) goto LAB_024c2314;
    uVar6 = uVar6 | 0x40;
  }
  else {
    local_88[0] = 0x15;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x15 & 1) == 0) goto LAB_024c22d4;
    uVar6 = *(uint *)(param_1 + 0x17cc);
LAB_024c2314:
    uVar6 = uVar6 & 0xffffffbf;
  }
  *(uint *)(param_1 + 0x17cc) = uVar6;
  if (*(int *)(param_1 + 0x178) == 0) {
    if ((*(uint *)(param_1 + 0x1da8) & 0xfffffffd) == 4) {
      puVar9 = *(undefined8 **)(param_1 + 0x1dc0);
      *(undefined4 *)(param_1 + 0x1da8) = 0;
      *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffd;
      if (puVar9 != &DAT_0407ebb1) {
        iVar11 = 0;
        if (*(int *)(param_1 + 0x1dc8) < 1) {
          iVar11 = *(int *)(param_1 + 0x1dc8) + -1;
        }
        memset(puVar9,0,(long)iVar11);
        *(undefined1 *)((long)puVar9 + (long)iVar11) = 0;
      }
      puVar9 = *(undefined8 **)(param_1 + 0x1e18);
      if (puVar9 != &DAT_0407ebb1) {
        iVar11 = 0;
        if (*(int *)(param_1 + 0x1e20) < 1) {
          iVar11 = *(int *)(param_1 + 0x1e20) + -1;
        }
        memset(puVar9,0,(long)iVar11);
        *(undefined1 *)((long)puVar9 + (long)iVar11) = 0;
      }
      *(undefined8 *)(param_1 + 0x1e68) = 0;
      *(undefined8 *)(param_1 + 0x1e78) = 0;
      *(undefined2 *)(param_1 + 0x1e70) = 0xff;
    }
    *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffb;
  }
  puVar3 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar3 == 0) {
LAB_024c2430:
    lVar10 = *(long *)PTR_DAT_04bbbc68;
    if (((lVar10 == 0) ||
        ((((*(long *)(lVar10 + 0xb0) == 0 || (*(long *)(*(long *)(lVar10 + 0xb0) + 8) == 0)) ||
          (*(long *)(lVar10 + 0x488) == 0)) ||
         ((*(long *)(*(long *)(lVar10 + 0x488) + 8) == 0 || (*(long *)(lVar10 + 0x2b0) == 0)))))) ||
       (*(long *)(*(long *)(lVar10 + 0x2b0) + 8) == 0)) goto LAB_024c21d4;
    uVar6 = FUN_0277d6c4(&local_68);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_024c21d4;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_024c2430;
  }
  FUN_023265c0(local_88,param_1,1);
LAB_024c21d4:
  bVar8 = *(byte *)(param_1 + 0x1ee8);
  *(undefined2 *)(param_1 + 0x3a4) = 0x100;
  *(undefined4 *)(param_1 + 0x3a0) = 6;
  *(undefined8 *)(param_1 + 0x398) = 0;
  local_5c = local_6c;
  local_68._4_4_ = local_74;
  local_60 = fStack_70;
  *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffcffff;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  local_68._0_4_ = (float)CONCAT31(local_68._1_3_,bVar8);
  local_58 = 0x3e99999a;
  local_54 = 1;
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_68,*(undefined4 *)(param_1 + 0x230),1);
  return;
}

