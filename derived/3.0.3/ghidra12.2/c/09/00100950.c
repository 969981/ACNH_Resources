
uint FUN_00100950(long param_1,undefined8 *param_2,long param_3,uint param_4,char *param_5,
                 void *param_6)

{
  long *plVar1;
  ushort *puVar2;
  undefined2 uVar3;
  ushort uVar4;
  int iVar5;
  bool bVar6;
  short sVar7;
  ushort uVar8;
  short sVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_112c [4];
  undefined1 auStack_1128 [112];
  undefined1 auStack_10b8 [112];
  undefined1 auStack_1048 [1600];
  long local_a08;
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined2 local_9f0;
  undefined4 local_9ec;
  undefined1 auStack_978 [8];
  undefined1 auStack_970 [8];
  undefined8 local_968;
  undefined1 auStack_960 [2];
  undefined2 local_95e;
  undefined1 auStack_95c [2];
  undefined2 local_95a;
  undefined2 local_958;
  undefined1 *local_950;
  undefined1 *local_948;
  undefined8 local_940;
  undefined8 local_938;
  ushort local_92c;
  undefined2 local_928;
  
  if (param_1 == 0) {
    return 0xae73;
  }
  if (param_6 == (void *)0x0) {
    if (param_3 == 0) {
      return 0x9473;
    }
    if ((param_4 & 0xffff) == 0) {
      return 0x9473;
    }
  }
  else {
    bVar6 = param_3 != 0;
    if ((param_4 & 0xffff) != 0) {
      bVar6 = param_3 == 0;
    }
    if (bVar6) {
      return 0x9473;
    }
  }
  if ((param_3 != 0) && ((param_4 & 0xffff) < 0x70)) {
    return 0x9473;
  }
  if (param_5 != (char *)0x0) {
    *param_5 = '\0';
  }
  if (param_2 == (undefined8 *)0x0) {
    uVar10 = (uint)*(byte *)(param_1 + 1);
    if (*(byte *)(param_1 + 1) == 0) {
      return 0x9173;
    }
  }
  else {
    plVar1 = (long *)(param_1 + 0x6fb60);
    *(undefined1 *)(param_1 + 1) = 0;
    puVar2 = (ushort *)(param_1 + 0xb9be);
    FUN_00131aa0(param_1);
    lVar16 = param_1 + 0x2e0;
    lVar17 = 300;
    do {
      FUN_0010d880(lVar16);
      lVar16 = lVar16 + 0x88;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    *puVar2 = 0;
    if (*plVar1 == 0) {
      return 0x8873;
    }
    if (*(char *)(param_2 + 0x10) != 'c') {
      return 0x9b73;
    }
    uVar14 = (ulong)*(ushort *)(param_2 + 0xe) & 0x7f;
    uVar10 = *(ushort *)((long)param_2 + 0x7a) & 0x7f;
    *(char *)(param_1 + 2) = (char)uVar10;
    iVar13 = (int)uVar14;
    if (0x37 < uVar10 + iVar13) {
      return 0;
    }
    lVar16 = 0;
    local_9ec = 0;
    local_9f0 = 0;
    do {
      FUN_0010d900(auStack_1048 + lVar16);
      lVar17 = param_1 + 0x6f548 + lVar16;
      lVar15 = *(long *)(lVar17 + -0x38);
      if ((lVar15 == 0) || (*(ushort *)(lVar17 + 2) < *(ushort *)(param_1 + 0x6f548 + lVar16)))
      goto LAB_00100b94;
      if (*(byte *)(lVar17 + 0x10) - 1 < 2) {
LAB_00100b84:
        FUN_0010d930(auStack_1048 + lVar16,lVar17 + -0x38,2);
      }
      else {
        if (*(byte *)(lVar17 + 0x10) == 3) {
          uVar10 = *(uint *)(lVar15 + 0x70);
        }
        else {
          uVar10 = (*(uint *)(lVar15 + 8) & 0xff00ff00) >> 8 |
                   (*(uint *)(lVar15 + 8) & 0xff00ff) << 8;
          uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
        }
        if ((int)uVar10 < 0x50000) {
          if ((((6 < uVar10) || ((1 << (ulong)(uVar10 & 0x1f) & 0x6dU) == 0)) &&
              (1 < uVar10 - 0x20002)) && (uVar10 != 0x80030000)) goto LAB_00100b94;
          goto LAB_00100b84;
        }
        if ((int)uVar10 < 0x40000006) {
          if ((uVar10 - 0x50000 < 2) || (uVar10 - 0xe0000 < 2)) goto LAB_00100b84;
        }
        else if ((uVar10 + 0xbffb0000 < 2) || (uVar10 == 0x40000006)) goto LAB_00100b84;
      }
LAB_00100b94:
      lVar16 = lVar16 + 0x50;
    } while (lVar16 != 0x640);
    local_a08 = *plVar1;
    local_9f8 = 0;
    local_a00 = 0;
    sVar7 = FUN_00105af0(param_1,param_2,auStack_1128,0x70);
    uVar10 = (uint)sVar7;
    if ((int)uVar10 < 0) {
      return uVar10;
    }
    if (iVar13 == 0) {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((param_4 & 0xffff) < (uVar10 * 2 + 2 & 0xfffe)) {
        return 0;
      }
      FUN_00100350(param_3,auStack_1128);
      return uVar10;
    }
    local_928 = 3;
    local_950 = auStack_1048;
    local_948 = auStack_1128;
    uVar4 = (ushort)uVar14;
    local_938 = 0;
    local_940 = 0;
    local_92c = uVar4;
    FUN_0011f7e0(*plVar1,auStack_960,auStack_95c);
    uVar10 = FUN_0011f660(*plVar1,3);
    if ((uVar10 & 0xffff) == 0) {
      return 0x8773;
    }
    FUN_0011f730(*plVar1,uVar10,0,auStack_978);
    local_95e = 0;
    local_968 = 0;
    local_958 = 0;
    if (*(char *)(param_1 + 2) == '\0') {
      uVar10 = FUN_0011f660(*plVar1,0);
      if ((uVar10 & 0xffff) == 0) {
        return 0x8773;
      }
    }
    else {
      uVar8 = *(ushort *)((long)param_2 + 0x7a) >> 7;
      uVar10 = (uint)uVar8;
      if (uVar8 == 0) {
        return 0x8773;
      }
    }
    FUN_0011f730(*plVar1,uVar10,1,auStack_970);
    local_95a = 0;
    sVar7 = FUN_00109f40(param_1,auStack_978,0,auStack_112c);
    if (sVar7 < 0) {
      return (int)sVar7;
    }
    sVar7 = FUN_0010a610(param_1,auStack_978,param_1 + (ulong)*puVar2 * 0x88 + 0x2e0,0);
    uVar10 = (uint)sVar7;
    if (0 < (int)uVar10) {
      do {
        sVar7 = FUN_0010b5b0(param_1,param_1 + (ulong)*puVar2 * 0x88 + 0x2e0,auStack_10b8,0x70);
        uVar10 = (uint)sVar7;
        if ((int)uVar10 < 0) {
          return uVar10;
        }
        if ((int)(*(byte *)(param_1 + 2) + uVar10) < 0x38) {
          FUN_00100350(auStack_10b8 + (long)(int)uVar10 * 2,auStack_1128 + uVar14 * 2);
          sVar7 = FUN_00131ac0(param_1,auStack_10b8);
          if (sVar7 == 0) {
            puVar12 = (undefined8 *)(param_1 + 0x2e0 + (ulong)*puVar2 * 0x88);
            *(ushort *)(puVar12 + 0x10) = *(ushort *)(puVar12 + 0x10) & 0xff3f | 0x33;
            *puVar12 = *param_2;
            uVar8 = *puVar2;
            lVar16 = param_1 + 0x2e0 + (ulong)uVar8 * 0x88;
            *(undefined2 *)(lVar16 + 0x7a) = *(undefined2 *)((long)param_2 + 0x7a);
            *(undefined2 *)(lVar16 + 0x7c) = *(undefined2 *)((long)param_2 + 0x7c);
            *(undefined2 *)(lVar16 + 0x78) = *(undefined2 *)(param_2 + 0xf);
            *puVar2 = uVar8 + 1;
          }
        }
        sVar7 = FUN_0010a610(param_1,auStack_978,param_1 + (ulong)*puVar2 * 0x88 + 0x2e0,0);
        uVar10 = (uint)sVar7;
      } while (0 < (int)uVar10);
    }
    if ((int)uVar10 < 0) {
      return uVar10;
    }
    uVar11 = FUN_00113d80(auStack_1128,uVar14);
    if ((int)(short)uVar11 - 3U < 2) {
      sVar7 = FUN_001141e0(auStack_1128,auStack_10b8,uVar14,0x37,uVar11);
      iVar5 = (int)sVar7;
      if ((0 < iVar5) && ((int)((uint)*(byte *)(param_1 + 2) + iVar5) < 0x38)) {
        FUN_00100350(auStack_10b8 + (long)iVar5 * 2,auStack_1128 + uVar14 * 2);
        sVar7 = FUN_00131ac0(param_1,auStack_10b8);
joined_r0x00100f94:
        if (sVar7 == 0) {
          sVar7 = FUN_0011f660(*plVar1,1);
          sVar9 = FUN_0011f660(*plVar1,2);
          lVar16 = param_1 + 0x2e0;
          lVar17 = lVar16 + (ulong)*puVar2 * 0x88;
          FUN_0010d880(lVar17);
          *(undefined2 *)(lVar17 + 0x80) = 0x833;
          *(ushort *)(lVar17 + 0x70) = uVar4 | sVar7 << 7;
          *(ushort *)(lVar17 + 0x72) = uVar4 | sVar9 << 7;
          uVar3 = 0x8ad0;
          if (-0x8001 < iVar13 * -1000) {
            uVar3 = (short)((uint)(iVar13 * -0x3e80000) >> 0x10);
          }
          *(undefined2 *)(lVar17 + 8) = uVar3;
          *(char *)(lVar17 + 0x74) = (char)uVar11;
          *(undefined8 *)(lVar16 + (ulong)*puVar2 * 0x88) = *param_2;
          uVar4 = *puVar2;
          lVar16 = lVar16 + (ulong)uVar4 * 0x88;
          *(undefined2 *)(lVar16 + 0x7a) = *(undefined2 *)((long)param_2 + 0x7a);
          *(undefined2 *)(lVar16 + 0x7c) = *(undefined2 *)((long)param_2 + 0x7c);
          *(undefined2 *)(lVar16 + 0x78) = *(undefined2 *)(param_2 + 0xf);
          *puVar2 = uVar4 + 1;
        }
      }
    }
    else if (((short)uVar11 == 2) && (uVar8 = FUN_001003e0(auStack_1128), uVar8 < 0x38)) {
      sVar7 = FUN_00131ac0(param_1,auStack_1128);
      goto joined_r0x00100f94;
    }
    uVar10 = 1;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  lVar16 = FUN_00131ba0(param_1,uVar10 - 1);
  if (param_3 == 0) {
    if (lVar16 != 0) {
      *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
      uVar10 = FUN_001003e0(lVar16);
      goto LAB_00100ed0;
    }
  }
  else if (lVar16 != 0) {
    while( true ) {
      *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
      uVar10 = FUN_001003e0(lVar16);
      if ((uVar10 & 0xffff) * 2 + 2 <= (param_4 & 0xffff)) break;
      lVar16 = FUN_00131ba0(param_1,*(byte *)(param_1 + 1) - 1);
      if (lVar16 == 0) {
        return 0;
      }
    }
LAB_00100ed0:
    if (param_3 != 0) {
      FUN_00100350(param_3,lVar16);
    }
    if (param_6 != (void *)0x0) {
      memcpy(param_6,(void *)(param_1 + (ulong)*(byte *)(param_1 + 1) * 0x88 + 0x1d0),0x88);
    }
    if (param_5 == (char *)0x0) {
      return uVar10;
    }
    *param_5 = (char)uVar10 - *(char *)(param_1 + 2);
    return uVar10;
  }
  return 0;
}

