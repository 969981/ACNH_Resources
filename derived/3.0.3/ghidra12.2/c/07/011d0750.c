
bool FUN_011d0750(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  short sVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  
  sVar8 = *(short *)(param_4 + 0x112);
  if (sVar8 < 1) {
    if ((*(int *)(param_4 + 0xb0) == -1) && (*(int *)(param_4 + 0xb4) == -1)) {
      *(undefined8 *)(param_4 + 0xc4) = 0;
      bVar6 = true;
      *(undefined4 *)(param_4 + 0xcc) = 0;
    }
    else {
      uVar9 = *(ulong *)(param_4 + 0x108);
      local_40 = 0;
      if (DAT_05aed670 == 0) {
        puVar11 = &DAT_055c04a0;
      }
      else {
        puVar11 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar11 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))
                              (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar7 = FUN_006bd550(*puVar11,0);
          puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar7 != 0x758f7eaf) {
            puVar11 = &DAT_055c04a0;
          }
        }
      }
      local_3c = *(undefined4 *)(puVar11 + 7);
      local_38 = FUN_017baf44();
      local_38 = local_38 & 1;
      local_48 = PTR_DAT_04bb6268 + 0x10;
      uVar13 = FUN_01a50ed0(&local_48,param_4,param_4 + 0xa8,uVar9 >> 2 & 1);
      *(undefined4 *)(param_4 + 0xb8) = uVar13;
      *(float *)(param_4 + 0xbc) = param_2;
      *(float *)(param_4 + 0xc0) = param_3;
      *(undefined8 *)(param_4 + 0xc4) = 0;
      *(undefined4 *)(param_4 + 0xcc) = 0;
      FUN_011cc92c(param_4);
      bVar6 = true;
    }
  }
  else {
    bVar6 = (int)sVar8 == (int)*(char *)(param_4 + 0x115);
    if (bVar6) {
      uVar9 = *(ulong *)(param_4 + 0x108);
      local_40 = 0;
      if (DAT_05aed670 == 0) {
        puVar11 = &DAT_055c04a0;
      }
      else {
        puVar11 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar11 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))
                              (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar7 = FUN_006bd550(*puVar11,0);
          puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar7 != 0x758f7eaf) {
            puVar11 = &DAT_055c04a0;
          }
        }
      }
      local_3c = *(undefined4 *)(puVar11 + 7);
      local_38 = FUN_017baf44();
      local_38 = local_38 & 1;
      local_48 = PTR_DAT_04bb6268 + 0x10;
      fVar12 = (float)FUN_01a50ed0(&local_48,param_4,param_4 + 0xa8,uVar9 >> 2 & 1);
      fVar15 = *(float *)(param_4 + 0xb8);
      fVar17 = *(float *)(param_4 + 0xbc);
      fVar16 = *(float *)(param_4 + 0xc0);
      bVar5 = *(byte *)(param_4 + 0x115);
      sVar8 = (short)(char)bVar5;
      fVar14 = fVar17;
      if (-1 < (char)bVar5) {
        uVar1 = bVar5 + 1;
        uVar4 = uVar1 & 3;
        fVar18 = -*(float *)(param_4 + 0xf4);
        if (bVar5 < 3) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          do {
            fVar19 = (float)(int)uVar10;
            iVar7 = uVar10 + 1;
            iVar2 = uVar10 + 2;
            iVar3 = uVar10 + 3;
            uVar10 = uVar10 + 4;
            fVar14 = fVar14 + fVar19 * fVar18 + (float)iVar7 * fVar18 + (float)iVar2 * fVar18 +
                     (float)iVar3 * fVar18;
          } while (uVar10 != (uVar1 & 0x1fc));
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          fVar19 = (float)(int)uVar10;
          uVar10 = uVar10 + 1;
          fVar14 = fVar14 + fVar19 * fVar18;
        }
      }
      *(undefined1 *)(param_4 + 0x115) = 0;
      fVar19 = 1.0 / (float)(int)(char)bVar5;
      fVar18 = fVar19 * (param_3 - fVar16);
      fVar19 = fVar19 * (fVar12 - fVar15);
      fVar14 = (param_2 - fVar14) / (float)(int)(char)bVar5;
      *(float *)(param_4 + 0xc4) = fVar19;
      *(float *)(param_4 + 0xcc) = fVar18;
    }
    else {
      fVar15 = *(float *)(param_4 + 0xb8);
      fVar17 = *(float *)(param_4 + 0xbc);
      fVar16 = *(float *)(param_4 + 0xc0);
      fVar19 = *(float *)(param_4 + 0xc4);
      fVar14 = *(float *)(param_4 + 200);
      fVar18 = *(float *)(param_4 + 0xcc);
    }
    *(short *)(param_4 + 0x112) = sVar8 + -1;
    fVar14 = fVar14 - *(float *)(param_4 + 0xf4);
    *(float *)(param_4 + 0xb8) = fVar19 + fVar15;
    *(float *)(param_4 + 0xc0) = fVar18 + fVar16;
    *(float *)(param_4 + 200) = fVar14;
    *(float *)(param_4 + 0xbc) = fVar17 + fVar14;
    FUN_011cc92c(param_4);
  }
  return bVar6;
}

