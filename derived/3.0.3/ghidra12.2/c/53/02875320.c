
void FUN_02875320(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  float *local_ca0;
  uint local_c98;
  undefined8 local_c94;
  undefined4 local_c88;
  undefined4 uStack_c84;
  undefined1 auStack_c80 [4];
  float local_c7c [384];
  uint local_67c;
  undefined *local_678;
  undefined1 *local_670 [192];
  
  local_670[0] = &DAT_040b02b3;
  local_678 = PTR_DAT_04bb2020 + 0x10;
  local_c7c[0] = (float)FUN_02926a20(&local_678);
  if (local_c7c[0] == 0.0) {
    local_67c = 0;
    uVar6 = FUN_0291e130(&local_678,&local_67c,0);
    uVar7 = FUN_0291e130(local_c7c,auStack_c80,1);
    uVar3 = local_67c;
    puVar2 = PTR_DAT_04bb43c0;
    if (((uVar6 & 1) != 0) && (local_67c != 0)) {
      uVar6 = 0;
      iVar9 = 0;
      if ((uVar7 & 1) == 0) {
        lVar10 = *(long *)PTR_DAT_04bb43c0;
        do {
          puVar1 = param_1 + uVar6 * 2;
          if (1 < (uint)uVar6) {
            puVar1 = param_1;
          }
          local_c88 = *puVar1;
          uStack_c84 = puVar1[1];
          uVar5 = FUN_0277d6c4(&local_c88);
          lVar8 = *(long *)puVar2;
          if (lVar8 == 0) {
            lVar8 = 0;
          }
          else {
            lVar10 = *(long *)(lVar10 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar10 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
              FUN_02874f20(&local_c88,(int)((local_c7c[(long)iVar9 * 3 + 0x181] + 2.5) / 5.0),
                           (int)((*(float *)((long)local_670 + (long)iVar9 * 0xc) + 2.5) / 5.0));
              lVar8 = *(long *)puVar2;
              uVar6 = (ulong)((uint)uVar6 + 1);
            }
          }
          iVar9 = iVar9 + 1;
        } while ((iVar9 != 0x80) && (lVar10 = lVar8, (uint)uVar6 < uVar3));
      }
      else {
        do {
          uVar5 = (uint)uVar6;
          lVar10 = *(long *)puVar2;
          puVar1 = param_1 + uVar6 * 2;
          if (1 < uVar5) {
            puVar1 = param_1;
          }
          local_c88 = *puVar1;
          uStack_c84 = puVar1[1];
          uVar4 = FUN_0277d6c4(&local_c88);
          if (*(long *)puVar2 != 0) {
            lVar10 = *(long *)(lVar10 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              FUN_02874f20(&local_c88,(int)((local_c7c[(long)iVar9 * 3 + 0x181] + 2.5) / 5.0),
                           (int)((*(float *)((long)local_670 + (long)iVar9 * 0xc) + 2.5) / 5.0));
              if (uVar5 < 2) {
                local_ca0 = local_c7c + uVar6 * 3;
                local_c94 = 0x3f800000;
                local_c98 = uVar5;
                FUN_02294810(0,&local_ca0);
              }
              uVar6 = (ulong)(uVar5 + 1);
            }
          }
          iVar9 = iVar9 + 1;
        } while ((iVar9 != 0x80) && ((uint)uVar6 < uVar3));
      }
    }
  }
  return;
}

