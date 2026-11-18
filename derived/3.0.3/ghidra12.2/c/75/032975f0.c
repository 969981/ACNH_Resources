
void FUN_032975f0(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  int iVar17;
  long lVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  long *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  long *local_a8;
  
  if ((*(long *)PTR_DAT_04bc8ed0 != 0) && (*(int *)(*(long *)PTR_DAT_04bc8ed0 + 0xa8) == 1)) {
    *(undefined1 *)((long)param_1 + 0xa9d) = 1;
  }
  *(undefined4 *)((long)param_1 + 0xaa4) = 0;
  FUN_0329dfdc(param_1[0x48]);
  lVar10 = (**(code **)(*param_1 + 0x38))(param_1);
  fVar24 = *(float *)(lVar10 + 0x140);
  lVar10 = (**(code **)(*param_1 + 0x38))(param_1);
  puVar9 = PTR_DAT_04bc8e68;
  puVar8 = PTR_PTR_04bb2238;
  fVar25 = *(float *)(lVar10 + 0x144);
  local_d8 = 0;
  uStack_d0 = 0;
  fVar27 = 0.0;
  fVar26 = 0.0;
  fVar23 = fVar24;
  if (param_1[0x49] != 0) {
    lVar10 = *(long *)(param_1[0x49] + 8);
    if (**(char **)(PTR_PTR_04bb2238 + 8) == '\0') {
      plVar11 = *(long **)(*(long *)(lVar10 + 0xf0) + 0x18);
    }
    else {
      local_b0 = PTR_DAT_04bc8e68 + 0x10;
      local_a8 = (long *)*(char **)(PTR_PTR_04bb2238 + 8);
      plVar11 = (long *)FUN_032cb8e0(auStack_c8,&local_b0,*(undefined8 *)(lVar10 + 0xf0));
    }
    lVar10 = (**(code **)(*plVar11 + 0x60))(plVar11,"N_Root",1);
    fVar26 = *(float *)(lVar10 + 0x54);
    fVar23 = fVar24 - fVar26;
  }
  if (param_1[0x47] != 0) {
    lVar10 = *(long *)(param_1[0x47] + 8);
    if (**(char **)(puVar8 + 8) == '\0') {
      plVar11 = *(long **)(*(long *)(lVar10 + 0xf0) + 0x18);
    }
    else {
      local_b0 = puVar9 + 0x10;
      local_a8 = (long *)*(char **)(puVar8 + 8);
      plVar11 = (long *)FUN_032cb8e0(auStack_c8,&local_b0,*(undefined8 *)(lVar10 + 0xf0));
    }
    lVar10 = (**(code **)(*plVar11 + 0x60))(plVar11,"N_Root",1);
    fVar27 = *(float *)(lVar10 + 0x54);
    fVar23 = fVar23 - fVar27;
  }
  FUN_0329e1d0(param_1[0x48],&local_d8);
  lVar10 = ((long *)param_1[0x46])[1];
  (**(code **)(*(long *)param_1[0x46] + 0x30))(auStack_c8);
  local_b0 = puVar9 + 0x10;
  local_b8 = *(undefined8 *)(*(long *)(lVar10 + 0xf0) + 0x18);
  local_a8 = local_c0;
  lVar10 = FUN_032d32b0(&local_b8,&local_b0);
  fVar28 = uStack_d0._4_4_ - local_d8._4_4_;
  uVar19 = *(undefined4 *)(lVar10 + 0x50);
  if (fVar28 <= fVar23) {
    if (fVar25 <= fVar28) {
      bVar7 = false;
      fVar29 = fVar27 + fVar26 + fVar28;
    }
    else {
      bVar7 = true;
      fVar29 = fVar25 + fVar26 + fVar27;
    }
  }
  else {
    bVar7 = false;
    *(undefined1 *)((long)param_1 + 0xa9c) = 1;
    fVar29 = fVar24;
  }
  *(undefined4 *)(lVar10 + 0x50) = uVar19;
  *(float *)(lVar10 + 0x54) = fVar29;
  *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
  lVar12 = ((long *)param_1[0x46])[1];
  (**(code **)(*(long *)param_1[0x46] + 0x40))(auStack_c8);
  local_b8 = *(undefined8 *)(*(long *)(lVar12 + 0xf0) + 0x18);
  local_a8 = local_c0;
  local_b0 = puVar9 + 0x10;
  lVar12 = FUN_032d32b0(&local_b8,&local_b0);
  lVar18 = ((long *)param_1[0x48])[3];
  (**(code **)(*(long *)param_1[0x48] + 0x88))(auStack_c8);
  local_b8 = *(undefined8 *)(*(long *)(lVar18 + 0xf0) + 0x18);
  local_a8 = local_c0;
  local_b0 = puVar9 + 0x10;
  lVar18 = FUN_032d32b0(&local_b8,&local_b0);
  fVar22 = *(float *)(lVar10 + 0x54);
  uVar21 = *(undefined4 *)(lVar10 + 0x30);
  fVar20 = *(float *)(lVar10 + 0x34);
  uVar19 = *(undefined4 *)(lVar10 + 0x38);
  bVar6 = *(byte *)(lVar12 + 0x58) | 0x10;
  *(undefined4 *)(lVar12 + 0x38) = uVar19;
  *(byte *)(lVar12 + 0x58) = bVar6;
  fVar20 = (fVar20 + fVar22 * 0.5) - fVar27;
  *(undefined4 *)(lVar12 + 0x30) = uVar21;
  *(float *)(lVar12 + 0x34) = fVar20;
  if (*(char *)((long)param_1 + 0xa9c) == '\0') {
    fVar27 = fVar28;
    if (bVar7) {
      *(undefined4 *)(lVar12 + 0x38) = uVar19;
      *(byte *)(lVar12 + 0x58) = bVar6;
      fVar24 = (fVar25 - fVar28) * 0.5;
      local_d8 = CONCAT44(local_d8._4_4_ - (fVar25 - fVar28),(undefined4)local_d8);
      *(float *)(lVar12 + 0x34) = fVar20 - fVar24;
      fVar24 = *(float *)(lVar18 + 0x34) - fVar24;
      fVar27 = fVar25;
      goto LAB_032978ec;
    }
  }
  else {
    fVar27 = (fVar24 - fVar26) - fVar27;
    fVar24 = -fVar27;
LAB_032978ec:
    *(float *)(lVar18 + 0x34) = fVar24;
    *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
  }
  lVar10 = ((long *)param_1[0x46])[1];
  (**(code **)(*(long *)param_1[0x46] + 0x10))(auStack_c8);
  local_b8 = *(undefined8 *)(*(long *)(lVar10 + 0xf0) + 0x18);
  local_a8 = local_c0;
  local_b0 = puVar9 + 0x10;
  lVar10 = FUN_032d32b0(&local_b8,&local_b0);
  *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
  *(float *)(lVar10 + 0x34) = fVar27 * -0.5;
  uVar19 = *(undefined4 *)(lVar12 + 0x34);
  lVar10 = ((long *)param_1[0x46])[1];
  (**(code **)(*(long *)param_1[0x46] + 0x48))(auStack_c8);
  local_b8 = *(undefined8 *)(*(long *)(lVar10 + 0xf0) + 0x18);
  local_a8 = local_c0;
  local_b0 = puVar9 + 0x10;
  lVar10 = FUN_032d32b0(&local_b8,&local_b0);
  *(undefined4 *)(lVar10 + 0x30) = 0;
  *(undefined4 *)(lVar10 + 0x38) = 0;
  fVar27 = fVar25 - fVar28;
  if (!bVar7) {
    fVar27 = 0.0;
  }
  *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
  fVar27 = (fVar29 - fVar26) - fVar27;
  *(float *)(lVar10 + 0x54) = fVar27;
  *(float *)(lVar10 + 0x34) = fVar27 * -0.5;
  FUN_0329e490(uVar19,fVar23,param_1[0x48],&local_b0,&local_d8);
  FUN_032d1220(*(undefined8 *)(param_1[0x46] + 8));
  plVar11 = (long *)param_1[0x47];
  puVar3 = (undefined1 *)0x0;
  if (plVar11 != (long *)0x0) {
    puVar3 = &LAB_03299230;
  }
  if (puVar3 != (undefined1 *)0x0) {
    FUN_032d1220(plVar11[1]);
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  FUN_032d1220(*(undefined8 *)(param_1[0x48] + 0x18));
  plVar11 = (long *)param_1[0x49];
  if (plVar11 != (long *)0x0) {
    FUN_032d1220(plVar11[1]);
    (**(code **)(*plVar11 + 0x30))(plVar11);
  }
  local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
  plVar11 = param_1 + 0x60;
  lVar10 = *(long *)PTR_DAT_04bc8ee8;
  *(ushort *)(param_1 + 0xe8) = *(ushort *)(param_1 + 0xe8) | 1;
  plVar1 = (long *)(lVar10 + 0x1d8);
  plVar15 = plVar11;
  do {
    plVar13 = plVar15;
    if (plVar13 == plVar1) {
      puVar14 = (undefined8 *)(lVar10 + 0x3b0);
      goto LAB_03297a9c;
    }
  } while ((plVar13 != (long *)(lVar10 + 8)) &&
          (plVar15 = (long *)*plVar13, (long *)*plVar13 != (long *)0x0));
  puVar14 = (undefined8 *)(lVar10 + 0x3a8);
LAB_03297a9c:
  if ((long *)*puVar14 != plVar11) {
    plVar15 = plVar11;
    do {
      if ((plVar15 == plVar1) || (plVar15 == (long *)(lVar10 + 8))) goto LAB_03297ad8;
      plVar15 = (long *)*plVar15;
    } while (plVar15 != (long *)0x0);
  }
  goto LAB_03297afc;
  while (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0) {
LAB_03297ad8:
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,1);
    if ((*(byte *)(plVar11 + 0x39) >> 1 & 1) != 0) {
      FUN_032af0b0(lVar10,plVar11,plVar13 == plVar1);
      break;
    }
  }
LAB_03297afc:
  local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
  *(ushort *)(param_1 + 0xa4) = *(ushort *)(param_1 + 0xa4) & 0xfffe;
  FUN_032c2100(param_1 + 0x9a);
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,2);
  plVar11 = (long *)param_1[0x48];
  *(byte *)(param_1 + 0x99) = *(byte *)(param_1 + 0x99) & 0xfb;
  if (*(char *)(*(long *)(*(long *)(plVar11[4] + 0x230) + 0x10) + 0x229) == '\0') {
    local_b0 = PTR_DAT_04bc8e60 + 0x10;
    local_a8 = (long *)0x0;
    FUN_032c7c30(*(undefined8 *)(*(long *)(plVar11[4] + 0x230) + 0x18),0,0,&local_b0,0,0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 8))();
    }
  }
  (**(code **)(*plVar11 + 0x38))(plVar11);
  lVar10 = *(long *)(param_1[0x48] + 0x30);
  if ((lVar10 != 0) && (iVar4 = *(int *)(lVar10 + 0x30), iVar4 != 0)) {
    iVar17 = 0;
    do {
      iVar2 = 0;
      if (*(int *)(lVar10 + 0x28) <= iVar17 + *(int *)(lVar10 + 0x2c)) {
        iVar2 = *(int *)(lVar10 + 0x28);
      }
      FUN_032883c0(*(undefined8 *)
                    (*(long *)(lVar10 + 0x20) +
                    (long)(iVar17 + (*(int *)(lVar10 + 0x2c) - iVar2)) * 8),0);
      iVar17 = iVar17 + 1;
    } while (iVar4 != iVar17);
  }
  if (((long *)param_1[0x49] != (long *)0x0) && (param_1[0x123] != 0)) {
    (**(code **)(*(long *)param_1[0x49] + 0x18))();
    plVar11 = (long *)param_1[0x49];
    if ((char)param_1[0x42] != '\0') {
      uVar5 = *(uint *)((long)param_1 + 0x214);
      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar5);
      if ((((int)uVar5 < (int)*(uint *)(plVar11 + 2)) && (uVar5 < *(uint *)(plVar11 + 2))) &&
         (lVar10 = *(long *)(plVar11[3] + (long)(int)uVar5 * 8), lVar10 != 0)) {
        lVar12 = *(long *)(param_1[0x123] + 0x18);
        uVar16 = *(undefined8 *)(lVar10 + 0x428);
        for (lVar10 = *(long *)(lVar12 + 0x58); lVar10 != 0; lVar10 = *(long *)(lVar10 + 0x10)) {
          local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
          if ((*(byte *)(lVar10 + 0x58) & 1) != 0) {
            (**(code **)(*(long *)(lVar10 + -8) + 0x30))();
          }
        }
        FUN_03290a60(lVar12,uVar16,0,0);
        *(long *)(lVar12 + 0x48) = lVar12 + 0x28;
        *(long *)(lVar12 + 0x50) = lVar12 + 0x28;
        plVar11 = (long *)param_1[0x49];
      }
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (*(char *)param_1[0x44] == '\0') {
    return;
  }
  lVar10 = *(long *)(param_1[0x48] + 0x30);
  if (lVar10 != 0) {
    iVar4 = *(int *)(lVar10 + 0x30);
    if (iVar4 != 0) {
      iVar17 = 0;
      do {
        iVar2 = 0;
        if (*(int *)(lVar10 + 0x28) <= iVar17 + *(int *)(lVar10 + 0x2c)) {
          iVar2 = *(int *)(lVar10 + 0x28);
        }
        FUN_032883c0(*(undefined8 *)
                      (*(long *)(lVar10 + 0x20) +
                      (long)(iVar17 + (*(int *)(lVar10 + 0x2c) - iVar2)) * 8),1);
        iVar17 = iVar17 + 1;
      } while (iVar4 != iVar17);
      lVar10 = *(long *)(param_1[0x48] + 0x30);
      if (lVar10 == 0) goto LAB_03297d30;
    }
    lVar12 = param_1[0x123];
    lVar10 = FUN_0328d1b0(lVar10,param_1 + 0x43);
    if (lVar10 != 0) {
      lVar12 = *(long *)(lVar12 + 0x18);
      uVar16 = *(undefined8 *)(lVar10 + 0x428);
      for (lVar10 = *(long *)(lVar12 + 0x58); lVar10 != 0; lVar10 = *(long *)(lVar10 + 0x10)) {
        local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
        if ((*(byte *)(lVar10 + 0x58) & 1) != 0) {
          (**(code **)(*(long *)(lVar10 + -8) + 0x30))();
        }
      }
      FUN_03290a60(lVar12,uVar16,0,0);
      *(long *)(lVar12 + 0x48) = lVar12 + 0x28;
      *(long *)(lVar12 + 0x50) = lVar12 + 0x28;
    }
  }
LAB_03297d30:
  lVar10 = *(long *)(param_1[0x48] + 0x30);
  if ((lVar10 != 0) && (iVar4 = *(int *)(lVar10 + 0x30), iVar4 != 0)) {
    iVar17 = 0;
    do {
      iVar2 = 0;
      if (*(int *)(lVar10 + 0x28) <= iVar17 + *(int *)(lVar10 + 0x2c)) {
        iVar2 = *(int *)(lVar10 + 0x28);
      }
      FUN_032883c0(*(undefined8 *)
                    (*(long *)(lVar10 + 0x20) +
                    (long)(iVar17 + (*(int *)(lVar10 + 0x2c) - iVar2)) * 8),0);
      iVar17 = iVar17 + 1;
    } while (iVar4 != iVar17);
  }
  return;
}

