
void FUN_023bdbd4(long param_1)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int local_6c;
  undefined **local_68;
  short *psStack_60;
  int **local_58;
  char *pcStack_50;
  char local_48 [4];
  short local_44 [2];
  int *local_28;
  
  FUN_023164ec(param_1,6);
  sVar2 = *(short *)(param_1 + 0x190d);
  if (sVar2 != 0) {
    local_28 = &local_6c;
    psStack_60 = local_44;
    local_6c = 0;
    local_68 = &PTR_LAB_04aa63b8;
    local_58 = &local_28;
    pcStack_50 = local_48;
    local_48[0] = '\0';
    local_44[0] = sVar2;
    uVar4 = FUN_02b735a0(&local_68);
    puVar1 = PTR_DAT_04bb2020;
    uVar8 = 0;
    if ((local_48[0] != '\0') && (local_6c == 0x1e)) {
      local_68 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      psStack_60 = (short *)0x40a7187;
      iVar3 = FUN_02757a80(uVar4,&local_68);
      if (iVar3 == 0) {
        puVar9 = *(undefined8 **)(param_1 + 0x60);
        if (puVar9 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar3 = __cxa_guard_acquire(&DAT_052461c0);
            puVar9 = &DAT_05240280;
            if (iVar3 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar9 = &DAT_05240280;
          }
        }
        psStack_60 = (short *)0x4081dbf;
        if (((puVar9[0x227] != 0) && (lVar7 = *(long *)(puVar9[0x227] + 0x78), lVar7 != 0)) &&
           (plVar5 = *(long **)(lVar7 + 0x48), plVar5 != (long *)0x0)) {
          local_68 = (undefined **)(puVar1 + 0x10);
          (**(code **)(*plVar5 + 0x28))(plVar5,&local_68,1);
        }
        psStack_60 = (short *)0x40a7187;
        uVar8 = 1;
        local_68 = (undefined **)(puVar1 + 0x10);
        FUN_02757de8(param_1 + 0x1ee8,&local_68,1);
      }
      else {
        uVar8 = 0;
      }
    }
    if (((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x17df00c3) &&
        (*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0)) &&
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)) {
      puVar9 = *(undefined8 **)(param_1 + 0x60);
      if (puVar9 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_052461c0);
          puVar9 = &DAT_05240280;
          if (iVar3 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar9 = &DAT_05240280;
        }
      }
      local_68 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      psStack_60 = (short *)0x4081dbf;
      if (((puVar9[0x227] != 0) && (lVar7 = *(long *)(puVar9[0x227] + 0x78), lVar7 != 0)) &&
         (plVar5 = *(long **)(lVar7 + 0x48), plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,&local_68,1);
      }
      uVar8 = 1;
    }
    uVar6 = FUN_02b63ee0(sVar2,*(undefined4 *)(param_1 + 0x230),uVar8);
    if ((uVar6 & 1) != 0) goto LAB_023bddb0;
  }
  FUN_023bd4e0(param_1);
LAB_023bddb0:
  plVar5 = *(long **)(param_1 + 0x60);
  if (plVar5 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      plVar5 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar5 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar5 + 0x4e0))(0x3f800000,plVar5);
  if ((*(int *)(param_1 + 0x178) == 0) && (sVar2 = *(short *)PTR_DAT_04bb6298, sVar2 != -1)) {
    local_68 = (undefined **)CONCAT44(local_68._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
    if (0xff < (uint)(int)sVar2) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      FUN_02a88fbc(*(long *)PTR_DAT_04bb5008 + 0x26718,1);
    }
  }
  return;
}

