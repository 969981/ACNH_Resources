
void FUN_02633e80(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  short *psVar6;
  ulong uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  short *psVar11;
  long lVar12;
  ulong uVar13;
  short local_68;
  undefined1 local_66;
  undefined1 local_65;
  uint local_64;
  
  if (0 < *(int *)(param_1 + 0xd0)) {
    lVar5 = 0;
    puVar9 = *(undefined8 **)(param_1 + 0xe0);
    do {
      puVar10 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + lVar5 * 8);
      lVar5 = lVar5 + 1;
      *puVar10 = puVar9;
      *(undefined8 **)(param_1 + 0xe0) = puVar10;
      puVar9 = puVar10;
    } while (lVar5 < *(int *)(param_1 + 0xd0));
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  puVar2 = PTR_DAT_04bb43c0;
  puVar1 = PTR_DAT_04bb37e0;
  uVar13 = 0;
  psVar11 = (short *)(param_1 + 0x10);
  do {
    uVar3 = *(uint *)(param_1 + 0xb0);
    if (0x13 < uVar3) {
      uVar3 = 0x14;
    }
    if (uVar13 < uVar3) {
      lVar5 = *(long *)puVar2;
      if (*psVar11 == -2) {
        psVar6 = psVar11;
        lVar12 = lVar5;
      }
      else {
        uVar3 = FUN_0277d6c4(psVar11);
        lVar12 = *(long *)puVar2;
        psVar6 = (short *)puVar1;
        if (lVar12 != 0) {
          lVar5 = *(long *)(lVar5 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if (uVar3 < *(uint *)(lVar5 + 0x1d8)) {
            if (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0) {
              psVar6 = psVar11;
            }
          }
        }
      }
      local_68 = *psVar6;
      local_66 = (undefined1)psVar6[1];
      local_65 = *(undefined1 *)((long)psVar6 + 3);
      local_64 = *(uint *)(psVar6 + 2);
      uVar3 = FUN_0277d6c4(&local_68);
      if (*(long *)puVar2 != 0) {
        lVar5 = *(long *)(lVar12 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          uVar3 = FUN_01a559d4(&local_68);
          uVar4 = FUN_0277d6c4(&local_68);
          uVar7 = uVar4 & 0xffffffff;
          if (0x752 < ((uint)(uVar4 >> 3) & 0x1fffffff)) {
            uVar7 = 0;
          }
          *(uint *)(param_1 + 0x2f8 + uVar7 * 4) =
               *(int *)(param_1 + 0x2f8 + uVar7 * 4) + (uVar3 & 0xffff);
        }
      }
      if (((*(uint *)(param_1 + 200) >> (ulong)((uint)uVar13 & 0x1f) & 1) != 0) &&
         (*(int *)(param_1 + 0xd0) < *(int *)(param_1 + 0xd4))) {
        puVar8 = *(uint **)(param_1 + 0xe0);
        if (puVar8 != (uint *)0x0) {
          *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)puVar8;
        }
        *(undefined1 *)(puVar8 + 3) = 0;
        *puVar8 = (uint)uVar13;
        *(short *)(puVar8 + 1) = local_68;
        *(undefined1 *)((long)puVar8 + 6) = local_66;
        *(undefined1 *)((long)puVar8 + 7) = local_65;
        puVar8[2] = local_64;
        if (*(int *)(param_1 + 0xd0) < *(int *)(param_1 + 0xd4)) {
          *(uint **)(*(long *)(param_1 + 0xd8) + (long)*(int *)(param_1 + 0xd0) * 8) = puVar8;
          *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
        }
      }
    }
    uVar13 = uVar13 + 1;
    psVar11 = psVar11 + 4;
  } while (uVar13 != 0x14);
  return;
}

