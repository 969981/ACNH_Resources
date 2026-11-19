
undefined8 FUN_03851200(long param_1,long *param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  long *plVar11;
  undefined **ppuVar12;
  long lVar13;
  char *pcVar14;
  undefined4 uVar15;
  undefined *local_178;
  undefined1 *puStack_170;
  undefined4 local_168;
  undefined1 local_164 [255];
  undefined1 local_65;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  if (*(long *)(param_1 + 0xa0) == 0) {
    return 0;
  }
  lVar13 = *(long *)(*(long *)(param_1 + 0xa0) + 0x50);
  if (lVar13 == 0) {
    return 0;
  }
  lVar8 = *(long *)(param_1 + 0x78);
  if (lVar8 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(lVar8 + 0x18);
  }
  uVar1 = param_3;
  if (uVar6 <= param_3) {
    uVar1 = 0;
  }
  if (*(char *)(param_1 + 0xae) == '\0') {
    if (*(uint *)(param_1 + 0x80) <= uVar1) {
      uVar1 = 0;
    }
    lVar8 = *(long *)(param_1 + 0x88) + (long)(int)uVar1 * 0xe8;
    plVar11 = (long *)(lVar8 + 0x60);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcVar14 = *(char **)(lVar8 + 0x68);
joined_r0x038512cc:
    if (pcVar14 == (char *)0x0) {
      return 0;
    }
    cVar2 = *pcVar14;
  }
  else {
    if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar8 + 0x18))) {
      pcVar14 = *(char **)(*(long *)(*(long *)(lVar8 + 0x20) + (ulong)uVar1 * 0x10) + 0x10);
      goto joined_r0x038512cc;
    }
    local_65 = 0;
    local_168 = 0x100;
    puStack_170 = local_164;
    local_164[0] = 0;
    local_178 = PTR_DAT_04bb21f8 + 0x10;
    lVar8 = *(long *)(*(long *)(*(long *)(lVar8 + 0x50) + 0x10) + 8);
    FUN_038d1270(&local_178,"%s.as",lVar8 + *(int *)(lVar8 + 0x24) + (long)*(int *)(lVar8 + 8));
    pcVar14 = "";
    cVar2 = (char)DAT_0407ebb1;
  }
  if (cVar2 == '\0') {
LAB_038513d0:
    uVar6 = 0xffffffff;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x78);
    if (lVar8 != 0) {
      if (((int)param_3 < 0) || (*(int *)(lVar8 + 0x18) <= (int)param_3)) {
        local_65 = 0;
        local_168 = 0x100;
        puStack_170 = local_164;
        local_164[0] = 0;
        local_178 = PTR_DAT_04bb21f8 + 0x10;
        lVar8 = *(long *)(*(long *)(*(long *)(lVar8 + 0x50) + 0x10) + 8);
        FUN_038d1270(&local_178,"%s.as",lVar8 + *(int *)(lVar8 + 0x24) + (long)*(int *)(lVar8 + 8));
      }
      else {
        uVar3 = *(ushort *)(*(long *)(*(long *)(lVar8 + 0x20) + (ulong)param_3 * 0x10) + 0xb0);
        uVar6 = (uint)uVar3;
        if (-1 < (short)uVar3) goto LAB_038513d4;
      }
      goto LAB_038513d0;
    }
    uVar6 = 0;
  }
LAB_038513d4:
  uVar1 = param_3;
  if (*(uint *)(param_1 + 0x80) <= param_3) {
    uVar1 = 0;
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x88) + (long)(int)uVar1 * 0xe8);
  (**(code **)(*plVar11 + 0x18))(plVar11);
  *param_2 = plVar11[1];
  param_2[1] = (long)pcVar14;
  uVar1 = param_3;
  if (*(uint *)(param_1 + 0x80) <= param_3) {
    uVar1 = 0;
  }
  param_2[3] = *(long *)(*(long *)(param_1 + 0x88) + (long)(int)uVar1 * 0xe8 + 0xd0);
  if (-1 < (int)uVar6) {
    lVar8 = *(long *)(*(long *)(param_1 + 0xa0) + 0x50);
    uVar1 = uVar6;
    if (*(uint *)(lVar8 + 0x38) <= uVar6) {
      uVar1 = 0;
    }
    uVar1 = *(uint *)(*(long *)(lVar8 + 0x40) + (ulong)uVar1 * 0xb8);
    if ((uVar1 < 0xffff0000) && ((uVar1 & 0xffff) != 0xffff)) {
      uVar1 = (int)uVar1 >> 0x10;
      if (*(uint *)(lVar8 + 0x80) <= uVar1) {
        uVar1 = 0;
      }
      lVar8 = **(long **)(*(long *)(lVar8 + 0x88) + (long)(int)uVar1 * 0x28);
      if (lVar8 != 0) {
        param_2[4] = *(long *)(lVar8 + 8) + 2;
        uVar1 = uVar6;
        if (*(uint *)(lVar13 + 0x38) <= uVar6) {
          uVar1 = 0;
        }
        *(undefined4 *)(param_2 + 5) =
             **(undefined4 **)(*(long *)(lVar13 + 0x40) + (ulong)uVar1 * 0xb8 + 0x20);
        if (*(uint *)(lVar13 + 0x38) <= uVar6) {
          uVar6 = 0;
        }
        sVar4 = *(short *)(*(long *)(lVar13 + 0x40) + (ulong)uVar6 * 0xb8 + 2);
        iVar7 = (int)sVar4;
        if (*(uint *)(lVar13 + 0x80) <= (uint)(int)sVar4) {
          iVar7 = 0;
        }
        *(undefined4 *)((long)param_2 + 0x2c) =
             *(undefined4 *)(**(long **)(*(long *)(lVar13 + 0x88) + (long)iVar7 * 0x28) + 0x40);
        lVar13 = *(long *)(param_1 + 0x78);
        if (lVar13 == 0) {
          uVar15 = 0;
        }
        else if (((int)param_3 < 0) || (*(int *)(lVar13 + 0x18) <= (int)param_3)) {
          local_65 = 0;
          local_168 = 0x100;
          puStack_170 = local_164;
          local_164[0] = 0;
          local_178 = PTR_DAT_04bb21f8 + 0x10;
          lVar13 = *(long *)(*(long *)(*(long *)(lVar13 + 0x50) + 0x10) + 8);
          FUN_038d1270(&local_178,"%s.as",
                       lVar13 + *(int *)(lVar13 + 0x24) + (long)*(int *)(lVar13 + 8));
          uVar15 = 0xbf800000;
        }
        else {
          uVar15 = *(undefined4 *)
                    (*(long *)(*(long *)(lVar13 + 0x20) + (ulong)param_3 * 0x10) + 0xb4);
        }
        *(undefined4 *)(param_2 + 6) = uVar15;
        lVar13 = *(long *)(param_1 + 0x78);
        if (lVar13 == 0) {
LAB_038516a8:
          puVar5 = &DAT_0419b56c;
        }
        else {
          if (((int)param_3 < 0) || (*(int *)(lVar13 + 0x18) <= (int)param_3)) {
            local_65 = 0;
            local_168 = 0x100;
            puStack_170 = local_164;
            local_164[0] = 0;
            local_178 = PTR_DAT_04bb21f8 + 0x10;
            lVar13 = *(long *)(*(long *)(*(long *)(lVar13 + 0x50) + 0x10) + 8);
            FUN_038d1270(&local_178,"%s.as",
                         lVar13 + *(int *)(lVar13 + 0x24) + (long)*(int *)(lVar13 + 8));
            goto LAB_038516a8;
          }
          if (*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + (ulong)param_3 * 0x10) + 0x28) == 0)
          goto LAB_038516a8;
          puVar5 = (undefined4 *)FUN_03ec34a4(lVar13,param_3);
        }
        puVar10 = puVar5 + 2;
        *(undefined4 *)((long)param_2 + 0x34) = *puVar5;
        *(undefined4 *)(param_2 + 7) = puVar5[1];
        goto LAB_0385156c;
      }
    }
  }
  if ((param_3 == 0) && (*(char *)(param_1 + 0xb5) != '\0')) {
    ppuVar12 = (undefined **)(*(long *)(param_1 + 0x88) + 0xe0);
  }
  else {
    ppuVar12 = &PTR_DAT_04c4b988;
    (**(code **)(PTR_PTR_04c4b980 + 0x18))();
  }
  puVar9 = *ppuVar12;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  param_2[4] = (long)puVar9;
  param_2[5] = 0;
  puVar10 = &DAT_0419b574;
LAB_0385156c:
  *(undefined4 *)((long)param_2 + 0x3c) = *puVar10;
  if (*(uint *)(param_1 + 0x80) <= param_3) {
    param_3 = 0;
  }
  *(undefined4 *)(param_2 + 2) =
       *(undefined4 *)(*(long *)(param_1 + 0x88) + (long)(int)param_3 * 0xe8 + 200);
  return 1;
}

