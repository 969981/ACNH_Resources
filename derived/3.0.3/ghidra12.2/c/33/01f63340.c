
void FUN_01f63340(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  short sVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined **local_70;
  uint *puStack_68;
  int *local_60;
  uint local_38;
  int local_34;
  
  puVar3 = PTR_DAT_04bb2020;
  local_70 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  puStack_68 = (uint *)0x40d53d9;
  sVar5 = FUN_02196ed0(*(long *)(param_1 + 8) + 0x508,&local_70);
  if (((sVar5 == 2) && (*(byte *)(*DAT_0537d558 + 0x476) < 2)) && (DAT_05574040 != 0)) {
    puVar8 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar8 + 0x38))();
      if (lVar6 == 0) {
        return;
      }
      lVar6 = lVar6 + 0x70;
    }
    else {
      if (puVar8 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar8[0x26] == (long *)0x0) {
        return;
      }
      lVar6 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
      if (lVar6 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar6 + 0xd0) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar6 + 0xd0), puVar8 == (undefined8 *)0x0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)*puVar8)();
      uVar7 = uVar7 & 0xffffffff;
    }
    puVar4 = PTR_DAT_04bc27f0;
    pbVar9 = (byte *)(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
    uVar11 = (ulong)*pbVar9;
    if (((uVar11 < 0x23) && (pbVar9[1] <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
       ((((uint)(&DAT_053e6eb8)[uVar11] >> (ulong)(pbVar9[1] & 0x1f) & 1) != 0 &&
        (*(int *)(pbVar9 + 0x10764) == 0)))) {
      local_70 = (undefined **)(puVar3 + 0x10);
      local_34 = 0;
      puStack_68 = (uint *)0x40d53d9;
      sVar5 = FUN_02196ed0(&local_34,&local_70);
      uVar14 = (uint)(sVar5 == 1);
      pbVar9 = (byte *)(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
    }
    else {
      uVar14 = 0;
    }
    uVar11 = (ulong)pbVar9[0x13230];
    if ((((uVar11 < 0x23) && (pbVar9[0x13231] <= (byte)puVar4[uVar11])) &&
        (((uint)(&DAT_053e6eb8)[uVar11] >> (ulong)(pbVar9[0x13231] & 0x1f) & 1) != 0)) &&
       (*(int *)(pbVar9 + 0x23994) == 0)) {
      local_34 = 1;
      local_70 = (undefined **)(puVar3 + 0x10);
      puStack_68 = (uint *)0x40d53d9;
      sVar5 = FUN_02196ed0(&local_34,&local_70);
      uVar14 = uVar14 | (uint)(sVar5 == 1) << 1;
      pbVar9 = (byte *)(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
    }
    uVar11 = (ulong)pbVar9[0x26460];
    if (((uVar11 < 0x23) && (pbVar9[0x26461] <= (byte)puVar4[uVar11])) &&
       ((((uint)(&DAT_053e6eb8)[uVar11] >> (ulong)(pbVar9[0x26461] & 0x1f) & 1) != 0 &&
        (*(int *)(pbVar9 + 0x36bc4) == 0)))) {
      local_34 = 2;
      local_70 = (undefined **)(puVar3 + 0x10);
      puStack_68 = (uint *)0x40d53d9;
      sVar5 = FUN_02196ed0(&local_34,&local_70);
      uVar14 = uVar14 | (uint)(sVar5 == 1) << 2;
      pbVar9 = (byte *)(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
    }
    uVar11 = (ulong)pbVar9[0x39690];
    if (((uVar11 < 0x23) && (pbVar9[0x39691] <= (byte)puVar4[uVar11])) &&
       ((((uint)(&DAT_053e6eb8)[uVar11] >> (ulong)(pbVar9[0x39691] & 0x1f) & 1) != 0 &&
        (*(int *)(pbVar9 + 0x49df4) == 0)))) {
      local_34 = 3;
      local_70 = (undefined **)(puVar3 + 0x10);
      puStack_68 = (uint *)0x40d53d9;
      sVar5 = FUN_02196ed0(&local_34,&local_70);
      uVar14 = uVar14 | (uint)(sVar5 == 1) << 3;
      pbVar9 = (byte *)(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
    }
    uVar11 = (ulong)pbVar9[0x4c8c0];
    if ((((uVar11 < 0x23) && (pbVar9[0x4c8c1] <= (byte)puVar4[uVar11])) &&
        (((uint)(&DAT_053e6eb8)[uVar11] >> (ulong)(pbVar9[0x4c8c1] & 0x1f) & 1) != 0)) &&
       (*(int *)(pbVar9 + 0x5d024) == 0)) {
      local_34 = 4;
      local_70 = (undefined **)(puVar3 + 0x10);
      puStack_68 = (uint *)0x40d53d9;
      sVar5 = FUN_02196ed0(&local_34,&local_70);
      uVar14 = uVar14 | (uint)(sVar5 == 1) << 4;
      pbVar9 = (byte *)(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
    }
    uVar11 = (ulong)pbVar9[0x5faf0];
    if (((uVar11 < 0x23) && (pbVar9[0x5faf1] <= (byte)puVar4[uVar11])) &&
       ((((uint)(&DAT_053e6eb8)[uVar11] >> (ulong)(pbVar9[0x5faf1] & 0x1f) & 1) != 0 &&
        (*(int *)(pbVar9 + 0x70254) == 0)))) {
      local_34 = 5;
      local_70 = (undefined **)(puVar3 + 0x10);
      puStack_68 = (uint *)0x40d53d9;
      sVar5 = FUN_02196ed0(&local_34,&local_70);
      uVar14 = uVar14 | (uint)(sVar5 == 1) << 5;
      pbVar9 = (byte *)(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
    }
    uVar11 = (ulong)pbVar9[0x72d20];
    if (((uVar11 < 0x23) && (pbVar9[0x72d21] <= (byte)puVar4[uVar11])) &&
       ((((uint)(&DAT_053e6eb8)[uVar11] >> (ulong)(pbVar9[0x72d21] & 0x1f) & 1) != 0 &&
        (*(int *)(pbVar9 + 0x83484) == 0)))) {
      local_34 = 6;
      local_70 = (undefined **)(puVar3 + 0x10);
      puStack_68 = (uint *)0x40d53d9;
      sVar5 = FUN_02196ed0(&local_34,&local_70);
      uVar14 = uVar14 | (uint)(sVar5 == 1) << 6;
      pbVar9 = (byte *)(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
    }
    uVar11 = (ulong)pbVar9[0x85f50];
    if ((((uVar11 < 0x23) && (pbVar9[0x85f51] <= (byte)puVar4[uVar11])) &&
        (((uint)(&DAT_053e6eb8)[uVar11] >> (ulong)(pbVar9[0x85f51] & 0x1f) & 1) != 0)) &&
       (*(int *)(pbVar9 + 0x966b4) == 0)) {
      local_34 = 7;
      local_70 = (undefined **)(puVar3 + 0x10);
      puStack_68 = (uint *)0x40d53d9;
      sVar5 = FUN_02196ed0(&local_34,&local_70);
      uVar14 = uVar14 | (uint)(sVar5 == 1) << 7;
      pbVar9 = (byte *)(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
    }
    uVar11 = (ulong)pbVar9[0x99180];
    if (((uVar11 < 0x23) && (pbVar9[0x99181] <= (byte)puVar4[uVar11])) &&
       ((((uint)(&DAT_053e6eb8)[uVar11] >> (ulong)(pbVar9[0x99181] & 0x1f) & 1) != 0 &&
        (*(int *)(pbVar9 + 0xa98e4) == 0)))) {
      local_34 = 8;
      local_70 = (undefined **)(puVar3 + 0x10);
      puStack_68 = (uint *)0x40d53d9;
      sVar5 = FUN_02196ed0(&local_34,&local_70);
      uVar14 = uVar14 | (uint)(sVar5 == 1) << 8;
      pbVar9 = (byte *)(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
    }
    uVar11 = (ulong)pbVar9[0xac3b0];
    if (((uVar11 < 0x23) && (pbVar9[0xac3b1] <= (byte)puVar4[uVar11])) &&
       ((((uint)(&DAT_053e6eb8)[uVar11] >> (ulong)(pbVar9[0xac3b1] & 0x1f) & 1) != 0 &&
        (*(int *)(pbVar9 + 0xbcb14) == 0)))) {
      local_34 = 9;
      local_70 = (undefined **)(puVar3 + 0x10);
      puStack_68 = (uint *)0x40d53d9;
      sVar5 = FUN_02196ed0(&local_34,&local_70);
      uVar14 = uVar14 | (uint)(sVar5 == 1) << 9;
    }
    uVar2 = uVar14 - (uVar14 >> 1 & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
    uVar2 = uVar2 + (uVar2 >> 8);
    uVar2 = uVar2 + (uVar2 >> 0x10) & 0x3f;
    if (uVar2 != 0) {
      lVar10 = *(long *)(param_1 + 8);
      uVar12 = *(uint *)(lVar10 + 0x288);
      *(undefined4 *)(lVar10 + 0x288) = *(undefined4 *)(lVar10 + 0x28c);
      uVar12 = uVar12 ^ uVar12 << 0xb;
      *(undefined4 *)(lVar10 + 0x28c) = *(undefined4 *)(lVar10 + 0x290);
      uVar1 = *(uint *)(lVar10 + 0x294);
      *(uint *)(lVar10 + 0x290) = uVar1;
      uVar12 = uVar12 >> 8 ^ uVar1 >> 0x13 ^ uVar12 ^ uVar1;
      *(uint *)(lVar10 + 0x294) = uVar12;
      local_38 = 0xffffffff;
      if ((uVar14 != 0) && (uVar12 = (uint)((ulong)uVar12 * (ulong)uVar2 >> 0x20), uVar12 < uVar2))
      {
        iVar13 = uVar12 + 2;
        do {
          iVar13 = iVar13 + -1;
          if (iVar13 < 2) {
            uVar14 = uVar14 - 1 & (uVar14 ^ 0xffffffff);
            uVar14 = uVar14 - (uVar14 >> 1 & 0x55555555);
            uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
            uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
            uVar14 = uVar14 + (uVar14 >> 8);
            local_38 = uVar14 + (uVar14 >> 0x10) & 0x3f;
            break;
          }
          uVar14 = uVar14 - 1 & uVar14;
        } while (uVar14 != 0);
      }
      local_34 = 0;
      if (DAT_053e0208 != 0) {
        puStack_68 = &local_38;
        local_70 = &PTR_FUN_04a770e0;
        local_60 = &local_34;
        if (*(int *)(DAT_053e0208 + 0xb88) != 0) {
          lVar10 = (long)*(int *)(DAT_053e0208 + 0xb88) << 3;
          puVar8 = *(undefined8 **)(DAT_053e0208 + 0xb90);
          do {
            (*(code *)*local_70)(&local_70,*puVar8);
            lVar10 = lVar10 + -8;
            puVar8 = puVar8 + 1;
          } while (lVar10 != 0);
          if (local_34 != 0) {
            FUN_02085e20(*(undefined8 *)(param_1 + 0x18),0,local_34,PTR_DAT_04bb6928,0);
          }
        }
      }
    }
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar6 + 0xd0) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar6 + 0xd0) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  return;
}

