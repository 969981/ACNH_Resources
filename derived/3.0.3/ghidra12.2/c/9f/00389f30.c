
void FUN_00389f30(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined2 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_94;
  char local_88 [4];
  char local_84 [4];
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x148) + 0x9c);
  if (uVar1 == 0) {
    return;
  }
  fVar13 = (float)FUN_0038b2c0(param_1,&local_94,param_2);
  pfVar9 = *(float **)(param_1 + 0x150);
  uVar3 = *(ushort *)(param_1 + 0x114);
  uVar8 = (uint)uVar3;
  fVar15 = *pfVar9;
  if (((uVar3 ^ 0xffff) & 0x9000) == 0) {
    if (pfVar9[7] == 2.8026e-45) {
      fVar15 = (fVar15 + pfVar9[1]) - local_94 * fVar13;
      goto LAB_0038a028;
    }
    if (pfVar9[7] != 1.4013e-45) goto LAB_0038a028;
    fVar14 = pfVar9[1] - local_94 * fVar13;
  }
  else {
    if (((uVar3 ^ 0xffff) & 0x3000) != 0) goto LAB_0038a028;
    uVar2 = *(uint *)(*(long *)(param_1 + 0x148) + 0x9c);
    if (pfVar9[7] == 2.8026e-45) {
      fVar15 = (fVar15 + pfVar9[1]) - (float)uVar2 * pfVar9[6];
      goto LAB_0038a028;
    }
    if (pfVar9[7] != 1.4013e-45) goto LAB_0038a028;
    fVar14 = pfVar9[1] - (float)uVar2 * pfVar9[6];
  }
  fVar15 = fVar15 + fVar14 * 0.5;
LAB_0038a028:
  puVar10 = *(undefined2 **)(param_1 + 0xd8);
  uVar12 = 0;
  do {
    puVar11 = puVar10;
    if (((uVar8 ^ 0xffffffff) & 0x9000) == 0) {
      while (puVar10 = (undefined2 *)(**(code **)(*param_2 + 0x70))(param_2,local_88,puVar11),
            local_88[0] == '\0') {
        bVar5 = puVar10 <= puVar11;
        puVar11 = puVar10;
        if (bVar5 || (undefined2 *)
                     (*(long *)(param_1 + 0xd8) + (ulong)*(ushort *)(param_1 + 0x112) * 2) < puVar10
           ) {
          return;
        }
      }
      if (puVar10 == (undefined2 *)0x0) {
        return;
      }
      fVar14 = *(float *)(param_1 + 0xf8);
      uVar4 = *puVar11;
      iVar6 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x20))();
      iVar7 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x80))(*(long **)(param_1 + 0xf0),uVar4);
      fVar14 = (fVar14 / (float)iVar6) * (*(float *)(param_1 + 0x104) + (float)iVar7);
      fVar15 = fVar15 + fVar13 * fVar14 * 0.5;
    }
    else {
      if (((uVar8 ^ 0xffffffff) & 0x3000) == 0) {
        fVar15 = fVar13 * 0.5 + fVar15;
      }
      else {
        if ((uVar8 >> 9 & 1) != 0) {
          while (puVar10 = (undefined2 *)(**(code **)(*param_2 + 0x70))(param_2,local_84,puVar11),
                local_84[0] == '\0') {
            bVar5 = puVar10 <= puVar11;
            puVar11 = puVar10;
            if (bVar5 || (undefined2 *)
                         (*(long *)(param_1 + 0xd8) + (ulong)*(ushort *)(param_1 + 0x112) * 2) <
                         puVar10) {
              return;
            }
          }
          if (puVar10 == (undefined2 *)0x0) {
            return;
          }
          iVar6 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x80))
                            (*(long **)(param_1 + 0xf0),*puVar11);
          fVar14 = *(float *)(param_1 + 0x104) + (float)iVar6;
          if ((*(ushort *)(param_1 + 0x114) >> 0xc & 1) == 0) {
            if (uVar12 != 0) {
              fVar15 = fVar15 + fVar13 * fVar14;
            }
          }
          else {
            fVar15 = fVar15 + fVar13 * fVar14 * 0.5;
          }
          goto LAB_0038a118;
        }
        fVar15 = **(float **)(param_1 + 0x150) + (float)(uVar12 & 0xffffffff) * fVar13;
      }
      fVar14 = 0.0;
    }
LAB_0038a118:
    FUN_0038ad90(fVar15,param_1,*(long *)(*(long *)(param_1 + 0x150) + 8) + uVar12 * 0x34);
    uVar8 = (uint)*(ushort *)(param_1 + 0x114);
    if (((uVar8 ^ 0xffffffff) & 0x9000) == 0) {
LAB_0038a1a0:
      fVar15 = fVar15 + fVar13 * fVar14 * 0.5;
    }
    else if (((uVar8 ^ 0xffffffff) & 0x3000) == 0) {
      fVar15 = fVar13 * 0.5 + fVar15;
    }
    else if (((uVar8 ^ 0xffffffff) & 0x1200) == 0) goto LAB_0038a1a0;
    uVar12 = uVar12 + 1;
    if (uVar12 == uVar1) {
      return;
    }
  } while( true );
}

