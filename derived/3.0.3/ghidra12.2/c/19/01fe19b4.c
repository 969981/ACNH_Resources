
/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_01fe19b4(long param_1,short *param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  
  if ((*(ushort *)(param_1 + 0x1242c) & 1) == 0) {
    return 0;
  }
  if (DAT_05ab3138 == 0) {
    return 0;
  }
  uVar6 = *(uint *)(param_1 + 0x123bc);
  if ((int)*(uint *)(DAT_05ab3138 + 0x5c0) < 1) {
    if (*(long *)(DAT_05ab3138 + 0x4b0) == 0) {
      return 0;
    }
    puVar7 = *(uint **)(*(long *)(DAT_05ab3138 + 0x4b0) + 8);
    if (puVar7 == (uint *)0x0) {
      return 0;
    }
    if ((uVar6 < *(uint *)(DAT_05ab3138 + 0x4c8)) &&
       (*(char *)(*(long *)(DAT_05ab3138 + 0x4d0) + (long)(int)uVar6) == '\0')) {
      return 0;
    }
    if (*puVar7 <= uVar6) {
      return 0;
    }
    if (puVar7[1] == 0) {
      return 0;
    }
    if ((ushort)puVar7[2] == 0) {
      return 0;
    }
    iVar4 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      iVar4 = 0x1c;
    }
    puVar7 = (uint *)((ulong)(puVar7[1] * uVar6 + (uint)(ushort)puVar7[2] * 8 + iVar4) +
                     (long)puVar7);
  }
  else {
    if (*(uint *)(DAT_05ab3138 + 0x5c0) <= uVar6) {
      return 0;
    }
    if (*(uint *)(DAT_05ab3138 + 0x5b0) <= uVar6) {
      uVar6 = 0;
    }
    puVar7 = *(uint **)(*(long *)(DAT_05ab3138 + 0x5b8) + (ulong)uVar6 * 8);
  }
  if (puVar7 == (uint *)0x0) {
    return 0;
  }
  uVar6 = *puVar7;
  if (uVar6 != 0 && puVar7 != (uint *)(ulong)uVar6) {
    puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar6);
    if (((*puVar8 != 0) && (uVar6 = puVar8[1], uVar6 != 0)) && ((ulong)(ushort)puVar8[2] != 0)) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar6 != 0) {
          uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar6);
        }
        if (*puVar8 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_053b6978) &&
           (uVar3 = *(ushort *)(DAT_053b6980 + (long)(int)uVar2 * 2), uVar6 = (uint)uVar3, uVar3 < 4
           )) goto LAB_01fe1aa4;
      }
    }
  }
  uVar6 = 0;
LAB_01fe1aa4:
  local_48 = (undefined *)CONCAT44(local_48._4_4_,uVar6);
  if (uVar6 != 2) {
    return 0;
  }
  local_40 = 0;
  if (DAT_05aed670 == 0) {
    puVar9 = &DAT_055c04a0;
  }
  else {
    puVar9 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar9 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar4 = FUN_006bd550(*puVar9,0);
      puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar9 = &DAT_055c04a0;
      }
    }
  }
  local_3c = *(undefined4 *)(puVar9 + 7);
  local_38 = FUN_017baf44();
  local_38 = local_38 & 1;
  local_48 = PTR_DAT_04bb3140 + 0x10;
  psVar5 = (short *)FUN_01a5190c(&local_48,*(undefined4 *)(param_1 + 0x11ff8),param_1 + 0x11fd8,0);
  if (*psVar5 == -2) {
    return 0;
  }
  *param_2 = *psVar5;
  *(char *)(param_2 + 1) = (char)psVar5[1];
  *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)((long)psVar5 + 3);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(psVar5 + 2);
  return 1;
}

