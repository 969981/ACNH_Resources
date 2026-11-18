
void FUN_0328a2b0(long param_1,ushort param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  size_t sVar5;
  long *plVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  byte bVar10;
  uint uVar11;
  char *pcVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long local_50;
  undefined4 local_48;
  undefined1 local_44;
  
  uVar7 = *(ushort *)(param_1 + 0x578);
  if ((uVar7 >> 5 & 1) == (param_2 & 1)) {
    return;
  }
  if (((param_2 & 1) == 0) || ((uVar7 >> 4 & 1) == 0)) {
    bVar10 = *(byte *)(param_1 + 0x1f8) & 0xfb;
  }
  else {
    bVar10 = *(byte *)(param_1 + 0x1f8) | 4;
  }
  *(byte *)(param_1 + 0x1f8) = bVar10;
  if ((uVar7 >> 8 & 1) == 0) {
    if ((param_2 & 1) != 0) goto LAB_0328a38c;
LAB_0328a3ec:
    local_50._0_4_ = 0;
    *(ushort *)(param_1 + 0x250) = *(ushort *)(param_1 + 0x250) & 0xfffe;
    FUN_032c2100(param_1 + 0x200);
  }
  else {
    if (((param_2 & 1) == 0) && ((uVar7 >> 1 & 1) != 0)) goto LAB_0328a3ec;
LAB_0328a38c:
    if (((uVar7 >> 4 & 1) == 0) || ((uVar7 >> 7 & 1) == 0)) goto LAB_0328a3ec;
    *(ushort *)(param_1 + 0x250) = *(ushort *)(param_1 + 0x250) | 1;
  }
  lVar9 = *(long *)(param_1 + 0x420);
  puVar3 = (undefined1 *)0x0;
  if (lVar9 != 0) {
    puVar3 = &LAB_0328c4c0;
  }
  if (puVar3 != (undefined1 *)0x0) {
    if ((param_2 & 1) == 0) {
      bVar10 = *(byte *)(lVar9 + 0x148) & 0xf7;
    }
    else {
      bVar10 = *(byte *)(lVar9 + 0x148) | 8;
    }
    *(byte *)(lVar9 + 0x148) = bVar10;
  }
  local_50 = CONCAT44(local_50._4_4_,5);
  if ((param_2 & 1) == 0) {
    uVar15 = *(ushort *)(param_1 + 0x578) & 0xffdf;
  }
  else {
    uVar15 = *(ushort *)(param_1 + 0x578) | 0x20;
  }
  *(short *)(param_1 + 0x578) = (short)uVar15;
  sVar5 = strlen(s_Invalid_04b17916);
  uVar4 = (uint)sVar5;
  if (uVar4 == 0) {
    uVar11 = 0;
    lVar9 = *(long *)(param_1 + 0x450);
  }
  else {
    uVar8 = uVar4 & 3;
    if (uVar4 < 4) {
      uVar11 = 0xffffffff;
      pcVar12 = s_Invalid_04b17916;
    }
    else {
      uVar14 = uVar4 & 0xfffffffc;
      uVar11 = 0xffffffff;
      pcVar12 = s_Invalid_04b17916;
      do {
        uVar14 = uVar14 - 4;
        uVar2 = crc32b(uVar11,(uint)(byte)*pcVar12,0x4c11db7);
        uVar2 = crc32b(uVar2,(uint)(byte)pcVar12[1],0x4c11db7);
        uVar2 = crc32b(uVar2,(uint)(byte)pcVar12[2],0x4c11db7);
        pbVar1 = (byte *)(pcVar12 + 3);
        pcVar12 = pcVar12 + 4;
        uVar11 = crc32b(uVar2,(uint)*pbVar1,0x4c11db7);
      } while (uVar14 != 0);
    }
    if ((sVar5 & 3) != 0) {
      do {
        uVar8 = uVar8 - 1;
        uVar11 = crc32b(uVar11,(uint)(byte)*pcVar12,0x4c11db7);
        pcVar12 = pcVar12 + 1;
      } while (uVar8 != 0);
    }
    uVar11 = ~uVar11;
    lVar9 = *(long *)(param_1 + 0x450);
  }
  if (lVar9 != 0) {
    lVar13 = lVar9;
    do {
      if (*(uint *)(lVar13 + 0x68) == uVar11) goto LAB_0328a530;
      lVar13 = *(long *)(lVar13 + 0x10);
    } while (lVar13 != 0);
  }
LAB_0328a694:
  uVar7 = *(ushort *)(param_1 + 0x250) & 0xfdff;
LAB_0328a69c:
  plVar6 = *(long **)(param_1 + 0x548);
  *(ushort *)(param_1 + 0x250) = uVar7;
  if (plVar6 != (long *)0x0) {
    local_48 = 5;
    local_44 = (undefined1)(param_2 & 1);
    local_50 = param_1;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_50);
  }
  return;
LAB_0328a530:
  do {
    plVar6 = (long *)(lVar13 + 0x28);
    lVar13 = *(long *)(lVar13 + 0x18);
  } while (lVar13 != 0 && *plVar6 == 0);
  if (*plVar6 != 0) {
    lVar13 = 0x18;
    if (*(uint *)(param_1 + 0x460) < 4) {
      lVar13 = 0;
    }
    lVar13 = *(long *)(*(long *)(param_1 + 0x468) + lVar13);
    if (lVar13 != 0) {
      if (uVar4 == 0) {
        uVar11 = 0;
      }
      else {
        uVar8 = uVar4 & 3;
        if (uVar4 < 4) {
          uVar11 = 0xffffffff;
          pcVar12 = s_Invalid_04b17916;
        }
        else {
          uVar4 = uVar4 & 0xfffffffc;
          uVar11 = 0xffffffff;
          pcVar12 = s_Invalid_04b17916;
          do {
            uVar4 = uVar4 - 4;
            uVar2 = crc32b(uVar11,(uint)(byte)*pcVar12,0x4c11db7);
            uVar2 = crc32b(uVar2,(uint)(byte)pcVar12[1],0x4c11db7);
            uVar2 = crc32b(uVar2,(uint)(byte)pcVar12[2],0x4c11db7);
            pbVar1 = (byte *)(pcVar12 + 3);
            pcVar12 = pcVar12 + 4;
            uVar11 = crc32b(uVar2,(uint)*pbVar1,0x4c11db7);
          } while (uVar4 != 0);
        }
        if ((sVar5 & 3) != 0) {
          do {
            uVar8 = uVar8 - 1;
            uVar11 = crc32b(uVar11,(uint)(byte)*pcVar12,0x4c11db7);
            pcVar12 = pcVar12 + 1;
          } while (uVar8 != 0);
        }
        uVar11 = ~uVar11;
      }
      do {
        if (*(uint *)(lVar9 + 0x68) == uVar11) break;
        lVar9 = *(long *)(lVar9 + 0x10);
      } while (lVar9 != 0);
      if (lVar13 == lVar9) {
        do {
          plVar6 = (long *)(lVar13 + 0x28);
          lVar13 = *(long *)(lVar13 + 0x18);
        } while (lVar13 != 0 && *plVar6 == 0);
        if (*(float *)(*plVar6 + 0x20) == 0.0) goto LAB_0328a694;
      }
    }
    if (((param_2 & 1) == 0) || ((uVar15 >> 4 & 1) == 0)) {
      uVar7 = *(ushort *)(param_1 + 0x250) | 0x200;
      goto LAB_0328a69c;
    }
  }
  goto LAB_0328a694;
}

