
undefined8 FUN_028367f0(int *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  undefined **local_210 [4];
  undefined **local_1f0;
  long lStack_1e8;
  undefined *local_1e0;
  long lStack_1d8;
  int *local_1d0;
  undefined4 local_1c8;
  undefined *local_1c0;
  undefined1 *puStack_1b8;
  undefined *local_1b0;
  char *pcStack_1a8;
  undefined *local_1a0;
  undefined *puStack_198;
  char *local_190;
  undefined *local_188;
  undefined *puStack_180;
  undefined1 *local_178;
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  undefined *local_168;
  char *local_160;
  int local_158;
  char local_154 [127];
  undefined1 local_d5;
  undefined *local_d0;
  undefined1 *local_c8;
  undefined4 local_c0;
  undefined1 local_bc [127];
  undefined1 local_3d;
  char local_38 [4];
  int local_34;
  
  puVar1 = PTR_DAT_04bb46a8;
  if (param_1 == (int *)0x0) {
    lVar4 = *(long *)PTR_DAT_04bb46b0;
    if (*(long *)PTR_DAT_04bb46a8 == 0 || lVar4 == 0) {
      return 0;
    }
LAB_02836850:
    lVar4 = (**(code **)(*(long *)**(undefined8 **)(lVar4 + 0x10) + 0x10))();
    if ((lVar4 != 0) &&
       ((*(long *)PTR_DAT_04bb46b0 != 0 &&
        (piVar6 = *(int **)(*(long *)PTR_DAT_04bb46b0 + 0x50), piVar6 != (int *)0x0)))) {
      local_3d = 0;
      local_c0 = 0x80;
      local_158 = 0x80;
      local_c8 = local_bc;
      local_160 = local_154;
      local_d5 = 0;
      local_154[0] = '\0';
      local_168 = PTR_DAT_04bb2d88 + 0x10;
      local_bc[0] = 0;
      local_d0 = local_168;
      FUN_02701270(&local_d0,0);
      *local_160 = '\0';
      if (*local_160 != '\0') {
        (**(code **)(local_168 + 0x18))(&local_168);
        lVar5 = 0;
        do {
          if (local_160[lVar5] == '\0') goto LAB_0283696c;
          if (local_160[lVar5 + 1] == '\0') {
            lVar5 = lVar5 + 1;
            goto LAB_0283696c;
          }
          if (local_160[lVar5 + 2] == '\0') {
            lVar5 = lVar5 + 2;
            goto LAB_0283696c;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        lVar5 = 0;
LAB_0283696c:
        if ((int)lVar5 < local_158 + -1) {
          (local_160 + (int)lVar5)[0] = '/';
          (local_160 + (int)lVar5)[1] = '\0';
        }
      }
      FUN_027014c0(&local_168,0);
      local_178 = local_c8;
      local_190 = local_160;
      local_1c0 = PTR_DAT_04bb2020 + 0x10;
      local_1a0 = PTR_DAT_04bc37c0 + 0x10;
      puStack_1b8 = local_c8;
      pcStack_1a8 = local_160;
      local_1c8 = 0x9b0e90;
      local_1f0 = &PTR_LAB_04a91918;
      local_1e0 = PTR_DAT_04bc37b8 + 0x10;
      local_210[0] = &PTR_LAB_04a91978;
      local_16c[0] = 0;
      local_170[0] = 0;
      local_34 = 0;
      local_38[0] = '\0';
      lStack_1e8 = lVar4;
      lStack_1d8 = lVar4;
      local_1d0 = piVar6;
      local_1b0 = local_1c0;
      puStack_198 = local_1c0;
      local_188 = local_1a0;
      puStack_180 = local_1c0;
      FUN_0283bffc(&local_34,local_38,local_16c,local_170,&local_188,&local_1a0,&local_1e0,
                   &local_1f0,local_210,0x9b0e90);
      if (local_38[0] == '\0') {
LAB_02836ad4:
        if (local_34 != 1) goto LAB_02836b00;
        FUN_027b3a34(lVar4);
        local_34 = 1;
        uVar2 = 1;
        uVar3 = 1;
      }
      else {
        if (*(short *)PTR_DAT_04bb21a8 == 999) {
          if (*(short *)((long)piVar6 + 0xe) == 999) goto LAB_02836a7c;
        }
        else if (*(short *)((long)piVar6 + 0xe) != 999) {
LAB_02836a7c:
          if ((((piVar6[1] == 0xa0028) && (*piVar6 == 0xa0002)) && (piVar6[2] == 2)) &&
             ((short)piVar6[3] == 2)) goto LAB_02836ad4;
        }
        if (((piVar6[1] == 0xa0028) && (piVar6[2] == 2)) && ((short)piVar6[3] == 2))
        goto LAB_02836ad4;
        local_34 = 6;
LAB_02836b00:
        uVar2 = 0;
        uVar3 = 0;
      }
      if (param_1 == (int *)0x0) {
        return uVar3;
      }
      goto LAB_02836940;
    }
    if (param_1 == (int *)0x0) {
      return 0;
    }
  }
  else {
    *param_1 = 0;
    if ((*(long *)puVar1 != 0) && (lVar4 = *(long *)PTR_DAT_04bb46b0, lVar4 != 0))
    goto LAB_02836850;
  }
  local_34 = 7;
  uVar2 = 0;
LAB_02836940:
  *param_1 = local_34;
  return uVar2;
}

