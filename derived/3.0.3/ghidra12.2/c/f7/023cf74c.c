
void FUN_023cf74c(long param_1)

{
  int iVar1;
  long *plVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  float *pfVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  undefined *local_78;
  int local_70;
  int iStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  byte local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    local_60 = (undefined8 *)((ulong)local_60 & 0xffffffff00000000);
    local_68 = PTR_DAT_04bbfe68 + 0x10;
    lVar10 = *(long *)PTR_DAT_04bb2720;
    if (lVar10 == 0) {
      puVar12 = &DAT_055c04a0;
    }
    else {
      puVar12 = &DAT_055c04a0;
      if (*(long *)(lVar10 + 0x330) != 0) {
        puVar12 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
        iVar5 = FUN_006bd550(*puVar12,0);
        puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar5 != 0x758f7eaf) {
          puVar12 = &DAT_055c04a0;
        }
      }
    }
    local_60 = (undefined8 *)CONCAT44(*(undefined4 *)(puVar12 + 7),(undefined4)local_60);
    local_58 = FUN_017baf44();
    local_58 = local_58 & 1;
    local_78 = PTR_DAT_04bb2010 + 0x10;
    fVar13 = (float)*(int *)(param_1 + 0x190c) * 0.001;
    fVar14 = (float)*(int *)(param_1 + 0x1912) * 0.001;
    local_70 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
    iStack_6c = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
    uVar6 = FUN_01a4fd6c(&local_68,0,&local_78,1);
    if ((uVar6 & 1) != 0) {
      puVar12 = &local_50;
      local_48 = 0;
      local_44 = 0;
      local_50 = 0x1000000000006;
      goto LAB_023cfaf8;
    }
  }
  local_68 = (undefined *)
             CONCAT44((float)(int)*(short *)(param_1 + 0x1904) * 0.25,
                      (float)*(int *)(param_1 + 0x1900) * 0.001);
  local_60 = (undefined8 *)CONCAT44(local_60._4_4_,(float)*(int *)(param_1 + 0x1906) * 0.001);
  lVar10 = FUN_0251e98c(1);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar10 + 0x1380) + 0xf0))(lVar10 + 0x1380);
  puVar12 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar12 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*puVar7,0x41200000,0x3e4ccccc,puVar12 + 0x4f,&local_68);
  uVar3 = *(ushort *)(param_1 + 0x190a);
  lVar10 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar10 + 0x13b0) + 0xf0))(lVar10 + 0x13b0);
  fVar13 = *pfVar8;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,10);
    local_50 = CONCAT44(local_50._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_023cf9cc;
  }
  else {
LAB_023cf9cc:
    iVar5 = (uint)uVar3 * 0x10000;
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar10 = (**(code **)(*plVar2 + 0x148))();
    iVar11 = iVar5 - *(int *)(lVar10 + 4);
    if (0xb60b5e < iVar11 + 0x5b05afU) {
      iVar4 = 0x15555560;
      iVar5 = -0x15555560;
      iVar11 = (int)(fVar13 * (float)iVar11);
      if (iVar11 < 1) {
        iVar4 = -0x5b05b0;
      }
      else {
        iVar5 = 0x5b05b0;
      }
      iVar1 = iVar11;
      if (iVar4 <= iVar11) {
        iVar1 = iVar4;
      }
      if (iVar5 <= iVar11) {
        iVar5 = iVar1;
      }
      iVar5 = iVar5 + *(int *)(lVar10 + 4);
    }
    *(int *)(lVar10 + 4) = iVar5;
    if (*(int *)(param_1 + 0x178) != 0) {
      local_50 = CONCAT44(local_50._4_4_,*(uint *)(param_1 + 0xce8));
      uVar9 = (uint)*(byte *)(param_1 + 0x1916);
      if (5 < uVar9) {
        uVar9 = 0;
      }
      local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar9);
      if (*(uint *)(param_1 + 0xce8) == uVar9) {
        return;
      }
      puVar12 = *(undefined8 **)(param_1 + 0x60);
      if (puVar12 == (undefined8 *)0x0) {
        if (((DAT_052461c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          puVar12 = &DAT_05240280;
        }
        else {
          puVar12 = &DAT_05240280;
        }
      }
      if ((uint)local_78 < 6) {
        local_60 = (undefined8 *)
                   (&PTR_s_PlayerFacePanelEmotionDefault_04a81340)[(ulong)local_78 & 0xffffffff];
      }
      else {
        local_60 = &DAT_0407ebb1;
      }
      local_68 = PTR_DAT_04bb2020 + 0x10;
      FUN_01707d90(puVar12,&local_68,6,6,0);
      *(uint *)(param_1 + 0xce8) = (uint)local_78;
      return;
    }
  }
  if (*(char *)(param_1 + 0x12f8) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x17ac) == '\0') {
    uVar6 = (ulong)local_68 >> 0x20;
    local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
    if ((*(uint *)(param_1 + 0xed0) & 1) != 0) {
      uVar9 = 0;
      if (*(int *)(param_1 + 0xce8) < 5) {
        uVar9 = *(int *)(param_1 + 0xce8) + 1;
      }
      local_68 = (undefined *)CONCAT44((int)uVar6,uVar9);
      puVar12 = *(undefined8 **)(param_1 + 0x60);
      *(char *)(param_1 + 0x1916) = (char)uVar9;
      if (puVar12 == (undefined8 *)0x0) {
        if (((DAT_052461c0 & 1) != 0) || (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 == 0)) {
          puVar12 = &DAT_05240280;
          goto LAB_023cfbbc;
        }
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (5 < uVar9) goto LAB_023cfbc4;
LAB_023cfc6c:
        local_60 = (undefined8 *)(&PTR_s_PlayerFacePanelEmotionDefault_04a81340)[uVar9];
      }
      else {
LAB_023cfbbc:
        if (uVar9 < 6) goto LAB_023cfc6c;
LAB_023cfbc4:
        local_60 = &DAT_0407ebb1;
      }
      local_68 = PTR_DAT_04bb2020 + 0x10;
      FUN_01707d90(puVar12,&local_68,6,6,0);
      *(uint *)(param_1 + 0xce8) = uVar9;
      if (*(char *)(param_1 + 0x17ac) != '\0') goto LAB_023cfad4;
    }
    local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
    if ((*(uint *)(param_1 + 0xed0) >> 2 & 1) == 0) goto LAB_023cfad4;
  }
  else {
LAB_023cfad4:
    uVar6 = FUN_02569820(param_1 + 0xec0);
    if ((uVar6 & 1) == 0) {
      return;
    }
  }
  puVar12 = &local_68;
  local_60 = (undefined8 *)((ulong)local_60 & 0xffffff0000000000);
  local_68 = (undefined *)0x1000000000006;
LAB_023cfaf8:
  FUN_02374564(param_1,puVar12);
  return;
}

