
ulong thunk_FUN_0010c520(long param_1,undefined4 *param_2,byte param_3,uint param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined2 uVar8;
  short sVar9;
  ulong uVar10;
  code *pcVar11;
  byte *pbVar12;
  ushort auStack_220 [2];
  ushort auStack_21c [2];
  undefined4 uStack_218;
  undefined4 uStack_214;
  ushort uStack_210;
  undefined1 auStack_20c [112];
  undefined1 auStack_19c [112];
  undefined1 auStack_12c [112];
  byte bStack_bc;
  byte bStack_bb;
  byte bStack_ba;
  undefined1 uStack_b9;
  uint uStack_b8;
  ushort uStack_b4;
  undefined2 uStack_b2;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  uint *puStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  uint uStack_70;
  ushort uStack_6c;
  ushort uStack_6a;
  undefined2 uStack_68;
  
  if (param_1 == 0) {
    return 0xae2e;
  }
  plVar1 = (long *)(param_1 + 0x6fb50);
  if (*plVar1 == 0) {
    return 0x882e;
  }
  if (param_2 == (undefined4 *)0x0) {
    return 0x972e;
  }
  if (2 < param_3) {
    return 0x8e2e;
  }
  if (1 < (param_4 & 0xff)) {
    return 0x9a2e;
  }
  uVar5 = FUN_001003e0(param_2 + 8);
  uVar6 = FUN_001003e0(param_2 + 0x24);
  uVar7 = FUN_001003e0(param_2 + 0x40);
  bStack_ba = (byte)uVar7;
  if ((ushort)(uVar5 - 1) < 0x37) {
    if (0x36 < (ushort)(uVar6 - 1)) {
      return 0x9f2e;
    }
    if (0x37 < uVar7) {
      return 0xb82e;
    }
    FUN_00100350(auStack_20c,param_2 + 8);
    bStack_bc = (byte)uVar5;
    FUN_00100350(auStack_19c,param_2 + 0x24);
    bStack_bb = (byte)uVar6;
    FUN_00100350(auStack_12c,param_2 + 0x40);
    bVar4 = *(byte *)(param_2 + 0x5c);
    if (bVar4 != 0xff) {
      uStack_218 = 0;
      if (3 < bVar4) {
        return 0x952e;
      }
      uVar8 = FUN_0011f660(*plVar1,(uint)bVar4 * 2 + 6);
      uStack_214 = CONCAT22(uStack_214._2_2_,uVar8);
      uStack_210 = FUN_0011f660(*plVar1,(uint)bVar4 * 2 + 7);
      uStack_214 = CONCAT22(uStack_210,(short)uStack_214);
      uStack_b9 = 0;
      if (((short)uStack_214 == 0) || (uStack_210 == 0)) {
        return 0xa22e;
      }
LAB_0010c6c4:
      if (param_3 == 0) {
        sVar9 = FUN_0011aab0(param_1,&uStack_218,0,0,0,0);
        if (sVar9 < 0) {
          return (ulong)(uint)(int)sVar9;
        }
        sVar9 = FUN_0011aab0(param_1,&uStack_218,param_4,0,1,1);
        uVar3 = (uint)sVar9;
        if ((int)uVar3 < 0) {
          uVar2 = 0;
          if ((uVar3 & 0x7f00) != 0x1800) {
            uVar2 = uVar3;
          }
          return (ulong)uVar2;
        }
      }
      else if (param_3 == 1) {
        sVar9 = FUN_0011aab0(param_1,&uStack_218,param_4,0,1,1);
        if (sVar9 < 0) {
          return (ulong)(uint)(int)sVar9;
        }
      }
      else {
        uVar10 = 0;
        pbVar12 = (byte *)(param_1 + 0x6f558);
        do {
          pcVar11 = *(code **)(pbVar12 + -0x48);
          if (pcVar11 != (code *)0x0) {
            if (1 < *pbVar12 - 1) {
              if (*pbVar12 == 3) {
                uVar3 = *(uint *)(pcVar11 + 0x70);
              }
              else {
                uVar3 = (*(uint *)(pcVar11 + 8) & 0xff00ff00) >> 8 |
                        (*(uint *)(pcVar11 + 8) & 0xff00ff) << 8;
                uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
              }
              if ((uVar3 | 1) != 0xe0001) goto LAB_0010c8c4;
            }
            uStack_b8 = uStack_214;
            uStack_b0 = 0;
            uStack_a8 = 0;
            uStack_6c = (ushort)bStack_bc;
            uStack_6a = (ushort)bStack_bb;
            uStack_b2 = 1;
            uStack_70 = (uint)bStack_ba;
            uStack_98 = 0;
            uStack_68 = (undefined2)uVar10;
            uStack_b4 = (ushort)param_4 & 0xff;
            lStack_a0 = param_1 + 0x6f510;
            puStack_90 = &uStack_b8;
            puStack_88 = auStack_20c;
            puStack_80 = auStack_19c;
            puStack_78 = auStack_12c;
            sVar9 = (*pcVar11)(param_1,8,&uStack_b0);
            if (sVar9 < 0) {
              return (ulong)((int)sVar9 << 8 | 0xffff8090);
            }
          }
LAB_0010c8c4:
          uVar10 = uVar10 + 1;
          pbVar12 = pbVar12 + 0x50;
        } while (uVar10 < 0x14);
      }
      if ((*(byte *)(param_1 + 0x6f4b2) & 1) == 0) {
        uVar10 = FUN_0011d6b0(param_1,0x37,0);
        return uVar10;
      }
      return 0;
    }
    uVar7 = *(ushort *)(param_2 + 5);
    if (((uint)uVar7 + (uint)*(ushort *)(param_2 + 2) == (uint)uVar5) &&
       ((uint)uVar7 == (uint)*(ushort *)((long)param_2 + 0x16))) {
      if ((uint)*(ushort *)((long)param_2 + 10) + (uint)uVar7 != (uint)uVar6) {
        return 0x9f2e;
      }
      sVar9 = FUN_00100410((long)param_2 + (ulong)*(ushort *)(param_2 + 2) * 2 + 0x20,
                           (long)param_2 + (ulong)*(ushort *)((long)param_2 + 10) * 2 + 0x90);
      if (sVar9 == 0) {
        uStack_218 = param_2[1];
        if (*(short *)(param_2 + 2) == 0) {
          uStack_210 = (ushort)param_2[4];
          uStack_214 = CONCAT22(uStack_210,(short)((uint)param_2[4] >> 0x10));
          uVar5 = (ushort)*(byte *)(param_2 + 5);
        }
        else {
          uVar8 = (undefined2)((uint)*param_2 >> 0x10);
          uStack_210 = (ushort)*param_2;
          uStack_214 = CONCAT22(uStack_210,uVar8);
          uVar5 = *(ushort *)(param_2 + 5);
          if (uVar5 != 0) {
            uStack_214 = CONCAT22((short)param_2[4],uVar8);
          }
        }
        uStack_b9 = (undefined1)uVar5;
        FUN_0011f7e0(*plVar1,auStack_21c,auStack_220);
        if ((uStack_214 & 0xffff) == 0) {
          return 0x952e;
        }
        if (uStack_214._2_2_ == 0) {
          return 0x952e;
        }
        if (uStack_210 == 0) {
          return 0x952e;
        }
        if ((uint)auStack_21c[0] < (uStack_214 & 0xffff)) {
          return 0x952e;
        }
        if (auStack_220[0] < uStack_214._2_2_) {
          return 0x952e;
        }
        if (auStack_220[0] < uStack_210) {
          return 0x952e;
        }
        goto LAB_0010c6c4;
      }
    }
  }
  return 0x9e2e;
}

