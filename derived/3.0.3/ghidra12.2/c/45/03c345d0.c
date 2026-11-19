
ulong FUN_03c345d0(undefined2 *param_1,ulong param_2,ushort *param_3,ulong param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  uint uVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  bool bVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  ulong uVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  undefined2 *puVar33;
  uint uVar34;
  ulong uVar35;
  undefined2 *puVar36;
  ulong uVar37;
  undefined2 *puVar38;
  ulong uVar39;
  undefined2 *puVar40;
  uint uVar41;
  int iVar42;
  int iVar43;
  long local_108;
  uint local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  ulong local_e0;
  uint local_d8;
  ulong *local_d0;
  ulong *local_c8;
  ulong *local_c0;
  ulong local_b8;
  uint local_b0;
  ulong *local_a8;
  ulong *local_a0;
  ulong *local_98;
  ulong local_90;
  uint local_88;
  ulong *local_80;
  ulong *local_78;
  ulong *local_70;
  
  if (param_4 < 10) {
    return 0xffffffffffffffec;
  }
  uVar15 = *param_3;
  uVar39 = (ulong)uVar15;
  uVar16 = param_3[1];
  uVar37 = (ulong)uVar16;
  uVar17 = param_3[2];
  uVar35 = (ulong)uVar17;
  uVar29 = uVar39 + uVar37 + uVar35 + 6;
  if (param_4 < uVar29) {
    return 0xffffffffffffffec;
  }
  if (uVar15 == 0) {
    return 0xffffffffffffffb8;
  }
  uVar18 = *(ushort *)(param_5 + 2);
  local_78 = (ulong *)(param_3 + 3);
  local_a0 = (ulong *)((long)local_78 + uVar39);
  local_70 = (ulong *)(param_3 + 7);
  if (uVar15 < 8) {
    local_90 = (ulong)(byte)*local_78;
    switch((uint)uVar15) {
    case 7:
      local_90 = local_90 | (ulong)(byte)param_3[6] << 0x30;
    case 6:
      local_90 = local_90 + ((ulong)*(byte *)((long)param_3 + 0xb) << 0x28);
    case 5:
      local_90 = local_90 + ((ulong)(byte)param_3[5] << 0x20);
    case 4:
      local_90 = local_90 + (ulong)*(byte *)((long)param_3 + 9) * 0x1000000;
    case 3:
      local_90 = local_90 + (ulong)(byte)param_3[4] * 0x10000;
    case 2:
      local_90 = local_90 + (ulong)*(byte *)((long)param_3 + 7) * 0x100;
    }
    uVar32 = (uint)*(byte *)((long)local_78 + (uVar39 - 1));
    if (uVar32 == 0) {
      return 0xffffffffffffffec;
    }
    local_88 = (int)LZCOUNT(uVar32) + (uint)uVar15 * -8 + 0x29;
    local_80 = local_78;
  }
  else {
    local_80 = local_a0 + -1;
    local_90 = *local_80;
    if (local_90 >> 0x38 == 0) {
      return 0xffffffffffffffff;
    }
    local_88 = (int)LZCOUNT((uint)(byte)(local_90 >> 0x38)) - 0x17;
  }
  if (uVar16 == 0) {
    return 0xffffffffffffffb8;
  }
  local_c8 = (ulong *)((long)local_a0 + uVar37);
  local_98 = local_a0 + 1;
  uVar32 = (uint)uVar16;
  if (uVar32 < 8) {
    local_b8 = (ulong)(byte)*local_a0;
    switch(uVar32) {
    case 7:
      local_b8 = local_b8 | (ulong)*(byte *)((long)local_a0 + 6) << 0x30;
    case 6:
      local_b8 = local_b8 + ((ulong)*(byte *)((long)local_a0 + 5) << 0x28);
    case 5:
      local_b8 = local_b8 + ((ulong)*(byte *)((long)local_a0 + 4) << 0x20);
    case 4:
      local_b8 = local_b8 + (ulong)*(byte *)((long)local_a0 + 3) * 0x1000000;
    case 3:
      local_b8 = local_b8 + (ulong)*(byte *)((long)local_a0 + 2) * 0x10000;
    case 2:
      local_b8 = local_b8 + (ulong)*(byte *)((long)local_a0 + 1) * 0x100;
    }
    uVar34 = (uint)*(byte *)((long)local_a0 + (uVar37 - 1));
    if (uVar34 == 0) {
      return 0xffffffffffffffec;
    }
    local_b0 = (int)LZCOUNT(uVar34) + uVar32 * -8 + 0x29;
    local_a8 = local_a0;
  }
  else {
    local_b8 = local_c8[-1];
    if (local_b8 >> 0x38 == 0) {
      return 0xffffffffffffffff;
    }
    local_b0 = (int)LZCOUNT((uint)(byte)(local_b8 >> 0x38)) - 0x17;
    local_a8 = local_c8 + -1;
  }
  if (uVar17 == 0) {
    return 0xffffffffffffffb8;
  }
  local_c0 = local_c8 + 1;
  if (uVar17 < 8) {
    local_e0 = (ulong)(byte)*local_c8;
    switch((uint)uVar17) {
    case 7:
      local_e0 = local_e0 | (ulong)*(byte *)((long)local_c8 + 6) << 0x30;
    case 6:
      local_e0 = local_e0 + ((ulong)*(byte *)((long)local_c8 + 5) << 0x28);
    case 5:
      local_e0 = local_e0 + ((ulong)*(byte *)((long)local_c8 + 4) << 0x20);
    case 4:
      local_e0 = local_e0 + (ulong)*(byte *)((long)local_c8 + 3) * 0x1000000;
    case 3:
      local_e0 = local_e0 + (ulong)*(byte *)((long)local_c8 + 2) * 0x10000;
    case 2:
      local_e0 = local_e0 + (ulong)*(byte *)((long)local_c8 + 1) * 0x100;
    }
    uVar32 = (uint)*(byte *)((long)local_c8 + (uVar35 - 1));
    if (uVar32 == 0) {
      return 0xffffffffffffffec;
    }
    local_d8 = (int)LZCOUNT(uVar32) + (uint)uVar17 * -8 + 0x29;
    local_d0 = local_c8;
  }
  else {
    local_d0 = (ulong *)((byte *)((long)local_c8 + uVar35) + -8);
    local_e0 = *local_d0;
    if (local_e0 >> 0x38 == 0) {
      return 0xffffffffffffffff;
    }
    local_d8 = (int)LZCOUNT((uint)(byte)(local_e0 >> 0x38)) - 0x17;
  }
  uVar29 = FUN_03c359f0(&local_108,(byte *)((long)local_c8 + uVar35),param_4 - uVar29);
  if (0xffffffffffffff88 < uVar29) {
    return uVar29;
  }
  uVar29 = param_2 + 3 >> 2;
  puVar3 = (undefined2 *)((long)param_1 + param_2);
  param_5 = param_5 + 4;
  puVar4 = (undefined2 *)((long)param_1 + uVar29);
  puVar5 = (undefined2 *)((long)puVar4 + uVar29);
  puVar6 = (undefined2 *)((long)puVar5 + uVar29);
  iVar25 = FUN_03c35b00(&local_90);
  iVar26 = FUN_03c35b00(&local_b8);
  iVar27 = FUN_03c35b00(&local_e0);
  iVar28 = FUN_03c35b00(&local_108);
  puVar33 = (undefined2 *)((long)puVar3 - 7);
  iVar43 = (int)local_78;
  iVar30 = (int)local_a0;
  iVar31 = (int)local_c8;
  iVar42 = (int)local_f0;
  puVar36 = puVar6;
  puVar38 = puVar5;
  puVar40 = puVar4;
  if ((puVar6 < puVar33) && ((iVar26 == 0 && iVar25 == 0) && (iVar27 == 0 && iVar28 == 0))) {
    uVar39 = (ulong)local_88;
    uVar37 = (ulong)local_b0;
    uVar29 = (ulong)local_d8;
    uVar32 = -(uint)uVar18 & 0x3f;
    uVar35 = (ulong)local_100;
    do {
      puVar7 = (undefined2 *)(param_5 + ((local_90 << (uVar39 & 0x3f)) >> uVar32) * 4);
      puVar8 = (undefined2 *)(param_5 + ((local_b8 << (uVar37 & 0x3f)) >> uVar32) * 4);
      *param_1 = *puVar7;
      bVar10 = *(byte *)(puVar7 + 1);
      bVar11 = *(byte *)((long)puVar7 + 3);
      *puVar40 = *puVar8;
      uVar34 = (int)uVar39 + (uint)bVar10;
      param_1 = (undefined2 *)((long)param_1 + (ulong)bVar11);
      puVar40 = (undefined2 *)((long)puVar40 + (ulong)*(byte *)((long)puVar8 + 3));
      uVar41 = (int)uVar37 + (uint)*(byte *)(puVar8 + 1);
      puVar7 = (undefined2 *)(param_5 + ((local_e0 << (uVar29 & 0x3f)) >> uVar32) * 4);
      *puVar38 = *puVar7;
      puVar38 = (undefined2 *)((long)puVar38 + (ulong)*(byte *)((long)puVar7 + 3));
      uVar1 = (int)uVar29 + (uint)*(byte *)(puVar7 + 1);
      puVar7 = (undefined2 *)(param_5 + ((ulong)(local_108 << (uVar35 & 0x3f)) >> uVar32) * 4);
      *puVar36 = *puVar7;
      puVar36 = (undefined2 *)((long)puVar36 + (ulong)*(byte *)((long)puVar7 + 3));
      uVar2 = (int)uVar35 + (uint)*(byte *)(puVar7 + 1);
      puVar7 = (undefined2 *)(param_5 + ((local_90 << ((ulong)uVar34 & 0x3f)) >> uVar32) * 4);
      *param_1 = *puVar7;
      uVar34 = uVar34 + *(byte *)(puVar7 + 1);
      param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar7 + 3));
      puVar7 = (undefined2 *)(param_5 + ((local_b8 << ((ulong)uVar41 & 0x3f)) >> uVar32) * 4);
      *puVar40 = *puVar7;
      puVar40 = (undefined2 *)((long)puVar40 + (ulong)*(byte *)((long)puVar7 + 3));
      uVar41 = uVar41 + *(byte *)(puVar7 + 1);
      puVar7 = (undefined2 *)(param_5 + ((local_e0 << ((ulong)uVar1 & 0x3f)) >> uVar32) * 4);
      *puVar38 = *puVar7;
      puVar38 = (undefined2 *)((long)puVar38 + (ulong)*(byte *)((long)puVar7 + 3));
      uVar1 = uVar1 + *(byte *)(puVar7 + 1);
      puVar7 = (undefined2 *)(param_5 + ((ulong)(local_108 << ((ulong)uVar2 & 0x3f)) >> uVar32) * 4)
      ;
      *puVar36 = *puVar7;
      uVar2 = uVar2 + *(byte *)(puVar7 + 1);
      puVar36 = (undefined2 *)((long)puVar36 + (ulong)*(byte *)((long)puVar7 + 3));
      puVar7 = (undefined2 *)(param_5 + ((local_90 << ((ulong)uVar34 & 0x3f)) >> uVar32) * 4);
      *param_1 = *puVar7;
      param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar7 + 3));
      uVar34 = uVar34 + *(byte *)(puVar7 + 1);
      puVar7 = (undefined2 *)(param_5 + ((local_b8 << ((ulong)uVar41 & 0x3f)) >> uVar32) * 4);
      *puVar40 = *puVar7;
      uVar41 = uVar41 + *(byte *)(puVar7 + 1);
      puVar40 = (undefined2 *)((long)puVar40 + (ulong)*(byte *)((long)puVar7 + 3));
      puVar7 = (undefined2 *)(param_5 + ((local_e0 << ((ulong)uVar1 & 0x3f)) >> uVar32) * 4);
      *puVar38 = *puVar7;
      puVar38 = (undefined2 *)((long)puVar38 + (ulong)*(byte *)((long)puVar7 + 3));
      uVar1 = uVar1 + *(byte *)(puVar7 + 1);
      puVar7 = (undefined2 *)(param_5 + ((ulong)(local_108 << ((ulong)uVar2 & 0x3f)) >> uVar32) * 4)
      ;
      *puVar36 = *puVar7;
      puVar36 = (undefined2 *)((long)puVar36 + (ulong)*(byte *)((long)puVar7 + 3));
      uVar2 = uVar2 + *(byte *)(puVar7 + 1);
      puVar7 = (undefined2 *)(param_5 + ((local_90 << ((ulong)uVar34 & 0x3f)) >> uVar32) * 4);
      *param_1 = *puVar7;
      uVar34 = uVar34 + *(byte *)(puVar7 + 1);
      uVar39 = (ulong)uVar34;
      bVar10 = *(byte *)((long)puVar7 + 3);
      puVar7 = (undefined2 *)(param_5 + ((local_b8 << ((ulong)uVar41 & 0x3f)) >> uVar32) * 4);
      *puVar40 = *puVar7;
      bVar11 = *(byte *)(puVar7 + 1);
      bVar12 = *(byte *)((long)puVar7 + 3);
      puVar7 = (undefined2 *)(param_5 + ((local_e0 << ((ulong)uVar1 & 0x3f)) >> uVar32) * 4);
      *puVar38 = *puVar7;
      bVar13 = *(byte *)(puVar7 + 1);
      bVar14 = *(byte *)((long)puVar7 + 3);
      puVar7 = (undefined2 *)(param_5 + ((ulong)(local_108 << ((ulong)uVar2 & 0x3f)) >> uVar32) * 4)
      ;
      *puVar36 = *puVar7;
      if (uVar34 < 0x41) {
        if (local_80 < local_70) {
          if (local_80 == local_78) {
            cVar20 = '\x01';
            if (0x3f < uVar34) {
              cVar20 = '\x02';
            }
            local_80 = local_78;
            goto LAB_03c34c20;
          }
          cVar20 = (ulong *)((long)local_80 - (ulong)(uVar34 >> 3)) < local_78;
          uVar19 = (int)local_80 - iVar43;
          if (!(bool)cVar20) {
            uVar19 = uVar34 >> 3;
          }
          uVar34 = uVar34 + uVar19 * -8;
        }
        else {
          uVar19 = uVar34 >> 3;
          cVar20 = false;
          uVar34 = uVar34 & 7;
        }
        uVar39 = (ulong)uVar34;
        local_90 = *(ulong *)((long)local_80 - (ulong)uVar19);
        local_80 = (ulong *)((long)local_80 - (ulong)uVar19);
      }
      else {
        cVar20 = '\x03';
      }
LAB_03c34c20:
      uVar41 = uVar41 + bVar11;
      uVar37 = (ulong)uVar41;
      if (uVar41 < 0x41) {
        if (local_a8 < local_98) {
          if (local_a8 == local_a0) {
            cVar21 = '\x01';
            local_a8 = local_a0;
            if (0x3f < uVar41) {
              cVar21 = '\x02';
            }
            goto LAB_03c34c94;
          }
          cVar21 = (ulong *)((long)local_a8 - (ulong)(uVar41 >> 3)) < local_a0;
          uVar34 = (int)local_a8 - iVar30;
          if (!(bool)cVar21) {
            uVar34 = uVar41 >> 3;
          }
          uVar41 = uVar41 + uVar34 * -8;
        }
        else {
          uVar34 = uVar41 >> 3;
          cVar21 = false;
          uVar41 = uVar41 & 7;
        }
        uVar37 = (ulong)uVar41;
        local_b8 = *(ulong *)((long)local_a8 - (ulong)uVar34);
        local_a8 = (ulong *)((long)local_a8 - (ulong)uVar34);
      }
      else {
        cVar21 = '\x03';
      }
LAB_03c34c94:
      uVar1 = uVar1 + bVar13;
      uVar29 = (ulong)uVar1;
      if (uVar1 < 0x41) {
        if (local_d0 < local_c0) {
          if (local_d0 == local_c8) {
            cVar22 = '\x01';
            if (0x3f < uVar1) {
              cVar22 = '\x02';
            }
            local_d0 = local_c8;
            goto LAB_03c34d00;
          }
          cVar22 = (ulong *)((long)local_d0 - (ulong)(uVar1 >> 3)) < local_c8;
          uVar34 = (int)local_d0 - iVar31;
          if (!(bool)cVar22) {
            uVar34 = uVar1 >> 3;
          }
          uVar1 = uVar1 + uVar34 * -8;
        }
        else {
          uVar34 = uVar1 >> 3;
          cVar22 = false;
          uVar1 = uVar1 & 7;
        }
        uVar29 = (ulong)uVar1;
        local_e0 = *(ulong *)((long)local_d0 - (ulong)uVar34);
        local_d0 = (ulong *)((long)local_d0 - (ulong)uVar34);
      }
      else {
        cVar22 = '\x03';
      }
LAB_03c34d00:
      uVar2 = uVar2 + *(byte *)(puVar7 + 1);
      uVar35 = (ulong)uVar2;
      if (uVar2 < 0x41) {
        if (local_f8 < local_e8) {
          if (local_f8 == local_f0) {
            cVar23 = '\x01';
            local_f8 = local_f0;
            if (0x3f < uVar2) {
              cVar23 = '\x02';
            }
            goto LAB_03c34d58;
          }
          cVar23 = (long *)((long)local_f8 - (ulong)(uVar2 >> 3)) < local_f0;
          uVar34 = (int)local_f8 - iVar42;
          if (!(bool)cVar23) {
            uVar34 = uVar2 >> 3;
          }
          uVar2 = uVar2 + uVar34 * -8;
        }
        else {
          uVar34 = uVar2 >> 3;
          cVar23 = false;
          uVar2 = uVar2 & 7;
        }
        uVar35 = (ulong)uVar2;
        local_108 = *(long *)((long)local_f8 - (ulong)uVar34);
        local_f8 = (long *)((long)local_f8 - (ulong)uVar34);
      }
      else {
        cVar23 = '\x03';
      }
LAB_03c34d58:
      param_1 = (undefined2 *)((long)param_1 + (ulong)bVar10);
      puVar40 = (undefined2 *)((long)puVar40 + (ulong)bVar12);
      puVar38 = (undefined2 *)((long)puVar38 + (ulong)bVar14);
      puVar36 = (undefined2 *)((long)puVar36 + (ulong)*(byte *)((long)puVar7 + 3));
    } while ((puVar36 < puVar33) &&
            (((cVar21 == '\0' && cVar20 == '\0') && cVar22 == '\0') && cVar23 == '\0'));
    local_b0 = (uint)uVar37;
    local_d8 = (uint)uVar29;
    local_88 = (uint)uVar39;
    local_100 = (uint)uVar35;
  }
  if (puVar4 < param_1) {
    return 0xffffffffffffffec;
  }
  if (puVar5 < puVar40) {
    return 0xffffffffffffffec;
  }
  if (puVar6 < puVar38) {
    return 0xffffffffffffffec;
  }
  uVar29 = (ulong)local_88;
  uVar32 = -(uint)uVar18 & 0x3f;
  if (local_88 < 0x41) {
    do {
      uVar34 = (uint)uVar29;
      if (local_80 < local_70) {
        if (local_80 == local_78) goto LAB_03c34f80;
        uVar41 = (int)local_80 - iVar43;
        bVar24 = (ulong *)((long)local_80 - (uVar29 >> 3)) < local_78;
        if (!bVar24) {
          uVar41 = (uint)(uVar29 >> 3);
        }
        local_88 = uVar34 + uVar41 * -8;
      }
      else {
        uVar41 = uVar34 >> 3;
        bVar24 = false;
        local_88 = uVar34 & 7;
      }
      uVar29 = (ulong)local_88;
      local_80 = (ulong *)((long)local_80 - (ulong)uVar41);
      local_90 = *local_80;
      if (((undefined2 *)((long)puVar4 - 7U) <= param_1) || (bVar24)) {
        if (local_88 < 0x41) goto LAB_03c34f80;
        break;
      }
      puVar7 = (undefined2 *)(param_5 + ((local_90 << (uVar29 & 0x3f)) >> uVar32) * 4);
      *param_1 = *puVar7;
      bVar10 = *(byte *)(puVar7 + 1);
      param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar7 + 3));
      puVar7 = (undefined2 *)
               (param_5 + ((local_90 << ((ulong)(local_88 + bVar10) & 0x3f)) >> uVar32) * 4);
      *param_1 = *puVar7;
      local_88 = local_88 + bVar10 + (uint)*(byte *)(puVar7 + 1);
      param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar7 + 3));
      puVar7 = (undefined2 *)(param_5 + ((local_90 << ((ulong)local_88 & 0x3f)) >> uVar32) * 4);
      *param_1 = *puVar7;
      local_88 = local_88 + *(byte *)(puVar7 + 1);
      param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar7 + 3));
      puVar7 = (undefined2 *)(param_5 + ((local_90 << ((ulong)local_88 & 0x3f)) >> uVar32) * 4);
      *param_1 = *puVar7;
      local_88 = local_88 + *(byte *)(puVar7 + 1);
      uVar29 = (ulong)local_88;
      param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar7 + 3));
    } while (local_88 < 0x41);
  }
LAB_03c35044:
  for (; param_1 <= puVar4 + -1;
      param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar7 + 3))) {
    puVar7 = (undefined2 *)(param_5 + ((local_90 << (uVar29 & 0x3f)) >> uVar32) * 4);
    *param_1 = *puVar7;
    local_88 = local_88 + *(byte *)(puVar7 + 1);
    uVar29 = (ulong)local_88;
  }
  if (param_1 < puVar4) {
    puVar9 = (undefined1 *)(param_5 + ((local_90 << (uVar29 & 0x3f)) >> uVar32) * 4);
    *(undefined1 *)param_1 = *puVar9;
    if (puVar9[3] == '\x01') {
      local_88 = local_88 + (byte)puVar9[2];
    }
    else if ((local_88 < 0x40) && (local_88 = local_88 + (byte)puVar9[2], 0x3f < local_88)) {
      local_88 = 0x40;
    }
  }
  uVar29 = (ulong)local_b0;
  if (local_b0 < 0x41) {
    do {
      uVar34 = (uint)uVar29;
      if (local_a8 < local_98) {
        if (local_a8 == local_a0) goto LAB_03c351dc;
        uVar41 = (int)local_a8 - iVar30;
        bVar24 = (ulong *)((long)local_a8 - (uVar29 >> 3)) < local_a0;
        if (!bVar24) {
          uVar41 = (uint)(uVar29 >> 3);
        }
        local_b0 = uVar34 + uVar41 * -8;
      }
      else {
        uVar41 = uVar34 >> 3;
        bVar24 = false;
        local_b0 = uVar34 & 7;
      }
      uVar29 = (ulong)local_b0;
      local_a8 = (ulong *)((long)local_a8 - (ulong)uVar41);
      local_b8 = *local_a8;
      if (((undefined2 *)((long)puVar5 - 7U) <= puVar40) || (bVar24)) {
        if (local_b0 < 0x41) goto LAB_03c351dc;
        break;
      }
      puVar4 = (undefined2 *)(param_5 + ((local_b8 << (uVar29 & 0x3f)) >> uVar32) * 4);
      *puVar40 = *puVar4;
      bVar10 = *(byte *)(puVar4 + 1);
      puVar40 = (undefined2 *)((long)puVar40 + (ulong)*(byte *)((long)puVar4 + 3));
      puVar4 = (undefined2 *)
               (param_5 + ((local_b8 << ((ulong)(local_b0 + bVar10) & 0x3f)) >> uVar32) * 4);
      *puVar40 = *puVar4;
      local_b0 = local_b0 + bVar10 + (uint)*(byte *)(puVar4 + 1);
      puVar40 = (undefined2 *)((long)puVar40 + (ulong)*(byte *)((long)puVar4 + 3));
      puVar4 = (undefined2 *)(param_5 + ((local_b8 << ((ulong)local_b0 & 0x3f)) >> uVar32) * 4);
      *puVar40 = *puVar4;
      local_b0 = local_b0 + *(byte *)(puVar4 + 1);
      puVar40 = (undefined2 *)((long)puVar40 + (ulong)*(byte *)((long)puVar4 + 3));
      puVar4 = (undefined2 *)(param_5 + ((local_b8 << ((ulong)local_b0 & 0x3f)) >> uVar32) * 4);
      *puVar40 = *puVar4;
      local_b0 = local_b0 + *(byte *)(puVar4 + 1);
      uVar29 = (ulong)local_b0;
      puVar40 = (undefined2 *)((long)puVar40 + (ulong)*(byte *)((long)puVar4 + 3));
    } while (local_b0 < 0x41);
  }
LAB_03c352a0:
  for (; puVar40 <= puVar5 + -1;
      puVar40 = (undefined2 *)((long)puVar40 + (ulong)*(byte *)((long)puVar4 + 3))) {
    puVar4 = (undefined2 *)(param_5 + ((local_b8 << (uVar29 & 0x3f)) >> uVar32) * 4);
    *puVar40 = *puVar4;
    local_b0 = local_b0 + *(byte *)(puVar4 + 1);
    uVar29 = (ulong)local_b0;
  }
  if (puVar40 < puVar5) {
    puVar9 = (undefined1 *)(param_5 + ((local_b8 << (uVar29 & 0x3f)) >> uVar32) * 4);
    *(undefined1 *)puVar40 = *puVar9;
    if (puVar9[3] == '\x01') {
      local_b0 = local_b0 + (byte)puVar9[2];
    }
    else if ((local_b0 < 0x40) && (local_b0 = local_b0 + (byte)puVar9[2], 0x3f < local_b0)) {
      local_b0 = 0x40;
    }
  }
  uVar29 = (ulong)local_d8;
  if (local_d8 < 0x41) {
    do {
      uVar34 = (uint)uVar29;
      if (local_d0 < local_c0) {
        if (local_d0 == local_c8) goto LAB_03c35438;
        uVar41 = (int)local_d0 - iVar31;
        bVar24 = (ulong *)((long)local_d0 - (uVar29 >> 3)) < local_c8;
        if (!bVar24) {
          uVar41 = (uint)(uVar29 >> 3);
        }
        local_d8 = uVar34 + uVar41 * -8;
      }
      else {
        uVar41 = uVar34 >> 3;
        bVar24 = false;
        local_d8 = uVar34 & 7;
      }
      uVar29 = (ulong)local_d8;
      local_d0 = (ulong *)((long)local_d0 - (ulong)uVar41);
      local_e0 = *local_d0;
      if (((undefined2 *)((long)puVar6 - 7U) <= puVar38) || (bVar24)) {
        if (local_d8 < 0x41) goto LAB_03c35438;
        break;
      }
      puVar4 = (undefined2 *)(param_5 + ((local_e0 << (uVar29 & 0x3f)) >> uVar32) * 4);
      *puVar38 = *puVar4;
      bVar10 = *(byte *)(puVar4 + 1);
      puVar38 = (undefined2 *)((long)puVar38 + (ulong)*(byte *)((long)puVar4 + 3));
      puVar4 = (undefined2 *)
               (param_5 + ((local_e0 << ((ulong)(local_d8 + bVar10) & 0x3f)) >> uVar32) * 4);
      *puVar38 = *puVar4;
      local_d8 = local_d8 + bVar10 + (uint)*(byte *)(puVar4 + 1);
      puVar38 = (undefined2 *)((long)puVar38 + (ulong)*(byte *)((long)puVar4 + 3));
      puVar4 = (undefined2 *)(param_5 + ((local_e0 << ((ulong)local_d8 & 0x3f)) >> uVar32) * 4);
      *puVar38 = *puVar4;
      local_d8 = local_d8 + *(byte *)(puVar4 + 1);
      puVar38 = (undefined2 *)((long)puVar38 + (ulong)*(byte *)((long)puVar4 + 3));
      puVar4 = (undefined2 *)(param_5 + ((local_e0 << ((ulong)local_d8 & 0x3f)) >> uVar32) * 4);
      *puVar38 = *puVar4;
      local_d8 = local_d8 + *(byte *)(puVar4 + 1);
      uVar29 = (ulong)local_d8;
      puVar38 = (undefined2 *)((long)puVar38 + (ulong)*(byte *)((long)puVar4 + 3));
    } while (local_d8 < 0x41);
  }
LAB_03c354fc:
  for (; puVar38 <= puVar6 + -1;
      puVar38 = (undefined2 *)((long)puVar38 + (ulong)*(byte *)((long)puVar4 + 3))) {
    puVar4 = (undefined2 *)(param_5 + ((local_e0 << (uVar29 & 0x3f)) >> uVar32) * 4);
    *puVar38 = *puVar4;
    local_d8 = local_d8 + *(byte *)(puVar4 + 1);
    uVar29 = (ulong)local_d8;
  }
  if (puVar38 < puVar6) {
    puVar9 = (undefined1 *)(param_5 + ((local_e0 << (uVar29 & 0x3f)) >> uVar32) * 4);
    *(undefined1 *)puVar38 = *puVar9;
    if (puVar9[3] == '\x01') {
      local_d8 = local_d8 + (byte)puVar9[2];
    }
    else if ((local_d8 < 0x40) && (local_d8 = local_d8 + (byte)puVar9[2], 0x3f < local_d8)) {
      local_d8 = 0x40;
    }
  }
  for (; uVar29 = (ulong)local_100, local_100 < 0x41; local_100 = local_100 + *(byte *)(puVar4 + 1))
  {
    if (local_f8 < local_e8) {
      if (local_f8 == local_f0) goto LAB_03c35694;
      bVar24 = (long *)((long)local_f8 - (ulong)(local_100 >> 3)) < local_f0;
      uVar34 = (int)local_f8 - iVar42;
      if (!bVar24) {
        uVar34 = local_100 >> 3;
      }
      local_100 = local_100 + uVar34 * -8;
    }
    else {
      uVar34 = local_100 >> 3;
      bVar24 = false;
      local_100 = local_100 & 7;
    }
    uVar29 = (ulong)local_100;
    local_f8 = (long *)((long)local_f8 - (ulong)uVar34);
    local_108 = *local_f8;
    if ((puVar33 <= puVar36) || (bVar24)) goto joined_r0x03c35688;
    puVar4 = (undefined2 *)(param_5 + ((ulong)(local_108 << (uVar29 & 0x3f)) >> uVar32) * 4);
    *puVar36 = *puVar4;
    bVar10 = *(byte *)(puVar4 + 1);
    puVar36 = (undefined2 *)((long)puVar36 + (ulong)*(byte *)((long)puVar4 + 3));
    puVar4 = (undefined2 *)
             (param_5 + ((ulong)(local_108 << ((ulong)(local_100 + bVar10) & 0x3f)) >> uVar32) * 4);
    *puVar36 = *puVar4;
    local_100 = local_100 + bVar10 + (uint)*(byte *)(puVar4 + 1);
    puVar36 = (undefined2 *)((long)puVar36 + (ulong)*(byte *)((long)puVar4 + 3));
    puVar4 = (undefined2 *)
             (param_5 + ((ulong)(local_108 << ((ulong)local_100 & 0x3f)) >> uVar32) * 4);
    *puVar36 = *puVar4;
    local_100 = local_100 + *(byte *)(puVar4 + 1);
    puVar36 = (undefined2 *)((long)puVar36 + (ulong)*(byte *)((long)puVar4 + 3));
    puVar4 = (undefined2 *)
             (param_5 + ((ulong)(local_108 << ((ulong)local_100 & 0x3f)) >> uVar32) * 4);
    *puVar36 = *puVar4;
    puVar36 = (undefined2 *)((long)puVar36 + (ulong)*(byte *)((long)puVar4 + 3));
  }
LAB_03c35758:
  for (; puVar36 <= puVar3 + -1;
      puVar36 = (undefined2 *)((long)puVar36 + (ulong)*(byte *)((long)puVar4 + 3))) {
    puVar4 = (undefined2 *)(param_5 + ((ulong)(local_108 << (uVar29 & 0x3f)) >> uVar32) * 4);
    *puVar36 = *puVar4;
    local_100 = local_100 + *(byte *)(puVar4 + 1);
    uVar29 = (ulong)local_100;
  }
  uVar34 = (uint)uVar29;
  if (puVar36 < puVar3) {
    puVar9 = (undefined1 *)(param_5 + ((ulong)(local_108 << (uVar29 & 0x3f)) >> uVar32) * 4);
    *(undefined1 *)puVar36 = *puVar9;
    if (puVar9[3] == '\x01') {
      uVar34 = local_100 + (byte)puVar9[2];
    }
    else {
      uVar34 = local_100;
      if ((local_100 < 0x40) && (uVar34 = local_100 + (byte)puVar9[2], 0x3f < uVar34)) {
        uVar34 = 0x40;
      }
    }
  }
  if (((((((uVar34 != 0x40 || local_f8 != local_f0) || local_d8 != 0x40) || local_d0 != local_c8) ||
        local_b0 != 0x40) || local_a8 != local_a0) || local_88 != 0x40) || local_80 != local_78) {
    param_2 = 0xffffffffffffffec;
  }
  return param_2;
LAB_03c34f80:
  uVar34 = (uint)uVar29;
  if (local_80 < local_70) {
    if (local_80 == local_78) goto LAB_03c35044;
    uVar41 = (int)local_80 - iVar43;
    bVar24 = (ulong *)((long)local_80 - (uVar29 >> 3)) < local_78;
    if (!bVar24) {
      uVar41 = (uint)(uVar29 >> 3);
    }
    local_88 = uVar34 + uVar41 * -8;
  }
  else {
    uVar41 = uVar34 >> 3;
    bVar24 = false;
    local_88 = uVar34 & 7;
  }
  uVar29 = (ulong)local_88;
  local_80 = (ulong *)((long)local_80 - (ulong)uVar41);
  local_90 = *local_80;
  if ((puVar4 + -1 < param_1) || (bVar24)) goto LAB_03c35044;
  puVar7 = (undefined2 *)(param_5 + ((local_90 << (uVar29 & 0x3f)) >> uVar32) * 4);
  *param_1 = *puVar7;
  local_88 = local_88 + *(byte *)(puVar7 + 1);
  uVar29 = (ulong)local_88;
  param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar7 + 3));
  if (0x40 < local_88) goto LAB_03c35044;
  goto LAB_03c34f80;
LAB_03c351dc:
  uVar34 = (uint)uVar29;
  if (local_a8 < local_98) {
    if (local_a8 == local_a0) goto LAB_03c352a0;
    uVar41 = (int)local_a8 - iVar30;
    bVar24 = (ulong *)((long)local_a8 - (uVar29 >> 3)) < local_a0;
    if (!bVar24) {
      uVar41 = (uint)(uVar29 >> 3);
    }
    local_b0 = uVar34 + uVar41 * -8;
  }
  else {
    uVar41 = uVar34 >> 3;
    bVar24 = false;
    local_b0 = uVar34 & 7;
  }
  uVar29 = (ulong)local_b0;
  local_a8 = (ulong *)((long)local_a8 - (ulong)uVar41);
  local_b8 = *local_a8;
  if ((puVar5 + -1 < puVar40) || (bVar24)) goto LAB_03c352a0;
  puVar4 = (undefined2 *)(param_5 + ((local_b8 << (uVar29 & 0x3f)) >> uVar32) * 4);
  *puVar40 = *puVar4;
  local_b0 = local_b0 + *(byte *)(puVar4 + 1);
  uVar29 = (ulong)local_b0;
  puVar40 = (undefined2 *)((long)puVar40 + (ulong)*(byte *)((long)puVar4 + 3));
  if (0x40 < local_b0) goto LAB_03c352a0;
  goto LAB_03c351dc;
LAB_03c35438:
  uVar34 = (uint)uVar29;
  if (local_d0 < local_c0) {
    if (local_d0 == local_c8) goto LAB_03c354fc;
    uVar41 = (int)local_d0 - iVar31;
    bVar24 = (ulong *)((long)local_d0 - (uVar29 >> 3)) < local_c8;
    if (!bVar24) {
      uVar41 = (uint)(uVar29 >> 3);
    }
    local_d8 = uVar34 + uVar41 * -8;
  }
  else {
    uVar41 = uVar34 >> 3;
    bVar24 = false;
    local_d8 = uVar34 & 7;
  }
  uVar29 = (ulong)local_d8;
  local_d0 = (ulong *)((long)local_d0 - (ulong)uVar41);
  local_e0 = *local_d0;
  if ((puVar6 + -1 < puVar38) || (bVar24)) goto LAB_03c354fc;
  puVar4 = (undefined2 *)(param_5 + ((local_e0 << (uVar29 & 0x3f)) >> uVar32) * 4);
  *puVar38 = *puVar4;
  local_d8 = local_d8 + *(byte *)(puVar4 + 1);
  uVar29 = (ulong)local_d8;
  puVar38 = (undefined2 *)((long)puVar38 + (ulong)*(byte *)((long)puVar4 + 3));
  if (0x40 < local_d8) goto LAB_03c354fc;
  goto LAB_03c35438;
joined_r0x03c35688:
  if (0x40 < local_100) goto LAB_03c35758;
LAB_03c35694:
  uVar34 = (uint)uVar29;
  if (local_f8 < local_e8) {
    if (local_f8 == local_f0) goto LAB_03c35758;
    uVar41 = (int)local_f8 - iVar42;
    bVar24 = (long *)((long)local_f8 - (uVar29 >> 3)) < local_f0;
    if (!bVar24) {
      uVar41 = (uint)(uVar29 >> 3);
    }
    local_100 = uVar34 + uVar41 * -8;
  }
  else {
    uVar41 = uVar34 >> 3;
    bVar24 = false;
    local_100 = uVar34 & 7;
  }
  uVar29 = (ulong)local_100;
  local_f8 = (long *)((long)local_f8 - (ulong)uVar41);
  local_108 = *local_f8;
  if ((puVar3 + -1 < puVar36) || (bVar24)) goto LAB_03c35758;
  puVar4 = (undefined2 *)(param_5 + ((ulong)(local_108 << (uVar29 & 0x3f)) >> uVar32) * 4);
  *puVar36 = *puVar4;
  local_100 = local_100 + *(byte *)(puVar4 + 1);
  uVar29 = (ulong)local_100;
  puVar36 = (undefined2 *)((long)puVar36 + (ulong)*(byte *)((long)puVar4 + 3));
  goto joined_r0x03c35688;
}

