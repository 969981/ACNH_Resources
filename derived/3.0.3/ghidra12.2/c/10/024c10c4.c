
void FUN_024c10c4(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 local_9c;
  undefined4 uStack_98;
  byte local_94 [4];
  undefined8 local_90;
  char *local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_74;
  float fStack_70;
  float local_6c;
  undefined *local_68;
  char *pcStack_60;
  undefined8 local_58;
  undefined4 local_24;
  
  bVar2 = *(byte *)(param_1 + 0x1916);
  if (3 < bVar2) {
    bVar2 = 0;
  }
  cVar3 = *(char *)(param_1 + 0x1921);
  local_58 = 0xfffe;
  FUN_0277d4ac(&local_58);
  puVar1 = PTR_DAT_04bb43c0;
  local_58 = *(undefined8 *)(param_1 + 0x1918);
  if (cVar3 == '\0') {
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_58);
    if (*(long *)puVar1 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) goto LAB_024c1138;
    }
    lVar8 = *(long *)PTR_DAT_04bbbc68;
    if (((lVar8 != 0) &&
        ((((*(long *)(lVar8 + 0xb0) != 0 && (*(long *)(*(long *)(lVar8 + 0xb0) + 8) != 0)) &&
          (*(long *)(lVar8 + 0x488) != 0)) &&
         ((*(long *)(*(long *)(lVar8 + 0x488) + 8) != 0 && (*(long *)(lVar8 + 0x2b0) != 0)))))) &&
       (*(long *)(*(long *)(lVar8 + 0x2b0) + 8) != 0)) {
      FUN_0277d6c4(&local_58);
    }
  }
LAB_024c1138:
  fStack_70 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  fStack_7c = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  local_74 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  local_6c = (float)*(int *)(param_1 + 0x1906) * 0.001;
  local_80 = (float)*(int *)(param_1 + 0x190a) * 0.001;
  local_78 = (float)*(int *)(param_1 + 0x1910) * 0.001;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_60 = "PlayerScoopBury";
  local_68 = puVar1;
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
  local_88 = "ScoopBuryFromSwing";
  local_90 = puVar1;
  if (((puVar9[0x227] != 0) && (lVar8 = *(long *)(puVar9[0x227] + 0x78), lVar8 != 0)) &&
     (plVar7 = *(long **)(lVar8 + 0x48), plVar7 != (long *)0x0)) {
    (**(code **)(*plVar7 + 0x28))(plVar7,&local_90,bVar2 != 0 && bVar2 != 3);
  }
  FUN_0257d568(0x4120cccd,param_1 + 0x6f8,&local_74,&local_80);
  iVar11 = (int)local_74;
  bVar4 = local_74 < 0.0;
  bVar5 = local_6c < 0.0;
  iVar12 = (int)local_6c;
  uVar10 = FUN_016e026c(0,&local_74,0,0);
  local_90 = (undefined *)
             CONCAT44(uVar10,(float)(int)((int)((float)iVar11 / 5.0) - (uint)bVar4 & 0xfffffffe) *
                             5.0 + 5.0);
  local_88 = (char *)CONCAT44(local_88._4_4_,
                              (float)(int)((int)((float)iVar12 / 5.0) - (uint)bVar5 & 0xfffffffe) *
                              5.0 + 5.0);
  FUN_0231ece4(param_1,&local_80,&local_90);
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
  FUN_017081d0(puVar9,&local_68,6,0,0);
  FUN_016dec40(param_1,&local_74,0,0,0,0,0);
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  local_90 = (undefined *)0x0;
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
  FUN_01706fac(puVar9,&local_74,&local_90);
  local_24 = FUN_006f0400(local_74 - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                          local_6c - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
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
  FUN_017071b4(puVar9,&local_24,&local_90);
  local_94[0] = *(byte *)(param_1 + 0x1ee8);
  if (7 < local_94[0]) {
    local_94[0] = 0xff;
  }
  local_9c = (undefined4)local_58;
  uStack_98 = local_58._4_4_;
  FUN_0122b970(local_94,&local_74,&local_9c);
  return;
}

