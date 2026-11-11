
/* WARNING: Type propagation algorithm not settling */

void FUN_004bcb90(long param_1,undefined8 param_2,byte *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  ulong extraout_x1;
  int iVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *puStack_118;
  ulong local_110;
  undefined8 *local_100;
  undefined8 *local_f8;
  long lStack_f0;
  undefined8 *local_e8;
  int local_e0;
  byte *local_58;
  
  if (param_3 == (byte *)0x0) {
    return;
  }
  bVar3 = *param_3;
  while ((bVar3 & 9) == 0) {
    param_3 = *(byte **)(param_3 + 8);
    bVar3 = *param_3;
  }
  local_58 = param_3;
  lVar8 = FUN_00427270(param_3);
  if (lVar8 == 0) {
    return;
  }
  uVar9 = FUN_00428440(param_3);
  if (param_3 == (byte *)0x0) {
    return;
  }
  if ((uVar9 & 0x1f) != 7) {
    return;
  }
  uVar6 = FUN_004274f0(param_3);
  if ((uVar6 >> 5 & 1) != 0) {
    return;
  }
  FUN_0044bef0(param_2,&local_58);
  if ((extraout_x1 & 1) == 0) {
    return;
  }
  FUN_004225b0(&local_e8);
  FUN_00427570(local_58,&local_e8,0,0);
  lStack_f0 = (long)local_e8 + (long)local_e0 + -1;
  local_f8 = local_e8;
  uVar7 = FUN_00427340(local_58);
  local_100 = (undefined8 *)FUN_0047a0b0(*(undefined8 *)(param_1 + 0x10),&local_f8,uVar7);
  uVar6 = FUN_004274f0(local_58);
  if ((uVar6 >> 0xb & 1) == 0) {
    uVar6 = FUN_004274f0(local_58);
  }
  else {
    FUN_0043baa0(param_1 + 0x80,&local_100);
    uVar6 = FUN_004274f0(local_58);
  }
  if ((uVar6 >> 5 & 1) == 0) {
    lVar8 = FUN_00426e60(local_58,0x10000000);
    puVar14 = local_100;
  }
  else {
    FUN_0043baa0(param_1 + 0xa0,&local_100);
    lVar8 = FUN_00426e60(local_58,0x10000000);
    puVar14 = local_100;
  }
  local_100 = puVar14;
  if (lVar8 != 0) {
    iVar10 = *(int *)(param_1 + 200);
    if (iVar10 <= *(int *)(param_1 + 0xd0) * 2) {
      FUN_004bd320((long *)(param_1 + 0xc0),iVar10 << 1);
      iVar10 = *(int *)(param_1 + 200);
    }
    uVar6 = (int)puVar14 * -0x61c8864f;
    uVar4 = (int)((ulong)puVar14 >> 0x20) * -0x61c8864f;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar6 = iVar10 - 1U & (uVar6 + (uVar6 >> 2) + uVar4 * 0x40 + 0x9e3779b9 ^ uVar4);
    lVar8 = *(long *)(param_1 + 0xc0);
    puVar12 = (ulong *)(lVar8 + (long)(int)uVar6 * 8);
    if ((undefined8 *)*puVar12 == (undefined8 *)0xffffffffffffffff) {
      iVar10 = 1;
    }
    else if ((undefined8 *)*puVar12 == puVar14) {
      iVar10 = 0;
    }
    else {
      do {
        uVar6 = uVar6 + 1 & iVar10 - 1U;
        puVar11 = *(undefined8 **)(lVar8 + (long)(int)uVar6 * 8);
        if (puVar11 == (undefined8 *)0xffffffffffffffff) {
          iVar10 = 1;
          goto LAB_004bcd84;
        }
      } while (puVar11 != puVar14);
      iVar10 = 0;
LAB_004bcd84:
      puVar12 = (ulong *)(lVar8 + (long)(int)uVar6 * 8);
    }
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + iVar10;
    *puVar12 = (ulong)puVar14;
  }
  plVar1 = (long *)(param_1 + 0x20);
  uVar6 = FUN_00484d70(plVar1,&local_100);
  if (*(uint *)(param_1 + 0x28) == uVar6) {
    if ((*(uint *)(param_1 + 0x2c) & 0x3fffffff) == uVar6) {
      FUN_00426990(PTR_DAT_048607b8,plVar1,0x10);
      uVar6 = *(uint *)(param_1 + 0x28);
    }
    puVar12 = (ulong *)(*(long *)(param_1 + 0x20) + (long)(int)uVar6 * 0x10);
    *puVar12 = (ulong)local_100;
    puVar12[1] = (ulong)local_58;
    *(uint *)(param_1 + 0x28) = uVar6 + 1;
    lVar8 = *(long *)(local_58 + 8);
  }
  else {
    *(byte **)(*plVar1 + ((long)((ulong)uVar6 << 0x20) >> 0x1c) + 8) = local_58;
    lVar8 = *(long *)(local_58 + 8);
  }
  if (lVar8 != 0) {
    FUN_00427570(lVar8,&local_e8,0,0);
    puStack_118 = (undefined8 *)((long)local_e8 + (long)local_e0 + -1);
    local_120 = local_e8;
    uVar7 = FUN_00427340(lVar8);
    uVar9 = FUN_0047a0b0(*(undefined8 *)(param_1 + 0x10),&local_120,uVar7);
    plVar16 = (long *)(param_1 + 0x40);
    uVar6 = FUN_004bd5f0(plVar16,&local_100);
    if (*(uint *)(param_1 + 0x48) == uVar6) {
      if ((*(uint *)(param_1 + 0x4c) & 0x3fffffff) == uVar6) {
        FUN_00426990(PTR_DAT_048607b8,plVar16,0x10);
        uVar6 = *(uint *)(param_1 + 0x48);
      }
      puVar12 = (ulong *)(*(long *)(param_1 + 0x40) + (long)(int)uVar6 * 0x10);
      *puVar12 = (ulong)local_100;
      puVar12[1] = uVar9;
      *(uint *)(param_1 + 0x48) = uVar6 + 1;
    }
    else {
      *(ulong *)(*plVar16 + ((long)((ulong)uVar6 << 0x20) >> 0x1c) + 8) = uVar9;
    }
  }
  FUN_00427c30(&local_120,local_58,0);
LAB_004bcf14:
  if (local_120 + 1 < puStack_118) {
    local_120 = local_120 + 1;
    uVar6 = FUN_004290b0();
  }
  else {
    uVar9 = FUN_00427c40(&local_120);
    if ((uVar9 & 1) == 0) goto LAB_004bcf50;
    uVar6 = FUN_004290b0(local_120);
  }
  if ((uVar6 >> 5 & 1) != 0) {
    FUN_004bcb90(param_1,param_2,*local_120);
  }
  goto LAB_004bcf14;
LAB_004bcf50:
  lVar8 = FUN_004270a0(local_58);
  if ((lVar8 != 0) && (uVar9 = (ulong)*(ushort *)(lVar8 + 8), uVar9 != 0)) {
    uVar13 = 0;
    puVar14 = (undefined8 *)(lVar8 + 0x18);
    do {
      if (*(char *)*puVar14 == 't') {
        FUN_004bcb90(param_1,param_2,puVar14[-1]);
        uVar9 = (ulong)*(ushort *)(lVar8 + 8);
      }
      uVar13 = uVar13 + 1;
      puVar14 = puVar14 + 2;
    } while (uVar13 < uVar9);
  }
  FUN_0044ee30(&local_120,local_58,PTR_DAT_04bd6f80);
  puVar14 = local_120;
  if ((local_110 & 1) != 0) {
    FUN_0043dd50(local_110 & 0xfffffffffffffffe);
  }
  puVar5 = PTR_DAT_048607b8;
  if (puVar14 == (undefined8 *)0x0) {
    if (*(long *)(local_58 + 8) != 0) {
      FUN_004bcb90(param_1,param_2);
    }
  }
  else {
    local_128 = local_100;
    plVar16 = (long *)*puVar14;
    if (plVar16 != (long *)0x0) {
      plVar2 = (long *)(param_1 + 0x40);
      do {
        while (lVar8 = plVar16[1], *plVar16 == 0 || (int)lVar8 == -1) {
LAB_004bd0fc:
          plVar16 = (long *)plVar16[2];
          if (plVar16 == (long *)0x0) goto LAB_004bd140;
        }
        uVar15 = *(undefined8 *)(param_1 + 0x10);
        FUN_004297c0(&local_120);
        local_120 = (undefined8 *)FUN_0047a0b0(uVar15,&local_120,(int)lVar8);
        uVar6 = FUN_004bd5f0(plVar2,&local_128);
        if (*(uint *)(param_1 + 0x48) == uVar6) {
          if ((*(uint *)(param_1 + 0x4c) & 0x3fffffff) == uVar6) {
            FUN_00426990(puVar5,plVar2,0x10);
            uVar6 = *(uint *)(param_1 + 0x48);
          }
          puVar12 = (ulong *)(*(long *)(param_1 + 0x40) + (long)(int)uVar6 * 0x10);
          *puVar12 = (ulong)local_128;
          puVar12[1] = (ulong)local_120;
          *(uint *)(param_1 + 0x48) = uVar6 + 1;
        }
        else {
          *(undefined8 **)(*plVar2 + ((long)((ulong)uVar6 << 0x20) >> 0x1c) + 8) = local_120;
        }
        local_128 = local_120;
        uVar6 = FUN_00484d70(plVar1,&local_120);
        if (*(uint *)(param_1 + 0x28) == uVar6) {
          if ((*(uint *)(param_1 + 0x2c) & 0x3fffffff) == uVar6) {
            FUN_00426990(puVar5,plVar1,0x10);
            uVar6 = *(uint *)(param_1 + 0x28);
          }
          puVar12 = (ulong *)(*(long *)(param_1 + 0x20) + (long)(int)uVar6 * 0x10);
          *puVar12 = (ulong)local_120;
          puVar12[1] = (ulong)local_58;
          *(uint *)(param_1 + 0x28) = uVar6 + 1;
          goto LAB_004bd0fc;
        }
        *(byte **)(*plVar1 + ((long)((ulong)uVar6 << 0x20) >> 0x1c) + 8) = local_58;
        plVar16 = (long *)plVar16[2];
      } while (plVar16 != (long *)0x0);
    }
  }
LAB_004bd140:
  FUN_00422550(&local_e8);
  return;
}

