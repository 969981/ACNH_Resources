
void FUN_0254a530(void)

{
  byte bVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  uint *puVar10;
  byte local_50 [4];
  undefined4 local_4c;
  undefined2 local_48;
  byte local_44 [4];
  undefined8 local_40;
  char *local_38;
  
  puVar4 = PTR_DAT_04bc3a80;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x756a8ab7) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f08c8 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_054f08c8);
        puVar10 = &DAT_054f08c0;
        if (iVar5 != 0) {
          DAT_054f08c0 = 0;
          __cxa_guard_release(&DAT_054f08c8);
        }
      }
      else {
        puVar10 = &DAT_054f08c0;
      }
    }
    else {
      puVar10 = (uint *)(DAT_054f5738 + 0x1fc);
    }
    local_40 = (undefined *)CONCAT44(local_40._4_4_,2);
    *puVar10 = *puVar10 | 4;
  }
  uVar6 = FUN_029342d0();
  if ((uVar6 & 1) != 0) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f08c8 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_054f08c8);
        puVar10 = &DAT_054f08c0;
        if (iVar5 != 0) {
          DAT_054f08c0 = 0;
          __cxa_guard_release(&DAT_054f08c8);
        }
      }
      else {
        puVar10 = &DAT_054f08c0;
      }
    }
    else {
      puVar10 = (uint *)(DAT_054f5738 + 0x1fc);
    }
    local_40 = (undefined *)CONCAT44(local_40._4_4_,2);
    *puVar10 = *puVar10 | 4;
  }
  puVar3 = PTR_DAT_04bb39b0;
  iVar5 = *(int *)(puVar4 + 0x38);
  if (iVar5 == 0x2a789248) {
    lVar9 = *(long *)PTR_DAT_04bb39b0;
    pbVar8 = PTR_DAT_04bb32e0;
    if (lVar9 == 0) {
LAB_0254a698:
      if (*pbVar8 < 8) goto LAB_0254a710;
LAB_0254a6a4:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0254a708:
        pbVar8 = PTR_DAT_04bb5038;
        goto LAB_0254a710;
      }
      lVar9 = **(long **)PTR_DAT_04bb27d0;
      bVar1 = *(byte *)(lVar9 + 0x473);
      pbVar8 = PTR_DAT_04bb5038;
      if ((long)(char)bVar1 != 0xffffffffffffffff) {
        puVar10 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar1 & 0xffffffffU) * 0x20;
        if (7 < bVar1) {
          puVar10 = (uint *)(lVar9 + 0x48);
        }
        if ((*puVar10 & 8) != 0) {
          pbVar8 = (byte *)(lVar9 + 0x471);
        }
      }
      local_50[0] = *pbVar8;
      if (7 < local_50[0]) goto LAB_0254a708;
    }
    else {
      if (*(int *)(lVar9 + 0x15c) != 0) {
        pbVar8 = (byte *)(lVar9 + 0x158);
      }
      if (7 < *pbVar8) {
        if ((*(int *)(lVar9 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_0254a698;
        }
        goto LAB_0254a6a4;
      }
LAB_0254a710:
      local_50[0] = *pbVar8;
      if (7 < local_50[0]) {
        local_50[0] = 0xff;
      }
    }
    local_40 = PTR_DAT_04bb2020 + 0x10;
    local_38 = "PlayerHalfAsleepDemoFlag";
    FUN_0274bfe8(local_50,&local_40,0);
    iVar5 = *(int *)(puVar4 + 0x38);
  }
  if (iVar5 != 0x3ee08254) goto LAB_0254a870;
  lVar9 = *(long *)puVar3;
  pbVar8 = PTR_DAT_04bb32e0;
  if (lVar9 == 0) {
LAB_0254a7b4:
    if (*pbVar8 < 8) goto LAB_0254a82c;
LAB_0254a7c0:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0254a824:
      pbVar8 = PTR_DAT_04bb5038;
      goto LAB_0254a82c;
    }
    lVar9 = **(long **)PTR_DAT_04bb27d0;
    bVar1 = *(byte *)(lVar9 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar1 != 0xffffffffffffffff) {
      puVar10 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar1 & 0xffffffffU) * 0x20;
      if (7 < bVar1) {
        puVar10 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar10 & 8) != 0) {
        pbVar8 = (byte *)(lVar9 + 0x471);
      }
    }
    local_44[0] = *pbVar8;
    if (7 < local_44[0]) goto LAB_0254a824;
  }
  else {
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0254a7b4;
      }
      goto LAB_0254a7c0;
    }
LAB_0254a82c:
    local_44[0] = *pbVar8;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
  }
  uVar6 = FUN_02669430(local_44);
  if ((uVar6 & 1) != 0) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    local_38 = "HotelSideTripPlayerTodayAnyone";
    FUN_0273f3c4(&local_40,1);
  }
LAB_0254a870:
  if (*(int *)(puVar4 + 0x38) == 0x1ca0c3e6) {
    FUN_02507c6c(&local_40,7,1,0,0);
    puVar4 = PTR_DAT_04bb5038;
    local_4c = local_40._4_4_;
    local_50[0] = 0xff;
    if ((byte)local_40 < 8) {
      local_50[0] = (byte)local_40;
    }
    local_48 = local_38._0_2_;
    bVar1 = (byte)local_40;
    if ((byte)local_40 < 8) {
      while( true ) {
        if ((*(uint *)(DAT_054f5738 + 0x23c4) >> (ulong)(bVar1 & 0x1f) & 1) != 0) {
          FUN_0253b9d0(local_50);
          if (7 < local_50[0]) {
            return;
          }
          *(uint *)(DAT_054f5738 + 0x23c4) =
               *(uint *)(DAT_054f5738 + 0x23c4) & (1 << (ulong)(local_50[0] & 0x1f) ^ 0xffffffffU);
          bVar1 = local_50[0];
        }
        uVar6 = (ulong)bVar1;
        do {
          if (uVar6 == 7) {
            return;
          }
          uVar6 = uVar6 + 1;
          uVar7 = FUN_02507924(local_50,puVar4 + uVar6);
        } while ((uVar7 & 1) == 0);
        local_50[0] = puVar4[uVar6];
        if (7 < local_50[0]) break;
        bVar1 = local_50[0];
      }
      return;
    }
  }
  else {
    sVar2 = *(short *)PTR_DAT_04bb6298;
    if (sVar2 != -1) {
      puVar10 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar10 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar10 >> 5 & 1) != 0) {
        return;
      }
    }
    *(undefined4 *)(DAT_054f5738 + 0x23c4) = 0;
  }
  return;
}

