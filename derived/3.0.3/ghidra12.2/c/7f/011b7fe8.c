
void FUN_011b7fe8(undefined8 param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  code *pcVar5;
  int iVar6;
  undefined1 auStack_60 [16];
  undefined **local_50;
  char *pcStack_48;
  
  FUN_011b9ab0(auStack_60,*param_2);
  uVar4 = FUN_011b9cd0(auStack_60);
  if ((uVar4 & 1) != 0) {
    pcStack_48 = (char *)FUN_011bb4f0(auStack_60);
    local_50 = &PTR_LAB_048f9770;
    if (*pcStack_48 == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0273f0a0(&local_50);
      uVar1 = uVar1 ^ 1;
    }
    pcStack_48 = (char *)FUN_011bb6c0(auStack_60);
    local_50 = &PTR_LAB_048f9770;
    if (*pcStack_48 != '\0') {
      uVar2 = FUN_0273f0a0(&local_50);
      uVar1 = uVar1 | uVar2;
    }
    if ((uVar1 & 1) == 0) {
      pcStack_48 = (char *)FUN_011bb890(auStack_60);
      local_50 = &PTR_LAB_048f9770;
      if ((((*pcStack_48 == '\0') || (iVar3 = FUN_02743000(&local_50), iVar3 == 0)) &&
          (((DAT_0537d558 == 0 ||
            ((*(long *)(DAT_0537d558 + 0x28) == 0 || (*(int *)(DAT_0537d558 + 0x80) != 1)))) ||
           ((uVar4 = FUN_011bba60(auStack_60), (uVar4 & 1) != 0 &&
            (((*param_2 != 0x14ab8403 && (*param_2 != -0xe7270da)) ||
             ((*(long *)(DAT_053762d8 + 0xb0) != 0 &&
              (0x15 < *(uint *)(*(long *)(DAT_053762d8 + 0xb0) + 4))))))))))) &&
         ((uVar4 = FUN_00884cf0(DAT_04cea100), (uVar4 & 1) == 0 ||
          (uVar4 = FUN_011bbc30(auStack_60), (uVar4 & 1) == 0)))) {
        iVar3 = FUN_011bbdf0(auStack_60);
        if (iVar3 != 0) {
          uVar4 = FUN_02b60460(1);
          if (iVar3 == 3) {
            if ((uVar4 & 1) == 0) {
              return;
            }
          }
          else if ((uVar4 & 1) != 0) {
            return;
          }
          local_50 = &PTR_LAB_048f9770;
          pcStack_48 = "BuiltTownOffice";
          uVar4 = FUN_0273f0a0(&local_50);
          iVar6 = 1;
          if ((uVar4 & 1) == 0) {
            iVar6 = 2;
          }
          if (iVar3 == iVar6) {
            return;
          }
        }
        iVar3 = FUN_011bbf90(auStack_60);
        if (iVar3 != 0) {
          uVar1 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
          if (1 < uVar1) {
            uVar1 = 0;
          }
          if (iVar3 == 2) {
            if (uVar1 != 1) {
              return;
            }
          }
          else {
            if (iVar3 != 1) {
              return;
            }
            if (uVar1 != 0) {
              return;
            }
          }
        }
        local_50._0_4_ = iVar3;
        local_50._0_4_ = FUN_011bc130(auStack_60);
        if ((int)local_50 != 1) {
          if (((int)local_50 == 0) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x78855454)) {
            return;
          }
          if ((int)local_50 == 3) {
            return;
          }
          if ((int)local_50 == 2 && *(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x78855454) {
            return;
          }
        }
        uVar4 = FUN_011bc2d0(auStack_60);
        if ((uVar4 & 1) == 0) {
          uVar1 = FUN_011ba8b0(auStack_60);
          local_50 = (undefined **)CONCAT44(local_50._4_4_,uVar1);
          if (2 < uVar1) {
            uVar1 = 0;
          }
          pcVar5 = *(code **)((long)&PTR_FUN_04986370 +
                             (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4));
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(param_1,*param_2);
          }
        }
      }
    }
  }
  return;
}

