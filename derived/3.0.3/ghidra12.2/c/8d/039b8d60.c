
void FUN_039b8d60(long param_1,long param_2,byte param_3,long *param_4)

{
  short *psVar1;
  short *psVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  byte bVar9;
  undefined2 uVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  void *pvVar18;
  undefined2 *puVar19;
  uint uVar20;
  long lVar21;
  char *pcVar22;
  long *plVar23;
  ulong uVar24;
  int *piVar25;
  char *pcVar26;
  long lVar27;
  byte *pbVar28;
  undefined **ppuVar29;
  uint uVar30;
  long *plVar31;
  undefined *local_4c0;
  int local_4b8;
  byte local_4a0;
  int local_498 [248];
  uint local_b8 [2];
  undefined **local_b0;
  int local_a8;
  int iStack_a4;
  long local_a0;
  long lStack_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined4 local_70;
  
  *(undefined2 *)(param_1 + 0x1108) = 0;
  *(undefined4 *)(param_1 + 0x1064) = 0;
  puVar11 = PTR_DAT_04bd1978;
  puVar3 = (undefined1 *)(param_1 + 0xe18);
  uVar8 = *(undefined1 *)(*(long *)(param_2 + 8) + 0x304);
  uVar30 = 0;
  *(undefined4 *)(param_1 + 0x1068) = 0;
  lVar4 = param_1 + 0x10;
  *(undefined1 *)(param_1 + 0x1111) = uVar8;
  lVar21 = *(long *)(param_2 + 0x18) + (ulong)*(ushort *)(*(long *)(param_1 + 8) + 0x52) * 0x198;
  param_3 = param_3 | *(byte *)(param_1 + 0x1110);
  puVar5 = (undefined8 *)(lVar21 + 0x10);
  do {
    plVar31 = (long *)(lVar4 + (long)(int)uVar30 * 0x38);
    local_80 = 0;
    local_78 = 0;
    plVar31[2] = 0;
    *plVar31 = 0;
    local_88 = 0;
    puVar19 = (undefined2 *)((long)plVar31 + 0x34);
    *puVar19 = 0;
    local_4b8 = 0;
    *(undefined1 *)((long)plVar31 + 0x33) = 0xff;
    plVar23 = plVar31 + 1;
    *plVar23 = 0;
    pbVar28 = (byte *)((long)plVar31 + 0x31);
    *pbVar28 = (byte)uVar30;
    *puVar3 = 0;
    uVar20 = uVar30 + 3;
    if (-1 < (int)uVar30) {
      uVar20 = uVar30;
    }
    iVar6 = (int)uVar20 >> 2;
    *(undefined2 *)(param_1 + 0x1040) = 0;
    iVar13 = (int)uVar30 % 4;
    *(undefined8 *)(param_1 + 0xe20) = 0;
    *(undefined8 *)(param_1 + 0xe28) = 0;
    *(undefined8 *)(param_1 + 0xe38) = 0;
    *(undefined8 *)(param_1 + 0xe40) = 0;
    *(undefined8 *)(param_1 + 0xe50) = 0;
    *(undefined8 *)(param_1 + 0xe58) = 0;
    *(undefined8 *)(param_1 + 0xe68) = 0;
    *(undefined8 *)(param_1 + 0xe70) = 0;
    *(undefined8 *)(param_1 + 0xe80) = 0;
    *(undefined8 *)(param_1 + 0xe88) = 0;
    *(undefined8 *)(param_1 + 0xe98) = 0;
    *(undefined8 *)(param_1 + 0xea0) = 0;
    *(undefined8 *)(param_1 + 0xeb0) = 0;
    *(undefined8 *)(param_1 + 0xeb8) = 0;
    *(undefined8 *)(param_1 + 0xec8) = 0;
    *(undefined8 *)(param_1 + 0xed0) = 0;
    *(undefined8 *)(param_1 + 0xee0) = 0;
    *(undefined8 *)(param_1 + 0xee8) = 0;
    *(undefined8 *)(param_1 + 0xef8) = 0;
    *(undefined8 *)(param_1 + 0xf00) = 0;
    *(undefined8 *)(param_1 + 0xf10) = 0;
    *(undefined8 *)(param_1 + 0xf18) = 0;
    *(undefined8 *)(param_1 + 0xf28) = 0;
    *(undefined8 *)(param_1 + 0xf30) = 0;
    *(undefined8 *)(param_1 + 0xf40) = 0;
    *(undefined8 *)(param_1 + 0xf48) = 0;
    *(undefined8 *)(param_1 + 0xf58) = 0;
    *(undefined8 *)(param_1 + 0xf60) = 0;
    *(undefined8 *)(param_1 + 0xf70) = 0;
    *(undefined8 *)(param_1 + 0xf78) = 0;
    *(undefined8 *)(param_1 + 0xf88) = 0;
    *(undefined8 *)(param_1 + 0xf90) = 0;
    local_70 = 0xffffffff;
    plVar14 = *(long **)(*(long *)(param_2 + 8) + 0xa8);
    local_4c0 = puVar11 + 0x10;
    if (plVar14 == (long *)0x0) {
      ppuVar29 = (undefined **)0x0;
    }
    else {
      ppuVar29 = &local_4c0;
      local_b0 = ppuVar29;
      local_a8 = iVar6;
      iStack_a4 = iVar13;
      local_a0 = param_2;
      lStack_98 = lVar21;
      local_90 = param_1;
      (**(code **)(*plVar14 + 0x10))(plVar14,&local_b0);
    }
    FUN_039b3fc0(lVar21,&local_88,ppuVar29,iVar6,iVar13,param_1);
    if ((local_88 != 0) && (*plVar31 = local_88, local_80 != 0)) {
      *(undefined1 *)((long)plVar31 + 0x33) = (char)local_70;
      if ((param_3 & 1) == 0 && uVar30 != 0) {
        uVar20 = 0;
        do {
          if (local_78 == *(long *)(lVar4 + (long)(int)uVar20 * 0x38 + 0x10)) {
            lVar16 = lVar4 + (long)(int)uVar20 * 0x38;
            bVar9 = *(byte *)(lVar16 + 0x31);
            lVar27 = *(long *)(lVar16 + 0x10);
            uVar10 = *(undefined2 *)(lVar16 + 0x34);
            *plVar23 = *(long *)(lVar16 + 8);
            plVar31[2] = lVar27;
            *pbVar28 = bVar9;
            *puVar19 = uVar10;
            bVar9 = *(byte *)(lVar4 + (long)(int)uVar30 * 0x38 + 0x30);
            if ((bVar9 & 1) == 0) {
              *(undefined8 *)(lVar4 + (long)(int)uVar30 * 0x38 + 0x18) =
                   *(undefined8 *)(lVar4 + (long)(int)uVar20 * 0x38 + 0x18);
            }
            if ((bVar9 >> 1 & 1) == 0) {
              *(undefined8 *)(lVar4 + (long)(int)uVar30 * 0x38 + 0x20) =
                   *(undefined8 *)(lVar4 + (long)(int)uVar20 * 0x38 + 0x20);
            }
            break;
          }
          uVar20 = uVar20 + 1;
        } while (uVar30 != uVar20);
      }
      *plVar23 = local_80;
      bVar9 = *pbVar28;
      plVar31 = (long *)(lVar4 + (long)(int)uVar30 * 0x38 + 0x10);
      *plVar31 = local_78;
      if (uVar30 == bVar9) {
        FUN_039736d8(&local_4c0);
        FUN_03973840(&local_4c0,*puVar5,local_88,local_80);
        if (((uVar30 & 0xfffffffc) == 0x2c) ||
           (*(uint *)(param_1 + 0x1068) = *(uint *)(param_1 + 0x1068) | *(uint *)(*plVar31 + 0xc),
           uVar30 != 0)) {
          uVar20 = 0;
          do {
            plVar31 = *(long **)(lVar4 + (long)(int)uVar20 * 0x38 + 0x20);
            if (local_b8[0] == *(uint *)(plVar31 + 0x81)) {
              if ((int)local_b8[0] < 1) {
LAB_039b92a4:
                lVar27 = lVar4 + (long)(int)uVar30 * 0x38;
                plVar23 = (long *)(lVar27 + 0x20);
                if ((*(byte *)(lVar27 + 0x30) >> 1 & 1) == 0) {
                  *plVar23 = (long)plVar31;
                }
                else {
                  puVar17 = (undefined8 *)*plVar23;
                  *puVar17 = local_4c0;
                  lVar27 = -0x400;
                  do {
                    lVar16 = lVar27 + 0x40;
                    *(undefined4 *)((long)puVar17 + lVar27 + 0x408) =
                         *(undefined4 *)((long)local_b8 + lVar27);
                    *(undefined8 *)((long)puVar17 + lVar27 + 0x418) =
                         *(undefined8 *)((long)&local_a8 + lVar27);
                    *(undefined1 *)((long)puVar17 + lVar27 + 0x420) =
                         *(undefined1 *)((long)&local_a0 + lVar27);
                    *(undefined4 *)((long)puVar17 + lVar27 + 0x428) =
                         *(undefined4 *)((long)&lStack_98 + lVar27);
                    *(undefined8 *)((long)puVar17 + lVar27 + 0x438) =
                         *(undefined8 *)((long)&local_88 + lVar27);
                    *(undefined1 *)((long)puVar17 + lVar27 + 0x440) =
                         *(undefined1 *)((long)&local_80 + lVar27);
                    lVar27 = lVar16;
                  } while (lVar16 != 0);
                  *(uint *)(puVar17 + 0x81) = local_b8[0];
                }
                goto LAB_039b939c;
              }
              if ((*(long *)(local_4c0 + 0x38) + (ulong)local_4a0 * 0x78 ==
                   *(long *)(*plVar31 + 0x38) + (ulong)*(byte *)(plVar31 + 4) * 0x78) &&
                 (local_4b8 == (int)plVar31[1])) {
                uVar24 = 1;
                plVar23 = plVar31 + 5;
                piVar25 = local_498;
                do {
                  uVar15 = uVar24;
                  if ((local_b8[0] == uVar15) ||
                     (*(long *)(local_4c0 + 0x38) + (ulong)*(byte *)(piVar25 + 6) * 0x78 !=
                      *(long *)(*plVar31 + 0x38) + (ulong)*(byte *)(plVar23 + 3) * 0x78)) break;
                  iVar7 = *piVar25;
                  lVar27 = *plVar23;
                  uVar24 = uVar15 + 1;
                  plVar23 = plVar23 + 4;
                  piVar25 = piVar25 + 8;
                } while (iVar7 == (int)lVar27);
                if (local_b8[0] <= uVar15) goto LAB_039b92a4;
              }
            }
            uVar20 = uVar20 + 1;
          } while (uVar30 != uVar20);
        }
        lVar27 = DAT_05ae7600;
        pbVar28 = (byte *)(lVar4 + (long)(int)uVar30 * 0x38 + 0x30);
        if ((*pbVar28 >> 1 & 1) == 0) {
          if (DAT_05ae7600 == 0) {
            puVar17 = malloc(0x410);
          }
          else {
            plVar31 = param_4;
            if (param_4 == (long *)0x0) {
              lVar16 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
              plVar31 = (long *)(lVar27 + 8);
              if (lVar16 != 0) {
                plVar31 = (long *)(lVar16 + 0xa8);
              }
              plVar31 = (long *)*plVar31;
            }
            puVar17 = (undefined8 *)(**(code **)(*plVar31 + 0x30))(plVar31,0x410,8);
          }
          FUN_039736d8();
          *(undefined8 **)(lVar4 + (long)(int)uVar30 * 0x38 + 0x20) = puVar17;
          *pbVar28 = *pbVar28 | 2;
        }
        else {
          puVar17 = *(undefined8 **)(lVar4 + (long)(int)uVar30 * 0x38 + 0x20);
        }
        *puVar17 = local_4c0;
        lVar27 = -0x400;
        do {
          lVar16 = lVar27 + 0x40;
          *(undefined4 *)((long)puVar17 + lVar27 + 0x408) = *(undefined4 *)((long)local_b8 + lVar27)
          ;
          *(undefined8 *)((long)puVar17 + lVar27 + 0x418) =
               *(undefined8 *)((long)&local_a8 + lVar27);
          *(undefined1 *)((long)puVar17 + lVar27 + 0x420) =
               *(undefined1 *)((long)&local_a0 + lVar27);
          *(undefined4 *)((long)puVar17 + lVar27 + 0x428) =
               *(undefined4 *)((long)&lStack_98 + lVar27);
          *(undefined8 *)((long)puVar17 + lVar27 + 0x438) =
               *(undefined8 *)((long)&local_88 + lVar27);
          *(undefined1 *)((long)puVar17 + lVar27 + 0x440) =
               *(undefined1 *)((long)&local_80 + lVar27);
          lVar27 = lVar16;
        } while (lVar16 != 0);
        *(uint *)(puVar17 + 0x81) = local_b8[0];
LAB_039b939c:
        bVar9 = param_3 & 1;
        lVar27 = 0;
        if (bVar9 == 0) {
          lVar27 = local_80;
        }
        FUN_03973060(puVar3,*puVar5,*(undefined8 *)(param_1 + 8),local_88,lVar27);
        lVar27 = DAT_05ae7600;
        if (bVar9 == 0) {
          if (uVar30 != 0) {
            uVar20 = 0;
            bVar9 = *(byte *)(param_1 + 0x1041);
            do {
              lVar16 = *(long *)(lVar4 + (long)(int)uVar20 * 0x38 + 0x18);
              if (bVar9 == *(byte *)(lVar16 + 0x229)) {
                if (bVar9 == 0) {
LAB_039b953c:
                  if ((*(byte *)(lVar4 + (long)(int)uVar30 * 0x38 + 0x30) & 1) == 0) {
                    *(long *)(lVar4 + (long)(int)uVar30 * 0x38 + 0x18) = lVar16;
                  }
                  goto LAB_039b8e88;
                }
                if (((*(char *)(param_1 + 0xfc6) == *(char *)(lVar16 + 0x1ae)) &&
                    (*(char *)(param_1 + 0xfc7) == *(char *)(lVar16 + 0x1af))) &&
                   (*(short *)(param_1 + 0xfc2) == *(short *)(lVar16 + 0x1aa))) {
                  bVar12 = false;
                  pcVar22 = (char *)(lVar16 + 0x1b7);
                  uVar24 = 1;
                  pcVar26 = (char *)(param_1 + 0xfcf);
                  do {
                    if (((*(short *)(pcVar26 + -0xb) != *(short *)(pcVar22 + -0xb)) ||
                        (bVar12 = bVar9 <= uVar24, bVar9 == uVar24)) ||
                       ((pcVar26[-1] != pcVar22[-1] || (*pcVar26 != *pcVar22)))) break;
                    psVar1 = (short *)(pcVar26 + -5);
                    pcVar26 = pcVar26 + 8;
                    uVar24 = uVar24 + 1;
                    psVar2 = (short *)(pcVar22 + -5);
                    pcVar22 = pcVar22 + 8;
                  } while (*psVar1 == *psVar2);
                  if (bVar12) goto LAB_039b953c;
                }
              }
              uVar20 = uVar20 + 1;
            } while (uVar30 != uVar20);
          }
          pbVar28 = (byte *)(lVar4 + (long)(int)uVar30 * 0x38 + 0x30);
          if ((*pbVar28 & 1) == 0) {
            uVar20 = *(ushort *)(param_1 + 0x1042) + 0x3f;
            uVar24 = (ulong)uVar20 & 0x1ffc0;
            if (DAT_05ae7600 == 0) {
              pvVar18 = malloc(uVar24 + 0x230);
            }
            else {
              plVar31 = param_4;
              if (param_4 == (long *)0x0) {
                lVar16 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                plVar31 = (long *)(lVar27 + 8);
                if (lVar16 != 0) {
                  plVar31 = (long *)(lVar16 + 0xa8);
                }
                plVar31 = (long *)*plVar31;
                if (plVar31 == (long *)0x0) {
                  pvVar18 = (void *)0x0;
                  goto LAB_039b9560;
                }
              }
              pvVar18 = (void *)(**(code **)(*plVar31 + 0x30))(plVar31,uVar24 + 0x230,8);
            }
LAB_039b9560:
            lVar27 = (long)pvVar18 + uVar24;
            FUN_03972cac(lVar27);
            *(long *)(lVar4 + (long)(int)uVar30 * 0x38 + 0x18) = lVar27;
            if ((uVar20 & 0x1ffc0) != 0) {
              FUN_0034f054(lVar27 + 0x188,pvVar18,uVar24);
              *(short *)(lVar27 + 2) = (short)uVar24;
            }
            *pbVar28 = *pbVar28 | 1;
          }
LAB_039b8e88:
          lVar27 = lVar4 + (long)(int)uVar30 * 0x38;
          FUN_03973060(*(undefined8 *)(lVar27 + 0x18),*puVar5,*(undefined8 *)(param_1 + 8),local_88,
                       local_80);
          iVar13 = FUN_039b95c0(param_1,iVar6,iVar13,0);
          *puVar19 = (short)iVar13;
          iVar6 = *(int *)(param_1 + 0x1064);
          bVar9 = *(byte *)(param_1 + 0x1111);
          *(short *)(lVar27 + 0x36) = (short)iVar6;
          *(uint *)(param_1 + 0x1064) = iVar6 + iVar13 * (uint)bVar9;
        }
        else if ((*(byte *)(lVar4 + (long)(int)uVar30 * 0x38 + 0x30) & 1) == 0) {
          *(undefined1 **)(lVar4 + (long)(int)uVar30 * 0x38 + 0x18) = puVar3;
        }
        *(short *)(param_1 + 0x1108) = *(short *)(param_1 + 0x1108) + 1;
      }
    }
    uVar30 = uVar30 + 1;
    if (uVar30 == 0x40) {
      return;
    }
  } while( true );
}

