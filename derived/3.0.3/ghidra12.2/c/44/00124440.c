
undefined8 FUN_00124440(long param_1,long param_2,short *param_3)

{
  char *pcVar1;
  byte bVar2;
  short sVar3;
  bool bVar4;
  uint uVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  long unaff_x23;
  uint uVar15;
  uint uVar16;
  uint unaff_w29;
  uint uVar17;
  uint local_70;
  uint uStack_6c;
  byte *local_68;
  
  local_70 = 0;
  uStack_6c = 0;
  bVar2 = *(byte *)(param_2 + 0x50);
  if (3 < bVar2 - 3) goto LAB_00124820;
  if (bVar2 - 5 < 2) {
    lVar13 = *(long *)(param_3 + 0xc);
    if (lVar13 == 0) goto LAB_00124820;
    unaff_x23 = lVar13 + ((ulong)*(byte *)(lVar13 + 0x10) << 0x18 |
                          (ulong)*(byte *)(lVar13 + 0x11) << 0x10 |
                          (ulong)*(byte *)(lVar13 + 0x12) << 8 | (ulong)*(byte *)(lVar13 + 0x13));
    sVar7 = *(short *)(param_2 + 0x4c);
    uVar12 = (uint)*(byte *)(lVar13 + 0x18) << 0x18 | (uint)*(byte *)(lVar13 + 0x19) << 0x10 |
             (uint)*(byte *)(lVar13 + 0x1a) << 8 | (uint)*(byte *)(lVar13 + 0x1b);
  }
  else {
    lVar13 = *(long *)(*(long *)(param_3 + 4) + 8);
    uVar12 = (*(uint *)(lVar13 + 0x38) & 0xff00ff00) >> 8 |
             (*(uint *)(lVar13 + 0x38) & 0xff00ff) << 8;
    unaff_w29 = uVar12 >> 0x10 | uVar12 << 0x10;
    sVar7 = *(short *)(param_2 + 0x4c);
    uVar12 = (uint)*(byte *)(lVar13 + 0x60) << 0x18 | (uint)*(byte *)(lVar13 + 0x61) << 0x10 |
             (uint)*(byte *)(lVar13 + 0x62) << 8 | (uint)*(byte *)(lVar13 + 99);
  }
  if (sVar7 == 0) {
    uStack_6c = 1;
    local_70 = uVar12;
    if (uVar12 == 0) {
      uVar12 = 0xffff;
      goto joined_r0x001245b0;
    }
  }
  else {
    sVar7 = FUN_0012aef0(param_3,param_2,*(undefined8 *)(param_2 + 0x30),sVar7,1,uVar12,0,&uStack_6c
                         ,&local_70);
    uVar12 = (uint)sVar7;
    if ((int)uVar12 < 0) {
      bVar2 = *(byte *)(param_2 + 0x50);
joined_r0x001245b0:
      if (((bVar2 == 5) || (bVar2 == 3)) && ((uVar12 & 0xffff) == 0xfffe)) {
        uVar11 = 3;
        goto LAB_00124824;
      }
      goto LAB_00124820;
    }
  }
  uVar5 = uStack_6c;
  uVar12 = local_70;
  bVar2 = *(byte *)(param_2 + 0x50);
  if ((*(char *)(param_2 + 0x51) != '\0') || ((bVar2 | 2) != 6)) {
    uVar12 = uStack_6c * 4 - 4;
    if (bVar2 - 5 < 2) {
      local_68 = (byte *)(unaff_x23 + (ulong)uVar12);
      uVar15 = *(byte *)(unaff_x23 + (ulong)uVar12) & 0x3f;
    }
    else {
      iVar8 = FUN_0010dbc0(*(undefined8 *)(param_3 + 4),3,uVar12 + unaff_w29,4,&local_68);
      if (iVar8 < 0) {
        *(undefined1 *)((long)param_3 + 0x5f) = 4;
        return 0;
      }
      uVar15 = *local_68 & 0x7f;
    }
    uVar16 = uVar5;
    goto LAB_001246cc;
  }
  if (bVar2 == 6) {
    if (uStack_6c <= local_70) {
      bVar4 = false;
      uVar16 = 0;
      uVar15 = 0xffffd8f0;
      uVar17 = uStack_6c;
      do {
        uVar14 = uVar17 * 4 - 4;
        while ((-1 < *(char *)(param_2 + 0x53) &&
               ((pcVar1 = (char *)(unaff_x23 + (ulong)uVar14), -1 < *pcVar1 ||
                (cVar6 = FUN_0012b800(*(undefined8 *)(param_3 + 4),
                                      (uint)(byte)pcVar1[1] << 0x10 | (uint)(byte)pcVar1[2] << 8 |
                                      (uint)(byte)pcVar1[3],*(undefined1 *)(param_1 + 0x6d648),
                                      *(undefined1 *)(param_1 + 0x6d649)), cVar6 == '\0'))))) {
          uVar17 = uVar17 + 1;
          uVar14 = uVar14 + 4;
          if (uVar12 < uVar17) goto LAB_0012480c;
        }
        local_68 = (byte *)(unaff_x23 + (ulong)uVar14);
        uVar14 = *(byte *)(unaff_x23 + (ulong)uVar14) & 0x3f;
        if ((int)uVar15 < (int)uVar14) {
          bVar4 = true;
          uVar15 = uVar14;
          uVar16 = uVar17;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 <= uVar12);
      goto LAB_0012480c;
    }
  }
  else if (uStack_6c <= local_70) {
    bVar4 = false;
    uVar16 = 0;
    uVar15 = 0xffffd8f0;
    iVar8 = unaff_w29 + uStack_6c * 4 + -4;
    uVar17 = uStack_6c;
    do {
      iVar10 = FUN_0010dbc0(*(undefined8 *)(param_3 + 4),3,iVar8,4,&local_68);
      if (iVar10 < 0) goto LAB_00124820;
      if ((int)uVar15 < (int)(*local_68 & 0x7f)) {
        bVar4 = true;
        uVar15 = *local_68 & 0x7f;
        uVar16 = uVar17;
      }
      uVar17 = uVar17 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar17 <= uVar12);
LAB_0012480c:
    if (bVar4) {
      uVar12 = uVar16 * 4 - 4;
LAB_001246cc:
      *(uint *)(param_3 + 0x1c) = uVar16;
      if (*(byte *)(param_2 + 0x50) - 5 < 2) {
        local_68 = (byte *)(unaff_x23 + (ulong)uVar12);
      }
      else {
        iVar8 = FUN_0010dbc0(*(undefined8 *)(param_3 + 4),3,uVar12 + unaff_w29,4,&local_68);
        if (iVar8 < 0) {
          *(undefined1 *)((long)param_3 + 0x5f) = 4;
          return 0;
        }
      }
      uVar9 = FUN_0012a960(*(undefined8 *)(param_3 + 4),
                           (uint)local_68[1] << 0x10 | (uint)local_68[2] << 8 | (uint)local_68[3]);
      *(undefined4 *)(param_3 + 0x2c) = uVar9;
      *(uint *)(param_3 + 0x1e) = uVar5;
      *(uint *)(param_3 + 0x20) = local_70;
      iVar8 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * uVar15;
      sVar3 = param_3[2] +
              ((short)((ulong)((long)iVar8 * 0x51eb851f) >> 0x25) - (short)(iVar8 >> 0x1f));
      *param_3 = sVar3;
      sVar7 = param_3[0x35];
      if ((sVar7 <= sVar3) && (sVar7 = param_3[0x34], sVar3 <= param_3[0x34])) {
        sVar7 = sVar3;
      }
      *param_3 = sVar7;
      return 1;
    }
  }
LAB_00124820:
  uVar11 = 4;
LAB_00124824:
  *(undefined1 *)((long)param_3 + 0x5f) = uVar11;
  return 0;
}

