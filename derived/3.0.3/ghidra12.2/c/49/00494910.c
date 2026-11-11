
void FUN_00494910(long param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  undefined *puVar7;
  void *__dest;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  long lVar11;
  int *piVar12;
  uint *puVar13;
  long lVar14;
  int iVar15;
  uint *puVar16;
  undefined8 uVar17;
  int *piVar18;
  ulong *puVar19;
  int *piVar20;
  uint *puVar21;
  size_t __n;
  int *piVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  int iVar26;
  uint *puVar27;
  uint *local_168;
  undefined8 local_160;
  long local_158;
  undefined8 local_150;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [64];
  undefined8 local_78;
  uint local_70 [4];
  
  local_78 = *(undefined8 *)(param_1 + 0x360);
  local_c8 = auStack_b8;
  local_c0 = -0x7ffffff000000000;
  FUN_0049f670(&local_c8,0,0x54414730);
  FUN_004225b0(&local_158);
  FUN_00422d90(&local_158,&DAT_040c84b8,0x1341394);
  FUN_0049f830(&local_c8,0x53444b56,local_158,(int)local_150 + -1);
  FUN_00422550(&local_158);
  local_158 = 0;
  local_150 = 0x8000000000000000;
  uVar17 = *(undefined8 *)PTR_PTR_04bd4d28;
  plVar2 = (long *)(param_1 + 0x160);
  local_158 = FUN_004267f0(uVar17,*(undefined4 *)(param_1 + 0x168),4,0,0,(long)&local_150 + 4);
  iVar24 = (int)local_150 + 1;
  *(undefined4 *)(local_158 + (long)(int)local_150 * 4) = 0;
  iVar26 = *(int *)(param_1 + 0x168);
  local_150._0_4_ = iVar24;
  if (1 < iVar26) {
    iVar24 = 1;
    do {
      puVar16 = (uint *)(*plVar2 + (long)iVar24 * 0xc);
      if ((*puVar16 >> 0x1c == 0) && (*(int *)(*plVar2 + (long)iVar24 * 0xc + 8) == 0)) {
        *(int *)(param_1 + 0x168) = iVar26 + -1;
        iVar26 = (iVar26 + -1) - iVar24;
        if (0 < iVar26) {
          lVar11 = 0;
          do {
            lVar11 = (lVar11 << 0x20) + 0x400000000 >> 0x20;
            *puVar16 = puVar16[3];
            puVar16 = puVar16 + 1;
          } while (lVar11 < (long)iVar26 * 0xc);
        }
        iVar15 = iVar24 + -1;
        iVar24 = 0;
      }
      else {
        iVar15 = iVar24;
      }
      *(int *)(local_158 + (long)(int)local_150 * 4) = iVar24;
      local_150._0_4_ = (int)local_150 + 1;
      iVar26 = *(int *)(param_1 + 0x168);
      iVar24 = iVar15 + 1;
    } while (iVar24 < iVar26);
  }
  if (*(int *)(param_1 + 0x198) != 0) {
    lVar11 = (long)*(int *)(param_1 + 0x198) * 8 + -8;
    piVar12 = (int *)(*(long *)(param_1 + 400) + 4);
    lVar14 = (long)*piVar12;
    if (*piVar12 < (int)local_150) goto LAB_00494afc;
    do {
      iVar24 = ((int)lVar14 - (int)local_150) + *(int *)(param_1 + 0x168);
      while( true ) {
        if (iVar24 != 0) {
          *(int *)(*(long *)(param_1 + 8) + (ulong)(uint)piVar12[-1]) = iVar24;
        }
        if (lVar11 == 0) goto LAB_00494b0c;
        lVar11 = lVar11 + -8;
        piVar12 = piVar12 + 2;
        lVar14 = (long)*piVar12;
        if ((int)local_150 <= *piVar12) break;
LAB_00494afc:
        iVar24 = *(int *)(local_158 + lVar14 * 4);
      }
    } while( true );
  }
LAB_00494b0c:
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_0049f670(&local_c8,1,0x44415441);
    puVar19 = *(ulong **)(param_1 + 0x360);
    uVar3 = (long)*puVar19 + (long)*(int *)(param_1 + 0x10);
    if (puVar19[1] < uVar3) {
      FUN_004462a0(puVar19);
    }
    else {
      memcpy((void *)*puVar19,*(void **)(param_1 + 8),(long)*(int *)(param_1 + 0x10));
      *puVar19 = uVar3;
    }
    iVar26 = *(int *)(param_1 + 0x368);
    puVar19 = *(ulong **)(param_1 + 0x360);
    __dest = (void *)*puVar19;
    iVar24 = iVar26;
    if (iVar26 <= *(int *)(param_1 + 0x220)) {
      iVar24 = *(int *)(param_1 + 0x220);
    }
    uVar3 = (long)__dest + (puVar19[4] - puVar19[2]);
    iVar15 = 0;
    if ((long)iVar24 != 0) {
      iVar15 = (int)(uVar3 / (ulong)(long)iVar24);
    }
    iVar15 = (int)uVar3 - iVar15 * iVar24;
    iVar23 = iVar24 - iVar15;
    if (iVar15 != 0 && iVar23 != 0) {
      while( true ) {
        iVar26 = iVar23;
        if (0x1f < iVar23) {
          iVar26 = 0x20;
        }
        __n = (size_t)iVar26;
        if (puVar19[1] < __n + (long)__dest) {
          FUN_004462a0(puVar19,&DAT_041415a8,__n);
        }
        else {
          memcpy(__dest,&DAT_041415a8,__n);
          *puVar19 = __n + (long)__dest;
        }
        iVar23 = iVar23 - iVar26;
        if (iVar23 == 0) break;
        __dest = (void *)*puVar19;
      }
      iVar26 = *(int *)(param_1 + 0x368);
    }
    if (iVar26 <= iVar24) {
      iVar26 = iVar24;
    }
    *(int *)(param_1 + 0x368) = iVar26;
    FUN_0049f780(&local_c8);
  }
  if (*(int *)(param_1 + 0x1f8) == 0) {
    FUN_00493920(param_1,&local_c8,*(undefined8 *)(param_1 + 0x360));
    iVar24 = *(int *)(param_1 + 0x168);
    goto joined_r0x00494d2c;
  }
  FUN_0049f670(&local_c8,1,0x54435246);
  if (((*(int *)(param_1 + 0x108) == *(int *)(param_1 + 0x38)) &&
      (*(int *)(param_1 + 0x10c) == *(int *)(param_1 + 0x50))) &&
     (*(int *)(param_1 + 0x110) == *(int *)(param_1 + 0xf8))) {
    local_168 = *(uint **)(param_1 + 0x118);
    uVar8 = *(uint *)(param_1 + 0x1f0);
    if (uVar8 == 0) goto LAB_00494ca8;
LAB_00494c94:
    if (*(uint **)(*(long *)(param_1 + 0x1e8) + (long)(int)(uVar8 - 1) * 8) != local_168)
    goto LAB_00494ca8;
  }
  else {
    local_168 = (uint *)FUN_0049ae80(param_1 + 0x18);
    uVar8 = *(uint *)(param_1 + 0x1f0);
    if (uVar8 != 0) goto LAB_00494c94;
LAB_00494ca8:
    if (uVar8 == (*(uint *)(param_1 + 500) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,param_1 + 0x1e8,8);
      uVar8 = *(uint *)(param_1 + 0x1f0);
    }
    *(uint **)(*(long *)(param_1 + 0x1e8) + (long)(int)uVar8 * 8) = local_168;
    *(uint *)(param_1 + 0x1f0) = uVar8 + 1;
  }
  puVar19 = *(ulong **)(param_1 + 0x360);
  uVar3 = (long)*puVar19 + 8;
  if (puVar19[1] < uVar3) {
    FUN_004462a0(puVar19,&local_168,8);
    cVar6 = *(char *)(param_1 + 0x290);
  }
  else {
    memcpy((void *)*puVar19,&local_168,8);
    *puVar19 = uVar3;
    cVar6 = *(char *)(param_1 + 0x290);
  }
  if (cVar6 != '\0') {
    FUN_00446210(*(undefined8 *)(param_1 + 0x360),(long)*(int *)(param_1 + 0x220) << 1);
  }
  FUN_0049f780(&local_c8);
  iVar24 = *(int *)(param_1 + 0x168);
joined_r0x00494d2c:
  if (iVar24 != 0) {
    FUN_0049f670(&local_c8,0,0x494e4458);
    FUN_0049f670(&local_c8,1,0x4954454d);
    if (0 < *(int *)(param_1 + 0x168)) {
      lVar14 = 0;
      lVar11 = 0;
      do {
        lVar25 = *(long *)(param_1 + 0x160);
        puVar19 = *(ulong **)(param_1 + 0x360);
        local_168 = (uint *)CONCAT44(local_168._4_4_,*(undefined4 *)(lVar25 + lVar14));
        uVar3 = (long)*puVar19 + 4;
        if (puVar19[1] < uVar3) {
          FUN_004462a0(puVar19,&local_168,4);
        }
        else {
          memcpy((void *)*puVar19,&local_168,4);
          *puVar19 = uVar3;
        }
        lVar4 = lVar25 + lVar14;
        puVar19 = *(ulong **)(param_1 + 0x360);
        local_168 = (uint *)CONCAT44(local_168._4_4_,*(undefined4 *)(lVar4 + 4));
        uVar3 = (long)*puVar19 + 4;
        if (puVar19[1] < uVar3) {
          FUN_004462a0(puVar19,&local_168,4);
          uVar8 = *(uint *)(lVar25 + lVar14);
          if (uVar8 >> 0x1c == 0) goto LAB_00494e58;
LAB_00494e28:
          if ((uVar8 & 0xf0000000) == 0x30000000) goto LAB_00494e58;
          puVar19 = *(ulong **)(param_1 + 0x360);
          uVar9 = *(undefined4 *)(lVar4 + 8);
        }
        else {
          memcpy((void *)*puVar19,&local_168,4);
          *puVar19 = uVar3;
          uVar8 = *(uint *)(lVar25 + lVar14);
          if (uVar8 >> 0x1c != 0) goto LAB_00494e28;
LAB_00494e58:
          puVar19 = *(ulong **)(param_1 + 0x360);
          uVar9 = *(undefined4 *)(local_158 + (long)*(int *)(lVar4 + 8) * 4);
        }
        local_168 = (uint *)CONCAT44(local_168._4_4_,uVar9);
        uVar3 = (long)*puVar19 + 4;
        if (puVar19[1] < uVar3) {
          FUN_004462a0(puVar19,&local_168,4);
        }
        else {
          memcpy((void *)*puVar19,&local_168,4);
          *puVar19 = uVar3;
        }
        lVar11 = lVar11 + 1;
        lVar14 = lVar14 + 0xc;
      } while (lVar11 < *(int *)(param_1 + 0x168));
    }
    FUN_0049f780(&local_c8);
    if ((*(char *)(param_1 + 0x290) != '\0') &&
       (((*(int *)(param_1 + 0x178) != 0 || (*(int *)(param_1 + 0x188) != 0)) ||
        (*(char *)(param_1 + 0x1c0) != '\0')))) {
      FUN_0049f670(&local_c8,1,0x50544348);
      iVar24 = *(int *)(param_1 + 0x178);
      if (iVar24 != 0) {
        if (1 < iVar24) {
          FUN_0049b7f0(*(undefined8 *)(param_1 + 0x170),0,iVar24 + -1);
          iVar24 = *(int *)(param_1 + 0x178);
        }
        if (iVar24 != 0) {
          piVar20 = *(int **)(param_1 + 0x170);
          piVar12 = piVar20 + (long)iVar24 * 2;
          do {
            piVar18 = piVar20 + 2;
            iVar24 = *piVar20;
            if (piVar18 == piVar12) {
              piVar22 = piVar12;
            }
            else {
              piVar22 = piVar18;
              if (*piVar18 == iVar24) {
                piVar22 = piVar20 + 4;
                do {
                  piVar18 = piVar22;
                  if (piVar12 == piVar18) {
                    piVar18 = piVar12;
                    piVar22 = piVar12;
                    goto LAB_00494f74;
                  }
                  piVar22 = piVar18 + 2;
                } while (*piVar18 == iVar24);
                piVar22 = piVar18;
              }
            }
LAB_00494f74:
            puVar19 = *(ulong **)(param_1 + 0x360);
            local_168 = (uint *)CONCAT44(local_168._4_4_,iVar24);
            uVar3 = (long)*puVar19 + 4;
            if (puVar19[1] < uVar3) {
              FUN_004462a0(puVar19,&local_168,4);
            }
            else {
              memcpy((void *)*puVar19,&local_168,4);
              *puVar19 = uVar3;
            }
            puVar19 = *(ulong **)(param_1 + 0x360);
            iVar24 = (int)((ulong)((long)piVar18 - (long)piVar20) >> 3);
            local_168 = (uint *)CONCAT44(local_168._4_4_,iVar24);
            uVar3 = (long)*puVar19 + 4;
            piVar18 = piVar20;
            if (puVar19[1] < uVar3) {
              FUN_004462a0(puVar19,&local_168,4);
            }
            else {
              memcpy((void *)*puVar19,&local_168,4);
              *puVar19 = uVar3;
            }
            for (; piVar18 != piVar22; piVar18 = piVar18 + 2) {
              while( true ) {
                puVar19 = *(ulong **)(param_1 + 0x360);
                local_168 = (uint *)CONCAT44(local_168._4_4_,piVar18[1]);
                uVar3 = (long)*puVar19 + 4;
                if (uVar3 <= puVar19[1]) break;
                FUN_004462a0(puVar19,&local_168,4);
                piVar18 = piVar18 + 2;
                if (piVar22 == piVar18) goto LAB_00495058;
              }
              memcpy((void *)*puVar19,&local_168,4);
              *puVar19 = uVar3;
            }
LAB_00495058:
            piVar20 = piVar20 + (long)iVar24 * 2;
          } while (piVar12 != piVar20);
        }
      }
      if (*(int *)(param_1 + 0x188) != 0) {
        puVar19 = *(ulong **)(param_1 + 0x360);
        local_168 = (uint *)((ulong)local_168 & 0xffffffff00000000);
        uVar3 = (long)*puVar19 + 4;
        if (puVar19[1] < uVar3) {
          FUN_004462a0(puVar19,&local_168,4);
          iVar24 = *(int *)(param_1 + 0x188);
        }
        else {
          memcpy((void *)*puVar19,&local_168,4);
          *puVar19 = uVar3;
          iVar24 = *(int *)(param_1 + 0x188);
        }
        if (1 < iVar24) {
          FUN_0049b8e0(*(undefined8 *)(param_1 + 0x180),0,iVar24 + -1,param_1);
          iVar24 = *(int *)(param_1 + 0x188);
        }
        if (iVar24 != 0) {
          puVar21 = *(uint **)(param_1 + 0x180);
          puVar16 = puVar21 + (long)iVar24 * 2;
          do {
            uVar8 = *puVar21;
            local_168 = (uint *)0x0;
            local_160._0_4_ = 0;
            local_160._4_4_ = 0x80000000;
            do {
              lVar11 = *(long *)(param_1 + 8);
              puVar27 = puVar21 + 2;
              uVar5 = *(uint *)(lVar11 + (ulong)puVar21[1]);
              if ((puVar27 != puVar16) && (*(uint *)(lVar11 + (ulong)puVar21[3]) == uVar5)) {
                puVar10 = puVar21 + 4;
                do {
                  puVar13 = puVar10;
                  puVar27 = puVar16;
                  if (puVar16 == puVar13) break;
                  puVar10 = puVar13 + 2;
                  puVar27 = puVar13;
                } while (*(uint *)(lVar11 + (ulong)puVar13[1]) == uVar5);
              }
              if ((uint)local_160 == (local_160._4_4_ & 0x3fffffff)) {
                FUN_00426990(uVar17,&local_168,0x18);
              }
              uVar1 = (uint)local_160 + 1;
              puVar10 = local_168 + (long)(int)(uint)local_160 * 6;
              *puVar10 = uVar5;
              *(uint **)(puVar10 + 2) = puVar21;
              *(uint **)(puVar10 + 4) = puVar27;
              puVar21 = puVar21 + (long)(int)((ulong)((long)puVar27 - (long)puVar21) >> 3) * 2;
              local_160._0_4_ = uVar1;
              if (puVar21 == puVar16) {
                puVar21 = puVar16;
                break;
              }
            } while (*puVar21 == uVar8);
            puVar19 = *(ulong **)(param_1 + 0x360);
            uVar3 = (long)*puVar19 + 4;
            local_70[0] = uVar8;
            if (puVar19[1] < uVar3) {
              FUN_004462a0(puVar19,local_70,4);
            }
            else {
              memcpy((void *)*puVar19,local_70,4);
              *puVar19 = uVar3;
            }
            puVar19 = *(ulong **)(param_1 + 0x360);
            local_70[0] = (uint)local_160;
            uVar3 = (long)*puVar19 + 4;
            if (puVar19[1] < uVar3) {
              FUN_004462a0(puVar19,local_70,4);
              puVar27 = local_168;
            }
            else {
              memcpy((void *)*puVar19,local_70,4);
              *puVar19 = uVar3;
              puVar27 = local_168;
            }
            local_168 = puVar27;
            if ((uint)local_160 != 0) {
              puVar10 = puVar27 + (long)(int)(uint)local_160 * 6;
              do {
                local_70[0] = *puVar27;
                puVar19 = *(ulong **)(param_1 + 0x360);
                uVar3 = (long)*puVar19 + 4;
                if (puVar19[1] < uVar3) {
                  FUN_004462a0(puVar19,local_70,4);
                }
                else {
                  memcpy((void *)*puVar19,local_70,4);
                  *puVar19 = uVar3;
                }
                puVar19 = *(ulong **)(param_1 + 0x360);
                local_70[0] = (uint)((ulong)(*(long *)(puVar27 + 4) - *(long *)(puVar27 + 2)) >> 3);
                uVar3 = (long)*puVar19 + 4;
                if (puVar19[1] < uVar3) {
                  FUN_004462a0(puVar19,local_70,4);
                  lVar11 = *(long *)(puVar27 + 2);
                  lVar14 = *(long *)(puVar27 + 4);
                  if (lVar11 != lVar14) {
LAB_004952f4:
                    do {
                      while( true ) {
                        local_70[0] = *(uint *)(lVar11 + 4);
                        puVar19 = *(ulong **)(param_1 + 0x360);
                        uVar3 = (long)*puVar19 + 4;
                        if (uVar3 <= puVar19[1]) break;
                        FUN_004462a0(puVar19,local_70,4);
                        lVar11 = lVar11 + 8;
                        if (lVar14 == lVar11) goto LAB_00495348;
                      }
                      memcpy((void *)*puVar19,local_70,4);
                      *puVar19 = uVar3;
                      lVar11 = lVar11 + 8;
                    } while (lVar14 != lVar11);
                  }
                }
                else {
                  memcpy((void *)*puVar19,local_70,4);
                  *puVar19 = uVar3;
                  lVar11 = *(long *)(puVar27 + 2);
                  lVar14 = *(long *)(puVar27 + 4);
                  if (lVar11 != lVar14) goto LAB_004952f4;
                }
LAB_00495348:
                puVar27 = puVar27 + 6;
              } while (puVar27 != puVar10);
            }
            uVar8 = local_160._4_4_;
            local_160 = (ulong)local_160._4_4_ << 0x20;
            if ((-1 < (int)uVar8) && (local_168 != (uint *)0x0)) {
              FUN_00421f90(uVar17,local_168,0x18,uVar8 & 0x3fffffff);
            }
          } while (puVar16 != puVar21);
        }
      }
      FUN_0049f780(&local_c8);
    }
    FUN_0049f780(&local_c8);
  }
  FUN_0049f780(&local_c8);
  *(undefined8 *)(param_1 + 0x360) = 0;
  puVar7 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(long *)(param_1 + 8) != 0)) {
    FUN_00421f90(puVar7,*(long *)(param_1 + 8),1,*(uint *)(param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  FUN_0049a9f0(plVar2);
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0x80000000;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0x8000000000000000;
  FUN_0043d3a0(param_1 + 0x1b0);
  uVar8 = local_150._4_4_;
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  local_150 = (ulong)local_150._4_4_ << 0x20;
  if ((-1 < (int)uVar8) && (local_158 != 0)) {
    FUN_00421f90(uVar17,local_158,4,uVar8 & 0x3fffffff);
  }
  lVar11 = local_c0;
  uVar8 = local_c0._4_4_;
  local_c0 = (ulong)local_c0._4_4_ << 0x20;
  if ((-1 < lVar11) && (local_c8 != (undefined1 *)0x0)) {
    FUN_00421f90(puVar7,local_c8,4,uVar8 & 0x3fffffff);
  }
  return;
}

