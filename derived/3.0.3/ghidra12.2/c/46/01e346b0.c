
/* WARNING: Removing unreachable block (ram,0x01e34b50) */
/* WARNING: Type propagation algorithm not settling */

void FUN_01e346b0(long param_1)

{
  int iVar1;
  CalendarTime *pCVar2;
  uint *puVar3;
  short sVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 *******pppppppuVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  undefined4 uVar15;
  byte *pbVar16;
  long lVar17;
  undefined8 *puVar18;
  byte bVar19;
  uint uVar20;
  long lVar21;
  int *piVar22;
  undefined8 *******pppppppuVar23;
  undefined8 ******ppppppuVar24;
  undefined8 local_1d0;
  undefined8 *******pppppppuStack_1c8;
  undefined **local_1c0;
  long lStack_1b8;
  undefined *local_1b0;
  undefined *puStack_1a8;
  int local_1a0;
  int iStack_19c;
  undefined *local_198;
  int local_190;
  int iStack_18c;
  undefined8 local_188;
  undefined8 *******local_180;
  int local_178;
  undefined8 *******local_170;
  undefined8 *******pppppppuStack_168;
  int local_160;
  undefined8 *******local_158 [3];
  undefined8 *******local_140 [3];
  undefined8 *******local_128 [3];
  undefined8 ******local_110 [3];
  undefined8 *****local_f8 [3];
  undefined8 ****local_e0 [3];
  undefined8 ***local_c8 [3];
  undefined8 **local_b0 [3];
  undefined8 *local_98 [3];
  undefined8 local_80 [4];
  
  if (*(byte **)PTR_DAT_04bb38d0 != (byte *)0x0) {
    local_188 = (undefined8 *******)
                (CONCAT44(local_188._4_4_,(uint)(**(byte **)PTR_DAT_04bb38d0 >> 2)) &
                0xffffffff0000000f);
    if (3 < (uint)local_188) {
      return;
    }
  }
  lVar21 = *(long *)PTR_DAT_04bb39b0;
  pbVar16 = PTR_DAT_04bb32e0;
  if (lVar21 == 0) {
LAB_01e3475c:
    if (7 < *pbVar16) {
LAB_01e34768:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar21 = **(long **)PTR_DAT_04bb27d0;
        bVar19 = *(byte *)(lVar21 + 0x473);
        pbVar16 = PTR_DAT_04bb5038;
        if ((long)(char)bVar19 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar19 & 0xffffffffU) * 0x20;
          if (7 < bVar19) {
            puVar3 = (uint *)(lVar21 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar16 = (byte *)(lVar21 + 0x471);
          }
        }
        bVar19 = *pbVar16;
        bVar8 = 7 < bVar19;
        if (bVar8) {
          bVar19 = 0xff;
        }
        local_188 = (undefined8 *******)CONCAT71(local_188._1_7_,bVar19);
        if (!bVar8) goto LAB_01e347e8;
      }
      pbVar16 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar21 + 0x15c) != 0) {
      pbVar16 = (byte *)(lVar21 + 0x158);
    }
    if (7 < *pbVar16) {
      if ((*(int *)(lVar21 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01e3475c;
      }
      goto LAB_01e34768;
    }
  }
  bVar19 = *pbVar16;
  if (7 < bVar19) {
    bVar19 = 0xff;
  }
  local_188 = (undefined8 *******)CONCAT71(local_188._1_7_,bVar19);
LAB_01e347e8:
  uVar9 = FUN_0252f708(&local_188,1,0);
  if ((uVar9 & 1) == 0) {
    lVar21 = *(long *)(param_1 + 0x440);
    local_158[0] = local_140;
    local_140[0] = local_128;
    local_178 = 0;
    local_128[0] = local_110;
    local_80[0] = 0;
    local_110[0] = local_f8;
    local_f8[0] = local_e0;
    local_e0[0] = local_c8;
    local_c8[0] = local_b0;
    local_b0[0] = local_98;
    local_98[0] = local_80;
    local_170 = local_158;
    pppppppuStack_168 = local_158;
    local_160 = 10;
    local_188 = (undefined8 *******)&local_188;
    local_180 = (undefined8 *******)&local_188;
    if (lVar21 != param_1 + 0x438) {
      do {
        if (*(uint *)(lVar21 + -8) < 10) {
          uVar9 = (ulong)*(uint *)(lVar21 + -8);
          if (((&DAT_053fee41)[uVar9 * 0xba0] != '\0') &&
             (uVar10 = FUN_0219e890(&DAT_053fe348 + uVar9 * 0xba0), (uVar10 & 1) != 0)) {
            if ((int)(&DAT_053fe898)[uVar9 * 0x2e8] < 1) {
              iVar14 = 0;
            }
            else {
              iVar14 = 0;
              iVar5 = (&DAT_053fe898)[uVar9 * 0x2e8] + (&DAT_053fe894)[uVar9 * 0x2e8] + -1;
              iVar1 = 0;
              if ((int)(&DAT_053fe890)[uVar9 * 0x2e8] <= iVar5) {
                iVar1 = (&DAT_053fe890)[uVar9 * 0x2e8];
              }
              piVar22 = (int *)((&DAT_053fe888)[uVar9 * 0x174] + (long)(iVar5 - iVar1) * 0x14);
              if ((char)piVar22[4] == '\0') {
                iVar14 = *piVar22;
              }
            }
            local_1b0 = (undefined *)CONCAT44(local_1b0._4_4_,iVar14);
            if ((iVar14 < 0x1b) && ((&DAT_053feb0a)[uVar9 * 0x5d0] != 0)) {
              lVar17 = *(long *)PTR_DAT_04bb32e8;
              lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(&DAT_053feb0a + uVar9 * 0x5d0))
              ;
              lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar17 + 0x4060));
              if (lVar11 <= lVar12) {
                lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar17 + 0x4060));
                pppppppuVar7 = local_170;
                pppppppuVar23 = local_188;
                if ((lVar12 != lVar11) && (local_178 < local_160)) {
                  if (local_170 != (undefined8 *******)0x0) {
                    local_170 = (undefined8 *******)*local_170;
                  }
                  *pppppppuVar7 = (undefined8 ******)(&DAT_053fe348 + uVar9 * 0xba0);
                  local_188 = pppppppuVar7 + 1;
                  *local_188 = (undefined8 ******)0x0;
                  pppppppuVar7[2] = (undefined8 ******)&local_188;
                  *local_188 = pppppppuVar23;
                  if (pppppppuVar23 != (undefined8 *******)0x0) {
                    pppppppuVar23[1] = local_188;
                  }
                  local_178 = local_178 + 1;
                }
              }
            }
          }
        }
        lVar21 = *(long *)(lVar21 + 8);
      } while (lVar21 + -8 != param_1 + 0x430);
    }
    local_1b0 = PTR_DAT_04bbc1a0 + 0x10;
    lVar21 = *(long *)PTR_DAT_04bb5c90;
    puStack_1a8 = PTR_DAT_04bb2010 + 0x10;
    local_190 = *(int *)(lVar21 + 0x28) + -2;
    iVar14 = *(int *)(lVar21 + 0x38) + 2;
    iStack_18c = *(int *)(lVar21 + 0x2c) + -2;
    iVar1 = *(int *)(lVar21 + 0x3c) + 2;
    local_1a0 = local_190;
    if (iVar14 <= local_190) {
      local_1a0 = iVar14;
    }
    if (local_190 <= iVar14) {
      local_190 = iVar14;
    }
    iStack_19c = iStack_18c;
    if (iVar1 <= iStack_18c) {
      iStack_19c = iVar1;
    }
    if (iStack_18c <= iVar1) {
      iStack_18c = iVar1;
    }
    local_1c0 = &local_1b0;
    local_1d0 = &PTR_FUN_04a5d1b8;
    iVar14 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
    pppppppuStack_1c8 = (undefined8 *******)&local_188;
    lStack_1b8 = param_1;
    local_198 = puStack_1a8;
    if (iVar14 != 0) {
      lVar21 = (long)iVar14 << 3;
      puVar18 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
      do {
        (*(code *)*local_1d0)(&local_1d0,*puVar18);
        lVar21 = lVar21 + -8;
        puVar18 = puVar18 + 1;
      } while (lVar21 != 0);
    }
    puVar6 = PTR_DAT_04bb32e8;
    if (local_180 != (undefined8 *******)&local_188) {
      pppppppuVar23 = local_180;
      do {
        ppppppuVar24 = pppppppuVar23[-1];
        iVar14 = *(int *)(ppppppuVar24 + 0xaa);
        iVar1 = *(int *)(ppppppuVar24 + 0xa9);
        if (iVar14 < iVar1) {
LAB_01e34b04:
          *(int *)(ppppppuVar24 + 0xaa) = iVar14 + 1;
          iVar14 = *(int *)((long)ppppppuVar24 + 0x54c) + iVar14;
          iVar5 = 0;
          if (iVar1 <= iVar14) {
            iVar5 = iVar1;
          }
          puVar18 = (undefined8 *)((long)ppppppuVar24[0xa8] + (long)(iVar14 - iVar5) * 0x14);
          *(undefined2 *)(puVar18 + 2) = 0;
          *puVar18 = 0;
          puVar18[1] = 0;
        }
        else {
          if (0 < iVar14) {
            *(int *)(ppppppuVar24 + 0xaa) = iVar14 + -1;
            iVar5 = 0;
            if (*(int *)((long)ppppppuVar24 + 0x54c) + 1 < iVar1) {
              iVar5 = *(int *)((long)ppppppuVar24 + 0x54c) + 1;
            }
            *(int *)((long)ppppppuVar24 + 0x54c) = iVar5;
            iVar14 = iVar14 + -1;
          }
          if (iVar14 < iVar1) goto LAB_01e34b04;
        }
        local_1d0 = (undefined **)((ulong)local_1d0 & 0xffffffff00000000);
        FUN_021dafb0((long)ppppppuVar24 + 0x514,&local_1d0,0,0,0,1);
        bVar19 = *(byte *)(*(long *)puVar6 + 0x4064);
        uVar15 = 5;
        if (bVar19 < 5) {
LAB_01e34bc4:
          iVar14 = *(int *)(ppppppuVar24 + 0xaa);
        }
        else if (bVar19 < 8) {
          uVar15 = 0;
          iVar14 = *(int *)(ppppppuVar24 + 0xaa);
        }
        else if (bVar19 < 0xc) {
          uVar15 = 1;
          iVar14 = *(int *)(ppppppuVar24 + 0xaa);
        }
        else {
          if (bVar19 < 0x10) {
            uVar15 = 2;
            goto LAB_01e34bc4;
          }
          uVar15 = 3;
          if (0x12 < bVar19) {
            uVar15 = 4;
          }
          iVar14 = *(int *)(ppppppuVar24 + 0xaa);
        }
        if ((iVar14 != 0) && (ppppppuVar24[0xa8] != (undefined8 *****)0x0)) {
          iVar1 = iVar14 + *(int *)((long)ppppppuVar24 + 0x54c) + -1;
          iVar14 = 0;
          if (*(int *)(ppppppuVar24 + 0xa9) <= iVar1) {
            iVar14 = *(int *)(ppppppuVar24 + 0xa9);
          }
          puVar18 = (undefined8 *)((long)ppppppuVar24[0xa8] + (long)(iVar1 - iVar14) * 0x14);
          *puVar18 = 0x30000001b;
          *(undefined4 *)((long)puVar18 + 0xc) = uVar15;
          *(undefined1 *)((long)puVar18 + 0x11) = 1;
        }
        FUN_01e37c08(ppppppuVar24 + 0xa1,0);
        pppppppuVar23 = (undefined8 *******)pppppppuVar23[1];
      } while (pppppppuVar23 + -1 != (undefined8 *******)&local_190);
    }
    puVar6 = PTR_DAT_04bb32e8;
    pppppppuVar23 = &local_180;
    if ((*(short *)(param_1 + 0x570) == 0) && (sVar4 = *(short *)PTR_DAT_04bb6298, sVar4 != -1)) {
      local_1d0 = (undefined **)CONCAT44(local_1d0._4_4_,1);
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar3 >> 1 & 1) != 0) {
        pCVar2 = (CalendarTime *)(param_1 + 0x570);
        lVar21 = *(long *)PTR_DAT_04bb32e8;
        uVar9 = *(ulong *)(lVar21 + 0x4060);
        *(ulong *)pCVar2 = uVar9;
        if ((uVar9 & 0xffff) != 0) {
          lVar21 = nn::time::ToPosixTimeFromUtc(pCVar2);
          local_1d0 = (undefined **)(lVar21 + 0x1c20);
          uVar13 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_1d0);
          lVar21 = *(long *)puVar6;
          *(undefined8 *)pCVar2 = uVar13;
        }
        bVar19 = *(byte *)(lVar21 + 0x4064);
        if (bVar19 < 5) {
          uVar20 = 5;
        }
        else if (bVar19 < 8) {
          uVar20 = 0;
        }
        else if (bVar19 < 0xc) {
          uVar20 = 1;
        }
        else if (bVar19 < 0x10) {
          uVar20 = 2;
        }
        else {
          uVar20 = 3;
          if (0x12 < bVar19) {
            uVar20 = 4;
          }
        }
        uVar9 = (ulong)uVar20;
        if (5 < uVar20) {
          uVar9 = 0;
        }
        local_1d0._7_1_ = (undefined1)((ulong)*(undefined8 *)(lVar21 + 0x4060) >> 0x38);
        local_1d0._0_7_ =
             CONCAT25(0x1e,CONCAT14((char)(&DAT_04178d64)[uVar9],
                                    (int)*(undefined8 *)(lVar21 + 0x4060)));
        lVar21 = nn::time::ToPosixTimeFromUtc(pCVar2);
        lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_1d0);
        if (lVar11 < lVar21) {
          *(undefined ***)pCVar2 = local_1d0;
        }
        else {
          nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_1d0);
        }
      }
    }
    do {
      ppppppuVar24 = *pppppppuVar23;
      pppppppuVar23 = (undefined8 *******)(ppppppuVar24 + 1);
    } while (ppppppuVar24 != (undefined8 ******)&local_188);
  }
  return;
}

