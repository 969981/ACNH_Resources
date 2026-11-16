
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02550b18(byte *param_1,int param_2)

{
  byte bVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  int *piVar8;
  byte *pbVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  uint uVar14;
  short *psVar15;
  long *local_50;
  char local_48;
  char local_47;
  char local_46;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  
  piVar8 = (int *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      piVar8 = (int *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_40 = *piVar8;
  if (local_40 == 0) {
    return 0;
  }
  local_3c = param_2;
  FUN_0071c8d0(&local_50,&local_40,param_1 + 8,0);
  plVar2 = local_50;
  if (local_50 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3770);
    if ((uVar5 & 1) == 0) {
      local_47 = '\0';
    }
  }
  if (local_50 == (long *)0x0) {
    return 0;
  }
  if (local_48 == '\0') {
    return 0;
  }
  if (local_47 == '\0') {
    return 0;
  }
  if (local_46 == '\0') {
    return 0;
  }
  uVar5 = FUN_02530cec(param_1);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  local_34 = 0;
  if (local_50[0xe] != 0) {
    uVar14 = *(uint *)(local_50[0xe] + 0x280);
    local_34 = 0;
    if (uVar14 < 0x149) {
      local_34 = uVar14;
    }
  }
  uVar6 = FUN_0251d928(local_34);
  iVar4 = local_3c;
  uVar14 = local_3c - 1;
  if ((uVar14 < 5) && ((0x1dU >> (ulong)(uVar14 & 0x1f) & 1) != 0)) {
    uVar14 = 9U >> (ulong)(uVar14 & 0x1f) & 1;
LAB_02550c88:
    lVar11 = *(long *)PTR_DAT_04bb39b0;
    pbVar9 = PTR_DAT_04bb32e0;
    if (lVar11 == 0) {
LAB_02550ce4:
      if (*pbVar9 < 8) goto LAB_02550d5c;
LAB_02550cf0:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02550d54:
        pbVar9 = PTR_DAT_04bb5038;
        goto LAB_02550d5c;
      }
      lVar11 = **(long **)PTR_DAT_04bb27d0;
      bVar10 = *(byte *)(lVar11 + 0x473);
      pbVar9 = PTR_DAT_04bb5038;
      if ((long)(char)bVar10 != 0xffffffffffffffff) {
        puVar13 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
        if (7 < bVar10) {
          puVar13 = (uint *)(lVar11 + 0x48);
        }
        if ((*puVar13 & 8) != 0) {
          pbVar9 = (byte *)(lVar11 + 0x471);
        }
      }
      bVar1 = *pbVar9;
      bVar10 = bVar1;
      if (7 < bVar1) {
        bVar10 = 0xff;
      }
      local_34 = CONCAT31(local_34._1_3_,bVar10);
      if (7 < bVar1) goto LAB_02550d54;
    }
    else {
      if (*(int *)(lVar11 + 0x15c) != 0) {
        pbVar9 = (byte *)(lVar11 + 0x158);
      }
      if (7 < *pbVar9) {
        if ((*(int *)(lVar11 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar9 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_02550ce4;
        }
        goto LAB_02550cf0;
      }
LAB_02550d5c:
      bVar1 = *pbVar9;
      bVar10 = bVar1;
      if (7 < bVar1) {
        bVar10 = 0xff;
      }
      local_34 = CONCAT31(local_34._1_3_,bVar10);
      if (7 < bVar1) goto LAB_02550e18;
    }
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar15 = &DAT_054f0c08;
        if (iVar4 != 0) {
          DAT_054f0c1c._0_4_ = 0;
          DAT_054f0c1c._4_4_ = 0;
          DAT_054f0c68 = 1;
          DAT_054f0c6c = 0;
          DAT_054f0c24._0_4_ = 0;
          DAT_054f0c24._4_4_ = 0;
          DAT_054f0c2c._0_4_ = 0;
          DAT_054f0c2c._4_4_ = 0;
          _DAT_054f0c44 = 0;
          DAT_054f0c34._0_4_ = 0;
          DAT_054f0c34._4_4_ = 0;
          DAT_054f0c3c._0_4_ = 0;
          DAT_054f0c3c._4_4_ = 0;
          _DAT_054f0c08 = 0;
          _DAT_054f0c10 = 1;
          DAT_054f0c14._0_4_ = 0;
          DAT_054f0c14._4_4_ = 0;
          DAT_054f0c48 = 0;
          DAT_054f0c50 = 0;
          DAT_054f0c58 = 0;
          DAT_054f0c60 = 0;
          __cxa_guard_release(&DAT_054f0c70);
        }
      }
      else {
        psVar15 = &DAT_054f0c08;
      }
    }
    else {
      psVar15 = (short *)(DAT_054f5738 + (ulong)bVar1 * 0xd0 +
                          (ulong)(*(uint *)(DAT_054f5738 + (ulong)bVar1 * 4 + 0xd68) & 1) * 0x68 +
                         0x6e8);
    }
    if (((((char)psVar15[0x32] != '\0') && (*psVar15 == *(short *)PTR_DAT_04bb6298)) &&
        ((uVar5 = FUN_0231f070(*(undefined4 *)(psVar15 + 2),0), (uVar5 & 1) != 0 ||
         (uVar5 = FUN_0251b2f8(&local_34), (uVar5 & 1) != 0)))) &&
       (lVar11 = DAT_054f5738, DAT_054f5738 != 0)) {
      *(undefined4 *)(DAT_054f5738 + 0x11b4) = *(undefined4 *)(psVar15 + 6);
      *(undefined4 *)(lVar11 + 0x11b8) = *(undefined4 *)(psVar15 + 8);
      *(undefined4 *)(lVar11 + 0x11bc) = *(undefined4 *)(psVar15 + 10);
    }
LAB_02550e18:
    FUN_0255139c(param_1,&local_3c);
    FUN_02674d30(param_1,1);
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_054f0960);
        puVar13 = (uint *)&DAT_054f0958;
        if (iVar4 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar13 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar13 = (uint *)(DAT_054f5738 + 0x204);
      if ((ulong)*param_1 < 8) {
        puVar13 = puVar13 + (ulong)*param_1 * 2;
      }
    }
    *puVar13 = *puVar13 & 0xffffffef;
    pbVar9 = (byte *)((long)local_50 + 0x18f4);
    if (uVar14 == 0) {
      bVar10 = *pbVar9 & 0xf7;
    }
    else {
      bVar10 = *pbVar9 | 8;
    }
    *pbVar9 = bVar10;
    local_34 = 3;
    local_38 = 3;
    FUN_0231f464(local_50);
    if (local_3c == 3) {
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(&DAT_054f0960);
          puVar13 = (uint *)&DAT_054f0958;
          if (iVar4 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar13 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar13 = (uint *)(DAT_054f5738 + 0x204);
        if ((ulong)*param_1 < 8) {
          puVar13 = puVar13 + (ulong)*param_1 * 2;
        }
      }
      if ((*puVar13 >> 3 & 1) != 0) {
        return 1;
      }
    }
    iVar4 = local_3c;
    if (local_3c == 2) {
      local_34 = 0x19;
      local_38 = 0;
      if (local_50[0xe] != 0) {
        uVar14 = *(uint *)(local_50[0xe] + 0x280);
        local_38 = 0;
        if (uVar14 < 0x149) {
          local_38 = uVar14;
        }
      }
      if ((local_38 == 0x19) && (uVar5 = FUN_0244bc64(), (uVar5 & 1) != 0)) {
        return 1;
      }
      uVar5 = FUN_02548454(param_1,1,1);
      if ((uVar5 & 1) != 0) {
        FUN_0232fe18(local_50);
        return 1;
      }
    }
    local_50[0x330] = 0;
    local_50[0x331] = 0;
    local_50[0x332] = 0;
    local_50[0x333] = 0;
    local_50[0x334] = 0;
    local_50[0x335] = 0;
    local_50[0x336] = 0;
    local_50[0x337] = 0;
    local_50[0x338] = 0;
    local_50[0x339] = 0;
    local_50[0x33a] = 0;
    *(undefined2 *)(local_50 + 0x33b) = 0;
    local_50[0x32e] = local_50[0x31e];
    local_50[0x32c] = local_50[0x31c];
    *(bool *)((long)local_50 + 0x1982) = iVar4 == 1;
    *(bool *)((long)local_50 + 0x1983) = iVar4 == 1;
    local_50[0x32f] = local_50[799];
    local_50[0x32d] = local_50[0x31d];
    *(undefined2 *)(local_50 + 0x330) = 0x601;
    lVar12 = local_50[0xe];
    lVar11 = 0;
    if (lVar12 != 0) {
      lVar11 = lVar12 + 0x278;
    }
    *(bool *)((long)local_50 + 0x1984) = iVar4 == 7;
    local_38 = 0x19;
    uVar14 = 0;
    if (lVar12 != 0) {
      uVar14 = 0;
      if (*(uint *)(lVar12 + 0x280) < 0x149) {
        uVar14 = *(uint *)(lVar12 + 0x280);
      }
    }
    if (uVar14 != 0x19) {
      local_34 = 0x19;
      local_50[0x318] = local_50[0x338];
      local_50[0x319] = local_50[0x339];
      local_50[0x31a] = local_50[0x33a];
      *(short *)(local_50 + 0x31b) = (short)local_50[0x33b];
      local_50[0x314] = local_50[0x334];
      local_50[0x315] = local_50[0x335];
      local_50[0x316] = local_50[0x336];
      local_50[0x317] = local_50[0x337];
      local_50[0x310] = local_50[0x330];
      local_50[0x311] = local_50[0x331];
      local_50[0x312] = local_50[0x332];
      local_50[0x313] = local_50[0x333];
      local_50[0x30c] = local_50[0x32c];
      local_50[0x30d] = local_50[0x32d];
      local_50[0x30e] = local_50[0x32e];
      local_50[0x30f] = local_50[0x32f];
      FUN_03ebb160(lVar11,0x19);
    }
    return 1;
  }
  uVar14 = (uint)(local_3c == 7);
  if ((local_3c == 2) || (local_3c == 7)) goto LAB_02550c88;
  pcVar7 = (char *)FUN_02329bf0(uVar6,0x1c,0x87438100,0);
  if (pcVar7 == (char *)0x0) {
    bVar3 = false;
  }
  else {
    bVar3 = *pcVar7 != '\0';
  }
  switch((int)local_50[0x302]) {
  case 2:
  case 3:
    if ((param_1[4] >> 1 & 1) == 0) {
      return 0;
    }
    uVar5 = FUN_02425688(uVar6);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (bVar3) goto LAB_02551278;
    uVar6 = 0x10;
    break;
  case 4:
    if ((param_1[4] >> 2 & 1) == 0) {
      return 0;
    }
    uVar5 = FUN_0242572c(uVar6);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (bVar3) goto LAB_02551278;
    uVar6 = 0x11;
    break;
  case 5:
    if ((param_1[4] >> 3 & 1) == 0) {
      return 0;
    }
    uVar5 = FUN_024257d0(uVar6);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (bVar3) goto LAB_02551278;
    uVar6 = 0x12;
    break;
  default:
    if ((param_1[4] & 1) == 0) {
      return 0;
    }
    uVar5 = FUN_024255e4(uVar6);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (bVar3) goto LAB_02551278;
    FUN_023b85fc(local_50,iVar4 == 0,6);
    goto LAB_02551270;
  case 7:
    if ((param_1[4] >> 5 & 1) == 0) {
      return 0;
    }
    uVar5 = FUN_02425874(uVar6);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (bVar3) goto LAB_02551278;
    uVar6 = 0x14;
  }
  FUN_02372864(local_50,uVar6,0,1);
LAB_02551270:
  FUN_0231f464(local_50);
LAB_02551278:
  FUN_0255139c(param_1,&local_3c);
  return 1;
}

