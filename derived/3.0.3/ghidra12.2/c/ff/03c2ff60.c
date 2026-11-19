
/* WARNING: Type propagation algorithm not settling */

byte * FUN_03c2ff60(long *param_1,byte *param_2,long param_3,uint *param_4,ulong param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  uint *puVar4;
  byte *pbVar5;
  ulong *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  byte **ppbVar10;
  byte bVar11;
  byte bVar12;
  ushort uVar13;
  uint uVar14;
  byte bVar15;
  undefined8 uVar16;
  bool bVar17;
  ulong uVar18;
  ulong uVar19;
  void *__src;
  ulong *puVar20;
  uint uVar21;
  uint uVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  size_t sVar27;
  ulong uVar28;
  ulong uVar29;
  byte *pbVar30;
  byte *pbVar31;
  int iVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  byte *pbVar36;
  byte *pbVar37;
  ulong uVar38;
  uint uVar39;
  long lVar40;
  byte *pbVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  byte *pbVar45;
  size_t sVar46;
  byte *pbVar47;
  size_t sVar48;
  byte *pbVar49;
  ulong uVar50;
  ulong uVar51;
  byte *pbVar52;
  byte *pbVar53;
  ulong local_190;
  ulong local_170 [16];
  ulong local_f0;
  uint local_e8;
  ulong *local_e0;
  ulong *local_d8;
  ulong *local_d0;
  ulong local_c8;
  long local_c0;
  ulong local_b8;
  long local_b0;
  ulong local_a8;
  long local_a0;
  ulong local_98 [3];
  byte *local_80;
  byte *local_78;
  long local_70;
  
  if (param_5 >> 0x11 != 0) {
    return (byte *)0xffffffffffffffb8;
  }
  if (param_5 < 3) {
    return (byte *)0xffffffffffffffec;
  }
  puVar4 = (uint *)((long)param_1 + 0x683c);
  bVar15 = (byte)*param_4;
  bVar11 = bVar15 & 3;
  switch(bVar11) {
  case 0:
    bVar11 = bVar15 >> 2 & 3;
    if (bVar11 == 1) {
      uVar51 = (ulong)(ushort)((ushort)*param_4 >> 4);
      lVar34 = 2;
    }
    else if (bVar11 == 3) {
      uVar51 = (ulong)(uint3)((uint3)*param_4 >> 4);
      lVar34 = 3;
    }
    else {
      uVar51 = (ulong)(bVar15 >> 3);
      lVar34 = 1;
    }
    uVar28 = lVar34 + uVar51;
    if (param_5 < uVar28 + 8) {
      if (param_5 < uVar28) {
        return (byte *)0xffffffffffffffec;
      }
      memcpy(param_1 + 0xe3b,(void *)((long)param_4 + lVar34),uVar51);
      param_1[0xe23] = (long)(param_1 + 0xe3b);
      param_1[0xe27] = uVar51;
      goto LAB_03c302b8;
    }
    pbVar45 = (byte *)((long)param_4 + lVar34);
    param_1[0xe27] = uVar51;
    param_1[0xe23] = (long)pbVar45;
    goto joined_r0x03c30180;
  case 1:
    bVar11 = bVar15 >> 2 & 3;
    if (bVar11 == 1) {
      lVar34 = 2;
      uVar51 = (ulong)(ushort)((ushort)*param_4 >> 4);
    }
    else if (bVar11 == 3) {
      if (param_5 < 4) {
        return (byte *)0xffffffffffffffec;
      }
      if (0x20000f < (uint3)*param_4) {
        return (byte *)0xffffffffffffffec;
      }
      uVar51 = (ulong)(uint3)((uint3)*param_4 >> 4);
      lVar34 = 3;
    }
    else {
      uVar51 = (ulong)(bVar15 >> 3);
      lVar34 = 1;
    }
    memset(param_1 + 0xe3b,(uint)*(byte *)((long)param_4 + lVar34),uVar51 + 8);
    param_1[0xe23] = (long)(param_1 + 0xe3b);
    uVar28 = lVar34 + 1;
    param_1[0xe27] = uVar51;
    break;
  case 3:
    if ((int)param_1[0xe15] == 0) {
      return (byte *)0xffffffffffffffe2;
    }
  case 2:
    if (param_5 < 5) {
      return (byte *)0xffffffffffffffec;
    }
    bVar15 = bVar15 >> 2 & 3;
    uVar39 = *param_4;
    if (bVar15 == 2) {
      bVar17 = false;
      uVar33 = uVar39 >> 4 & 0x3fff;
      uVar18 = (ulong)(uVar39 >> 0x12);
      lVar34 = 4;
    }
    else if (bVar15 == 3) {
      uVar33 = uVar39 >> 4 & 0x3ffff;
      if (0x20000 < uVar33) {
        return (byte *)0xffffffffffffffec;
      }
      bVar17 = false;
      uVar18 = (ulong)(CONCAT14((char)param_4[1],uVar39) >> 0x16);
      lVar34 = 5;
    }
    else {
      bVar17 = bVar15 == 0;
      uVar33 = uVar39 >> 4 & 0x3ff;
      uVar18 = (ulong)(uVar39 >> 0xe & 0x3ff);
      lVar34 = 3;
    }
    uVar28 = lVar34 + uVar18;
    if (param_5 < uVar28) {
      return (byte *)0xffffffffffffffec;
    }
    uVar51 = (ulong)uVar33;
    if ((0x300 < uVar33) && (*(int *)((long)param_1 + 0x716c) != 0)) {
      uVar38 = 0;
      while( true ) {
        lVar42 = param_1[3] + uVar38;
        Hint_Prefetch(lVar42,0,1,0);
        if (0xff0 < uVar38 >> 2) break;
        Hint_Prefetch(lVar42 + 0x40,0,1,0);
        uVar38 = uVar38 + 0x100;
        Hint_Prefetch(lVar42 + 0x80,0,1,0);
        Hint_Prefetch(lVar42 + 0xc0,0,1,0);
      }
    }
    if (bVar11 == 3) {
      if (bVar17) {
        uVar18 = FUN_03c35810();
      }
      else {
        uVar18 = FUN_03c358b0(param_1 + 0xe3b,uVar51,(long)param_4 + lVar34,uVar18,param_1[3],
                              (int)param_1[0xe2a]);
      }
    }
    else if (bVar17) {
      uVar18 = FUN_03c35820();
    }
    else {
      uVar18 = FUN_03c358c0(param_1 + 0x507,param_1 + 0xe3b,uVar51,(long)param_4 + lVar34,uVar18,
                            param_1 + 0xd09,0x800,(int)param_1[0xe2a]);
    }
    if (0xffffffffffffff88 < uVar18) {
      return (byte *)0xffffffffffffffec;
    }
    param_1[0xe27] = uVar51;
    param_1[0xe23] = (long)(param_1 + 0xe3b);
    *(undefined4 *)(param_1 + 0xe15) = 1;
    if (bVar11 == 2) {
      param_1[3] = (long)(param_1 + 0x507);
    }
LAB_03c302b8:
    *(undefined8 *)((long)(param_1 + 0xe3b) + uVar51) = 0;
  }
  pbVar45 = (byte *)(param_1 + 0xe3b);
joined_r0x03c30180:
  uVar16 = param_5 - uVar28;
  if ((byte *)uVar16 == (byte *)0x0) {
    return (byte *)0xffffffffffffffb8;
  }
  pbVar5 = (byte *)((long)param_4 + uVar28);
  pbVar52 = pbVar5 + 1;
  bVar11 = *pbVar5;
  uVar39 = (uint)bVar11;
  pbVar47 = param_2;
  if (bVar11 == 0) {
    pbVar52 = (byte *)((long)pbVar45 + uVar51);
    goto LAB_03c30300;
  }
  if ((char)bVar11 < '\0') {
    if (uVar39 == 0xff) {
      if ((long)uVar16 < 3) {
        return (byte *)0xffffffffffffffb8;
      }
      pbVar52 = pbVar5 + 3;
      uVar39 = *(ushort *)(pbVar5 + 1) + 0x7f00;
    }
    else {
      if ((long)uVar16 < 2) {
        return (byte *)0xffffffffffffffb8;
      }
      pbVar52 = pbVar5 + 2;
      uVar39 = CONCAT11(bVar11,pbVar5[1]) - 0x8000;
    }
  }
  pbVar45 = (byte *)((long)param_4 + param_5);
  if (pbVar45 < pbVar52 + 4) {
    return (byte *)0xffffffffffffffb8;
  }
  pbVar53 = pbVar52 + 1;
  bVar11 = *pbVar52;
  uVar18 = FUN_03c2fda0(param_1 + 4,param_1,bVar11 >> 6,0x23,9,pbVar53,(long)pbVar45 - (long)pbVar53
                        ,&DAT_041e8684,&DAT_041e8714,&DAT_041e87a4,
                        *(undefined4 *)((long)param_1 + 0x70ac),
                        *(undefined4 *)((long)param_1 + 0x716c),uVar39);
  if (0xffffffffffffff88 < uVar18) {
    return (byte *)0xffffffffffffffec;
  }
  pbVar53 = pbVar53 + uVar18;
  plVar1 = param_1 + 2;
  uVar18 = FUN_03c2fda0(param_1 + 0x205,plVar1,bVar11 >> 4 & 3,0x1f,8,pbVar53,
                        (long)pbVar45 - (long)pbVar53,&DAT_041e89ac,&DAT_041e8a2c,&DAT_041e8aac,
                        *(undefined4 *)((long)param_1 + 0x70ac),
                        *(undefined4 *)((long)param_1 + 0x716c),uVar39);
  if (0xffffffffffffff88 < uVar18) {
    return (byte *)0xffffffffffffffec;
  }
  pbVar53 = pbVar53 + uVar18;
  plVar2 = param_1 + 1;
  uVar18 = FUN_03c2fda0(param_1 + 0x306,plVar2,bVar11 >> 2 & 3,0x34,9,pbVar53,
                        (long)pbVar45 - (long)pbVar53,&DAT_041e8bb4,&DAT_041e8c88,&DAT_041e8d5c,
                        *(undefined4 *)((long)param_1 + 0x70ac),
                        *(undefined4 *)((long)param_1 + 0x716c),uVar39);
  if (0xffffffffffffff88 < uVar18) {
    return (byte *)0xffffffffffffffec;
  }
  if (*(int *)((long)param_1 + 0x716c) != 0) {
    uVar28 = param_1[0xe0a] - param_1[0xe0b];
    if ((ulong)(uVar39 << 6) <= (ulong)(param_1[0xe0a] - param_1[0xe0b])) {
      uVar28 = (ulong)(uVar39 << 6);
    }
    if (0x1ffff < uVar28) {
      uVar28 = 0x20000;
    }
    if (uVar28 != 0) {
      uVar51 = (uVar28 - 1 >> 6) + 1;
      uVar38 = uVar51 & 3;
      if (uVar28 < 0xc1) {
        lVar34 = 0;
      }
      else {
        lVar34 = 0;
        uVar51 = uVar51 & 0x7fffffffffffffc;
        do {
          lVar42 = (param_1[0xe0c] - uVar28) + lVar34;
          lVar34 = lVar34 + 0x100;
          Hint_Prefetch(lVar42,0,1,0);
          uVar51 = uVar51 - 4;
          Hint_Prefetch(lVar42 + 0x40,0,1,0);
          Hint_Prefetch(lVar42 + 0x80,0,1,0);
          Hint_Prefetch(lVar42 + 0xc0,0,1,0);
        } while (uVar51 != 0);
      }
      if (uVar38 != 0) {
        lVar34 = param_1[0xe0c] + (lVar34 - uVar28);
        do {
          Hint_Prefetch(lVar34,0,1,0);
          lVar34 = lVar34 + 0x40;
          uVar38 = uVar38 - 1;
        } while (uVar38 != 0);
      }
    }
    *(undefined4 *)((long)param_1 + 0x716c) = 0;
  }
  pbVar53 = pbVar53 + (uVar18 - (long)pbVar5);
  if ((byte *)0xffffffffffffff88 < pbVar53) {
    return pbVar53;
  }
  puVar6 = (ulong *)(pbVar5 + (long)pbVar53);
  uVar18 = uVar16 - (long)pbVar53;
  pbVar5 = param_2 + param_3;
  if ((0x1000000 < (ulong)param_1[0xe0f]) && (0 < (int)uVar39)) {
    lVar42 = *plVar1;
    iVar32 = 0;
    uVar33 = 1;
    lVar34 = lVar42 + 8;
    do {
      uVar21 = uVar33 - 1;
      uVar22 = uVar33 >> (ulong)(*(uint *)(lVar42 + 4) & 0x1f);
      uVar33 = uVar33 + 1;
      if (0x16 < *(byte *)(lVar34 + (ulong)uVar21 * 8 + 2)) {
        iVar32 = iVar32 + 1;
      }
    } while (uVar22 == 0);
    if (6 < (uint)(iVar32 << (ulong)(8 - *(uint *)(lVar42 + 4) & 0x1f))) {
      pbVar52 = (byte *)param_1[0xe0a];
      *(undefined4 *)((long)param_1 + 0x70ac) = 1;
      uVar28 = (ulong)*(uint *)(param_1 + 0xd08);
      pbVar45 = (byte *)param_1[0xe23];
      uVar33 = uVar39;
      if (3 < (int)uVar39) {
        uVar33 = 4;
      }
      lVar35 = param_1[0xe27];
      local_98[2] = (ulong)*(uint *)((long)param_1 + 0x6844);
      local_80 = pbVar52;
      pbVar47 = (byte *)param_1[0xe0c];
      lVar44 = param_1[0xe0b];
      lVar40 = (long)param_2 - (long)pbVar52;
      local_98[0] = (ulong)*puVar4;
      local_98[1] = uVar28;
      local_78 = pbVar47;
      local_70 = lVar40;
      if ((byte *)uVar16 == pbVar53) {
        return (byte *)0xffffffffffffffec;
      }
      lVar43 = uVar18 - 8;
      local_d8 = puVar6;
      local_d0 = puVar6 + 1;
      if (uVar18 < 8) {
        local_f0 = (ulong)(byte)*puVar6;
        local_e0 = puVar6;
        switch(uVar18) {
        case 7:
          local_f0 = local_f0 | (ulong)*(byte *)((long)puVar6 + 6) << 0x30;
        case 6:
          local_f0 = local_f0 + ((ulong)*(byte *)((long)puVar6 + 5) << 0x28);
        case 5:
          local_f0 = local_f0 + ((ulong)*(byte *)((long)puVar6 + 4) << 0x20);
        case 4:
          local_f0 = local_f0 + (ulong)*(byte *)((long)puVar6 + 3) * 0x1000000;
        case 3:
          local_f0 = local_f0 + (ulong)*(byte *)((long)puVar6 + 2) * 0x10000;
        case 2:
          local_f0 = local_f0 + (ulong)*(byte *)((long)puVar6 + 1) * 0x100;
        }
        uVar22 = (uint)*(byte *)((long)puVar6 + (uVar18 - 1));
        if (uVar22 == 0) {
          return (byte *)0xffffffffffffffec;
        }
        lVar43 = 0;
        iVar32 = (int)LZCOUNT(uVar22) + (int)uVar18 * -8 + 0x29;
      }
      else {
        local_f0 = *(ulong *)((long)puVar6 + lVar43);
        local_e0 = (ulong *)((long)puVar6 + lVar43);
        if (local_f0 >> 0x38 == 0) {
          return (byte *)0xffffffffffffffec;
        }
        iVar32 = (int)LZCOUNT((uint)(byte)(local_f0 >> 0x38)) + -0x17;
        if (0xffffffffffffff88 < uVar18) {
          return (byte *)0xffffffffffffffec;
        }
      }
      uVar21 = *(uint *)(*param_1 + 4);
      uVar22 = uVar21 + iVar32;
      local_c8 = local_f0 >> ((ulong)-uVar22 & 0x3f) &
                 (ulong)*(uint *)(&DAT_041e8f70 + (ulong)uVar21 * 4);
      if (uVar22 < 0x41) {
        if (lVar43 < 8) {
          if (lVar43 == 0) goto LAB_03c30f8c;
          uVar21 = (uint)lVar43;
          if (puVar6 <= (ulong *)((long)puVar6 + (lVar43 - (ulong)(uVar22 >> 3)))) {
            uVar21 = uVar22 >> 3;
          }
          lVar43 = lVar43 - (ulong)uVar21;
          uVar22 = uVar22 + uVar21 * -8;
          local_e0 = (ulong *)((long)puVar6 + lVar43);
        }
        else {
          uVar21 = uVar22 >> 3;
          uVar22 = uVar22 & 7;
          lVar43 = lVar43 - (ulong)uVar21;
          local_e0 = (ulong *)((long)puVar6 + lVar43);
        }
        local_f0 = *(ulong *)((long)puVar6 + lVar43);
      }
LAB_03c30f8c:
      lVar3 = *param_1 + 8;
      local_c0 = lVar3;
      uVar22 = *(uint *)(lVar42 + 4) + uVar22;
      local_b8 = local_f0 >> ((ulong)-uVar22 & 0x3f) &
                 (ulong)*(uint *)(&DAT_041e8f70 + (ulong)*(uint *)(lVar42 + 4) * 4);
      if (uVar22 < 0x41) {
        if (lVar43 < 8) {
          if (lVar43 == 0) goto LAB_03c31010;
          uVar21 = (uint)lVar43;
          if (puVar6 <= (ulong *)((long)puVar6 + (lVar43 - (ulong)(uVar22 >> 3)))) {
            uVar21 = uVar22 >> 3;
          }
          lVar43 = lVar43 - (ulong)uVar21;
          uVar22 = uVar22 + uVar21 * -8;
          local_e0 = (ulong *)((long)puVar6 + lVar43);
        }
        else {
          uVar21 = uVar22 >> 3;
          uVar22 = uVar22 & 7;
          lVar43 = lVar43 - (ulong)uVar21;
          local_e0 = (ulong *)((long)puVar6 + lVar43);
        }
        local_f0 = *(ulong *)((long)puVar6 + lVar43);
      }
LAB_03c31010:
      lVar42 = *plVar2;
      local_b0 = lVar34;
      uVar22 = *(uint *)(lVar42 + 4) + uVar22;
      uVar18 = (ulong)uVar22;
      local_e8 = uVar22;
      local_a8 = local_f0 >> ((ulong)-uVar22 & 0x3f) &
                 (ulong)*(uint *)(&DAT_041e8f70 + (ulong)*(uint *)(lVar42 + 4) * 4);
      if (uVar22 < 0x41) {
        if (lVar43 < 8) {
          if (lVar43 == 0) {
            lVar43 = 0;
            local_a0 = lVar42 + 8;
          }
          else {
            local_a0 = lVar42 + 8;
            uVar21 = (uint)lVar43;
            if (puVar6 <= (ulong *)((long)puVar6 + (lVar43 - (ulong)(uVar22 >> 3)))) {
              uVar21 = uVar22 >> 3;
            }
            lVar43 = lVar43 - (ulong)uVar21;
            local_e8 = uVar22 + uVar21 * -8;
            uVar18 = (ulong)local_e8;
            local_e0 = (ulong *)((long)puVar6 + lVar43);
            local_f0 = *(ulong *)((long)puVar6 + lVar43);
            if (0x40 < local_e8) {
              local_190 = 0;
              goto LAB_03c31378;
            }
          }
        }
        else {
          uVar18 = (ulong)(uVar22 & 7);
          local_e8 = uVar22 & 7;
          lVar43 = lVar43 - (ulong)(uVar22 >> 3);
          local_a0 = lVar42 + 8;
          local_e0 = (ulong *)((long)puVar6 + lVar43);
          local_f0 = *(ulong *)((long)puVar6 + lVar43);
        }
        local_190 = 0;
        uVar19 = (ulong)(uVar33 & ((int)uVar33 >> 0x1f ^ 0xffffffffU));
        puVar20 = local_170 + 2;
        uVar51 = local_f0;
        uVar38 = (ulong)*puVar4;
        do {
          uVar22 = (uint)uVar18;
          if (lVar43 < 8) {
            if (lVar43 != 0) {
              uVar21 = (uint)lVar43;
              if (puVar6 <= (ulong *)((long)puVar6 + (lVar43 - (uVar18 >> 3)))) {
                uVar21 = (uint)(uVar18 >> 3);
              }
              lVar43 = lVar43 - (ulong)uVar21;
              local_e8 = uVar22 + uVar21 * -8;
              uVar51 = *(ulong *)((long)puVar6 + lVar43);
              local_e0 = (ulong *)((long)puVar6 + lVar43);
              goto LAB_03c31230;
            }
          }
          else {
            local_e8 = uVar22 & 7;
            lVar43 = lVar43 - (ulong)(uVar22 >> 3);
            local_e0 = (ulong *)((long)puVar6 + lVar43);
            uVar51 = *(ulong *)((long)puVar6 + lVar43);
LAB_03c31230:
            uVar18 = (ulong)local_e8;
            local_f0 = uVar51;
          }
          if (uVar19 == local_190) goto LAB_03c31388;
          puVar7 = (ushort *)(lVar3 + local_c8 * 8);
          bVar11 = (byte)puVar7[1];
          puVar8 = (ushort *)(lVar42 + 8 + local_a8 * 8);
          puVar9 = (ushort *)(lVar34 + local_b8 * 8);
          bVar15 = (byte)puVar8[1];
          bVar12 = (byte)puVar9[1];
          uVar22 = *(uint *)(puVar8 + 2);
          uVar21 = (uint)bVar12;
          if (bVar12 != 0) {
            uVar29 = uVar18 & 0x3f;
            local_e8 = (int)uVar18 + uVar21;
            uVar18 = (ulong)local_e8;
            uVar29 = ((uVar51 << uVar29) >> ((ulong)-(uint)bVar12 & 0x3f)) +
                     (ulong)*(uint *)(puVar9 + 2);
            uVar50 = uVar29;
            if (uVar21 == 1) goto LAB_03c31290;
            goto LAB_03c312d0;
          }
          uVar50 = 0;
LAB_03c31290:
          if (*(uint *)(puVar7 + 2) == 0) {
            uVar50 = uVar50 + 1;
          }
          if (uVar50 == 0) {
            uVar29 = uVar38;
          }
          else {
            if (uVar50 == 3) {
              uVar29 = uVar38 - 1;
              if (uVar38 - 1 == 0) {
                uVar29 = uVar38;
              }
LAB_03c312d0:
              local_98[2] = uVar28;
            }
            else {
              uVar29 = local_98[uVar50];
              if (uVar29 == 0) {
                uVar29 = 1;
              }
              if (uVar50 != 1) goto LAB_03c312d0;
            }
            local_98[0] = uVar29;
            local_98[1] = uVar38;
            uVar28 = uVar38;
          }
          if (bVar15 == 0) {
            uVar38 = 0;
          }
          else {
            uVar38 = uVar18 & 0x3f;
            uVar18 = (ulong)((int)uVar18 + (uint)bVar15);
            uVar38 = (uVar51 << uVar38) >> ((ulong)-(uint)bVar15 & 0x3f);
          }
          if ((0x1e < (uint)bVar15 + (uint)bVar11 + uVar21) &&
             (uVar21 = (uint)uVar18, uVar21 < 0x41)) {
            if (lVar43 < 8) {
              if (lVar43 == 0) goto LAB_03c31368;
              uVar14 = (uint)lVar43;
              if (puVar6 <= (ulong *)((long)puVar6 + (lVar43 - (ulong)(uVar21 >> 3)))) {
                uVar14 = uVar21 >> 3;
              }
              lVar43 = lVar43 - (ulong)uVar14;
              uVar14 = uVar21 + uVar14 * -8;
              local_e0 = (ulong *)((long)puVar6 + lVar43);
            }
            else {
              uVar14 = uVar21 & 7;
              lVar43 = lVar43 - (ulong)(uVar21 >> 3);
              local_e0 = (ulong *)((long)puVar6 + lVar43);
            }
            uVar18 = (ulong)uVar14;
            uVar51 = *(ulong *)((long)puVar6 + lVar43);
            local_f0 = uVar51;
          }
LAB_03c31368:
          iVar32 = (int)uVar18;
          if (bVar11 == 0) {
            uVar18 = 0;
          }
          else {
            iVar32 = iVar32 + (uint)bVar11;
            uVar18 = (uVar51 << (uVar18 & 0x3f)) >> ((ulong)-(uint)bVar11 & 0x3f);
          }
          uVar18 = uVar18 + *(uint *)(puVar7 + 2);
          puVar20[-2] = uVar18;
          puVar20[-1] = uVar38 + uVar22;
          uVar18 = uVar18 + lVar40;
          lVar40 = uVar18 + uVar38 + uVar22;
          local_70 = lVar40;
          pbVar53 = pbVar47;
          if (uVar29 <= uVar18) {
            pbVar53 = pbVar52;
          }
          uVar13 = *puVar7;
          local_190 = local_190 + 1;
          uVar22 = *(uint *)(&DAT_041e8f70 + (ulong)*(byte *)((long)puVar7 + 3) * 4);
          iVar32 = iVar32 + (uint)*(byte *)((long)puVar7 + 3);
          *puVar20 = uVar29;
          puVar20[1] = (ulong)(pbVar53 + (uVar18 - uVar29));
          local_c8 = (uVar51 >> ((ulong)(uint)-iVar32 & 0x3f) & (ulong)uVar22) + (ulong)uVar13;
          iVar32 = iVar32 + (uint)*(byte *)((long)puVar8 + 3);
          local_a8 = (uVar51 >> ((ulong)(uint)-iVar32 & 0x3f) &
                     (ulong)*(uint *)(&DAT_041e8f70 + (ulong)*(byte *)((long)puVar8 + 3) * 4)) +
                     (ulong)*puVar8;
          local_e8 = iVar32 + (uint)*(byte *)((long)puVar9 + 3);
          uVar18 = (ulong)local_e8;
          local_b8 = (uVar51 >> ((ulong)-local_e8 & 0x3f) &
                     (ulong)*(uint *)(&DAT_041e8f70 + (ulong)*(byte *)((long)puVar9 + 3) * 4)) +
                     (ulong)*puVar9;
          puVar20 = puVar20 + 4;
          uVar38 = uVar29;
        } while (local_e8 < 0x41);
      }
      else {
        local_190 = 0;
        local_a0 = lVar42 + 8;
      }
LAB_03c31378:
      uVar19 = local_190;
      if ((int)local_190 < (int)uVar33) {
        return (byte *)0xffffffffffffffec;
      }
LAB_03c31388:
      local_190 = uVar19;
      pbVar53 = pbVar45 + lVar35;
      pbVar24 = pbVar5 + -8;
      uVar22 = (uint)uVar18;
      pbVar41 = param_2;
      uVar28 = local_190;
      uVar51 = local_98[0];
      uVar38 = local_98[1];
      while( true ) {
        local_98[0] = uVar51;
        local_98[1] = uVar38;
        if (0x40 < uVar22) break;
        local_190._0_4_ = (uint)uVar28;
        uVar22 = (uint)uVar18;
        if (local_e0 < local_d0) {
          if (local_e0 != local_d8) {
            uVar21 = (int)local_e0 - (int)local_d8;
            if (local_d8 <= (ulong *)((long)local_e0 - (uVar18 >> 3))) {
              uVar21 = (uint)(uVar18 >> 3);
            }
            local_e8 = uVar22 + uVar21 * -8;
            goto LAB_03c313ec;
          }
        }
        else {
          uVar21 = uVar22 >> 3;
          local_e8 = uVar22 & 7;
LAB_03c313ec:
          uVar18 = (ulong)local_e8;
          local_e0 = (ulong *)((long)local_e0 - (ulong)uVar21);
          local_f0 = *local_e0;
        }
        if ((int)uVar39 <= (int)(uint)local_190) goto LAB_03c319d0;
        puVar7 = (ushort *)(local_c0 + local_c8 * 8);
        bVar11 = (byte)puVar7[1];
        puVar8 = (ushort *)(local_a0 + local_a8 * 8);
        bVar15 = (byte)puVar8[1];
        uVar22 = *(uint *)(puVar8 + 2);
        puVar9 = (ushort *)(local_b0 + local_b8 * 8);
        bVar12 = (byte)puVar9[1];
        uVar21 = (uint)bVar12;
        if (bVar12 == 0) {
          uVar28 = 0;
LAB_03c31478:
          if (*(uint *)(puVar7 + 2) == 0) {
            uVar28 = uVar28 + 1;
          }
          local_98[0] = uVar51;
          if (uVar28 != 0) {
            if (uVar28 == 3) {
              local_98[0] = uVar51 - 1;
              if (uVar51 - 1 == 0) {
                local_98[0] = uVar51;
              }
LAB_03c314c0:
              local_98[2] = uVar38;
            }
            else {
              local_98[0] = local_98[uVar28];
              if (local_98[0] == 0) {
                local_98[0] = 1;
              }
              if (uVar28 != 1) goto LAB_03c314c0;
            }
            local_98[1] = uVar51;
            goto LAB_03c314d0;
          }
        }
        else {
          uVar28 = uVar18 & 0x3f;
          local_e8 = (int)uVar18 + uVar21;
          uVar18 = (ulong)local_e8;
          local_98[0] = ((local_f0 << uVar28) >> ((ulong)-(uint)bVar12 & 0x3f)) +
                        (ulong)*(uint *)(puVar9 + 2);
          uVar28 = local_98[0];
          if (uVar21 == 1) goto LAB_03c31478;
          local_98[1] = uVar51;
          local_98[2] = uVar38;
LAB_03c314d0:
          local_98[1] = uVar51;
        }
        uVar51 = local_98[0];
        if (bVar15 == 0) {
          uVar28 = 0;
        }
        else {
          uVar28 = uVar18 & 0x3f;
          local_e8 = (int)uVar18 + (uint)bVar15;
          uVar18 = (ulong)local_e8;
          uVar28 = (local_f0 << uVar28) >> ((ulong)-(uint)bVar15 & 0x3f);
        }
        if ((0x1e < (uint)bVar15 + (uint)bVar11 + uVar21) &&
           (local_e8 = (uint)uVar18, local_e8 < 0x41)) {
          if (local_e0 < local_d0) {
            if (local_e0 == local_d8) goto LAB_03c31560;
            uVar21 = (int)local_e0 - (int)local_d8;
            if (local_d8 <= (ulong *)((long)local_e0 - (ulong)(local_e8 >> 3))) {
              uVar21 = local_e8 >> 3;
            }
            local_e8 = local_e8 + uVar21 * -8;
          }
          else {
            uVar21 = local_e8 >> 3;
            local_e8 = local_e8 & 7;
          }
          uVar18 = (ulong)local_e8;
          local_e0 = (ulong *)((long)local_e0 - (ulong)uVar21);
          local_f0 = *local_e0;
        }
LAB_03c31560:
        local_e8 = (uint)uVar18;
        if (bVar11 == 0) {
          uVar18 = 0;
        }
        else {
          local_e8 = local_e8 + bVar11;
          uVar18 = (local_f0 << (uVar18 & 0x3f)) >> ((ulong)-(uint)bVar11 & 0x3f);
        }
        uVar18 = uVar18 + *(uint *)(puVar7 + 2);
        uVar38 = local_70 + uVar18;
        ppbVar10 = &local_78;
        if (local_98[0] <= uVar38) {
          ppbVar10 = &local_80;
        }
        pbVar23 = *ppbVar10;
        local_70 = uVar38 + uVar28 + uVar22;
        iVar32 = local_e8 + *(byte *)((long)puVar7 + 3);
        local_c8 = (local_f0 >> ((ulong)(uint)-iVar32 & 0x3f) &
                   (ulong)*(uint *)(&DAT_041e8f70 + (ulong)*(byte *)((long)puVar7 + 3) * 4)) +
                   (ulong)*puVar7;
        iVar32 = iVar32 + (uint)*(byte *)((long)puVar8 + 3);
        local_a8 = (local_f0 >> ((ulong)(uint)-iVar32 & 0x3f) &
                   (ulong)*(uint *)(&DAT_041e8f70 + (ulong)*(byte *)((long)puVar8 + 3) * 4)) +
                   (ulong)*puVar8;
        uVar29 = (ulong)((uint)local_190 & 3);
        local_e8 = iVar32 + (uint)*(byte *)((long)puVar9 + 3);
        uVar19 = local_170[uVar29 * 4];
        sVar48 = local_170[uVar29 * 4 + 1];
        pbVar31 = (byte *)(sVar48 + uVar19);
        local_b8 = (local_f0 >> ((ulong)-local_e8 & 0x3f) &
                   (ulong)*(uint *)(&DAT_041e8f70 + (ulong)*(byte *)((long)puVar9 + 3) * 4)) +
                   (ulong)*puVar9;
        pbVar26 = pbVar41 + (long)pbVar31;
        if (pbVar5 < pbVar26) {
          return (byte *)0xffffffffffffffba;
        }
        pbVar49 = pbVar45 + uVar19;
        if (pbVar53 < pbVar49) {
          return (byte *)0xffffffffffffffec;
        }
        uVar50 = local_170[uVar29 * 4 + 2];
        pbVar37 = pbVar41 + uVar19;
        if (pbVar24 < pbVar37) {
          if (pbVar24 < pbVar41 || (long)pbVar24 - (long)pbVar41 == 0) {
            pbVar25 = pbVar41;
            pbVar49 = pbVar45;
          }
          else {
            pbVar49 = pbVar41;
            pbVar25 = pbVar45;
            do {
              pbVar30 = pbVar49 + 8;
              *(long *)pbVar49 = *(long *)pbVar25;
              pbVar49 = pbVar30;
              pbVar25 = pbVar25 + 8;
            } while (pbVar30 < pbVar24);
            pbVar25 = pbVar24;
            pbVar49 = pbVar45 + ((long)pbVar24 - (long)pbVar41);
          }
          for (; pbVar25 < pbVar37; pbVar25 = pbVar25 + 1) {
            *pbVar25 = *pbVar49;
            pbVar49 = pbVar49 + 1;
          }
          pbVar45 = pbVar37 + -uVar50;
          if ((ulong)((long)pbVar37 - (long)pbVar52) < uVar50) {
            if ((ulong)((long)pbVar37 - lVar44) < uVar50) {
              return (byte *)0xffffffffffffffec;
            }
            lVar34 = (long)(pbVar37 + -uVar50) - (long)pbVar52;
            pbVar25 = pbVar47 + lVar34;
            if (pbVar25 + sVar48 <= pbVar47) goto LAB_03c318cc;
            memmove(pbVar37,pbVar25,-lVar34);
            pbVar25 = pbVar37 + -lVar34;
            pbVar45 = pbVar52;
          }
          if (pbVar25 < pbVar26) {
            uVar21 = ((int)uVar19 + (int)sVar48 + (int)pbVar41) - (int)pbVar25;
            uVar50 = (ulong)uVar21 & 7;
            if ((uVar21 & 7) == 0) {
              pbVar37 = pbVar25;
            }
            else {
              pbVar30 = pbVar45;
              pbVar36 = pbVar25;
              do {
                pbVar45 = pbVar30 + 1;
                uVar50 = uVar50 - 1;
                pbVar37 = pbVar36 + 1;
                *pbVar36 = *pbVar30;
                pbVar30 = pbVar45;
                pbVar36 = pbVar37;
              } while (uVar50 != 0);
            }
            if (&DAT_00000006 < pbVar41 + ~(ulong)pbVar25 + uVar19 + sVar48) {
              do {
                *pbVar37 = *pbVar45;
                pbVar37[1] = pbVar45[1];
                pbVar37[2] = pbVar45[2];
                pbVar37[3] = pbVar45[3];
                pbVar37[4] = pbVar45[4];
                pbVar37[5] = pbVar45[5];
                pbVar37[6] = pbVar45[6];
                pbVar41 = pbVar45 + 7;
                pbVar45 = pbVar45 + 8;
                pbVar37[7] = *pbVar41;
                pbVar37 = pbVar37 + 8;
              } while (pbVar37 < pbVar26);
            }
          }
        }
        else {
          pbVar25 = (byte *)local_170[uVar29 * 4 + 3];
          *(long *)pbVar41 = *(long *)pbVar45;
          if (8 < uVar19) {
            pbVar41 = pbVar41 + 8;
            do {
              pbVar45 = pbVar45 + 8;
              pbVar30 = pbVar41 + 8;
              *(long *)pbVar41 = *(long *)pbVar45;
              pbVar41 = pbVar30;
            } while (pbVar30 < pbVar37);
          }
          sVar27 = sVar48;
          if ((ulong)((long)pbVar37 - (long)pbVar52) < uVar50) {
            if ((ulong)((long)pbVar37 - lVar44) < uVar50) {
              return (byte *)0xffffffffffffffec;
            }
            if (pbVar47 < pbVar25 + sVar48) {
              sVar46 = (long)pbVar47 - (long)pbVar25;
              memmove(pbVar37,pbVar25,sVar46);
              pbVar37 = pbVar37 + sVar46;
              sVar27 = sVar48 - sVar46;
              if ((pbVar37 <= pbVar24) && (2 < sVar27)) {
                pbVar25 = pbVar52;
                goto LAB_03c31750;
              }
              if (sVar48 != sVar46) {
                uVar19 = 0;
                uVar50 = 1;
                do {
                  pbVar37[uVar19] = pbVar52[uVar19];
                  bVar17 = uVar50 < sVar27;
                  uVar19 = uVar50;
                  uVar50 = (ulong)((int)uVar50 + 1);
                } while (bVar17);
              }
            }
            else {
LAB_03c318cc:
              memmove(pbVar37,pbVar25,sVar48);
            }
          }
          else {
LAB_03c31750:
            if (uVar50 < 8) {
              iVar32 = *(int *)(&DAT_040579e0 + uVar50 * 4);
              *pbVar37 = *pbVar25;
              pbVar37[1] = pbVar25[1];
              pbVar37[2] = pbVar25[2];
              pbVar37[3] = pbVar25[3];
              pbVar45 = pbVar25 + *(uint *)(&DAT_040583a0 + uVar50 * 4);
              pbVar25 = pbVar45 + -(long)iVar32;
              *(undefined4 *)(pbVar37 + 4) = *(undefined4 *)pbVar45;
            }
            else {
              *(long *)pbVar37 = *(long *)pbVar25;
            }
            pbVar45 = pbVar37 + 8;
            pbVar25 = pbVar25 + 8;
            if (pbVar5 + -0xd < pbVar26) {
              if (pbVar45 < pbVar24) {
                pbVar41 = pbVar45;
                pbVar37 = pbVar25;
                do {
                  pbVar30 = pbVar41 + 8;
                  *(long *)pbVar41 = *(long *)pbVar37;
                  pbVar41 = pbVar30;
                  pbVar37 = pbVar37 + 8;
                } while (pbVar30 < pbVar24);
                pbVar25 = pbVar25 + ((long)pbVar24 - (long)pbVar45);
                pbVar45 = pbVar24;
              }
              for (; pbVar45 < pbVar26; pbVar45 = pbVar45 + 1) {
                *pbVar45 = *pbVar25;
                pbVar25 = pbVar25 + 1;
              }
            }
            else {
              do {
                pbVar41 = pbVar45 + 8;
                *(long *)pbVar45 = *(long *)pbVar25;
                pbVar25 = pbVar25 + 8;
                pbVar45 = pbVar41;
              } while (pbVar41 < pbVar37 + sVar27);
            }
          }
        }
        if ((byte *)0xffffffffffffff88 < pbVar31) {
          return pbVar31;
        }
        Hint_Prefetch(pbVar23 + (uVar38 - uVar51),0,1,0);
        local_170[uVar29 * 4] = uVar18;
        local_170[uVar29 * 4 + 1] = uVar28 + uVar22;
        uVar22 = local_e8;
        uVar18 = (ulong)local_e8;
        local_190._0_4_ = (uint)local_190 + 1;
        uVar28 = (ulong)(uint)local_190;
        local_170[uVar29 * 4 + 2] = uVar51;
        local_170[uVar29 * 4 + 3] = (ulong)(pbVar23 + (uVar38 - uVar51));
        pbVar45 = pbVar49;
        pbVar41 = pbVar26;
        uVar51 = local_98[0];
        uVar38 = local_98[1];
      }
      if ((int)(uint)local_190 < (int)uVar39) {
        return (byte *)0xffffffffffffffec;
      }
LAB_03c319d0:
      local_190._0_4_ = (uint)local_190 - uVar33;
      pbVar26 = pbVar41;
      pbVar31 = pbVar45;
      if ((int)(uint)local_190 < (int)uVar39) {
        do {
          uVar28 = (ulong)((uint)local_190 & 3);
          uVar18 = local_170[uVar28 * 4];
          sVar48 = local_170[uVar28 * 4 + 1];
          pbVar23 = (byte *)(sVar48 + uVar18);
          pbVar41 = pbVar26 + (long)pbVar23;
          if (pbVar5 < pbVar41) {
            return (byte *)0xffffffffffffffba;
          }
          pbVar45 = pbVar31 + uVar18;
          if (pbVar53 < pbVar45) {
            return (byte *)0xffffffffffffffec;
          }
          pbVar49 = pbVar26 + uVar18;
          uVar51 = local_170[uVar28 * 4 + 2];
          if (pbVar24 < pbVar49) {
            if (pbVar24 < pbVar26 || (long)pbVar24 - (long)pbVar26 == 0) {
              pbVar37 = pbVar26;
              pbVar45 = pbVar31;
            }
            else {
              pbVar45 = pbVar26;
              pbVar37 = pbVar31;
              do {
                pbVar25 = pbVar45 + 8;
                *(long *)pbVar45 = *(long *)pbVar37;
                pbVar45 = pbVar25;
                pbVar37 = pbVar37 + 8;
              } while (pbVar25 < pbVar24);
              pbVar37 = pbVar24;
              pbVar45 = pbVar31 + ((long)pbVar24 - (long)pbVar26);
            }
            for (; pbVar37 < pbVar49; pbVar37 = pbVar37 + 1) {
              *pbVar37 = *pbVar45;
              pbVar45 = pbVar45 + 1;
            }
            pbVar31 = pbVar49 + -uVar51;
            if ((ulong)((long)pbVar49 - (long)pbVar52) < uVar51) {
              if ((ulong)((long)pbVar49 - lVar44) < uVar51) {
                return (byte *)0xffffffffffffffec;
              }
              lVar34 = (long)(pbVar49 + -uVar51) - (long)pbVar52;
              pbVar37 = pbVar47 + lVar34;
              if (pbVar37 + sVar48 <= pbVar47) goto LAB_03c31c70;
              memmove(pbVar49,pbVar37,-lVar34);
              pbVar37 = pbVar49 + -lVar34;
              pbVar31 = pbVar52;
            }
            if (pbVar37 < pbVar41) {
              uVar33 = ((int)uVar18 + (int)sVar48 + (int)pbVar26) - (int)pbVar37;
              uVar28 = (ulong)uVar33 & 7;
              if ((uVar33 & 7) == 0) {
                pbVar49 = pbVar37;
              }
              else {
                pbVar25 = pbVar31;
                pbVar30 = pbVar37;
                do {
                  pbVar31 = pbVar25 + 1;
                  uVar28 = uVar28 - 1;
                  pbVar49 = pbVar30 + 1;
                  *pbVar30 = *pbVar25;
                  pbVar25 = pbVar31;
                  pbVar30 = pbVar49;
                } while (uVar28 != 0);
              }
              if (&DAT_00000006 < pbVar26 + ~(ulong)pbVar37 + uVar18 + sVar48) {
                do {
                  *pbVar49 = *pbVar31;
                  pbVar49[1] = pbVar31[1];
                  pbVar49[2] = pbVar31[2];
                  pbVar49[3] = pbVar31[3];
                  pbVar49[4] = pbVar31[4];
                  pbVar49[5] = pbVar31[5];
                  pbVar49[6] = pbVar31[6];
                  pbVar26 = pbVar31 + 7;
                  pbVar31 = pbVar31 + 8;
                  pbVar49[7] = *pbVar26;
                  pbVar49 = pbVar49 + 8;
                } while (pbVar49 < pbVar41);
              }
            }
          }
          else {
            pbVar37 = (byte *)local_170[uVar28 * 4 + 3];
            *(long *)pbVar26 = *(long *)pbVar31;
            if (8 < uVar18) {
              pbVar26 = pbVar26 + 8;
              do {
                pbVar31 = pbVar31 + 8;
                pbVar25 = pbVar26 + 8;
                *(long *)pbVar26 = *(long *)pbVar31;
                pbVar26 = pbVar25;
              } while (pbVar25 < pbVar49);
            }
            sVar27 = sVar48;
            if ((ulong)((long)pbVar49 - (long)pbVar52) < uVar51) {
              if ((ulong)((long)pbVar49 - lVar44) < uVar51) {
                return (byte *)0xffffffffffffffec;
              }
              if (pbVar47 < pbVar37 + sVar48) {
                sVar46 = (long)pbVar47 - (long)pbVar37;
                memmove(pbVar49,pbVar37,sVar46);
                pbVar49 = pbVar49 + sVar46;
                sVar27 = sVar48 - sVar46;
                if ((pbVar49 <= pbVar24) && (2 < sVar27)) {
                  pbVar37 = pbVar52;
                  goto LAB_03c31af4;
                }
                if (sVar48 != sVar46) {
                  uVar18 = 0;
                  uVar28 = 1;
                  do {
                    pbVar49[uVar18] = pbVar52[uVar18];
                    bVar17 = uVar28 < sVar27;
                    uVar18 = uVar28;
                    uVar28 = (ulong)((int)uVar28 + 1);
                  } while (bVar17);
                }
              }
              else {
LAB_03c31c70:
                memmove(pbVar49,pbVar37,sVar48);
              }
            }
            else {
LAB_03c31af4:
              if (uVar51 < 8) {
                iVar32 = *(int *)(&DAT_040579e0 + uVar51 * 4);
                *pbVar49 = *pbVar37;
                pbVar49[1] = pbVar37[1];
                pbVar49[2] = pbVar37[2];
                pbVar49[3] = pbVar37[3];
                pbVar31 = pbVar37 + *(uint *)(&DAT_040583a0 + uVar51 * 4);
                pbVar37 = pbVar31 + -(long)iVar32;
                *(undefined4 *)(pbVar49 + 4) = *(undefined4 *)pbVar31;
              }
              else {
                *(long *)pbVar49 = *(long *)pbVar37;
              }
              pbVar31 = pbVar49 + 8;
              pbVar37 = pbVar37 + 8;
              if (pbVar5 + -0xd < pbVar41) {
                if (pbVar31 < pbVar24) {
                  pbVar26 = pbVar31;
                  pbVar49 = pbVar37;
                  do {
                    pbVar25 = pbVar26 + 8;
                    *(long *)pbVar26 = *(long *)pbVar49;
                    pbVar26 = pbVar25;
                    pbVar49 = pbVar49 + 8;
                  } while (pbVar25 < pbVar24);
                  pbVar37 = pbVar37 + ((long)pbVar24 - (long)pbVar31);
                  pbVar31 = pbVar24;
                }
                for (; pbVar31 < pbVar41; pbVar31 = pbVar31 + 1) {
                  *pbVar31 = *pbVar37;
                  pbVar37 = pbVar37 + 1;
                }
              }
              else {
                do {
                  pbVar26 = pbVar31 + 8;
                  *(long *)pbVar31 = *(long *)pbVar37;
                  pbVar37 = pbVar37 + 8;
                  pbVar31 = pbVar26;
                } while (pbVar26 < pbVar49 + sVar27);
              }
            }
          }
          if ((byte *)0xffffffffffffff88 < pbVar23) {
            return pbVar23;
          }
          local_190._0_4_ = (uint)local_190 + 1;
          pbVar26 = pbVar41;
          pbVar31 = pbVar45;
        } while ((uint)local_190 != uVar39);
      }
      *puVar4 = (uint)local_98[0];
      *(int *)(param_1 + 0xd08) = (int)local_98[1];
      *(int *)((long)param_1 + 0x6844) = (int)local_98[2];
      sVar48 = (long)pbVar53 - (long)pbVar45;
      if ((ulong)((long)pbVar5 - (long)pbVar41) < sVar48) {
        return (byte *)0xffffffffffffffba;
      }
      memcpy(pbVar41,pbVar45,sVar48);
      return pbVar41 + (sVar48 - (long)param_2);
    }
  }
  pbVar45 = (byte *)param_1[0xe23];
  pbVar52 = pbVar45 + param_1[0xe27];
  if (uVar39 == 0) goto LAB_03c30300;
  lVar34 = param_1[0xe0b];
  pbVar41 = (byte *)param_1[0xe0a];
  *(undefined4 *)((long)param_1 + 0x70ac) = 1;
  uVar28 = param_1[0xe0c];
  local_98[2] = (ulong)*(uint *)((long)param_1 + 0x6844);
  local_98[0] = (ulong)*puVar4;
  local_98[1] = (ulong)*(uint *)(param_1 + 0xd08);
  if ((byte *)uVar16 == pbVar53) {
    return (byte *)0xffffffffffffffec;
  }
  local_d8 = puVar6;
  local_d0 = puVar6 + 1;
  lVar42 = uVar18 - 8;
  if (uVar18 < 8) {
    local_f0 = (ulong)(byte)*puVar6;
    local_e0 = puVar6;
    switch(uVar18) {
    case 7:
      local_f0 = local_f0 | (ulong)*(byte *)((long)puVar6 + 6) << 0x30;
    case 6:
      local_f0 = local_f0 + ((ulong)*(byte *)((long)puVar6 + 5) << 0x28);
    case 5:
      local_f0 = local_f0 + ((ulong)*(byte *)((long)puVar6 + 4) << 0x20);
    case 4:
      local_f0 = local_f0 + (ulong)*(byte *)((long)puVar6 + 3) * 0x1000000;
    case 3:
      local_f0 = local_f0 + (ulong)*(byte *)((long)puVar6 + 2) * 0x10000;
    case 2:
      local_f0 = local_f0 + (ulong)*(byte *)((long)puVar6 + 1) * 0x100;
    }
    uVar33 = (uint)*(byte *)((long)puVar6 + (uVar18 - 1));
    if (uVar33 == 0) {
      return (byte *)0xffffffffffffffec;
    }
    lVar42 = 0;
    iVar32 = (int)LZCOUNT(uVar33) + (int)uVar18 * -8 + 0x29;
  }
  else {
    local_f0 = *(ulong *)((long)puVar6 + lVar42);
    local_e0 = (ulong *)((long)puVar6 + lVar42);
    if (local_f0 >> 0x38 == 0) {
      return (byte *)0xffffffffffffffec;
    }
    iVar32 = (int)LZCOUNT((uint)(byte)(local_f0 >> 0x38)) + -0x17;
    if (0xffffffffffffff88 < uVar18) {
      return (byte *)0xffffffffffffffec;
    }
  }
  uVar33 = *(uint *)(*param_1 + 4);
  local_e8 = uVar33 + iVar32;
  local_c8 = local_f0 >> ((ulong)-local_e8 & 0x3f) &
             (ulong)*(uint *)(&DAT_041e8f70 + (ulong)uVar33 * 4);
  if (local_e8 < 0x41) {
    if (lVar42 < 8) {
      if (lVar42 == 0) goto LAB_03c30900;
      uVar33 = (uint)lVar42;
      if (puVar6 <= (ulong *)((long)puVar6 + (lVar42 - (ulong)(local_e8 >> 3)))) {
        uVar33 = local_e8 >> 3;
      }
      lVar42 = lVar42 - (ulong)uVar33;
      local_e8 = local_e8 + uVar33 * -8;
      local_e0 = (ulong *)((long)puVar6 + lVar42);
    }
    else {
      uVar33 = local_e8 >> 3;
      local_e8 = local_e8 & 7;
      lVar42 = lVar42 - (ulong)uVar33;
      local_e0 = (ulong *)((long)puVar6 + lVar42);
    }
    local_f0 = *(ulong *)((long)puVar6 + lVar42);
  }
LAB_03c30900:
  local_c0 = *param_1 + 8;
  uVar33 = *(uint *)(*plVar1 + 4);
  local_e8 = uVar33 + local_e8;
  local_b8 = local_f0 >> ((ulong)-local_e8 & 0x3f) &
             (ulong)*(uint *)(&DAT_041e8f70 + (ulong)uVar33 * 4);
  if (local_e8 < 0x41) {
    if (lVar42 < 8) {
      if (lVar42 == 0) goto LAB_03c30988;
      uVar33 = (uint)lVar42;
      if (puVar6 <= (ulong *)((long)puVar6 + (lVar42 - (ulong)(local_e8 >> 3)))) {
        uVar33 = local_e8 >> 3;
      }
      lVar42 = lVar42 - (ulong)uVar33;
      local_e8 = local_e8 + uVar33 * -8;
      local_e0 = (ulong *)((long)puVar6 + lVar42);
    }
    else {
      uVar33 = local_e8 >> 3;
      local_e8 = local_e8 & 7;
      lVar42 = lVar42 - (ulong)uVar33;
      local_e0 = (ulong *)((long)puVar6 + lVar42);
    }
    local_f0 = *(ulong *)((long)puVar6 + lVar42);
  }
LAB_03c30988:
  local_b0 = *plVar1 + 8;
  uVar33 = *(uint *)(*plVar2 + 4);
  local_e8 = uVar33 + local_e8;
  local_a8 = local_f0 >> ((ulong)-local_e8 & 0x3f) &
             (ulong)*(uint *)(&DAT_041e8f70 + (ulong)uVar33 * 4);
  if (local_e8 < 0x41) {
    if (lVar42 < 8) {
      if (lVar42 == 0) goto LAB_03c30a0c;
      uVar33 = (uint)lVar42;
      if (puVar6 <= (ulong *)((long)puVar6 + (lVar42 - (ulong)(local_e8 >> 3)))) {
        uVar33 = local_e8 >> 3;
      }
      local_e8 = local_e8 + uVar33 * -8;
    }
    else {
      uVar33 = local_e8 >> 3;
      local_e8 = local_e8 & 7;
    }
    local_e0 = (ulong *)((long)puVar6 + (lVar42 - (ulong)uVar33));
    local_f0 = *local_e0;
  }
LAB_03c30a0c:
  pbVar53 = pbVar5 + -8;
  local_a0 = *plVar2 + 8;
  while (uVar18 = local_98[1], local_e8 < 0x41) {
    if (local_e0 < local_d0) {
      if (local_e0 != local_d8) {
        uVar33 = (int)local_e0 - (int)local_d8;
        if (local_d8 <= (ulong *)((long)local_e0 - (ulong)(local_e8 >> 3))) {
          uVar33 = local_e8 >> 3;
        }
        local_e8 = local_e8 + uVar33 * -8;
        goto LAB_03c30a98;
      }
    }
    else {
      uVar33 = local_e8 >> 3;
      local_e8 = local_e8 & 7;
LAB_03c30a98:
      local_e0 = (ulong *)((long)local_e0 - (ulong)uVar33);
      local_f0 = *local_e0;
    }
    if (uVar39 == 0) goto LAB_03c30f48;
    uVar51 = (ulong)local_e8;
    puVar7 = (ushort *)(local_c0 + local_c8 * 8);
    bVar11 = (byte)puVar7[1];
    puVar8 = (ushort *)(local_a0 + local_a8 * 8);
    bVar15 = (byte)puVar8[1];
    puVar9 = (ushort *)(local_b0 + local_b8 * 8);
    bVar12 = (byte)puVar9[1];
    uVar33 = (uint)bVar12;
    if (bVar12 == 0) {
      uVar38 = 0;
LAB_03c30b14:
      if (*(uint *)(puVar7 + 2) == 0) {
        uVar38 = uVar38 + 1;
      }
      if (uVar38 != 0) {
        if (uVar38 == 3) {
          uVar19 = local_98[0] - 1;
          if (local_98[0] - 1 == 0) {
            uVar19 = local_98[0];
          }
LAB_03c30b5c:
          local_98[2] = local_98[1];
        }
        else {
          uVar19 = local_98[uVar38];
          if (uVar19 == 0) {
            uVar19 = 1;
          }
          if (uVar38 != 1) goto LAB_03c30b5c;
        }
        local_98[1] = local_98[0];
        goto LAB_03c30b6c;
      }
    }
    else {
      uVar38 = uVar51 & 0x3f;
      uVar51 = (ulong)(local_e8 + uVar33);
      local_e8 = local_e8 + uVar33;
      uVar19 = ((local_f0 << uVar38) >> ((ulong)-(uint)bVar12 & 0x3f)) +
               (ulong)*(uint *)(puVar9 + 2);
      uVar38 = uVar19;
      if (uVar33 == 1) goto LAB_03c30b14;
      local_98[1] = local_98[0];
      local_98[2] = uVar18;
LAB_03c30b6c:
      local_98[1] = local_98[0];
      local_98[0] = uVar19;
    }
    uVar18 = local_98[0];
    if (bVar15 == 0) {
      uVar38 = 0;
    }
    else {
      uVar38 = uVar51 & 0x3f;
      uVar51 = (ulong)((int)uVar51 + (uint)bVar15);
      uVar38 = (local_f0 << uVar38) >> ((ulong)-(uint)bVar15 & 0x3f);
    }
    uVar22 = (uint)uVar51;
    uVar21 = (uint)bVar11;
    if (((uint)bVar15 + (uint)bVar11 + uVar33 < 0x1f) || (0x40 < uVar22)) {
LAB_03c30bdc:
      if (uVar21 != 0) goto LAB_03c30be4;
LAB_03c30c20:
      uVar51 = 0;
    }
    else {
      if (local_e0 < local_d0) {
        if (local_e0 == local_d8) goto LAB_03c30bdc;
        uVar33 = (int)local_e0 - (int)local_d8;
        if (local_d8 <= (ulong *)((long)local_e0 - (ulong)(uVar22 >> 3))) {
          uVar33 = uVar22 >> 3;
        }
        uVar22 = uVar22 + uVar33 * -8;
      }
      else {
        uVar33 = uVar22 >> 3;
        uVar22 = uVar22 & 7;
      }
      uVar51 = (ulong)uVar22;
      local_e0 = (ulong *)((long)local_e0 - (ulong)uVar33);
      local_f0 = *local_e0;
      if (bVar11 == 0) goto LAB_03c30c20;
LAB_03c30be4:
      uVar22 = (int)uVar51 + uVar21;
      uVar51 = (local_f0 << (uVar51 & 0x3f)) >> ((ulong)-uVar21 & 0x3f);
    }
    sVar48 = uVar38 + *(uint *)(puVar8 + 2);
    uVar51 = uVar51 + *(uint *)(puVar7 + 2);
    pbVar24 = (byte *)(uVar51 + sVar48);
    pbVar31 = pbVar47 + (long)pbVar24;
    iVar32 = uVar22 + *(byte *)((long)puVar7 + 3);
    local_c8 = (local_f0 >> ((ulong)(uint)-iVar32 & 0x3f) &
               (ulong)*(uint *)(&DAT_041e8f70 + (ulong)*(byte *)((long)puVar7 + 3) * 4)) +
               (ulong)*puVar7;
    iVar32 = iVar32 + (uint)*(byte *)((long)puVar8 + 3);
    local_a8 = (local_f0 >> ((ulong)(uint)-iVar32 & 0x3f) &
               (ulong)*(uint *)(&DAT_041e8f70 + (ulong)*(byte *)((long)puVar8 + 3) * 4)) +
               (ulong)*puVar8;
    local_e8 = iVar32 + (uint)*(byte *)((long)puVar9 + 3);
    local_b8 = (local_f0 >> ((ulong)-local_e8 & 0x3f) &
               (ulong)*(uint *)(&DAT_041e8f70 + (ulong)*(byte *)((long)puVar9 + 3) * 4)) +
               (ulong)*puVar9;
    if (pbVar5 < pbVar31) {
      return (byte *)0xffffffffffffffba;
    }
    pbVar26 = pbVar45 + uVar51;
    if (pbVar52 < pbVar26) {
      return (byte *)0xffffffffffffffec;
    }
    pbVar49 = pbVar47 + uVar51;
    pbVar23 = pbVar49 + -local_98[0];
    if (pbVar53 < pbVar49) {
      pbVar26 = pbVar45;
      if (pbVar47 <= pbVar53 && (long)pbVar53 - (long)pbVar47 != 0) {
        pbVar37 = pbVar47;
        do {
          pbVar25 = pbVar37 + 8;
          *(long *)pbVar37 = *(long *)pbVar26;
          pbVar26 = pbVar26 + 8;
          pbVar37 = pbVar25;
        } while (pbVar25 < pbVar53);
        pbVar26 = pbVar45 + ((long)pbVar53 - (long)pbVar47);
        pbVar47 = pbVar53;
      }
      for (; pbVar47 < pbVar49; pbVar47 = pbVar47 + 1) {
        *pbVar47 = *pbVar26;
        pbVar26 = pbVar26 + 1;
      }
      if ((ulong)((long)pbVar49 - (long)pbVar41) < local_98[0]) {
        if ((ulong)((long)pbVar49 - lVar34) < local_98[0]) {
          return (byte *)0xffffffffffffffec;
        }
        lVar42 = (long)pbVar23 - (long)pbVar41;
        __src = (void *)(uVar28 + lVar42);
        if ((long)__src + sVar48 <= uVar28) goto LAB_03c30ef8;
        memmove(pbVar49,__src,-lVar42);
        pbVar47 = pbVar49 + -lVar42;
        pbVar23 = pbVar41;
      }
      for (; pbVar47 < pbVar31; pbVar47 = pbVar47 + 1) {
        *pbVar47 = *pbVar23;
        pbVar23 = pbVar23 + 1;
      }
      pbVar45 = pbVar26;
    }
    else {
      *(long *)pbVar47 = *(long *)pbVar45;
      if (8 < uVar51) {
        pbVar47 = pbVar47 + 8;
        do {
          pbVar45 = pbVar45 + 8;
          pbVar37 = pbVar47 + 8;
          *(long *)pbVar47 = *(long *)pbVar45;
          pbVar47 = pbVar37;
        } while (pbVar37 < pbVar49);
      }
      pbVar45 = pbVar26;
      if ((ulong)((long)pbVar49 - (long)pbVar41) < local_98[0]) {
        if ((ulong)((long)pbVar49 - lVar34) < local_98[0]) {
          return (byte *)0xffffffffffffffec;
        }
        lVar42 = (long)pbVar23 - (long)pbVar41;
        __src = (void *)(uVar28 + lVar42);
        if (uVar28 < (long)__src + sVar48) {
          memmove(pbVar49,__src,-lVar42);
          pbVar49 = pbVar49 + -lVar42;
          sVar48 = lVar42 + sVar48;
          if ((pbVar49 <= pbVar53) && (2 < sVar48)) {
            pbVar23 = pbVar41;
            goto LAB_03c30e1c;
          }
          if (sVar48 != 0) {
            uVar18 = 0;
            uVar51 = 1;
            do {
              pbVar49[uVar18] = pbVar41[uVar18];
              bVar17 = uVar51 < sVar48;
              uVar18 = uVar51;
              uVar51 = (ulong)((int)uVar51 + 1);
            } while (bVar17);
            goto LAB_03c30a34;
          }
        }
        else {
LAB_03c30ef8:
          memmove(pbVar49,__src,sVar48);
        }
      }
      else {
LAB_03c30e1c:
        if (uVar18 < 8) {
          lVar42 = uVar18 * 4;
          iVar32 = *(int *)(&DAT_040579e0 + lVar42);
          *pbVar49 = *pbVar23;
          pbVar49[1] = pbVar23[1];
          pbVar49[2] = pbVar23[2];
          pbVar49[3] = pbVar23[3];
          pbVar47 = pbVar23 + *(uint *)(&DAT_040583a0 + lVar42);
          pbVar23 = pbVar47 + -(long)iVar32;
          *(undefined4 *)(pbVar49 + 4) = *(undefined4 *)pbVar47;
        }
        else {
          *(long *)pbVar49 = *(long *)pbVar23;
        }
        pbVar47 = pbVar49 + 8;
        pbVar23 = pbVar23 + 8;
        if (pbVar31 <= pbVar5 + -0xd) {
          do {
            pbVar26 = pbVar47 + 8;
            *(long *)pbVar47 = *(long *)pbVar23;
            pbVar23 = pbVar23 + 8;
            pbVar47 = pbVar26;
          } while (pbVar26 < pbVar49 + sVar48);
          goto LAB_03c30a34;
        }
        if (pbVar47 < pbVar53) {
          pbVar45 = pbVar47;
          pbVar49 = pbVar23;
          do {
            pbVar37 = pbVar45 + 8;
            *(long *)pbVar45 = *(long *)pbVar49;
            pbVar45 = pbVar37;
            pbVar49 = pbVar49 + 8;
          } while (pbVar37 < pbVar53);
          pbVar23 = pbVar23 + ((long)pbVar53 - (long)pbVar47);
          pbVar47 = pbVar53;
        }
        for (; pbVar47 < pbVar31; pbVar47 = pbVar47 + 1) {
          *pbVar47 = *pbVar23;
          pbVar23 = pbVar23 + 1;
        }
      }
      pbVar45 = pbVar26;
    }
LAB_03c30a34:
    uVar39 = uVar39 - 1;
    pbVar47 = pbVar31;
    if ((byte *)0xffffffffffffff88 < pbVar24) {
      return pbVar24;
    }
  }
  if (uVar39 != 0) {
    return (byte *)0xffffffffffffffec;
  }
LAB_03c30f48:
  *puVar4 = (uint)local_98[0];
  *(int *)(param_1 + 0xd08) = (int)local_98[1];
  *(int *)((long)param_1 + 0x6844) = (int)local_98[2];
LAB_03c30300:
  pbVar52 = pbVar52 + -(long)pbVar45;
  if (param_2 + (param_3 - (long)pbVar47) < pbVar52) {
    return (byte *)0xffffffffffffffba;
  }
  memcpy(pbVar47,pbVar45,(size_t)pbVar52);
  return pbVar47 + ((long)pbVar52 - (long)param_2);
}

