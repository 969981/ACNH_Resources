
void FUN_014927e8(long param_1,undefined8 *param_2,int *param_3)

{
  short *psVar1;
  int *piVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  long lVar15;
  float fVar16;
  undefined **local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  int local_68;
  int local_64;
  
  iVar7 = *param_3;
  if (iVar7 == 0) {
    return;
  }
  bVar4 = *(byte *)(param_2 + 5);
  if (bVar4 == 0xff) {
    return;
  }
  if (*(int *)(param_1 + 0x208) == 0) {
    lVar9 = 0;
LAB_01492880:
    *(int *)(param_1 + 0x208 + lVar9 * 4) = iVar7;
    iVar7 = *param_3;
    bVar4 = *(byte *)(param_2 + 5);
  }
  else {
    if (*(int *)(param_1 + 0x20c) == 0) {
      lVar9 = 1;
      goto LAB_01492880;
    }
    if (*(int *)(param_1 + 0x210) == 0) {
      lVar9 = 2;
      goto LAB_01492880;
    }
    if (*(int *)(param_1 + 0x214) == 0) {
      lVar9 = 3;
      goto LAB_01492880;
    }
    if (*(int *)(param_1 + 0x218) == 0) {
      lVar9 = 4;
      goto LAB_01492880;
    }
    if (*(int *)(param_1 + 0x21c) == 0) {
      lVar9 = 5;
      goto LAB_01492880;
    }
    if (*(int *)(param_1 + 0x220) == 0) {
      lVar9 = 6;
      goto LAB_01492880;
    }
    if (*(int *)(param_1 + 0x224) == 0) {
      lVar9 = 7;
      goto LAB_01492880;
    }
    lVar9 = 0xffffffff;
  }
  piVar2 = (int *)(param_1 + 0x228) + ((long)(char)bVar4 & 0xffffffff);
  if (0x17 < bVar4) {
    piVar2 = (int *)(param_1 + 0x228);
  }
  *piVar2 = iVar7;
  puVar5 = PTR_DAT_04bb37e0;
  if ((int)lVar9 < 0) {
    return;
  }
  psVar1 = (short *)(param_1 + 8 + lVar9 * 0x40);
  if (*psVar1 != -2) {
    return;
  }
  *psVar1 = *(short *)PTR_DAT_04bb37e0;
  *(undefined *)(psVar1 + 1) = puVar5[2];
  *(undefined *)((long)psVar1 + 3) = puVar5[3];
  uVar3 = *(undefined4 *)(puVar5 + 4);
  pfVar10 = (float *)(psVar1 + 0x10);
  pfVar10[0] = 0.0;
  pfVar10[1] = 0.0;
  pfVar12 = (float *)(psVar1 + 4);
  pfVar12[0] = 0.0;
  pfVar12[1] = 0.0;
  pfVar14 = (float *)(psVar1 + 0x18);
  pfVar14[0] = 0.0;
  pfVar14[1] = 0.0;
  psVar1[8] = 0;
  psVar1[9] = 0;
  psVar1[10] = 0;
  psVar1[0xb] = 0;
  psVar1[0x1c] = 0;
  psVar1[0x1d] = 0;
  *(undefined4 *)(psVar1 + 2) = uVar3;
  pfVar11 = (float *)(psVar1 + 0x14);
  pfVar11[0] = 0.0;
  pfVar11[1] = 0.0;
  pfVar13 = (float *)(psVar1 + 0xc);
  pfVar13[0] = 0.0;
  pfVar13[1] = 0.0;
  *(undefined1 *)(psVar1 + 0x1e) = 0xff;
  psVar8 = (short *)*param_2;
  *psVar1 = *psVar8;
  *(char *)(psVar1 + 1) = (char)psVar8[1];
  *(undefined1 *)((long)psVar1 + 3) = *(undefined1 *)((long)psVar8 + 3);
  *(undefined4 *)(psVar1 + 2) = *(undefined4 *)(psVar8 + 2);
  *pfVar12 = *(float *)(param_2 + 1);
  *(float *)(psVar1 + 6) = *(float *)((long)param_2 + 0xc);
  *(undefined4 *)(psVar1 + 8) = *(undefined4 *)(param_2 + 2);
  *(float *)(psVar1 + 10) = *(float *)((long)param_2 + 0x14);
  *pfVar13 = *(float *)(param_2 + 3);
  *(undefined4 *)(psVar1 + 0xe) = *(undefined4 *)((long)param_2 + 0x1c);
  *(float *)(psVar1 + 0x16) = *(float *)(param_2 + 4);
  *pfVar14 = *(float *)((long)param_2 + 0x24);
  *(undefined1 *)(psVar1 + 0x1e) = *(undefined1 *)(param_2 + 5);
  puVar5 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(psVar1);
  lVar15 = *(long *)puVar5;
  if (lVar15 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      local_70 = 0;
      local_78 = *(undefined4 *)psVar1;
      uStack_74 = *(undefined4 *)(psVar1 + 2);
      local_80 = &PTR_FUN_04a36b50;
      uVar6 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar5 != 0) {
        lVar9 = *(long *)(lVar15 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(psVar1);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
             (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8), lVar9 != 0)) {
            local_70 = lVar9;
          }
        }
      }
      local_64 = 10;
      local_68 = FUN_01ae7550(&local_80);
      if (local_68 != local_64) {
        local_64 = 0xb;
        local_68 = FUN_01ae7550(&local_80);
        if (local_68 != local_64) {
          local_64 = 0xc;
          iVar7 = FUN_01ae7550(&local_80);
          if (iVar7 != local_64) goto LAB_01492b30;
        }
      }
      *pfVar13 = *pfVar13 + -3.0;
    }
  }
LAB_01492b30:
  fVar16 = *pfVar14;
  *pfVar10 = (*(float *)(psVar1 + 10) - *pfVar12) * (1.0 / fVar16);
  *pfVar11 = (*(float *)(psVar1 + 0xe) - *(float *)(psVar1 + 8)) * (1.0 / fVar16);
  *(float *)(psVar1 + 0x12) =
       (*pfVar13 - *(float *)(psVar1 + 6)) / fVar16 + fVar16 * *(float *)(psVar1 + 0x16) * 0.5;
  return;
}

