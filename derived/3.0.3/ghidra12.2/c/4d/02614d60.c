
undefined1  [16] FUN_02614d60(undefined2 *param_1,int *param_2)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined8 *puVar18;
  long lVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  long local_78;
  byte local_64 [4];
  
  lVar14 = *(long *)PTR_DAT_04bb46f0;
  if (lVar14 == 0) {
    uVar17 = 0;
    uVar8 = 0;
    uVar15 = 0;
    goto LAB_02615114;
  }
  fVar20 = (float)FUN_02626470(lVar14,*param_1,*(undefined1 *)(param_1 + 1));
  puVar4 = PTR_DAT_04bb43c0;
  uVar17 = 0;
  uVar10 = 0;
  if (fVar20 != (float)(int)fVar20) {
    uVar10 = (uint)(fVar20 < 0.0);
  }
  if (*param_2 != 0) {
    puVar18 = *(undefined8 **)(param_2 + 2);
    lVar19 = (long)*param_2 << 3;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      puVar16 = (undefined4 *)*puVar18;
      lVar13 = *(long *)puVar4;
      local_80 = *puVar16;
      local_7c = puVar16[1];
      local_78 = 0;
      local_88 = puVar1;
      uVar6 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar4 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(puVar16);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if (uVar6 < *(uint *)(lVar13 + 0x1d8)) {
            lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8);
            if (lVar13 != 0) {
              local_78 = lVar13;
            }
          }
        }
      }
      iVar5 = FUN_01ad7260(&local_88);
      if ((iVar5 != 0) || (iVar5 = FUN_01afcfa0(&local_88), iVar5 != 0)) {
        uVar8 = FUN_026138cc(puVar16);
        uVar6 = uVar17 + 2;
        if ((uVar8 & 1) == 0) {
          uVar6 = uVar17;
        }
        uVar17 = uVar6;
      }
      puVar18 = puVar18 + 1;
      lVar19 = lVar19 + -8;
    } while (lVar19 != 0);
  }
  lVar13 = *(long *)PTR_DAT_04bb4940;
  lVar19 = *(long *)PTR_DAT_04bb39b0;
  pbVar11 = PTR_DAT_04bb32e0;
  if (lVar19 == 0) {
LAB_02614f74:
    if (*pbVar11 < 8) goto LAB_02614fec;
LAB_02614f80:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02614fe4:
      pbVar11 = PTR_DAT_04bb5038;
      goto LAB_02614fec;
    }
    lVar19 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar19 + 0x473);
    pbVar11 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar9 = (uint *)(lVar19 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar9 = (uint *)(lVar19 + 0x48);
      }
      if ((*puVar9 & 8) != 0) {
        pbVar11 = (byte *)(lVar19 + 0x471);
      }
    }
    local_64[0] = *pbVar11;
    if (7 < local_64[0]) goto LAB_02614fe4;
  }
  else {
    if (*(int *)(lVar19 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar19 + 0x158);
    }
    if (7 < *pbVar11) {
      if ((*(int *)(lVar19 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar11 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02614f74;
      }
      goto LAB_02614f80;
    }
LAB_02614fec:
    local_64[0] = *pbVar11;
    if (7 < local_64[0]) {
      local_64[0] = 0xff;
    }
  }
  uVar15 = (ulong)((int)fVar20 - uVar10);
  uVar7 = FUN_02582fe0(local_64);
  local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar7);
  uVar7 = FUN_0262298c(lVar14,&local_88,*param_1,1);
  switch(uVar7) {
  case 1:
    cVar2 = *(char *)(param_1 + 1);
    uVar12 = 0x300000000;
    if (cVar2 != '\x02') {
      uVar12 = 0x100000000;
    }
    uVar8 = 0x600000000;
    if (cVar2 != '\x03') {
      uVar8 = uVar12;
    }
    uVar10 = *(uint *)(lVar13 + 0xec);
    if (cVar2 == '\x02') {
LAB_026150d0:
      uVar10 = (int)(uVar10 * 0xf) / 10;
      goto LAB_026150f0;
    }
    if (cVar2 != '\x03') goto LAB_026150f0;
    uVar12 = (ulong)(uVar10 << 1);
    break;
  case 2:
    uVar8 = 0x800000000;
    if (*(char *)(param_1 + 1) != '\x02') {
      uVar8 = 0x300000000;
    }
    uVar10 = *(uint *)(lVar13 + 0x11c);
    if (*(char *)(param_1 + 1) == '\x02') goto LAB_026150d0;
LAB_026150f0:
    uVar12 = (ulong)uVar10;
    break;
  case 3:
    puVar9 = (uint *)(**(code **)(*(long *)(lVar13 + 0x128) + 0xf0))(lVar13 + 0x128);
    uVar8 = (ulong)*puVar9;
    uVar12 = 0xa00000000;
    break;
  case 4:
    puVar9 = (uint *)(**(code **)(*(long *)(lVar13 + 0x158) + 0xf0))(lVar13 + 0x158);
    uVar8 = (ulong)*puVar9;
    uVar12 = 0x1400000000;
    break;
  default:
    uVar8 = 0;
    goto LAB_02615114;
  }
  uVar8 = uVar8 | uVar12;
LAB_02615114:
  auVar21._0_8_ = uVar15 | (ulong)uVar17 << 0x20;
  auVar21._8_8_ = uVar8;
  return auVar21;
}

