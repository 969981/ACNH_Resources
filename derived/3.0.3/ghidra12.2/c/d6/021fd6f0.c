
undefined8 FUN_021fd6f0(float *param_1,float *param_2,undefined4 *param_3,long param_4,int param_5)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  uint *puVar9;
  int *piVar10;
  char *pcVar11;
  char cVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  uint *puVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  float local_c4 [2];
  float local_bc;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  uint *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  byte local_88;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_3);
  if (*(long *)puVar2 == 0) {
    return 0;
  }
  lVar13 = *(long *)(lVar13 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
  if (*(uint *)(lVar13 + 0x1d8) <= uVar3) {
    return 0;
  }
  if (param_1 == (float *)0x0) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return 0;
  }
  local_90 = 0;
  lVar13 = *(long *)PTR_DAT_04bb2720;
  if (lVar13 == 0) {
    puVar14 = &DAT_055c04a0;
  }
  else {
    puVar14 = &DAT_055c04a0;
    if (*(long *)(lVar13 + 0x330) != 0) {
      puVar14 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
      iVar4 = FUN_006bd550(*puVar14,0);
      puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar14 = &DAT_055c04a0;
      }
    }
  }
  local_8c = *(undefined4 *)(puVar14 + 7);
  local_88 = FUN_017baf44();
  local_88 = local_88 & 1;
  lVar13 = param_4 + 8;
  local_98 = PTR_DAT_04bb3140 + 0x10;
  puVar5 = (undefined4 *)FUN_01a5190c(&local_98,1,lVar13,0);
  local_a0 = *puVar5;
  local_9c = puVar5[1];
  uVar6 = FUN_0277d7b4(param_3,&local_a0);
  if ((uVar6 & 1) == 0) {
    puVar5 = (undefined4 *)FUN_01a5190c(&local_98,param_5,lVar13,0);
    local_a0 = *puVar5;
    local_9c = puVar5[1];
    uVar7 = FUN_0277d7b4(param_3,&local_a0);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
  local_b0 = *param_3;
  uStack_ac = param_3[1];
  lVar15 = *(long *)puVar2;
  local_a8 = (uint *)0x0;
  local_b8 = PTR_DAT_04bc0510 + 0x10;
  uVar3 = FUN_0277d6c4(&local_b0);
  fVar21 = 0.0;
  if (*(long *)puVar2 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_3);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar15 + 0x1d8)) &&
         (puVar16 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar16 != (uint *)0x0)) {
        uVar3 = *puVar16;
        local_a8 = puVar16;
        if (uVar3 == 0) {
          fVar22 = 0.5;
        }
        else {
          fVar22 = 0.5;
          cVar12 = *PTR_DAT_04bbfe88;
          puVar8 = PTR_DAT_04bbfe90;
          pcVar11 = PTR_DAT_04bbfe88;
          do {
            if (cVar12 != '\0') {
              uVar1 = *(uint *)(puVar8 + 0xdc);
              if ((int)uVar1 < 0) {
                if (uVar1 == 0xffffffff) goto LAB_021fd9dc;
              }
              else if ((float *)((ulong)uVar1 + (long)puVar16) != (float *)0x0) {
                fVar17 = *(float *)((ulong)uVar1 + (long)puVar16);
                fVar22 = 0.5;
                if (0.0 <= fVar17) {
                  fVar22 = fVar17;
                }
              }
LAB_021fdd10:
              uVar3 = *puVar16;
              if (uVar3 == 0) goto LAB_021fda80;
              cVar12 = *pcVar11;
              goto LAB_021fdd38;
            }
            *pcVar11 = '\x01';
            memset(PTR_DAT_04bbfe90,0xff,0x1ac);
            uVar3 = *puVar16;
            cVar12 = '\x01';
            puVar8 = PTR_DAT_04bbfe90;
            pcVar11 = PTR_DAT_04bbfe88;
LAB_021fd9dc:
            puVar9 = (uint *)(ulong)uVar3;
            if ((puVar9 == (uint *)0x0) || (puVar16 == puVar9)) goto LAB_021fdd10;
            lVar15 = 0xc;
            if (*(char *)((long)puVar16 + (10 - (long)puVar9)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar16 + (lVar15 - (long)puVar9);
            if (lVar15 == 0) goto LAB_021fdd10;
            uVar7 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar9));
            *(undefined4 *)(puVar8 + 0xdc) = 0xfffffffe;
            if (uVar7 == 0) goto LAB_021fdd10;
            piVar10 = (int *)(lVar15 + 4);
            while (piVar10[-1] != -0x7a39c48f) {
              piVar10 = piVar10 + 2;
              uVar7 = uVar7 - 1;
              if (uVar7 == 0) goto LAB_021fdd10;
            }
            iVar4 = 0;
            if (*piVar10 != -1) {
              iVar4 = *piVar10;
            }
            *(int *)(puVar8 + 0xdc) = iVar4;
            uVar3 = *puVar16;
          } while (uVar3 != 0);
        }
        goto LAB_021fda80;
      }
    }
  }
  fVar22 = 0.0;
LAB_021fda80:
  local_bc = (float)*(int *)(param_4 + 0x14) * 5.0 + 2.5;
  local_c4[0] = (float)*(int *)(param_4 + 0x10) * 5.0 + 2.5;
  lVar15 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar15 == 0) || (*(long *)(lVar15 + 0xa8) == 0)) || (*(char *)(lVar15 + 0x11c8) != '\0')) {
    fVar17 = -500.0;
  }
  else {
    fVar17 = (float)FUN_0093a950(lVar15 + 0x28,local_c4,0);
  }
  if (param_5 == 7) {
    fVar21 = 40.0 - fVar22 * fVar21;
  }
  else {
    fVar21 = fVar22 * fVar21 + fVar17;
    if ((uVar6 & 1) != 0) {
      puVar5 = (undefined4 *)FUN_01a5190c(&local_98,0,lVar13,0);
      local_a0 = *puVar5;
      local_9c = puVar5[1];
      lVar15 = *(long *)puVar2;
      uVar3 = FUN_0277d6c4(&local_a0);
      lVar13 = *(long *)puVar2;
      if (lVar13 != 0) {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar15 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          local_d0 = 0;
          local_d8 = local_a0;
          uStack_d4 = local_9c;
          uVar3 = FUN_0277d6c4(&local_d8);
          fVar22 = 0.0;
          if (*(long *)puVar2 != 0) {
            lVar13 = *(long *)(lVar13 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar13 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
              lVar13 = *(long *)PTR_DAT_04bc0428;
              uVar3 = FUN_0277d6c4(&local_a0);
              puVar8 = PTR_DAT_04bbfe90;
              puVar2 = PTR_DAT_04bbfe88;
              uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
              if ((uVar3 < *(uint *)(lVar13 + 0x1d8)) &&
                 ((puVar16 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar3 * 8),
                  puVar16 != (uint *)0x0 && (uVar3 = *puVar16, uVar3 != 0)))) {
                cVar12 = *PTR_DAT_04bbfe88;
                do {
                  if (cVar12 == '\0') {
                    cVar12 = '\x01';
                    *puVar2 = 1;
                    memset(puVar8,0xff,0x1ac);
                    uVar3 = *puVar16;
                  }
                  else {
                    uVar1 = *(uint *)(puVar8 + 0xf0);
                    if (-1 < (int)uVar1) {
                      if ((float *)((ulong)uVar1 + (long)puVar16) != (float *)0x0) {
                        fVar22 = *(float *)((ulong)uVar1 + (long)puVar16);
                      }
                      break;
                    }
                    if (uVar1 != 0xffffffff) break;
                  }
                  puVar9 = (uint *)(ulong)uVar3;
                  if ((puVar9 == (uint *)0x0) || (puVar16 == puVar9)) break;
                  lVar13 = 0xc;
                  if (*(char *)((long)puVar16 + (10 - (long)puVar9)) != '\0') {
                    lVar13 = 0x1c;
                  }
                  lVar13 = (long)puVar16 + (lVar13 - (long)puVar9);
                  if (lVar13 == 0) break;
                  uVar6 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar9));
                  *(undefined4 *)(puVar8 + 0xf0) = 0xfffffffe;
                  if (uVar6 == 0) break;
                  piVar10 = (int *)(lVar13 + 4);
                  while (piVar10[-1] != -0x499d99d4) {
                    piVar10 = piVar10 + 2;
                    uVar6 = uVar6 - 1;
                    if (uVar6 == 0) goto LAB_021fde10;
                  }
                  iVar4 = 0;
                  if (*piVar10 != -1) {
                    iVar4 = *piVar10;
                  }
                  *(int *)(puVar8 + 0xf0) = iVar4;
                  uVar3 = *puVar16;
                  if (uVar3 == 0) break;
                } while( true );
              }
            }
          }
LAB_021fde10:
          fVar21 = fVar21 + fVar22;
        }
      }
    }
  }
  iVar4 = *(int *)(param_4 + 0x20);
  iVar18 = *(int *)(param_4 + 0x24);
  iVar19 = *(int *)(param_4 + 0x10);
  iVar20 = *(int *)(param_4 + 0x14);
  param_1[1] = fVar21;
  param_1[2] = ((float)iVar20 * 5.0 + (float)iVar18 * 5.0 + 5.0) * 0.5;
  *param_1 = ((float)iVar19 * 5.0 + (float)iVar4 * 5.0 + 5.0) * 0.5;
  if (param_2 != (float *)0x0) {
    *param_2 = fVar21 - fVar17;
  }
  return 1;
LAB_021fdd38:
  if (cVar12 == '\0') {
    *pcVar11 = '\x01';
    memset(puVar8,0xff,0x1ac);
    uVar3 = *puVar16;
    cVar12 = '\x01';
    pcVar11 = PTR_DAT_04bbfe88;
  }
  else {
    uVar1 = *(uint *)(puVar8 + 0x28);
    if (-1 < (int)uVar1) {
      if ((float *)((ulong)uVar1 + (long)puVar16) != (float *)0x0) {
        fVar21 = *(float *)((ulong)uVar1 + (long)puVar16);
      }
      goto LAB_021fda80;
    }
    if (uVar1 != 0xffffffff) goto LAB_021fda80;
  }
  puVar8 = PTR_DAT_04bbfe90;
  puVar9 = (uint *)(ulong)uVar3;
  if ((puVar9 == (uint *)0x0) || (puVar16 == puVar9)) goto LAB_021fda80;
  lVar15 = 0xc;
  if (*(char *)((long)puVar16 + (10 - (long)puVar9)) != '\0') {
    lVar15 = 0x1c;
  }
  lVar15 = (long)puVar16 + (lVar15 - (long)puVar9);
  if (lVar15 == 0) goto LAB_021fda80;
  uVar7 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar9));
  *(undefined4 *)(PTR_DAT_04bbfe90 + 0x28) = 0xfffffffe;
  if (uVar7 == 0) goto LAB_021fda80;
  piVar10 = (int *)(lVar15 + 4);
  while (piVar10[-1] != -0x3e783aea) {
    piVar10 = piVar10 + 2;
    uVar7 = uVar7 - 1;
    if (uVar7 == 0) goto LAB_021fda80;
  }
  iVar4 = 0;
  if (*piVar10 != -1) {
    iVar4 = *piVar10;
  }
  *(int *)(puVar8 + 0x28) = iVar4;
  uVar3 = *puVar16;
  if (uVar3 == 0) goto LAB_021fda80;
  goto LAB_021fdd38;
}

