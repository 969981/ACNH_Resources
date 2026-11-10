
void FUN_00282010(undefined8 param_1,long *param_2,long param_3,int param_4,uint param_5,
                 uint *param_6,uint param_7,long param_8)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  ushort uVar13;
  byte bVar14;
  ushort uVar15;
  long lVar16;
  uint uVar17;
  byte bVar18;
  uint uVar19;
  long lVar20;
  byte *pbVar21;
  ulong uVar22;
  byte *pbVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_58;
  uint local_54 [2];
  ErrorResultVariant aEStack_4c [12];
  uint local_38;
  undefined4 local_34;
  
  *(char *)((long)param_2 + 0x3e) = (char)param_7;
  uVar11 = 1 << (ulong)(param_7 & 0x1f);
  if (*(int *)((long)param_2 + 0x44) == 0 && (uVar11 & param_5) == 0) {
    *(uint *)((long)param_2 + 0x44) = uVar11;
    uVar11 = (uint)*(ushort *)((long)param_2 + 0x3c);
    iVar9 = uVar11 * uVar11;
  }
  else {
    uVar7 = *(ushort *)((long)param_2 + 0x3c);
    uVar11 = (uint)uVar7;
    iVar9 = (uint)uVar7 * (uint)uVar7;
  }
  if ((((iVar9 != param_4) || (param_3 == 0)) || (param_6 == (uint *)0x0)) || (param_8 == 0)) {
    local_54[1] = 0x10c07;
    goto LAB_002821d4;
  }
  if (uVar11 != 0) {
    lVar16 = *param_2;
    uVar17 = 0;
    uVar12 = 0;
    do {
      uVar22 = 0;
      uVar19 = 0;
      do {
        uVar19 = uVar19 + 1;
        lVar20 = uVar11 * uVar17 + uVar22;
        *(ushort *)(lVar16 + lVar20 * 2) = (ushort)*(byte *)(param_3 + lVar20) << 2;
        uVar22 = (ulong)(uVar19 & 0xff);
        uVar11 = (uint)*(ushort *)((long)param_2 + 0x3c);
      } while ((uVar19 & 0xff) < uVar11);
      uVar12 = uVar12 + 1;
      uVar17 = uVar12 & 0xff;
    } while (uVar17 < uVar11);
    if (uVar11 != 0) {
      lVar16 = *param_2;
      uVar25 = 0;
      uVar22 = 0;
      lVar20 = param_2[3];
      do {
        uVar26 = 0;
        uVar12 = 0;
        uVar17 = 0;
        do {
          uVar12 = uVar12 + 1;
          uVar19 = 0;
          if (*(short *)(lVar16 + (uVar26 + uVar11 * uVar25) * 2) != 0) {
            uVar19 = 1 << (ulong)((uint)uVar26 & 0x1f);
          }
          uVar17 = uVar19 | uVar17;
          uVar26 = (ulong)(uVar12 & 0xff);
        } while ((uVar12 & 0xff) < uVar11);
        uVar26 = uVar22 & 0xff;
        uVar12 = (int)uVar22 + 1;
        uVar22 = (ulong)uVar12;
        uVar12 = uVar12 & 0xff;
        uVar25 = (ulong)uVar12;
        *(uint *)(lVar20 + uVar26 * 4) = uVar17;
      } while (uVar12 < uVar11);
      uVar11 = (uint)*(ushort *)((long)param_2 + 0x3c);
      if ((*(char *)((long)param_2 + 0x4c) != '\0') && (*(ushort *)((long)param_2 + 0x3c) != 0)) {
        lVar16 = param_2[4];
        uVar17 = 0;
        uVar12 = 0;
        do {
          lVar20 = *param_2;
          uVar24 = 0;
          uVar19 = 0;
          do {
            lVar1 = (ulong)(uVar11 * uVar17) + (ulong)uVar24;
            if (*(char *)(lVar16 + lVar1) == '\x01') {
              *(undefined2 *)(lVar20 + lVar1 * 2) = 0;
              uVar11 = (uint)*(ushort *)((long)param_2 + 0x3c);
            }
            uVar19 = uVar19 + 1;
            uVar24 = uVar19 & 0xff;
          } while (uVar24 < uVar11);
          uVar12 = uVar12 + 1;
          uVar17 = uVar12 & 0xff;
        } while (uVar17 < uVar11);
      }
      if (1 < uVar11) {
        lVar16 = *param_2;
        uVar17 = 1;
        uVar12 = 1;
        do {
          uVar19 = uVar12 & 0xff;
          if ((uVar12 & 0xff) != 0) {
            uVar22 = 0;
            do {
              uVar25 = uVar22 & 0xffffffff;
              lVar20 = uVar22 + (ulong)uVar19 * (ulong)*(ushort *)((long)param_2 + 0x3c);
              uVar22 = uVar22 + 1;
              lVar20 = lVar20 * 2;
              uVar11 = (uint)*(ushort *)
                              (lVar16 + ((ulong)uVar17 + uVar25 * *(ushort *)((long)param_2 + 0x3c))
                                        * 2);
              uVar12 = (uint)*(ushort *)(lVar16 + lVar20);
              uVar4 = 0;
              if (uVar11 != 0 && uVar12 != 0) {
                uVar4 = (short)(uVar11 + uVar12 >> 1);
              }
              *(undefined2 *)(lVar16 + lVar20) = uVar4;
              *(undefined2 *)
               (lVar16 + ((ulong)uVar17 + uVar25 * *(ushort *)((long)param_2 + 0x3c)) * 2) = uVar4;
            } while (uVar19 != (uint)uVar22);
            uVar11 = (uint)*(ushort *)((long)param_2 + 0x3c);
          }
          uVar12 = uVar19 + 1;
          uVar17 = uVar12 & 0xff;
        } while (uVar17 < uVar11);
      }
      *param_6 = 0;
      local_54[0] = 0;
      local_38 = 0;
      if (uVar11 != 0) {
        lVar16 = *param_2;
        uVar12 = 0;
        bVar14 = 0;
        cVar5 = *(char *)((long)param_2 + 0x4c);
        lVar20 = param_2[4];
        uVar17 = *(uint *)((long)param_2 + 0x44);
        bVar18 = *(byte *)((long)param_2 + 0x3e);
LAB_00282320:
        uVar8 = 1 << (ulong)(uVar12 & 0x1f);
        uVar24 = 0;
        uVar19 = 0;
        uVar2 = uVar17 & uVar8;
        uVar3 = uVar8 & param_5;
        do {
          if (*(short *)(lVar16 + (ulong)(uVar24 + uVar12 * uVar11) * 2) != 0) {
            if ((uVar3 != 0) && (uVar2 != 0)) goto LAB_00282300;
            if ((uVar3 != 0) || (uVar2 == 0)) goto LAB_00282310;
            puVar10 = local_54;
            goto LAB_00282304;
          }
          uVar19 = uVar19 + 1;
          uVar24 = uVar19 & 0xff;
        } while (uVar24 < uVar11);
        if (uVar3 == 0) {
          if (uVar2 == 0) goto LAB_00282310;
          puVar10 = local_54;
          if (bVar14 != bVar18 || cVar5 == '\0') {
            puVar10 = &local_38;
          }
          goto LAB_00282304;
        }
        if (cVar5 != '\0') {
          uVar22 = 0;
          uVar19 = 0;
          do {
            if (*(char *)(lVar20 + uVar22 + uVar12 * uVar11) == '\x01') goto LAB_00282300;
            uVar19 = uVar19 + 1;
            uVar22 = (ulong)(uVar19 & 0xff);
          } while ((uVar19 & 0xff) < uVar11);
        }
        goto LAB_00282310;
      }
      uVar17 = 0;
      uVar12 = 0;
      goto LAB_00282430;
    }
  }
  uVar17 = 0;
  uVar12 = 0;
  *param_6 = 0;
  goto LAB_00282430;
LAB_00282300:
  puVar10 = &local_38;
LAB_00282304:
  *puVar10 = *puVar10 | uVar8;
LAB_00282310:
  bVar14 = bVar14 + 1;
  uVar12 = (uint)bVar14;
  if (uVar11 <= uVar12) goto LAB_002823d0;
  goto LAB_00282320;
LAB_002823d0:
  uVar12 = local_54[0];
  uVar17 = local_38;
  if (uVar11 != 0) {
    uVar24 = 0;
    uVar19 = 0;
    do {
      uVar2 = 1 << (ulong)(uVar19 & 0x1f);
      if (((uVar12 & uVar2) != 0) && ((*(uint *)(param_2 + 9) & uVar2) != 0)) {
        uVar12 = uVar12 & (uVar2 ^ 0xffffffff);
        uVar24 = uVar24 | uVar2;
        *param_6 = uVar24;
        uVar17 = uVar17 | uVar2;
      }
      uVar19 = uVar19 + 1;
    } while (uVar11 != uVar19);
  }
LAB_00282430:
  uVar11 = (uint)*(ushort *)((long)param_2 + 0x3c);
  if (*(ushort *)((long)param_2 + 0x3c) != 0) {
    uVar19 = 0;
    bVar14 = 0;
    do {
      if ((uVar17 >> (ulong)(uVar19 & 0x1f) & 1) != 0) {
        uVar22 = 0;
        bVar18 = 0;
        do {
          *(byte *)(param_2[1] + uVar11 * uVar19 + uVar22) = bVar14;
          *(byte *)(param_2[1] + (ulong)uVar19 + *(ushort *)((long)param_2 + 0x3c) * uVar22) =
               bVar18;
          bVar18 = bVar18 + 1;
          uVar11 = (uint)*(ushort *)((long)param_2 + 0x3c);
          uVar22 = (ulong)bVar18;
        } while (bVar18 < uVar11);
      }
      bVar14 = bVar14 + 1;
      uVar19 = (uint)bVar14;
    } while (uVar19 < uVar11);
    if (uVar11 != 0) {
      uVar19 = 0;
      bVar14 = 0;
      do {
        uVar24 = 0;
        bVar18 = 0;
        do {
          lVar16 = (ulong)(uVar11 * uVar19) + (ulong)uVar24;
          bVar6 = *(byte *)(param_2[1] + lVar16);
          if (((bVar6 != bVar14) && (bVar6 != bVar18)) &&
             ((uVar17 >> (ulong)(bVar6 & 0x1f) & 1) != 0)) {
            *(char *)(param_2[1] + lVar16) = (char)param_2[8];
            uVar11 = (uint)*(ushort *)((long)param_2 + 0x3c);
          }
          bVar18 = bVar18 + 1;
          uVar24 = (uint)bVar18;
        } while (uVar24 < uVar11);
        bVar14 = bVar14 + 1;
        uVar19 = (uint)bVar14;
      } while (uVar19 < uVar11);
    }
  }
  FUN_00280af0(param_2,uVar12,param_6);
  uVar7 = *(ushort *)((long)param_2 + 0x3c);
  if (uVar7 != 0) {
    uVar13 = 0;
    do {
      uVar15 = 0;
      do {
        uVar15 = uVar15 + 1;
      } while ((uVar15 & 0xff) < uVar7);
      uVar13 = uVar13 + 1;
    } while ((uVar13 & 0xff) < uVar7);
  }
  uVar11 = *param_6;
  *param_6 = 0;
  local_58 = uVar12 & (uVar11 ^ 0xffffffff);
  FUN_00281720(param_2,uVar11 | param_5,param_6,&local_58);
  uVar11 = local_58;
  if (*(short *)((long)param_2 + 0x3c) != 0) {
    uVar22 = 0;
    do {
      while (uVar12 = (uint)uVar22, (*param_6 >> (ulong)(uVar12 & 0x1f) & 1) != 0) {
        *(undefined1 *)(param_8 + (uVar22 & 0xff)) = *(undefined1 *)(param_2[5] + (uVar22 & 0xff));
        uVar22 = (ulong)(uVar12 + 1);
        if ((uint)*(ushort *)((long)param_2 + 0x3c) <= (uVar12 + 1 & 0xff)) goto LAB_002825f4;
      }
      *(undefined1 *)(param_8 + (uVar22 & 0xff)) = 0;
      uVar22 = (ulong)(uVar12 + 1);
    } while ((uVar12 + 1 & 0xff) < (uint)*(ushort *)((long)param_2 + 0x3c));
  }
LAB_002825f4:
  do {
    uVar22 = FUN_00281be0(param_2,uVar11);
  } while ((uVar22 & 1) != 0);
  do {
    uVar22 = FUN_00281f00(param_2,uVar11);
  } while ((uVar22 & 1) != 0);
  FUN_00281850(param_2,*param_6,uVar11);
  uVar7 = *(ushort *)((long)param_2 + 0x3c);
  uVar22 = (ulong)uVar7;
  *(undefined4 *)((long)param_2 + 0x44) = 0;
  if (uVar22 != 0) {
    uVar25 = 0;
    uVar11 = 0;
    pbVar21 = (byte *)param_2[1];
    do {
      pbVar23 = pbVar21;
      uVar26 = uVar22;
      do {
        if ((uint)uVar25 != (uint)*pbVar23) {
          uVar11 = 1 << (ulong)((uint)uVar25 & 0x1f) | uVar11;
          *(uint *)((long)param_2 + 0x44) = uVar11;
          break;
        }
        uVar26 = uVar26 - 1;
        pbVar23 = pbVar23 + 1;
      } while (uVar26 != 0);
      uVar25 = uVar25 + 1;
      pbVar21 = pbVar21 + uVar22;
    } while (uVar25 != uVar22);
  }
  *(uint *)(param_2 + 9) = *param_6;
  memcpy((void *)param_2[10],(byte *)param_2[1],(ulong)((uint)uVar7 * (uint)uVar7));
  local_54[1] = 0;
LAB_002821d4:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_34);
  FUN_002296c4(param_1,local_54 + 1);
  return;
}

