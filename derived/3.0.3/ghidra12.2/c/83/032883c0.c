
void FUN_032883c0(long param_1,ushort param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  size_t sVar4;
  long *plVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  char *pcVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  uVar7 = *(ushort *)(param_1 + 0x578);
  if ((uVar7 >> 4 & 1) == (param_2 & 1)) {
    return;
  }
  if ((uVar7 >> 8 & 1) == 0) {
    if (((param_2 & 1) == 0) || ((uVar7 >> 5 & 1) == 0)) goto LAB_03288494;
LAB_0328845c:
    local_40 = (ulong)local_40._4_4_ << 0x20;
    if ((uVar7 >> 7 & 1) == 0) goto LAB_032884a8;
    *(ushort *)(param_1 + 0x250) = *(ushort *)(param_1 + 0x250) | 1;
LAB_032884c4:
    if ((uVar7 >> 5 & 1) == 0) goto LAB_03288514;
    bVar6 = *(byte *)(param_1 + 0x1f8) | 4;
  }
  else {
    if (((param_2 & 1) != 0) && (((uVar7 >> 5 & 1) != 0 || ((uVar7 >> 1 & 1) == 0))))
    goto LAB_0328845c;
LAB_03288494:
    local_40 = (ulong)local_40._4_4_ << 0x20;
LAB_032884a8:
    *(ushort *)(param_1 + 0x250) = *(ushort *)(param_1 + 0x250) & 0xfffe;
    FUN_032c2100(param_1 + 0x200);
    if ((param_2 & 1) != 0) {
      uVar7 = *(ushort *)(param_1 + 0x578);
      goto LAB_032884c4;
    }
LAB_03288514:
    bVar6 = *(byte *)(param_1 + 0x1f8) & 0xfb;
  }
  *(byte *)(param_1 + 0x1f8) = bVar6;
  lVar9 = *(long *)(param_1 + 0x420);
  puVar2 = (undefined1 *)0x0;
  if (lVar9 != 0) {
    puVar2 = &LAB_0328c4c0;
  }
  if (puVar2 == (undefined1 *)0x0) {
LAB_032885dc:
    if ((param_2 & 1) != 0) goto LAB_032885f8;
    uVar15 = *(ushort *)(param_1 + 0x578) & 0xffef;
  }
  else {
    if (((param_2 & 1) == 0) || ((*(ushort *)(param_1 + 0x578) >> 6 & 1) == 0)) {
      *(byte *)(lVar9 + 0x148) = *(byte *)(lVar9 + 0x148) & 0xfb;
      if (*(long *)(lVar9 + 0x18) != 0) {
        pbVar10 = (byte *)(*(long *)(lVar9 + 0x18) + 0x60);
        bVar6 = *pbVar10 & 0xfe;
        goto LAB_032885d8;
      }
      goto LAB_032885dc;
    }
    *(byte *)(lVar9 + 0x148) = *(byte *)(lVar9 + 0x148) | 4;
    if (*(long *)(lVar9 + 0x18) != 0) {
      pbVar10 = (byte *)(*(long *)(lVar9 + 0x18) + 0x60);
      bVar6 = *pbVar10 | 1;
LAB_032885d8:
      *pbVar10 = bVar6;
      goto LAB_032885dc;
    }
LAB_032885f8:
    uVar15 = *(ushort *)(param_1 + 0x578) | 0x10;
  }
  local_40 = CONCAT44(local_40._4_4_,4);
  *(short *)(param_1 + 0x578) = (short)uVar15;
  sVar4 = strlen(s_Invalid_04b17916);
  uVar3 = (uint)sVar4;
  if (uVar3 == 0) {
    uVar11 = 0;
    lVar9 = *(long *)(param_1 + 0x450);
  }
  else {
    uVar8 = uVar3 & 3;
    if (uVar3 < 4) {
      uVar11 = 0xffffffff;
      pcVar12 = s_Invalid_04b17916;
    }
    else {
      uVar14 = uVar3 & 0xfffffffc;
      uVar11 = 0xffffffff;
      pcVar12 = s_Invalid_04b17916;
      do {
        uVar14 = uVar14 - 4;
        uVar1 = crc32b(uVar11,(uint)(byte)*pcVar12,0x4c11db7);
        uVar1 = crc32b(uVar1,(uint)(byte)pcVar12[1],0x4c11db7);
        uVar1 = crc32b(uVar1,(uint)(byte)pcVar12[2],0x4c11db7);
        pbVar10 = (byte *)(pcVar12 + 3);
        pcVar12 = pcVar12 + 4;
        uVar11 = crc32b(uVar1,(uint)*pbVar10,0x4c11db7);
      } while (uVar14 != 0);
    }
    if ((sVar4 & 3) != 0) {
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
      if (*(uint *)(lVar13 + 0x68) == uVar11) goto LAB_032886d0;
      lVar13 = *(long *)(lVar13 + 0x10);
    } while (lVar13 != 0);
  }
LAB_03288838:
  uVar7 = *(ushort *)(param_1 + 0x250) & 0xfdff;
LAB_03288840:
  plVar5 = *(long **)(param_1 + 0x548);
  *(ushort *)(param_1 + 0x250) = uVar7;
  if (plVar5 != (long *)0x0) {
    local_38 = 4;
    local_34 = (undefined1)(param_2 & 1);
    local_40 = param_1;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
  }
  return;
LAB_032886d0:
  do {
    plVar5 = (long *)(lVar13 + 0x28);
    lVar13 = *(long *)(lVar13 + 0x18);
  } while (lVar13 != 0 && *plVar5 == 0);
  if (*plVar5 != 0) {
    lVar13 = 0x18;
    if (*(uint *)(param_1 + 0x460) < 4) {
      lVar13 = 0;
    }
    lVar13 = *(long *)(*(long *)(param_1 + 0x468) + lVar13);
    if (lVar13 != 0) {
      if (uVar3 == 0) {
        uVar11 = 0;
      }
      else {
        uVar8 = uVar3 & 3;
        if (uVar3 < 4) {
          uVar11 = 0xffffffff;
          pcVar12 = s_Invalid_04b17916;
        }
        else {
          uVar3 = uVar3 & 0xfffffffc;
          uVar11 = 0xffffffff;
          pcVar12 = s_Invalid_04b17916;
          do {
            uVar3 = uVar3 - 4;
            uVar1 = crc32b(uVar11,(uint)(byte)*pcVar12,0x4c11db7);
            uVar1 = crc32b(uVar1,(uint)(byte)pcVar12[1],0x4c11db7);
            uVar1 = crc32b(uVar1,(uint)(byte)pcVar12[2],0x4c11db7);
            pbVar10 = (byte *)(pcVar12 + 3);
            pcVar12 = pcVar12 + 4;
            uVar11 = crc32b(uVar1,(uint)*pbVar10,0x4c11db7);
          } while (uVar3 != 0);
        }
        if ((sVar4 & 3) != 0) {
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
          plVar5 = (long *)(lVar13 + 0x28);
          lVar13 = *(long *)(lVar13 + 0x18);
        } while (lVar13 != 0 && *plVar5 == 0);
        if (*(float *)(*plVar5 + 0x20) == 0.0) goto LAB_03288838;
      }
    }
    if (((uVar15 >> 5 & 1) == 0) || ((param_2 & 1) == 0)) {
      uVar7 = *(ushort *)(param_1 + 0x250) | 0x200;
      goto LAB_03288840;
    }
  }
  goto LAB_03288838;
}

