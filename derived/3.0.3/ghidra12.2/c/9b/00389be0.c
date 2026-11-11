
void FUN_00389be0(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_a0;
  char local_9c [4];
  char *local_98;
  uint local_88;
  char local_84 [4];
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x148) + 0x9c);
  if (uVar1 == 0) {
    return;
  }
  fVar12 = (float)FUN_0038b040(param_1,&local_a0,param_2);
  pfVar8 = *(float **)(param_1 + 0x150);
  uVar3 = *(ushort *)(param_1 + 0x114);
  uVar7 = (uint)uVar3;
  fVar14 = *pfVar8;
  if (((uVar3 ^ 0xffff) & 0x9000) == 0) {
    if (pfVar8[7] == 2.8026e-45) {
      fVar14 = (fVar14 + pfVar8[1]) - local_a0 * fVar12;
      goto LAB_00389cd8;
    }
    if (pfVar8[7] != 1.4013e-45) goto LAB_00389cd8;
    fVar13 = pfVar8[1] - local_a0 * fVar12;
  }
  else {
    if (((uVar3 ^ 0xffff) & 0x3000) != 0) goto LAB_00389cd8;
    uVar2 = *(uint *)(*(long *)(param_1 + 0x148) + 0x9c);
    if (pfVar8[7] == 2.8026e-45) {
      fVar14 = (fVar14 + pfVar8[1]) - (float)uVar2 * pfVar8[6];
      goto LAB_00389cd8;
    }
    if (pfVar8[7] != 1.4013e-45) goto LAB_00389cd8;
    fVar13 = pfVar8[1] - (float)uVar2 * pfVar8[6];
  }
  fVar14 = fVar14 + fVar13 * 0.5;
LAB_00389cd8:
  pcVar9 = *(char **)(param_1 + 0xd8);
  uVar11 = 0;
  do {
    pcVar10 = pcVar9;
    if (((uVar7 ^ 0xffffffff) & 0x9000) == 0) {
      while (pcVar9 = (char *)(**(code **)(*param_2 + 0x70))(param_2,local_9c,pcVar10),
            local_9c[0] == '\0') {
        bVar4 = pcVar9 <= pcVar10;
        pcVar10 = pcVar9;
        if (bVar4 || (char *)(*(long *)(param_1 + 0xd8) + (ulong)*(ushort *)(param_1 + 0x112)) <
                     pcVar9) {
          return;
        }
      }
      local_84[0] = '\0';
      local_84[1] = '\0';
      local_84[2] = '\0';
      local_84[3] = '\0';
      local_98 = pcVar10;
      nn::util::PickOutCharacterFromUtf8String(local_84,&local_98);
      local_88 = 0;
      nn::util::ConvertCharacterUtf8ToUtf32(&local_88,local_84);
      uVar7 = local_88;
      if (pcVar9 == (char *)0x0) {
        return;
      }
      fVar13 = *(float *)(param_1 + 0xf8);
      iVar5 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x20))();
      iVar6 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x80))(*(long **)(param_1 + 0xf0),uVar7);
      fVar13 = (fVar13 / (float)iVar5) * (*(float *)(param_1 + 0x104) + (float)iVar6);
      fVar14 = fVar14 + fVar12 * fVar13 * 0.5;
    }
    else {
      if (((uVar7 ^ 0xffffffff) & 0x3000) == 0) {
        fVar14 = fVar12 * 0.5 + fVar14;
      }
      else {
        if ((uVar7 >> 9 & 1) != 0) {
          while (pcVar9 = (char *)(**(code **)(*param_2 + 0x70))(param_2,local_9c,pcVar10),
                local_9c[0] == '\0') {
            bVar4 = pcVar9 <= pcVar10;
            pcVar10 = pcVar9;
            if (bVar4 || (char *)(*(long *)(param_1 + 0xd8) + (ulong)*(ushort *)(param_1 + 0x112)) <
                         pcVar9) {
              return;
            }
          }
          local_84[0] = '\0';
          local_84[1] = '\0';
          local_84[2] = '\0';
          local_84[3] = '\0';
          local_98 = pcVar10;
          nn::util::PickOutCharacterFromUtf8String(local_84,&local_98);
          local_88 = 0;
          nn::util::ConvertCharacterUtf8ToUtf32(&local_88,local_84);
          if (pcVar9 == (char *)0x0) {
            return;
          }
          iVar5 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x80))
                            (*(long **)(param_1 + 0xf0),local_88);
          fVar13 = *(float *)(param_1 + 0x104) + (float)iVar5;
          if ((*(ushort *)(param_1 + 0x114) >> 0xc & 1) == 0) {
            if (uVar11 != 0) {
              fVar14 = fVar14 + fVar12 * fVar13;
            }
          }
          else {
            fVar14 = fVar14 + fVar12 * fVar13 * 0.5;
          }
          goto LAB_00389dec;
        }
        fVar14 = **(float **)(param_1 + 0x150) + (float)(uVar11 & 0xffffffff) * fVar12;
      }
      fVar13 = 0.0;
    }
LAB_00389dec:
    FUN_0038ad90(fVar14,param_1,*(long *)(*(long *)(param_1 + 0x150) + 8) + uVar11 * 0x34);
    uVar7 = (uint)*(ushort *)(param_1 + 0x114);
    if (((uVar7 ^ 0xffffffff) & 0x9000) == 0) {
LAB_00389e70:
      fVar14 = fVar14 + fVar12 * fVar13 * 0.5;
    }
    else if (((uVar7 ^ 0xffffffff) & 0x3000) == 0) {
      fVar14 = fVar12 * 0.5 + fVar14;
    }
    else if (((uVar7 ^ 0xffffffff) & 0x1200) == 0) goto LAB_00389e70;
    uVar11 = uVar11 + 1;
    if (uVar11 == uVar1) {
      return;
    }
  } while( true );
}

