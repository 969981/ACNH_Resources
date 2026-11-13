
uint FUN_0124ef24(undefined4 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  short *psVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  short local_58 [12];
  short local_28 [2];
  undefined4 uStack_24;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4();
  lVar9 = *(long *)puVar2;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_60 = 0;
      local_68 = *param_1;
      uStack_64 = param_1[1];
      uVar3 = FUN_0277d6c4(&local_68);
      if (*(long *)puVar2 == 0) {
LAB_0124f14c:
        local_58[0] = FUN_0123cd20(param_1);
        local_58[1] = 0;
        local_58[2] = 0;
        local_58[3] = 0;
        FUN_0277d4ac(local_58);
        if (local_58[0] != -2) goto LAB_0124f244;
        _local_28 = 0xfffe;
        FUN_0277d4ac(local_28);
        lVar9 = *(long *)puVar2;
        uVar3 = FUN_0277d6c4(param_1);
        if (*(long *)puVar2 == 0) goto LAB_0124f224;
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
            (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) ||
           (uVar5 = FUN_01239cf0(local_28,param_1,1,1), (uVar5 & 1) == 0)) goto LAB_0124f224;
        FUN_01ad5d04(local_58,param_1);
        iVar4 = FUN_01ad9fd0(local_58);
        if ((iVar4 - 0x4cU < 10) && ((1 << (ulong)(iVar4 - 0x4cU & 0x1f) & 0x215U) != 0)) {
          _local_28 = CONCAT44(param_1[1],local_28);
        }
        psVar6 = local_28;
      }
      else {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0124f14c;
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_1);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
           (((puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8),
             puVar7 == (uint *)0x0 || (uVar3 = *puVar7, uVar3 == 0)) ||
            (puVar7 == (uint *)(ulong)uVar3)))) goto LAB_0124f14c;
        puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
        if (*puVar8 == 0) goto LAB_0124f14c;
        uVar3 = puVar8[1];
        if ((uVar3 == 0) || ((ulong)(ushort)puVar8[2] == 0)) {
LAB_0124f0b0:
          if ((*puVar8 != 0) && ((uVar3 = puVar8[1], uVar3 != 0 && ((ulong)(ushort)puVar8[2] != 0)))
             ) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar9 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar3);
              }
              if (*puVar8 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                 (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) == 0x9d)) {
                local_58[0] = FUN_0123f7a0(param_1);
                goto LAB_0124f124;
              }
            }
          }
          goto LAB_0124f14c;
        }
        lVar9 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar9 == 0) goto LAB_0124f0b0;
        uVar1 = 0;
        if ((ulong)uVar3 != 0) {
          uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar3);
        }
        if (*puVar8 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((DAT_05326ec0 <= uVar1) || (*(short *)(DAT_05326ec8 + (long)(int)uVar1 * 2) != 0x78))
        goto LAB_0124f0b0;
        local_58[0] = FUN_0123eba0(param_1);
LAB_0124f124:
        local_58[1] = 0;
        local_58[2] = 0;
        local_58[3] = 0;
        FUN_0277d4ac(local_58);
        uVar3 = 0;
        if (local_58[0] == -2) goto LAB_0124f228;
LAB_0124f244:
        psVar6 = local_58;
      }
      uVar3 = FUN_012342a0(psVar6,param_2);
      goto LAB_0124f228;
    }
  }
LAB_0124f224:
  uVar3 = 0;
LAB_0124f228:
  return uVar3 & 1;
}

