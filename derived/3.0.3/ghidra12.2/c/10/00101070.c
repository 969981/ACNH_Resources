
ulong FUN_00101070(long param_1,long param_2,short *param_3,byte param_4,uint param_5,
                  undefined8 *param_6,char param_7)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ushort *puVar8;
  bool bVar9;
  ushort uVar10;
  short sVar11;
  short sVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long *plVar17;
  undefined1 uVar18;
  undefined8 *puVar19;
  ushort *puVar20;
  ulong uVar21;
  ulong uVar22;
  short **ppsVar23;
  short *local_e8 [12];
  byte local_81 [9];
  ushort local_78;
  ushort auStack_76 [4];
  ushort local_6e;
  ushort auStack_6c [2];
  ushort local_68;
  
  if (param_1 == 0) {
    uVar22 = 0xae31;
    goto LAB_0010180c;
  }
  if (param_6 == (undefined8 *)0x0) {
    uVar22 = 0x8531;
    goto LAB_0010180c;
  }
  if (param_3 == (short *)0x0) {
    uVar22 = 0x8131;
    goto LAB_0010180c;
  }
  if (*(char *)(param_1 + 3) == '\x03') {
    if (*param_3 != 0) {
      if ((param_5 & 0xff) != 0) {
LAB_001010d0:
        uVar22 = 0x8331;
        goto LAB_0010180c;
      }
      goto LAB_0010111c;
    }
  }
  else {
    uVar13 = FUN_001003e0(param_3);
    if (0x36 < (uVar13 - 1 & 0xffff)) {
      uVar22 = 0x8231;
      goto LAB_0010180c;
    }
    if ((uVar13 & 0xffff) < (param_5 & 0xff)) goto LAB_001010d0;
LAB_0010111c:
    uVar13 = param_4 + 0xff;
    uVar2 = uVar13 & 0xff;
    *(undefined2 *)(param_2 + 0x658) = 0;
    if ((0x36 < uVar2) && (*(char *)(param_1 + 3) != '\x03')) {
      uVar22 = 0x8431;
      goto LAB_0010180c;
    }
    iVar7 = param_4 - 1;
    local_e8[0] = param_3;
    if (iVar7 == 0) {
      local_68 = (ushort)param_4;
      FUN_0010d880(local_e8);
      uVar10 = FUN_001003e0(param_3);
      local_78 = local_78 & 0xff80 | uVar10 & 0x7f;
      FUN_001056b0(param_1,param_1 + 0x28);
      *(long *)(param_1 + 0x28) = param_2;
      *(short **)(param_1 + 0xb750) = local_e8[0];
      puVar20 = auStack_76;
      puVar8 = auStack_6c;
      if ((local_81[0] & 0xf0) != 0x50) {
        puVar20 = &local_78;
        puVar8 = &local_6e;
      }
      *(ushort *)(param_1 + 0xb9bc) = (*puVar8 & 0x7f) + (*puVar20 & 0x7f);
      *(undefined1 *)(param_1 + 0x3a) = 0;
      sVar11 = FUN_00103430(param_1,param_1 + 0x28,param_6);
      if (sVar11 == 0) {
        sVar11 = FUN_0011f660(*(undefined8 *)(param_2 + 0x640),1);
        sVar12 = FUN_0011f660(*(undefined8 *)(param_2 + 0x640),2);
        uVar22 = 0xa231;
        if ((sVar11 == 0) || (sVar12 == 0)) goto LAB_0010180c;
        uVar10 = FUN_001003e0(param_3);
        *(undefined2 *)(param_6 + 0x10) = 1;
        FUN_0010d880(param_6);
        *(undefined2 *)(param_6 + 0x10) = 0x801;
        *(ushort *)(param_6 + 0xe) = uVar10 & 0x7f | sVar11 << 7;
        *(ushort *)((long)param_6 + 0x72) = uVar10 & 0x7f | sVar12 << 7;
        uVar4 = 0x8ad0;
        if (-0x8001 < (short)uVar10 * -1000) {
          uVar4 = (short)((uint)((short)uVar10 * -0x3e80000) >> 0x10);
        }
        *(undefined2 *)(param_6 + 1) = uVar4;
        *(undefined1 *)((long)param_6 + 0x74) = 2;
        *param_6 = local_e8[0];
        uVar10 = 0x831;
      }
      else {
        uVar22 = (ulong)(uint)(int)sVar11;
        if (sVar11 < 1) goto LAB_0010180c;
        uVar10 = (ushort)*(byte *)((long)param_6 + 0x81) << 8 | 0x31;
      }
      *(ushort *)(param_6 + 0x10) = uVar10;
      uVar22 = 1;
      goto LAB_0010180c;
    }
    uVar3 = param_5 & 0xff;
    if ((param_5 & 0xff) != 0) {
      uVar14 = FUN_001003e0(param_3);
      if (uVar3 < (uVar14 & 0xffff)) {
        *(undefined2 *)(param_1 + 0x20) = 0;
        *(undefined8 **)(param_1 + 0x10) = param_6 + 0x11;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(short *)(param_1 + 0x1e) = (short)iVar7;
        FUN_00101980(param_1 + 0x28);
        psVar1 = param_3 + (byte)param_5;
        plVar17 = (long *)(param_1 + 8);
        *plVar17 = (long)psVar1;
        *(char *)(param_1 + 0x32) = (char)iVar7;
        *(undefined1 *)(param_1 + 0x30) = 0;
        *(long *)(param_1 + 0x28) = param_2;
        *(undefined1 *)(param_1 + 0x928e) = 0x37;
        sVar11 = FUN_00101df0(param_1,param_1 + 0x28,plVar17);
        if (sVar11 == 0) {
          sVar11 = FUN_0011f660(*(undefined8 *)(param_2 + 0x640),1);
          sVar12 = FUN_0011f660(*(undefined8 *)(param_2 + 0x640),2);
          uVar22 = 0xa231;
          if ((sVar11 == 0) || (sVar12 == 0)) goto LAB_0010180c;
          uVar10 = FUN_001003e0(psVar1);
          *(undefined2 *)(param_6 + 0x21) = 1;
          FUN_0010d880(param_6 + 0x11);
          *(undefined2 *)(param_6 + 0x21) = 0x801;
          *(ushort *)(param_6 + 0x1f) = uVar10 & 0x7f | sVar11 << 7;
          uVar4 = 0x8ad0;
          if (-0x8001 < (short)uVar10 * -1000) {
            uVar4 = (short)((uint)((short)uVar10 * -0x3e80000) >> 0x10);
          }
          *(undefined2 *)(param_6 + 0x12) = uVar4;
          *(ushort *)((long)param_6 + 0xfa) = uVar10 & 0x7f | sVar12 << 7;
          *(undefined1 *)((long)param_6 + 0xfc) = 2;
          param_6[0x11] = psVar1;
        }
        else {
          uVar22 = (ulong)(uint)(int)sVar11;
          if (sVar11 < 0) goto LAB_0010180c;
        }
      }
      else {
        plVar17 = (long *)0x0;
      }
      uVar21 = (ulong)param_5 & 0xff;
      local_68 = 1;
      FUN_0010d880(local_e8);
      uVar10 = (ushort)param_5;
      local_78 = local_78 & 0xff80 | uVar10 & 0x7f;
      sVar11 = param_3[uVar21];
      param_3[uVar21] = 0;
      if (plVar17 == (long *)0x0) {
        uVar14 = 0;
      }
      else {
        uVar14 = (uint)*(ushort *)((long)plVar17 + 0x14);
      }
      ppsVar23 = local_e8;
      do {
        if (ppsVar23 != (short **)0x0) {
          FUN_001056b0(param_1,param_1 + 0x28);
          *(long *)(param_1 + 0x28) = param_2;
          *(short **)(param_1 + 0xb750) = *ppsVar23;
          bVar9 = (*(byte *)((long)ppsVar23 + 0x67) & 0xf0) != 0x50;
          lVar5 = 0x7c;
          if (bVar9) {
            lVar5 = 0x7a;
          }
          lVar6 = 0x72;
          if (bVar9) {
            lVar6 = 0x70;
          }
          *(ushort *)(param_1 + 0xb9bc) =
               (*(ushort *)((long)ppsVar23 + lVar5) & 0x7f) +
               (*(ushort *)((long)ppsVar23 + lVar6) & 0x7f);
          *(undefined1 *)(param_1 + 0x3a) = 0;
        }
        uVar15 = FUN_00103430(param_1,param_1 + 0x28,param_6);
        uVar22 = (ulong)uVar15;
        if ((short)uVar15 < 1) {
          local_e8[0][uVar21] = sVar11;
          if ((uVar15 & 0xffff) != 0) goto LAB_0010180c;
          uVar15 = FUN_0011f660(*(undefined8 *)(param_2 + 0x640),1);
          uVar16 = FUN_0011f660(*(undefined8 *)(param_2 + 0x640),2);
          uVar22 = 0xa231;
          if (((uVar15 & 0xffff) == 0) || ((uVar16 & 0xffff) == 0)) goto LAB_0010180c;
          uVar22 = 1;
          *(undefined2 *)(param_6 + 0x10) = 1;
          FUN_0010d880(param_6);
          *(ushort *)((long)param_6 + 0x72) = uVar10 & 0x7f | (ushort)(uVar16 << 7);
          *(ushort *)(param_6 + 0xe) = uVar10 & 0x7f | (ushort)(uVar15 << 7);
          uVar4 = 0x8ad0;
          if (-0x8001 < (int)(uVar3 * -1000)) {
            uVar4 = (short)(uVar3 * -0x3e80000 >> 0x10);
          }
          *(undefined2 *)(param_6 + 0x10) = 0x801;
          *(undefined2 *)(param_6 + 1) = uVar4;
          *(undefined1 *)((long)param_6 + 0x74) = 2;
          *param_6 = local_e8[0];
          sVar11 = FUN_001003e0(local_e8[0] + uVar21);
          if (sVar11 != 0) {
            if ((plVar17 == (long *)0x0) || (0x37 < uVar14 + uVar3)) {
              uVar10 = FUN_001003e0(local_e8[0] + uVar21);
              *(undefined2 *)(param_6 + 0x21) = 1;
              FUN_0010d880(param_6 + 0x11);
              *(ushort *)((long)param_6 + 0xfa) = uVar10 & 0x7f | (ushort)(uVar16 << 7);
              *(ushort *)(param_6 + 0x1f) = uVar10 & 0x7f | (ushort)(uVar15 << 7);
              uVar4 = 0x8ad0;
              if (-0x8001 < (short)uVar10 * -1000) {
                uVar4 = (short)((uint)((short)uVar10 * -0x3e80000) >> 0x10);
              }
              uVar22 = 2;
              *(undefined2 *)(param_6 + 0x21) = 0x801;
              *(undefined2 *)(param_6 + 0x12) = uVar4;
              *(undefined1 *)((long)param_6 + 0xfc) = 2;
              param_6[0x11] = local_e8[0] + uVar21;
            }
            else {
              uVar22 = (ulong)(*(ushort *)(plVar17 + 3) + 1);
            }
          }
          goto LAB_001016f4;
        }
        ppsVar23 = (short **)0x0;
      } while (0x37 < uVar14 + (*(ushort *)((long)param_6 + 0x7c) & 0x7f) +
                               (*(ushort *)((long)param_6 + 0x72) & 0x7f));
      local_e8[0][uVar21] = sVar11;
      if (plVar17 == (long *)0x0) {
        uVar22 = 1;
      }
      else {
        uVar22 = (ulong)(*(ushort *)(plVar17 + 3) + 1);
      }
LAB_001016f4:
      if (0 < (short)uVar22 && uVar2 != uVar13) {
        uVar21 = 1;
        puVar19 = param_6 + 0x10;
        do {
          *(undefined1 *)puVar19 = 0x11;
          if ((long)(short)uVar22 <= (long)uVar21) break;
          bVar9 = uVar21 < param_4;
          uVar21 = uVar21 + 1;
          puVar19 = puVar19 + 0x11;
        } while (bVar9);
      }
      goto LAB_0010180c;
    }
    *(undefined2 *)(param_1 + 0x20) = 0;
    *(undefined8 **)(param_1 + 0x10) = param_6;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(ushort *)(param_1 + 0x1e) = (ushort)param_4;
    FUN_00101980(param_1 + 0x28);
    *(short **)(param_1 + 8) = param_3;
    *(bool *)(param_1 + 0x30) = param_7 != '\0';
    uVar18 = 0x32;
    if (*(char *)(param_1 + 3) != '\x03') {
      uVar18 = 0x37;
    }
    *(byte *)(param_1 + 0x32) = param_4;
    *(long *)(param_1 + 0x28) = param_2;
    *(undefined1 *)(param_1 + 0x928e) = uVar18;
    sVar11 = FUN_00101df0(param_1,param_1 + 0x28);
    if (sVar11 == 0) {
      if (param_7 == '\x01') goto LAB_00101808;
      sVar11 = FUN_0011f660(*(undefined8 *)(param_2 + 0x640),1);
      sVar12 = FUN_0011f660(*(undefined8 *)(param_2 + 0x640),2);
      uVar22 = 0xa231;
      if ((sVar11 == 0) || (sVar12 == 0)) goto LAB_0010180c;
      if (*(char *)(param_1 + 3) == '\x03') {
        uVar10 = FUN_00100730(param_3,0x32);
      }
      else {
        uVar10 = FUN_001003e0(param_3);
      }
      uVar13 = 1;
      *(undefined2 *)(param_6 + 0x10) = 1;
      FUN_0010d880(param_6);
      *(undefined2 *)(param_6 + 0x10) = 0x801;
      *(ushort *)(param_6 + 0xe) = uVar10 & 0x7f | sVar11 << 7;
      *(ushort *)((long)param_6 + 0x72) = uVar10 & 0x7f | sVar12 << 7;
      uVar4 = 0x8ad0;
      if (-0x8001 < (short)uVar10 * -1000) {
        uVar4 = (short)((uint)((short)uVar10 * -0x3e80000) >> 0x10);
      }
      *(undefined2 *)(param_6 + 1) = uVar4;
      *(undefined1 *)((long)param_6 + 0x74) = 2;
      *param_6 = param_3;
    }
    else {
      uVar13 = (uint)sVar11;
      uVar22 = (ulong)uVar13;
      if ((int)uVar13 < 1) goto LAB_0010180c;
    }
    if (param_4 != 0) {
      puVar20 = (ushort *)(param_6 + 0x10);
      uVar22 = 0;
      do {
        *puVar20 = (ushort)*(byte *)((long)puVar20 + 1) << 8;
        uVar10 = 99;
        if (*(char *)(param_1 + 3) != '\x03') {
          uVar10 = 0x11;
        }
        uVar22 = uVar22 + 1;
        *puVar20 = uVar10 | (ushort)*(byte *)((long)puVar20 + 1) << 8;
      } while (((long)uVar22 < (long)(int)uVar13) && (puVar20 = puVar20 + 0x44, uVar22 < param_4));
      goto LAB_0010180c;
    }
  }
LAB_00101808:
  uVar22 = 0;
LAB_0010180c:
  return uVar22 & 0xffffffff;
}

