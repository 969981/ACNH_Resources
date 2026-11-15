
void FUN_01f18ce0(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined *local_2610;
  undefined8 *puStack_2608;
  undefined8 local_2600;
  long *local_25f8;
  long **local_25f0;
  long **local_25e8;
  long *local_25e0 [5];
  long alStack_25b8 [990];
  undefined8 local_6c8;
  long local_6a0 [200];
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  uint local_44;
  
  puVar4 = PTR_DAT_04bb43c0;
  puVar1 = (undefined4 *)(param_1 + 0xaf3c);
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(puVar1);
  lVar11 = *(long *)puVar4;
  if (lVar11 == 0) {
    return;
  }
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (*(uint *)(lVar12 + 0x1d8) <= uVar5) {
    return;
  }
  if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return;
  }
  local_50 = 0;
  local_58 = *puVar1;
  uStack_54 = *(undefined4 *)(param_1 + 0xaf40);
  local_60 = PTR_DAT_04bc0510 + 0x10;
  uVar5 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar4 == 0) {
LAB_01f18dec:
    puVar10 = (uint *)0x0;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_01f18dec;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar5 = FUN_0277d6c4(puVar1);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if (*(uint *)(lVar11 + 0x1d8) <= uVar5) goto LAB_01f18dec;
    puVar10 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8);
  }
  lVar11 = 0xc6;
  local_25f0 = local_25e0;
  local_25e0[0] = alStack_25b8;
  local_2600._4_4_ = 0;
  local_25f8 = (long *)0x0;
  plVar8 = local_25e0[0];
  do {
    lVar11 = lVar11 + -2;
    *plVar8 = (long)(plVar8 + 5);
    plVar8[5] = (long)(plVar8 + 10);
    plVar8 = plVar8 + 10;
  } while (lVar11 != 0);
  local_6c8 = 0;
  if (local_6a0 != (long *)0x0) {
    local_2600._4_4_ = 200;
    local_25f8 = local_6a0;
  }
  local_2600 = (ulong)local_2600._4_4_ << 0x20;
  local_25e8 = local_25f0;
  FUN_01521078(&local_2600);
  local_2610 = (undefined *)CONCAT44(local_2610._4_4_,0xac);
  if (puVar10 == (uint *)0x0) {
    local_44 = 0xbc;
  }
  else {
    uVar5 = *puVar10;
    local_44 = 0;
    if ((uVar5 != 0) && (puVar10 != (uint *)(ulong)uVar5)) {
      puVar9 = (uint *)((long)puVar10 - (long)(ulong)uVar5);
      local_44 = 0;
      if (*puVar9 != 0) {
        uVar5 = puVar9[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar11 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)puVar10 - lVar11) / (ulong)uVar5);
            }
            if (*puVar9 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (local_44 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2)
               , local_44 < 0xbd)) goto LAB_01f18ef0;
          }
        }
        local_44 = 0;
      }
    }
  }
LAB_01f18ef0:
  if ((int)local_2600 != 0) {
    lVar11 = (long)(int)local_2600 << 3;
    plVar8 = local_25f8;
    if (local_44 == 0xac) {
      do {
        lVar12 = *plVar8;
        uVar7 = FUN_0277d7b4(lVar12,puVar1);
        if ((((uVar7 & 1) != 0) && (*(char *)(lVar12 + 3) == *(char *)(param_1 + 0xaf3f))) &&
           (*(int *)(lVar12 + 4) == *(int *)(param_1 + 0xaf40))) goto LAB_01f18f80;
        plVar8 = plVar8 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
    else {
      do {
        lVar12 = *plVar8;
        uVar7 = FUN_0277d7b4(lVar12,puVar1);
        if ((uVar7 & 1) != 0) {
LAB_01f18f80:
          iVar3 = *(int *)(lVar12 + 0x20);
          if (iVar3 == 0) {
            return;
          }
          local_2610 = PTR_DAT_04bb2020 + 0x10;
          puStack_2608 = &DAT_0407ebb1;
          FUN_02085e20(*(undefined8 *)(param_1 + 0x18),0,iVar3,&local_2610,0);
          *(int *)(*(long *)PTR_DAT_04bb3968 + 0xcec) = iVar3;
          *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x29c) = 0x43480000;
          lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x68);
          uVar6 = FUN_006f0400(*(float *)(param_1 + 0xaf5c) - *(float *)(lVar11 + 0x278),
                               *(float *)(param_1 + 0xaf64) - *(float *)(lVar11 + 0x280));
          *(undefined4 *)(param_1 + 0xaf50) = uVar6;
          return;
        }
        plVar8 = plVar8 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
  }
  return;
}

