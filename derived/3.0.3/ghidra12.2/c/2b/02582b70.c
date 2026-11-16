
void FUN_02582b70(byte *param_1)

{
  uint *puVar1;
  char cVar2;
  char cVar3;
  undefined *puVar4;
  ulong uVar5;
  bool bVar6;
  char *pcVar7;
  ulong uVar8;
  byte *pbVar9;
  byte bVar10;
  long lVar11;
  ulong uVar12;
  byte local_58 [4];
  undefined4 local_54;
  undefined2 local_50;
  byte local_4c [4];
  undefined4 local_48;
  undefined2 local_44;
  
  puVar4 = PTR_DAT_04bb27d0;
  lVar11 = **(long **)PTR_DAT_04bb27d0;
  if (1 < *(byte *)(lVar11 + 0x476)) {
    bVar10 = *(byte *)(lVar11 + 0x473);
    pcVar7 = PTR_DAT_04bc1220;
    if ((long)(char)bVar10 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
      if (7 < bVar10) {
        puVar1 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pcVar7 = (char *)(lVar11 + 0x472);
      }
    }
    cVar2 = *pcVar7;
    FUN_02507c6c(local_4c,7,1,0,0);
    local_54 = local_48;
    local_58[0] = 0xff;
    if (local_4c[0] < 8) {
      local_58[0] = local_4c[0];
    }
    local_50 = local_44;
    if (local_4c[0] < 8) {
      *param_1 = local_4c[0];
      pcVar7 = (char *)FUN_02582a24(param_1);
      cVar3 = *pcVar7;
      bVar10 = local_4c[0];
      while( true ) {
        if (cVar3 == cVar2) {
          return;
        }
        uVar5 = (ulong)bVar10;
        do {
          uVar12 = uVar5;
          if (uVar12 == 7) goto LAB_02582c24;
          uVar8 = FUN_02507924(local_58,&DAT_0548e169 + uVar12);
          uVar5 = uVar12 + 1;
        } while ((uVar8 & 1) == 0);
        bVar10 = (&DAT_0548e169)[uVar12];
        if (7 < bVar10) break;
        *param_1 = bVar10;
        local_58[0] = bVar10;
        pcVar7 = (char *)FUN_02582a24(param_1);
        cVar3 = *pcVar7;
      }
    }
  }
LAB_02582c24:
  if (DAT_04cd19d8 == 0) {
    pbVar9 = &DAT_0548e140;
LAB_02582c84:
    if (*pbVar9 < 8) goto LAB_02582cf4;
  }
  else {
    pbVar9 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar9 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (*pbVar9 < 8) goto LAB_02582cf4;
    if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
      pbVar9 = (byte *)(DAT_054f5738 + 0x11a5);
      goto LAB_02582c84;
    }
  }
  if (*(long **)puVar4 != (long *)0x0) {
    lVar11 = **(long **)puVar4;
    bVar10 = *(byte *)(lVar11 + 0x473);
    pbVar9 = PTR_DAT_04bb5038;
    if ((long)(char)bVar10 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
      if (7 < bVar10) {
        puVar1 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar9 = (byte *)(lVar11 + 0x471);
      }
    }
    bVar10 = *pbVar9;
    bVar6 = bVar10 < 8;
    if (!bVar6) {
      bVar10 = 0xff;
    }
    *param_1 = bVar10;
    if (bVar6) {
      return;
    }
  }
  pbVar9 = &DAT_0548e168;
LAB_02582cf4:
  bVar10 = *pbVar9;
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  *param_1 = bVar10;
  return;
}

