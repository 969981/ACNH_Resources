
void FUN_021befa0(long param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint local_8c;
  undefined8 local_78;
  char *pcStack_70;
  undefined4 local_64;
  
  if ((*(char *)(param_1 + 0x55e44) == '\0') && (lVar7 = *(long *)PTR_DAT_04bb46b0, lVar7 != 0)) {
    puVar8 = *(undefined8 **)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar8 + 0x38))();
      if (lVar7 == 0) {
        return;
      }
      lVar7 = lVar7 + 0x70;
    }
    else {
      if (puVar8 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar8[0x26] == (long *)0x0) {
        return;
      }
      lVar7 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
      if (lVar7 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar7 + 0xd0) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar7 + 0xd0), puVar8 == (undefined8 *)0x0)) {
      local_8c = 0;
    }
    else {
      local_8c = (**(code **)*puVar8)();
    }
    pbVar2 = (byte *)(*(long *)(lVar7 + 0xb8) + *(long *)(lVar7 + 0xb0));
    uVar9 = (ulong)*pbVar2;
    if (((uVar9 < 0x23) && (pbVar2[1] <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(pbVar2[1] & 0x1f) & 1) != 0)) {
      uVar10 = (uint)(*(int *)(pbVar2 + 0x10764) == 0);
    }
    else {
      uVar10 = 0;
    }
    uVar9 = (ulong)pbVar2[0x13230];
    uVar11 = uVar10;
    if (((uVar9 < 0x23) && (pbVar2[0x13231] <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
       (((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(pbVar2[0x13231] & 0x1f) & 1) != 0 &&
        (uVar11 = uVar10 | 2, *(int *)(pbVar2 + 0x23994) != 0)))) {
      uVar11 = uVar10;
    }
    uVar9 = (ulong)pbVar2[0x26460];
    uVar10 = uVar11;
    if (((uVar9 < 0x23) && (pbVar2[0x26461] <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
       (((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(pbVar2[0x26461] & 0x1f) & 1) != 0 &&
        (uVar10 = uVar11 | 4, *(int *)(pbVar2 + 0x36bc4) != 0)))) {
      uVar10 = uVar11;
    }
    uVar9 = (ulong)pbVar2[0x39690];
    uVar11 = uVar10;
    if ((((uVar9 < 0x23) && (pbVar2[0x39691] <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
        ((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(pbVar2[0x39691] & 0x1f) & 1) != 0)) &&
       (uVar11 = uVar10 | 8, *(int *)(pbVar2 + 0x49df4) != 0)) {
      uVar11 = uVar10;
    }
    uVar9 = (ulong)pbVar2[0x4c8c0];
    uVar10 = uVar11;
    if (((uVar9 < 0x23) && (pbVar2[0x4c8c1] <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
       (((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(pbVar2[0x4c8c1] & 0x1f) & 1) != 0 &&
        (uVar10 = uVar11 | 0x10, *(int *)(pbVar2 + 0x5d024) != 0)))) {
      uVar10 = uVar11;
    }
    uVar9 = (ulong)pbVar2[0x5faf0];
    uVar11 = uVar10;
    if (((uVar9 < 0x23) && (pbVar2[0x5faf1] <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
       (((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(pbVar2[0x5faf1] & 0x1f) & 1) != 0 &&
        (uVar11 = uVar10 | 0x20, *(int *)(pbVar2 + 0x70254) != 0)))) {
      uVar11 = uVar10;
    }
    uVar9 = (ulong)pbVar2[0x72d20];
    uVar10 = uVar11;
    if ((((uVar9 < 0x23) && (pbVar2[0x72d21] <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
        ((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(pbVar2[0x72d21] & 0x1f) & 1) != 0)) &&
       (uVar10 = uVar11 | 0x40, *(int *)(pbVar2 + 0x83484) != 0)) {
      uVar10 = uVar11;
    }
    uVar9 = (ulong)pbVar2[0x85f50];
    uVar11 = uVar10;
    if (((uVar9 < 0x23) && (pbVar2[0x85f51] <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
       (((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(pbVar2[0x85f51] & 0x1f) & 1) != 0 &&
        (uVar11 = uVar10 | 0x80, *(int *)(pbVar2 + 0x966b4) != 0)))) {
      uVar11 = uVar10;
    }
    uVar9 = (ulong)pbVar2[0x99180];
    uVar10 = uVar11;
    if (((uVar9 < 0x23) && (pbVar2[0x99181] <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
       (((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(pbVar2[0x99181] & 0x1f) & 1) != 0 &&
        (uVar10 = uVar11 | 0x100, *(int *)(pbVar2 + 0xa98e4) != 0)))) {
      uVar10 = uVar11;
    }
    uVar9 = (ulong)pbVar2[0xac3b0];
    uVar11 = uVar10;
    if ((((uVar9 < 0x23) && (pbVar2[0xac3b1] <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
        ((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(pbVar2[0xac3b1] & 0x1f) & 1) != 0)) &&
       (uVar11 = uVar10 | 0x200, *(int *)(pbVar2 + 0xbcb14) != 0)) {
      uVar11 = uVar10;
    }
    uVar10 = uVar11 - (uVar11 >> 1 & 0x55555555);
    uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
    uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
    uVar10 = uVar10 + (uVar10 >> 8);
    uVar10 = (uint)((float)(uVar10 + (uVar10 >> 0x10) & 0x3f) * 0.6 + 0.5);
    uVar9 = (ulong)uVar10;
    if (uVar10 != 0) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      puVar12 = (undefined4 *)PTR_DAT_04bb39d8;
      do {
        puVar5 = (uint *)nn::os::GetTlsValue(*puVar12);
        uVar10 = *puVar5 ^ *puVar5 << 0xb;
        uVar4 = puVar5[3];
        *puVar5 = puVar5[1];
        puVar5[1] = puVar5[2];
        uVar3 = uVar10 >> 8 ^ uVar4 >> 0x13 ^ uVar10 ^ uVar4;
        puVar5[2] = uVar4;
        puVar5[3] = uVar3;
        uVar10 = uVar11 - (uVar11 >> 1 & 0x55555555);
        uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
        iVar6 = (int)(uVar9 * uVar3 >> 0x20);
        uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
        uVar10 = uVar10 + (uVar10 >> 8);
        if ((int)(uVar10 + (uVar10 >> 0x10) & 0x3f) < iVar6 + 1) {
          local_64 = 0xffffffff;
          pcStack_70 = "GotoEventPlazaForCountdown";
          local_78 = puVar1;
          FUN_021be8c0(&local_64,&local_78,1);
          local_64 = CONCAT22(local_64._2_2_,0x1ff);
          local_78._6_2_ = (ushort)((ulong)local_78 >> 0x30) & 0xff00;
          local_78 = (undefined *)CONCAT26(local_78._6_2_,0xff0000000000);
          if (-1 < DAT_053d0e90) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e90,&local_78,&local_64,2,0);
          }
        }
        else {
          if (uVar11 != 0) {
            iVar6 = iVar6 + 2;
            uVar10 = uVar11;
            do {
              iVar6 = iVar6 + -1;
              if (iVar6 < 2) {
                uVar10 = uVar10 - 1 & (uVar10 ^ 0xffffffff);
                uVar10 = uVar10 - (uVar10 >> 1 & 0x55555555);
                uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
                uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
                uVar10 = uVar10 + (uVar10 >> 8);
                uVar10 = uVar10 + (uVar10 >> 0x10) & 0x3f;
                goto LAB_021bf5f0;
              }
              uVar10 = uVar10 - 1 & uVar10;
            } while (uVar10 != 0);
          }
          uVar10 = 0xffffffff;
LAB_021bf5f0:
          local_78 = PTR_DAT_04bb2020 + 0x10;
          pcStack_70 = "GotoEventPlazaForCountdown";
          local_64 = uVar10;
          FUN_021be8c0(&local_64,&local_78,1);
          local_64._0_2_ = CONCAT11(1,(char)uVar10);
          local_78._6_2_ = (ushort)((ulong)local_78 >> 0x30) & 0xff00;
          local_78 = (undefined *)CONCAT26(local_78._6_2_,0xff0000000000);
          if (-1 < DAT_053d0e90) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e90,&local_78,&local_64,2,0);
          }
          if (uVar10 < 10) {
            uVar11 = uVar11 & (1 << (ulong)(uVar10 & 0x1f) ^ 0xffffffffU);
          }
          puVar12 = (undefined4 *)PTR_DAT_04bb39d8;
        }
        uVar9 = uVar9 - 1;
      } while ((int)uVar9 != 0);
    }
    *(char *)(param_1 + 0x55e44) = '\x01';
    if ((((local_8c & 1) != 0) && (*(long *)(lVar7 + 0xd0) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0xd0) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  return;
}

