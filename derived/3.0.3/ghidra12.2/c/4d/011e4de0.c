
undefined8 FUN_011e4de0(long param_1,float *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  float *pfVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  undefined2 local_c8;
  undefined2 uStack_c6;
  undefined4 uStack_c4;
  char local_c0;
  char local_bf;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined4 local_ac;
  undefined *local_a8;
  uint local_a0;
  uint uStack_9c;
  undefined *local_98;
  uint local_90;
  uint uStack_8c;
  undefined *local_88;
  char *local_80;
  undefined8 local_78;
  undefined2 local_68;
  undefined2 local_66;
  undefined4 local_64;
  
  uVar4 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0) & 0xfffffffe;
  local_88 = (undefined *)CONCAT44(local_88._4_4_,(float)(int)uVar4 * 5.0 + 5.0);
  uVar5 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0) & 0xfffffffe;
  local_80 = (char *)CONCAT44(local_80._4_4_,(float)(int)uVar5 * 5.0 + 5.0);
  fVar18 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_88,0);
  uVar16 = 0xffffffff;
  if (fVar18 + 5.0 <= *(float *)(param_3 + 4)) {
    uVar17 = 0xffffffff;
  }
  else {
    uVar17 = 0xffffffff;
    if (fVar18 + -5.0 < *(float *)(param_3 + 4)) {
      uVar17 = uVar4;
      uVar16 = uVar5;
      if (fVar18 + 1.0 <= param_2[1] || param_2[1] <= fVar18 + -1.0) {
        uVar16 = 0xffffffff;
        uVar17 = 0xffffffff;
      }
    }
  }
  if (0 < *(int *)(param_1 + 0x24f78)) {
    lVar13 = 0;
    iVar14 = 0;
    puVar1 = PTR_DAT_04bbbaf0 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    plVar11 = (long *)PTR_DAT_04bbbc68;
    do {
      lVar3 = param_1 + lVar13;
      if ((*(ushort *)(lVar3 + 0x2e0) >> 3 & 1) != 0) {
        uVar7 = *(uint *)(lVar3 + 0x290);
        uVar10 = *(uint *)(lVar3 + 0x294);
        if (uVar7 == uVar4 && uVar10 == uVar5) {
          local_c8 = *(undefined2 *)(lVar3 + 0x278);
          uStack_c6 = *(undefined2 *)(lVar3 + 0x27a);
          uStack_c4 = *(undefined4 *)(lVar3 + 0x27c);
          lVar15 = *plVar11;
          if (lVar15 != 0) {
            if ((*(long *)(lVar15 + 0xb0) != 0) && (*(long *)(*(long *)(lVar15 + 0xb0) + 8) != 0)) {
              if ((*(long *)(lVar15 + 0x488) != 0) &&
                 (*(long *)(*(long *)(lVar15 + 0x488) + 8) != 0)) {
                if ((*(long *)(lVar15 + 0x2b0) != 0) &&
                   (*(long *)(*(long *)(lVar15 + 0x2b0) + 8) != 0)) {
                  uVar7 = FUN_0277d6c4(&local_c8);
                  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                  plVar11 = (long *)PTR_DAT_04bbbc68;
                  if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
                    FUN_0124c030(&local_88,&local_c8);
                    uVar9 = FUN_0123d890(local_78,4);
                    if ((uVar9 & 1) != 0) {
                      local_98 = puVar2;
                      local_90 = uVar4;
                      uStack_8c = uVar5;
                      FUN_011d4db0(param_1,&local_98,0);
                    }
                    iVar8 = FUN_0123db50(&local_80,local_78);
                    if (iVar8 - 0xbU < 7) {
                      local_a8 = PTR_DAT_04bb2010 + 0x10;
                      local_a0 = uVar4;
                      uStack_9c = uVar5;
                      FUN_011d4db0(param_1,&local_a8,0);
                    }
                    plVar11 = (long *)PTR_DAT_04bbbc68;
                  }
                }
              }
            }
          }
          uVar7 = *(uint *)(lVar3 + 0x290);
          uVar10 = *(uint *)(lVar3 + 0x294);
        }
        if ((uVar7 == uVar17) && (uVar10 == uVar16)) {
          local_b0 = *(undefined2 *)(lVar3 + 0x278);
          local_ae = *(undefined2 *)(lVar3 + 0x27a);
          local_ac = *(undefined4 *)(lVar3 + 0x27c);
          lVar15 = *plVar11;
          if (lVar15 != 0) {
            if ((*(long *)(lVar15 + 0xb0) != 0) && (*(long *)(*(long *)(lVar15 + 0xb0) + 8) != 0)) {
              if ((*(long *)(lVar15 + 0x488) != 0) &&
                 (*(long *)(*(long *)(lVar15 + 0x488) + 8) != 0)) {
                if ((*(long *)(lVar15 + 0x2b0) != 0) &&
                   (*(long *)(*(long *)(lVar15 + 0x2b0) + 8) != 0)) {
                  uVar7 = FUN_0277d6c4(&local_b0);
                  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                  plVar11 = (long *)PTR_DAT_04bbbc68;
                  if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
                    uVar9 = FUN_0123d710(&local_b0,7,1);
                    plVar11 = (long *)PTR_DAT_04bbbc68;
                    if ((uVar9 & 1) != 0) {
                      local_b4 = *(undefined4 *)(lVar3 + 0x280);
                      local_88 = (undefined *)
                                 CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 0x230));
                      FUN_0071c8d0(&local_c8,&local_b4,&local_88,0);
                      plVar11 = (long *)CONCAT44(uStack_c4,CONCAT22(uStack_c6,local_c8));
                      if (plVar11 != (long *)0x0) {
                        if (((*PTR_DAT_04bbbb50 & 1) == 0) &&
                           (iVar8 = __cxa_guard_acquire(PTR_DAT_04bbbb50), iVar8 != 0)) {
                          *(undefined **)PTR_DAT_04bbbb48 = puVar1;
                          __cxa_guard_release(PTR_DAT_04bbbb50);
                        }
                        uVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bbbb48);
                        if ((uVar9 & 1) == 0) {
                          local_bf = '\0';
                        }
                      }
                      puVar6 = PTR_DAT_04bbbb28;
                      if (((local_bf != '\0') &&
                          (lVar15 = CONCAT44(uStack_c4,CONCAT22(uStack_c6,local_c8)), lVar15 != 0))
                         && (local_c0 != '\0')) {
                        lVar15 = lVar15 + 0x278;
                        lVar13 = lVar15 + (ulong)*(uint *)(lVar3 + 0x2d0) * 0x120;
                        if (999 < *(uint *)(lVar3 + 0x2d0)) {
                          lVar13 = lVar15;
                        }
                        if (*(int *)(lVar13 + 0xfc) == 4) goto LAB_011e5280;
                        local_88 = PTR_DAT_04bb2020 + 0x10;
                        local_80 = "PlantNet";
                        if (((*(int *)(lVar13 + 0xfc) != 0) && (*(int *)(lVar13 + 0xfc) != 2)) ||
                           (*(char *)(lVar13 + 0x11a) != -1)) goto LAB_011e5280;
                        lVar15 = 1;
                        pfVar12 = (float *)(PTR_DAT_04bbbb28 + 0x48);
                        goto LAB_011e52dc;
                      }
                      plVar11 = (long *)PTR_DAT_04bbbc68;
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar14 = iVar14 + 1;
      lVar13 = lVar13 + 0x78;
    } while (iVar14 < *(int *)(param_1 + 0x24f78));
  }
  return 0;
  while( true ) {
    if (pfVar12[-1] == *pfVar12) goto LAB_011e5314;
    lVar15 = lVar15 + 2;
    pfVar12 = pfVar12 + 0x14;
    if (lVar15 == 0x79) break;
LAB_011e52dc:
    if (pfVar12[-0xb] == pfVar12[-10]) {
      lVar15 = lVar15 + -1;
LAB_011e5314:
      uVar4 = (uint)lVar15 & 0xff;
      *(char *)(lVar13 + 0x11a) = (char)lVar15;
      if (uVar4 != 0xff) {
        puVar1 = puVar6 + (ulong)(uint)(int)(char)lVar15 * 0x28;
        if (0x77 < uVar4) {
          puVar1 = puVar6;
        }
        FUN_0359e360(puVar1,&local_88);
        *(ulong *)(lVar13 + 0x108) = *(ulong *)(lVar13 + 0x108) | 0x1000000000;
      }
      goto LAB_011e5280;
    }
  }
  *(undefined1 *)(lVar13 + 0x11a) = 0xff;
LAB_011e5280:
  local_88 = *(undefined **)(lVar3 + 0x2a0);
  local_68 = *(undefined2 *)(lVar3 + 0x278);
  local_66 = *(undefined2 *)(lVar3 + 0x27a);
  local_64 = *(undefined4 *)(lVar3 + 0x27c);
  local_80 = (char *)CONCAT44(local_80._4_4_,*(undefined4 *)(lVar3 + 0x2a8));
  FUN_011ea808(0,param_1,&local_68,&local_88,&DAT_040a0a52);
  return 1;
}

