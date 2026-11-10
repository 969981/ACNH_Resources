
void FUN_003552d0(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  int iVar3;
  long *plVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  ushort uVar18;
  long lVar19;
  byte *pbVar20;
  long lVar21;
  char cVar22;
  short sVar23;
  byte bVar24;
  uint uVar25;
  long *plVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  int iStack_78;
  short local_74;
  undefined1 auStack_72 [2];
  
  if (*(long **)(param_1 + 0x58) != (long *)(param_1 + 0x50)) {
    plVar1 = (long *)(param_1 + 0x70);
    plVar26 = *(long **)(param_1 + 0x58);
    do {
      plVar4 = (long *)plVar26[1];
      lVar16 = *plVar4;
      *(long **)(*plVar26 + 8) = plVar4;
      *plVar4 = *plVar26;
      *(long **)(lVar16 + 8) = plVar26;
      *plVar26 = lVar16;
      FUN_00354a24(param_1,*(undefined2 *)((long)plVar26 + 0x34));
      uVar11 = nn::fontll::ScalableFontEngine::CheckGlyphExist((uint)*(undefined8 *)(param_1 + 8));
      if ((uVar11 & 1) == 0) {
        *(byte *)(plVar26 + 7) = *(byte *)(plVar26 + 7) | 0x40;
        lVar16 = *plVar26;
        *plVar26 = *plVar1;
        *(long **)(lVar16 + 8) = plVar1;
        *(long **)(*plVar1 + 8) = plVar26;
        *plVar1 = lVar16;
      }
      else {
        nn::fontll::ScalableFontEngine::SetScale
                  ((int)*(undefined8 *)(param_1 + 8),(uint)*(ushort *)((long)plVar26 + 0x36) << 0x10
                   ,0,0);
        nn::fontll::ScalableFontEngine::GetError();
        fVar28 = (float)NEON_ucvtf((uint)*(ushort *)((long)plVar26 + 0x36));
        uVar27 = (uint)(fVar28 * *(float *)(*(long *)(param_1 + 0x1bf0) +
                                            (ulong)*(ushort *)((long)plVar26 + 0x34) * 0x1c + 8) +
                       0.5);
        lVar16 = nn::fontll::ScalableFontEngine::AcquireGlyphmap
                           ((uint)*(undefined8 *)(param_1 + 8),(ushort)plVar26[6]);
        nn::fontll::ScalableFontEngine::GetError();
        uVar7 = (**(code **)(param_1 + 0x1be0))
                          ((*(ushort *)(lVar16 + 0x1e) + uVar27) - (uint)*(ushort *)(lVar16 + 0xe));
        *(char *)((long)plVar26 + 0x3a) = (char)uVar7;
        uVar25 = *(uint *)(param_1 + 0x1880);
        if (uVar25 == 0) {
LAB_00355500:
          iVar8 = 0;
        }
        else {
          uVar11 = 0;
          pbVar20 = (byte *)(param_1 + 0x94);
          do {
            if (((uint)*pbVar20 == (uVar7 & 0xff)) &&
               (uVar18 = *(ushort *)(pbVar20 + -2),
               (uint)uVar18 + (int)*(short *)(lVar16 + 0x1c) + 2 < *(uint *)(param_1 + 0x28)))
            goto LAB_00355544;
            uVar11 = uVar11 + 1;
            pbVar20 = pbVar20 + 0x18;
          } while (uVar25 != uVar11);
          if (0xff < uVar25) {
            lVar16 = *plVar26;
            *plVar26 = *(long *)(param_1 + 0x60);
            *(long *)(lVar16 + 8) = param_1 + 0x60;
            *(long **)(*(long *)(param_1 + 0x60) + 8) = plVar26;
            *(long *)(param_1 + 0x60) = lVar16;
            nn::fontll::ScalableFontEngine::ReleasesGlyph(*(void **)(param_1 + 8));
            nn::fontll::ScalableFontEngine::GetError();
            *(undefined4 *)(param_1 + 0x1bcc) = 2;
            goto LAB_0035536c;
          }
          if (uVar25 == 0) goto LAB_00355500;
          lVar12 = param_1 + (ulong)(uVar25 - 1) * 0x18;
          uVar18 = *(ushort *)(lVar12 + 0x90);
          iVar8 = (**(code **)(param_1 + 0x1be8))(*(undefined1 *)(lVar12 + 0x94));
          iVar8 = (uint)uVar18 + iVar8 + 2;
        }
        iVar9 = (**(code **)(param_1 + 0x1be8))(uVar7);
        if ((uint)(iVar9 + iVar8) < *(uint *)(param_1 + 0x2c)) {
          uVar25 = *(uint *)(param_1 + 0x1880);
          uVar11 = (ulong)uVar25;
          uVar18 = 0;
          lVar12 = param_1 + uVar11 * 0x18;
          *(undefined2 *)(lVar12 + 0x92) = 0;
          *(short *)(lVar12 + 0x90) = (short)iVar8;
          *(char *)(lVar12 + 0x94) = (char)uVar7;
          *(char *)(lVar12 + 0x95) = (char)uVar25;
          *(uint *)(param_1 + 0x1880) = uVar25 + 1;
LAB_00355544:
          lVar12 = param_1 + uVar11 * 0x18;
          plVar17 = plVar26 + 2;
          lVar19 = *plVar17;
          *(ushort *)(plVar26 + 8) = uVar18;
          *(undefined2 *)((long)plVar26 + 0x42) = *(undefined2 *)(lVar12 + 0x90);
          *(undefined1 *)((long)plVar26 + 0x3b) = *(undefined1 *)(lVar12 + 0x95);
          plVar13 = (long *)(lVar12 + 0x80);
          *plVar17 = *plVar13;
          *(long **)(lVar19 + 8) = plVar13;
          *(long **)(*plVar13 + 8) = plVar17;
          *plVar13 = lVar19;
          *(short *)(lVar12 + 0x92) = *(short *)(lVar16 + 0x1c) + *(short *)(lVar12 + 0x92) + 2;
        }
        else {
          lVar12 = FUN_00355bb0(param_1,*(undefined1 *)((long)plVar26 + 0x3a),
                                *(undefined2 *)(lVar16 + 0x1c));
          if (lVar12 == 0) {
            lVar16 = *plVar26;
            *plVar26 = *(long *)(param_1 + 0x60);
            *(long *)(lVar16 + 8) = param_1 + 0x60;
            *(long **)(*(long *)(param_1 + 0x60) + 8) = plVar26;
            *(long *)(param_1 + 0x60) = lVar16;
            nn::fontll::ScalableFontEngine::ReleasesGlyph(*(void **)(param_1 + 8));
            nn::fontll::ScalableFontEngine::GetError();
            *(undefined4 *)(param_1 + 0x1bcc) = 3;
            goto LAB_0035536c;
          }
          plVar17 = plVar26 + 2;
          lVar19 = *plVar17;
          *(undefined2 *)(plVar26 + 8) = *(undefined2 *)(lVar12 + 0x40);
          *(undefined2 *)((long)plVar26 + 0x42) = *(undefined2 *)(lVar12 + 0x42);
          *(undefined1 *)((long)plVar26 + 0x3b) = *(undefined1 *)(lVar12 + 0x3b);
          plVar13 = (long *)(lVar12 + 0x10);
          *plVar17 = *plVar13;
          *(long **)(lVar19 + 8) = plVar13;
          *(long **)(*plVar13 + 8) = plVar17;
          *plVar13 = lVar19;
        }
        iVar9 = (int)*(short *)(lVar16 + 0xe);
        iVar8 = uVar27 - iVar9;
        uVar11 = (ulong)*(ushort *)((long)plVar26 + 0x34);
        uVar18 = *(ushort *)((long)plVar26 + 0x42);
        lVar12 = *(long *)(param_1 + 0x1bf0) + uVar11 * 0x1c;
        fVar29 = *(float *)(lVar12 + 0x10);
        fVar28 = *(float *)(lVar12 + 0x14);
        *(short *)(plVar26 + 9) = (short)(int)(fVar29 * (float)(int)*(short *)(lVar16 + 0x1c));
        *(short *)((long)plVar26 + 0x4a) =
             (short)(int)(fVar28 * (float)(iVar8 + *(short *)(lVar16 + 0x1e)));
        *(undefined2 *)((long)plVar26 + 0x44) = *(undefined2 *)(lVar16 + 0x1c);
        *(short *)((long)plVar26 + 0x46) = *(short *)(lVar16 + 0x1e) + (short)iVar8;
        if ((*(char *)(*(long *)(param_1 + 0x1c08) + uVar11) == '\0') ||
           (*(short *)(lVar16 + 0x1c) == 0)) {
          if (*(char *)(*(long *)(param_1 + 0x1c18) + uVar11) == '\0') {
            if (*(char *)(param_1 + 0x1c48) == '\0') {
              nn::fontll::ScalableFontEngine::GetAdvance
                        (*(short **)(param_1 + 8),&local_74,(int *)auStack_72,&iStack_78,
                         (int)auStack_72 - 0x12,(ushort)plVar26[6]);
              lVar12 = *(long *)(param_1 + 0x1c10);
              uVar11 = (ulong)*(ushort *)((long)plVar26 + 0x34);
              sVar6 = local_74;
            }
            else {
              lVar12 = *(long *)(param_1 + 0x1c10);
              sVar6 = *(short *)(lVar16 + 0x10);
            }
            *(short *)((long)plVar26 + 0x4c) =
                 (short)(int)(fVar29 * (float)((int)*(short *)(lVar12 + uVar11 * 2) + (int)sVar6));
            sVar6 = *(short *)(*(long *)(param_1 + 0x1c10) + uVar11 * 2);
            iVar15 = (int)*(short *)(lVar16 + 0xc) + ((int)(short)(sVar6 - (sVar6 >> 0xf)) >> 1);
          }
          else {
            *(short *)((long)plVar26 + 0x4c) =
                 (short)(int)(fVar29 * (float)(int)*(short *)(*(long *)(param_1 + 0x1c20) +
                                                             uVar11 * 2));
            iVar14 = (int)*(short *)(*(long *)(param_1 + 0x1c20) + uVar11 * 2);
            iVar15 = iVar14 - *(short *)(lVar16 + 0x1c);
            if (iVar14 < *(short *)(lVar16 + 0x1c)) {
              iVar15 = iVar15 + 1;
            }
            iVar15 = iVar15 >> 1;
          }
        }
        else {
          *(short *)((long)plVar26 + 0x4c) =
               (short)(int)(fVar29 * (float)((int)*(short *)(*(long *)(param_1 + 0x1c10) +
                                                            uVar11 * 2) +
                                            (int)*(short *)(lVar16 + 0x1c)));
          uVar5 = *(ushort *)(*(long *)(param_1 + 0x1c10) + uVar11 * 2);
          iVar15 = (int)(((uint)uVar5 + (uint)(uVar5 >> 0xf)) * 0x10000) >> 0x11;
        }
        uVar7 = (uint)uVar18;
        iVar8 = iVar8 + uVar7;
        *(short *)((long)plVar26 + 0x4e) = (short)(int)(fVar29 * (float)iVar15);
        *(short *)(plVar26 + 10) =
             (short)(int)((float)*(int *)(*(long *)(param_1 + 0x1bf0) + uVar11 * 0x1c + 0x18) +
                         fVar28 * (float)(int)uVar27);
        uVar11 = (ulong)((int)*(short *)(lVar16 + 0x1c) + 2);
        lVar12 = FUN_00349194(*(undefined8 *)(param_1 + 0x1e90));
        lVar12 = lVar12 + *(long *)(param_1 + 0x1e98);
        uVar18 = *(ushort *)((long)plVar26 + 0x42);
        uVar25 = (uint)uVar18;
        if ((int)(uint)uVar18 < iVar8) {
          uVar10 = ~(uint)uVar18;
          do {
            memset((void *)(lVar12 + (ulong)((uint)*(ushort *)(plVar26 + 8) +
                                            (uVar10 + *(int *)(param_1 + 0x2c)) *
                                            *(int *)(param_1 + 0x28))),0,uVar11);
            uVar25 = uVar25 + 1;
            uVar10 = uVar10 - 1;
          } while ((int)uVar25 < iVar8);
        }
        uVar25 = -iVar8 & (-iVar8 >> 0x1f ^ 0xffffffffU);
        if (*(char *)(*(long *)(param_1 + 0x1c00) + (ulong)*(ushort *)((long)plVar26 + 0x34)) ==
            '\0') {
          if ((int)uVar25 < (int)*(short *)(lVar16 + 0x1e)) {
            iVar8 = ((~uVar27 + iVar9) - uVar25) - uVar7;
            do {
              puVar2 = (undefined1 *)
                       (lVar12 + (ulong)((uint)*(ushort *)(plVar26 + 8) +
                                        (iVar8 + *(int *)(param_1 + 0x2c)) *
                                        *(int *)(param_1 + 0x28)));
              memcpy(puVar2 + 1,
                     (void *)(lVar16 + (long)(int)*(short *)(lVar16 + 0x1c) * (long)(int)uVar25 +
                             0x28),(long)*(short *)(lVar16 + 0x1c));
              *puVar2 = 0;
              uVar25 = uVar25 + 1;
              iVar8 = iVar8 + -1;
              puVar2[(long)*(short *)(lVar16 + 0x1c) + 1] = 0;
            } while ((int)uVar25 < (int)*(short *)(lVar16 + 0x1e));
          }
        }
        else {
          nn::fontll::ScalableFontEngine::SetFlags(*(undefined8 *)(param_1 + 8),1);
          lVar19 = nn::fontll::ScalableFontEngine::AcquireGlyphmap
                             ((uint)*(undefined8 *)(param_1 + 8),(ushort)plVar26[6]);
          nn::fontll::ScalableFontEngine::GetError();
          nn::fontll::ScalableFontEngine::SetFlags(*(undefined8 *)(param_1 + 8),2);
          sVar6 = *(short *)(lVar16 + 0x1e);
          if (*(short *)(lVar16 + 0x1e) <= *(short *)(lVar19 + 0x1e)) {
            sVar6 = *(short *)(lVar19 + 0x1e);
          }
          if ((int)uVar25 < (int)sVar6) {
            iVar15 = ((~uVar27 + iVar9) - uVar25) - uVar7;
            do {
              sVar23 = *(short *)(lVar16 + 0x1c);
              uVar18 = *(ushort *)(plVar26 + 8);
              iVar14 = *(int *)(param_1 + 0x28);
              iVar3 = *(int *)(param_1 + 0x2c);
              if (0 < sVar23) {
                lVar21 = 0;
                do {
                  if ((int)uVar25 < (int)*(short *)(lVar16 + 0x1e)) {
                    cVar22 = *(char *)(lVar16 + (int)((int)lVar21 + uVar25 * (int)sVar23) + 0x28);
                    if ((int)*(short *)(lVar19 + 0x1e) <= (int)uVar25) goto LAB_00355980;
LAB_00355910:
                    bVar24 = *(byte *)(lVar19 + 0x28 +
                                       (long)(int)*(short *)(lVar19 + 0x1c) * (long)(int)uVar25 +
                                      lVar21) >> 1;
                  }
                  else {
                    cVar22 = '\0';
                    if ((int)uVar25 < (int)*(short *)(lVar19 + 0x1e)) goto LAB_00355910;
LAB_00355980:
                    bVar24 = 0;
                  }
                  *(byte *)(lVar12 + 1 + (ulong)((uint)uVar18 + iVar14 * (iVar3 + iVar15)) + lVar21)
                       = cVar22 - bVar24;
                  lVar21 = lVar21 + 1;
                  sVar23 = *(short *)(lVar16 + 0x1c);
                } while (lVar21 < sVar23);
              }
              uVar10 = uVar25 + iVar8;
              uVar25 = uVar25 + 1;
              iVar15 = iVar15 + -1;
              puVar2 = (undefined1 *)(lVar12 + (ulong)((uint)uVar18 + (iVar3 + ~uVar10) * iVar14));
              *puVar2 = 0;
              puVar2[(long)*(short *)(lVar16 + 0x1c) + 1] = 0;
            } while (uVar25 != (int)sVar6);
          }
          nn::fontll::ScalableFontEngine::ReleasesGlyph(*(void **)(param_1 + 8));
          lVar16 = lVar19;
        }
        uVar10 = (**(code **)(param_1 + 0x1be8))(*(undefined1 *)((long)plVar26 + 0x3a));
        uVar25 = (uint)(short)*(ushort *)(lVar16 + 0x1e);
        if ((uVar25 < uVar10) && (*(ushort *)(lVar16 + 0x1e) < 0xfffe)) {
          iVar8 = ((~uVar27 + iVar9) - uVar25) - uVar7;
          do {
            uVar25 = uVar25 + 1;
            memset((void *)(lVar12 + (ulong)((uint)*(ushort *)(plVar26 + 8) +
                                            (iVar8 + *(int *)(param_1 + 0x2c)) *
                                            *(int *)(param_1 + 0x28))),0,uVar11);
            if (uVar10 <= uVar25) break;
            iVar8 = iVar8 + -1;
          } while (uVar25 < (int)*(short *)(lVar16 + 0x1e) + 2U);
        }
        FUN_003491a8(*(undefined8 *)(param_1 + 0x1e90));
        nn::fontll::ScalableFontEngine::ReleasesGlyph(*(void **)(param_1 + 8));
        nn::fontll::ScalableFontEngine::GetError();
      }
LAB_0035536c:
      plVar26 = plVar4;
    } while (plVar4 != (long *)(param_1 + 0x50));
  }
  return;
}

