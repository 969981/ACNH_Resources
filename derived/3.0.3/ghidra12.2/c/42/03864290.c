
void FUN_03864290(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte bVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  float fVar21;
  float fVar22;
  undefined8 local_78;
  undefined4 local_70;
  int local_6c;
  undefined1 local_68;
  float local_5c;
  float local_58;
  undefined4 local_54;
  
  if (1 < *(uint *)(param_1 + 0x53)) {
    FUN_03ebb160(param_1 + 0x52,1);
  }
  bVar10 = *(byte *)(param_1 + 0x7d) & 0xfe | *(byte *)(param_2 + 0x16);
  *(byte *)(param_1 + 0x7d) = bVar10;
  bVar10 = bVar10 & 0xfb | *(char *)(param_2 + 0x18) << 2;
  iVar9 = (int)param_1[0x5d];
  *(byte *)(param_1 + 0x7d) = bVar10;
  if ((*(int *)((long)param_1 + 0x30c) == 0) || (iVar9 < 2)) {
    bVar10 = bVar10 & 0xf7;
  }
  else {
    bVar10 = bVar10 & 0xf7 | *(char *)(param_2 + 0x19) << 3;
  }
  *(byte *)(param_1 + 0x7d) = bVar10;
  if (((*(char *)(param_2 + 0x17) == '\0') || (1 < iVar9)) || (1 < *(int *)((long)param_1 + 0x2ec)))
  {
    bVar10 = bVar10 & 0xfd;
  }
  else {
    bVar10 = bVar10 | 2;
  }
  *(byte *)(param_1 + 0x7d) = bVar10;
  *(byte *)(param_1 + 0x7d) = bVar10 & 0xdf | *(char *)(param_2 + 0x1c) << 5;
  if ((int)param_1[0x41] != 0) {
    plVar18 = (long *)param_1[0x42];
    lVar19 = (long)(int)param_1[0x41] << 3;
    do {
      plVar5 = (long *)*plVar18;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x140))(plVar5,1,0);
      }
      plVar18 = plVar18 + 1;
      lVar19 = lVar19 + -8;
    } while (lVar19 != 0);
    iVar9 = (int)param_1[0x5d];
  }
  iVar2 = *(int *)(param_2 + 8);
  *(int *)((long)param_1 + 0x3cc) = iVar2;
  *(int *)((long)param_1 + 0x3d4) = iVar2;
  iVar12 = iVar2;
  if (iVar9 < 2) {
    iVar11 = (int)param_1[0x5f];
    *(int *)(param_1 + 0x7a) = iVar2;
    iVar14 = iVar2;
    iVar15 = iVar11;
  }
  else {
    if (*(char *)(param_2 + 0x14) == '\0') {
      cVar3 = *(char *)(param_2 + 0x15);
    }
    else {
      iVar11 = (int)param_1[0x5e];
      if (iVar2 < iVar11) {
        *(int *)((long)param_1 + 0x3d4) = iVar11;
        iVar12 = iVar11;
      }
      cVar3 = *(char *)(param_2 + 0x15);
    }
    if (cVar3 != '\0') {
      iVar11 = 0;
      if (iVar9 != 0) {
        iVar11 = iVar12 / iVar9;
      }
      iVar11 = iVar12 - iVar11 * iVar9;
      if (0 < iVar11) {
        iVar12 = (iVar12 + iVar9) - iVar11;
        *(int *)((long)param_1 + 0x3d4) = iVar12;
      }
    }
    fVar21 = (float)iVar12 / (float)iVar9;
    uVar13 = 0;
    if (fVar21 != (float)(int)fVar21) {
      uVar13 = (uint)(0.0 <= fVar21);
    }
    iVar11 = (int)param_1[0x5f];
    *(uint *)(param_1 + 0x7a) = uVar13 + (int)fVar21;
    fVar22 = (float)iVar11 / (float)iVar9;
    uVar16 = 0;
    if (fVar22 != (float)(int)fVar22) {
      uVar16 = (uint)(0.0 <= fVar22);
    }
    iVar14 = uVar13 + (int)fVar21;
    iVar15 = uVar16 + (int)fVar22;
  }
  uVar16 = iVar14 - *(int *)((long)param_1 + 0x2ec);
  fVar21 = (float)(iVar15 - *(int *)((long)param_1 + 0x2ec)) * 0.5;
  uVar13 = 0;
  if (fVar21 != (float)(int)fVar21) {
    uVar13 = (uint)(fVar21 < 0.0);
  }
  uVar13 = (int)fVar21 - uVar13;
  uVar16 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x7b) = uVar13;
  *(uint *)((long)param_1 + 0x434) = uVar16;
  if (iVar12 < 1) {
    iVar14 = 0;
    uVar17 = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  else {
    iVar14 = (int)param_1[0x89];
    if (*(int *)(param_2 + 0xc) != -1) {
      iVar14 = *(int *)(param_2 + 0xc);
    }
    iVar15 = iVar14;
    if (iVar12 + -1 <= iVar14) {
      iVar15 = iVar12 + -1;
    }
    iVar1 = 0;
    if (-1 < iVar14) {
      iVar1 = iVar15;
    }
    uVar17 = 0;
    if (iVar9 != 0) {
      uVar17 = iVar1 / iVar9;
    }
    iVar14 = uVar16 * iVar9;
    if ((int)uVar17 <= (int)uVar16) {
      iVar14 = iVar1;
    }
    if ((int)uVar16 <= (int)uVar17) {
      uVar17 = uVar16;
    }
    iVar15 = *(int *)((long)param_1 + 0x44c);
    if (*(int *)(param_2 + 0x10) != -1) {
      iVar15 = *(int *)(param_2 + 0x10);
    }
    if (iVar14 <= iVar15) {
      iVar1 = *(int *)((long)param_1 + 0x2f4) + iVar14;
      if (iVar12 <= iVar1) {
        iVar1 = iVar12;
      }
      iVar14 = iVar15;
      if (iVar1 <= iVar15) {
        iVar14 = iVar1 + -1;
      }
    }
    iVar12 = 0;
    if (iVar9 != 0) {
      iVar12 = iVar14 / iVar9;
    }
    *(int *)(param_1 + 0x88) = iVar12;
    iVar14 = iVar14 - iVar12 * iVar9;
  }
  *(int *)((long)param_1 + 0x444) = iVar14;
  *(uint *)(param_1 + 0x86) = uVar17;
  if ((int)uVar13 < 1) {
    uVar13 = 0;
  }
  else if ((*(byte *)(param_1 + 0x7d) >> 1 & 1) == 0) {
    if ((int)uVar17 < (int)uVar13) {
LAB_03864580:
      uVar13 = uVar17;
    }
    else if ((int)(uVar16 - uVar13) < (int)uVar17) {
      if (iVar2 < iVar11) goto LAB_03864580;
      uVar13 = (uVar17 - uVar16) + uVar13 * 2;
    }
  }
  local_5c = *(float *)((long)param_1 + 0x2fc);
  *(uint *)(param_1 + 0x87) = uVar13;
  local_58 = *(float *)(param_1 + 0x60);
  local_54 = *(undefined4 *)((long)param_1 + 0x304);
  if (uVar13 != 0) {
    if (*(int *)((long)param_1 + 0x30c) == 1) {
      local_58 = local_58 + *(float *)(param_1 + 0x61) * (float)(int)uVar13;
    }
    else if (*(int *)((long)param_1 + 0x30c) == 0) {
      local_5c = local_5c - *(float *)(param_1 + 0x61) * (float)(int)uVar13;
    }
  }
  plVar18 = (long *)param_1[0x4e];
  local_78 = (long *)(PTR_DAT_04bc0cb8 + 0x10);
  local_70 = 8;
  (**(code **)(*plVar18 + 0x18))(plVar18,&local_78);
  (**(code **)(plVar18[3] + 0x98))(plVar18[1],&local_5c);
  FUN_038654a0(param_1);
  uVar6 = (**(code **)(param_1[0x66] + 0x10))(param_1 + 0x66);
  if ((uVar6 & 1) != 0) {
    local_70 = 0xffffffff;
    local_6c = (int)param_1[0x86] - (int)param_1[0x87];
    if ((*(byte *)(param_1 + 0x7d) >> 1 & 1) != 0) {
      uVar16 = *(uint *)((long)param_1 + 0x434);
      uVar13 = 0;
      if ((int)uVar16 < local_6c) {
        uVar13 = ~uVar16;
      }
      if (local_6c < 0) {
        uVar13 = uVar16 + 1;
      }
      local_6c = uVar13 + local_6c;
    }
    local_6c = (int)param_1[0x5d] * local_6c;
    local_68 = 1;
    local_78 = param_1;
    (**(code **)param_1[0x66])(param_1 + 0x66,&local_78);
  }
  if (param_1[0x50] != 0) {
    bVar4 = 0 < (int)param_1[0x86];
    if ((*(byte *)(param_1 + 0x7d) & 2) != 0) {
      bVar4 = 1 < *(int *)((long)param_1 + 0x3cc);
    }
    local_78._0_2_ = CONCAT11(*(int *)((long)param_1 + 0x434) == 0,bVar4);
    FUN_03867140(param_1[0x50],&local_78);
  }
  if (param_1[0x4f] != 0) {
    if ((*(byte *)(param_1 + 0x7d) >> 1 & 1) == 0) {
      iVar9 = *(int *)((long)param_1 + 0x434);
      bVar4 = (int)param_1[0x86] < iVar9;
    }
    else {
      iVar9 = *(int *)((long)param_1 + 0x434);
      bVar4 = 1 < *(int *)((long)param_1 + 0x3cc);
    }
    local_78._0_2_ = CONCAT11(iVar9 == 0,bVar4);
    FUN_03867140(param_1[0x4f],&local_78);
  }
  if (*(int *)((long)param_1 + 0x3d4) < 1) {
    bVar4 = false;
  }
  else {
    bVar4 = *(char *)(param_2 + 0x1a) != '\0';
  }
  *(bool *)(param_1 + 0x8e) = bVar4;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)((long)param_1 + 0x3e4) = *(undefined4 *)(param_2 + 0x28);
  local_78 = (long *)CONCAT44(local_78._4_4_,*(int *)(param_1[0x98] + 0x14));
  if (*(int *)(param_1[0x98] + 0x14) == -1) {
    bVar10 = 0;
    bVar8 = *(byte *)(param_1 + 0x7d) & 0xef;
    goto LAB_038647d0;
  }
  if (*(char *)(param_2 + 0x1d) == '\0') {
    bVar8 = *(byte *)(param_1 + 0x7d) & 0xef;
    if (*(int *)((long)param_1 + 0x3d4) <= *(int *)((long)param_1 + 0x2f4)) goto LAB_038647cc;
  }
  else {
    uVar6 = (**(code **)(param_1[0x72] + 0x10))(param_1 + 0x72);
    bVar8 = *(byte *)(param_1 + 0x7d) & 0xef;
    if ((uVar6 & 1) == 0) {
LAB_038647cc:
      bVar10 = 0;
      goto LAB_038647d0;
    }
  }
  bVar10 = 0x10;
LAB_038647d0:
  *(byte *)(param_1 + 0x7d) = bVar10 | bVar8;
  iVar9 = *(int *)(param_2 + 0x20);
  if (iVar9 < 1) {
    if (*(int *)((long)param_1 + 0x2f4) == (int)param_1[0x5e]) {
      iVar9 = *(int *)((long)param_1 + 0x2ec);
    }
    else {
      iVar9 = 0;
      if ((int)param_1[0x5d] != 0) {
        iVar9 = (int)param_1[0x5e] / (int)param_1[0x5d];
      }
      iVar9 = (int)((float)iVar9 * 0.5);
    }
  }
  *(int *)((long)param_1 + 0x3dc) = iVar9;
  if (param_1[0x40] != 0) {
    *(undefined4 *)((long)param_1 + 0x474) = 1;
    FUN_03864968(param_1);
    if (*(int *)((long)param_1 + 0x2ec) < (int)param_1[0x7a]) {
      FUN_03d75d14((float)*(int *)((long)param_1 + 0x2ec) / (float)(int)param_1[0x7a],param_1[0x40])
      ;
      lVar19 = param_1[0x40];
      if (*(int *)((long)param_1 + 0x434) == 0) {
        fVar21 = 0.0;
        uVar7 = 1;
      }
      else {
        uVar7 = 1;
        fVar22 = (float)(int)param_1[0x86] / (float)*(int *)((long)param_1 + 0x434);
        fVar21 = 1.0 - fVar22;
        if (*(int *)((long)param_1 + 0x30c) != 1) {
          fVar21 = fVar22;
        }
      }
    }
    else {
      lVar19 = param_1[0x40];
      fVar21 = 0.0;
      uVar7 = 0;
    }
    FUN_03d75830(fVar21,lVar19,uVar7);
  }
  plVar18 = (long *)param_1[0x51];
  if (plVar18 != (long *)0x0) {
    cVar3 = *(char *)(param_2 + 0x1b);
    plVar18[6] = 0;
    plVar18[7] = 0;
    *(undefined4 *)(plVar18 + 8) = 0;
    *(undefined2 *)(plVar18 + 4) = 1;
    *(undefined4 *)((long)plVar18 + 0x2c) = 0x80000000;
    *(uint *)((long)plVar18 + 0x24) = (uint)(cVar3 == '\0');
    (**(code **)(*plVar18 + 0x28))(plVar18);
    if ((long *)plVar18[10] != plVar18 + 9) {
      lVar19 = (long)*(int *)((long)plVar18 + 0x5c);
      puVar20 = (undefined8 *)(plVar18[10] - lVar19);
      do {
        (**(code **)*puVar20)(puVar20,*(undefined4 *)((long)plVar18 + 0x24));
        puVar20 = (undefined8 *)(*(long *)((long)puVar20 + lVar19 + 8) - lVar19);
      } while (puVar20 != (undefined8 *)((long)(plVar18 + 9) - lVar19));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x03864958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x100))(param_1,param_2);
  return;
}

