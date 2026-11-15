
undefined8 FUN_01f93710(long param_1,ulong *param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  uint *puVar5;
  uint *puVar6;
  float *pfVar7;
  ulong *puVar8;
  float *pfVar9;
  long lVar10;
  undefined *puVar11;
  char cVar12;
  uint uVar13;
  uint *puVar14;
  ulong uVar15;
  int *piVar16;
  undefined *puVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_74;
  uint local_70;
  float local_6c;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  ulong local_5c;
  float local_54;
  
  lVar10 = *(long *)(param_1 + 8);
  *(undefined4 *)param_2 = *(undefined4 *)(lVar10 + 0x6a8);
  *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)(lVar10 + 0x6ac);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar10 + 0x6b0);
  *param_3 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x6b4);
  puVar6 = (uint *)(param_1 + 0xaf48);
  uVar13 = *puVar6;
  if (uVar13 == 0xffffffff || 0xf < (int)uVar13) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar11 = &DAT_0545b240 + (ulong)uVar13 * 0x118;
    if (0xf < uVar13) {
      puVar11 = &DAT_0545b240;
    }
    puVar17 = (undefined *)0x0;
    if (puVar11[0x8c] != '\0') {
      puVar17 = puVar11;
    }
  }
  lVar10 = *(long *)PTR_DAT_04bb4978;
  if (lVar10 == 0) {
    return 0;
  }
  puVar5 = (uint *)FUN_036f9e68(lVar10);
  puVar4 = PTR_DAT_04bc2340;
  puVar11 = PTR_DAT_04bc2338;
  if (puVar17 == (undefined *)0x0) {
    return 0;
  }
  if (puVar5 == (uint *)0x0) {
    return 0;
  }
  local_5c = 0;
  local_54 = 0.0;
  local_60 = 0;
  local_6c = 5.60519e-45;
  if (*puVar5 != 0) {
    cVar12 = *PTR_DAT_04bc2338;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar11 = 1;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x38) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        uVar13 = *puVar5;
      }
      else {
        uVar13 = *(uint *)(puVar4 + 0x20);
        if (-1 < (int)uVar13) {
          if (((byte *)((ulong)uVar13 + (long)puVar5) != (byte *)0x0) &&
             ((*(byte *)((ulong)uVar13 + (long)puVar5) >> 4 & 1) != 0)) {
            local_68 = 0;
            fVar20 = (float)*(int *)(puVar17 + 0xc4) * 5.0 + 5.0;
            fVar19 = (float)*(int *)(puVar17 + 0xc0) * 5.0 + 5.0;
            local_6c = fVar19;
            local_64 = fVar20;
            if (puVar17[0xc9] != '\0') {
              uVar15 = (ulong)*puVar5;
              if (*puVar6 == 6) {
                if (uVar15 == 0) goto LAB_01f93bac;
                uVar13 = *(uint *)puVar4;
                goto LAB_01f9394c;
              }
              if (uVar15 == 0) goto LAB_01f93bac;
              uVar13 = *(uint *)(puVar4 + 4);
              goto LAB_01f93b10;
            }
            if (puVar17[0xca] != '\0') {
              if (*puVar6 == DAT_0545c460) {
                local_70 = FUN_01f998d0();
              }
              else if (*puVar6 == DAT_0545c464) {
                local_70 = FUN_01f999e0();
              }
              else {
                local_70 = FUN_01f997c0();
              }
              goto LAB_01f93bb4;
            }
            puVar6 = (uint *)FUN_01f9a110(puVar5,0,0x21eefaac,*(undefined8 *)PTR_DAT_04bc2368);
            if (puVar6 == (uint *)0x0) goto LAB_01f93bac;
            local_70 = *puVar6;
            goto joined_r0x01f93c50;
          }
          break;
        }
        if (uVar13 != 0xffffffff) break;
        uVar13 = *puVar5;
      }
      if ((uVar13 == 0) || (puVar14 = (uint *)(ulong)uVar13, puVar5 == puVar14)) break;
      lVar2 = 0xc;
      if (*(char *)((long)puVar5 + (10 - (long)puVar14)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar5 + (lVar2 - (long)puVar14);
      if (lVar2 == 0) break;
      uVar15 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar14));
      *(undefined4 *)(puVar4 + 0x20) = 0xfffffffe;
      if (uVar15 == 0) break;
      piVar16 = (int *)(lVar2 + 4);
      while (piVar16[-1] != 0x767f28cb) {
        piVar16 = piVar16 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) goto LAB_01f939bc;
      }
      iVar1 = 0;
      if (*piVar16 != -1) {
        iVar1 = *piVar16;
      }
      *(int *)(puVar4 + 0x20) = iVar1;
      if (*puVar5 == 0) break;
    } while( true );
  }
LAB_01f939bc:
  if (*(int *)(puVar17 + 0xa8) == 3) {
    uVar13 = *puVar6 - 6;
    if (9 < uVar13) {
      return 0;
    }
    piVar16 = &DAT_0545c3c0;
    if (uVar13 != 9) {
      piVar16 = &DAT_0545c3c0 + (ulong)uVar13 * 2;
    }
    if (*piVar16 == 2) {
      local_5c = 0x4170000043818000;
      local_54 = 375.0;
    }
    else if (*piVar16 == 1) {
      local_5c = 0x440e8000;
      local_54 = 405.0;
    }
    else {
      local_5c = 0x44228000;
      local_54 = 245.0;
    }
    goto LAB_01f93a54;
  }
  FUN_036f98d0(lVar10,param_1 + 0xaf4c,&local_5c);
  local_6c = *(float *)(puVar17 + 0xa8);
  pfVar7 = &local_6c;
  puVar8 = (ulong *)PTR_DAT_04bb2150;
  pfVar9 = (float *)PTR_DAT_04bb2150;
  goto LAB_01f93a50;
LAB_01f93b10:
  if (-1 < (int)uVar13) goto LAB_01f93c40;
  if ((uVar13 != 0xffffffff) || (lVar2 = (long)puVar5 - uVar15, lVar2 == 0)) goto LAB_01f93bac;
  lVar3 = 0xc;
  if (*(char *)(lVar2 + 10) != '\0') {
    lVar3 = 0x1c;
  }
  if (lVar3 + lVar2 == 0) goto LAB_01f93bac;
  uVar15 = (ulong)*(ushort *)(lVar2 + 8);
  *(undefined4 *)(puVar4 + 4) = 0xfffffffe;
  if (uVar15 == 0) goto LAB_01f93bac;
  puVar6 = (uint *)(lVar3 + lVar2 + 4);
  while (puVar6[-1] != 0x7e27475f) {
    puVar6 = puVar6 + 2;
    uVar15 = uVar15 - 1;
    if (uVar15 == 0) goto LAB_01f93bac;
  }
  uVar13 = 0;
  if (*puVar6 != 0xffffffff) {
    uVar13 = *puVar6;
  }
  *(uint *)(puVar4 + 4) = uVar13;
  uVar15 = (ulong)*puVar5;
  if (*puVar5 == 0) goto LAB_01f93bac;
  goto LAB_01f93b10;
LAB_01f9394c:
  if (-1 < (int)uVar13) goto LAB_01f93c40;
  if ((uVar13 != 0xffffffff) || (lVar2 = (long)puVar5 - uVar15, lVar2 == 0)) goto LAB_01f93bac;
  lVar3 = 0xc;
  if (*(char *)(lVar2 + 10) != '\0') {
    lVar3 = 0x1c;
  }
  if (lVar3 + lVar2 == 0) goto LAB_01f93bac;
  uVar15 = (ulong)*(ushort *)(lVar2 + 8);
  *(undefined4 *)puVar4 = 0xfffffffe;
  if (uVar15 == 0) goto LAB_01f93bac;
  puVar6 = (uint *)(lVar3 + lVar2 + 4);
  while (puVar6[-1] != 0x21eefaac) {
    puVar6 = puVar6 + 2;
    uVar15 = uVar15 - 1;
    if (uVar15 == 0) goto LAB_01f93bac;
  }
  uVar13 = 0;
  if (*puVar6 != 0xffffffff) {
    uVar13 = *puVar6;
  }
  *(uint *)puVar4 = uVar13;
  uVar15 = (ulong)*puVar5;
  if (*puVar5 == 0) goto LAB_01f93bac;
  goto LAB_01f9394c;
LAB_01f93c40:
  local_70 = 0;
  if ((uint *)((long)puVar5 + (ulong)uVar13) != (uint *)0x0) {
    local_70 = *(uint *)((long)puVar5 + (ulong)uVar13);
joined_r0x01f93c50:
    if (8 < local_70) {
LAB_01f93bac:
      local_70 = 0;
    }
  }
LAB_01f93bb4:
  if (local_70 < 9) {
    fVar18 = *(float *)(&DAT_04198ed0 + (ulong)local_70 * 0xc);
    local_54 = *(float *)(&DAT_04198ed8 + (ulong)local_70 * 0xc);
  }
  else {
    local_54 = -10.0;
    fVar18 = 0.0;
  }
  local_54 = local_54 + fVar20;
  local_74 = *(float *)(puVar17 + 0xa8);
  pfVar7 = &local_74;
  puVar8 = &local_5c;
  pfVar9 = &local_6c;
  local_5c = (ulong)(uint)(fVar18 + fVar19);
LAB_01f93a50:
  FUN_036ff290(lVar10,pfVar7,&local_60,puVar8,pfVar9);
LAB_01f93a54:
  *param_2 = local_5c;
  *(float *)(param_2 + 1) = local_54;
  *param_3 = local_60;
  return 1;
}

