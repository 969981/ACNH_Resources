
undefined8 FUN_034233e0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *local_e0;
  undefined8 *local_d8;
  undefined8 ***local_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ***local_c0;
  undefined8 ***local_b8;
  undefined8 ***local_b0;
  undefined8 ***local_a8;
  undefined8 ***local_a0;
  undefined8 **local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80 [8];
  
  uVar5 = FUN_03422cc0();
  if (((uVar5 & 1) == 0) && (uVar5 = FUN_03422a60(param_1,param_2), (uVar5 & 1) == 0)) {
LAB_03423650:
    uVar6 = 0;
  }
  else {
    puVar2 = PTR_DAT_04bc0510;
    puVar1 = PTR_DAT_04bb43c0;
    local_d0 = (undefined8 ***)0x0;
    local_e0 = PTR_DAT_04bc0510 + 0x10;
    local_d8 = (undefined8 *)*param_1;
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_d8);
    if (*(long *)puVar1 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_1);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
           (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8), lVar8 != 0)) {
          local_d0 = (undefined8 ***)lVar8;
        }
      }
    }
    iVar4 = FUN_01afcfa0(&local_e0);
    if (iVar4 == 0) {
      local_d8 = (undefined8 *)*param_1;
      local_e0 = puVar2 + 0x10;
      lVar8 = *(long *)puVar1;
      local_d0 = (undefined8 ***)0x0;
      uVar3 = FUN_0277d6c4(&local_d8);
      if (*(long *)puVar1 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(param_1);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
             (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8), lVar8 != 0)) {
            local_d0 = (undefined8 ***)lVar8;
          }
        }
      }
      uVar5 = FUN_01ae6580(&local_e0);
      if ((uVar5 & 1) == 0) {
        iVar4 = FUN_01ad7260(&local_e0);
        if (iVar4 == 0) goto LAB_03423598;
      }
      else {
        uVar5 = FUN_01affd70(&local_e0);
        if ((uVar5 & 1) == 0) {
LAB_03423598:
          local_e0 = (undefined *)0x0;
          local_d8 = (undefined8 *)0x0;
          local_c0 = &local_b8;
          local_b8 = &local_b0;
          local_d0 = &local_c0;
          local_b0 = &local_a8;
          local_a8 = &local_a0;
          local_a0 = &local_98;
          local_98 = &local_90;
          local_90 = &local_88;
          local_88 = 0;
          if (local_80 != (undefined8 *)0x0) {
            local_e0 = (undefined *)0x800000000;
            local_d8 = local_80;
          }
          pppuStack_c8 = local_d0;
          FUN_0264cdf0(&local_e0,param_1);
          if ((int)local_e0 != 0) {
            iVar4 = 0;
            lVar8 = (long)(int)local_e0 << 3;
            puVar7 = local_d8;
            do {
              uVar5 = FUN_01b00960(*puVar7);
              if ((((uint)(uVar5 >> 7) & 0x1ffffff) < 0x7d) &&
                 ((*(uint *)(param_3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> (ulong)((uint)uVar5 & 0x1f)
                  & 1) != 0)) {
                if (0 < iVar4) goto LAB_034234d4;
                iVar4 = iVar4 + 1;
              }
              puVar7 = puVar7 + 1;
              lVar8 = lVar8 + -8;
            } while (lVar8 != 0);
          }
          goto LAB_03423650;
        }
      }
    }
LAB_034234d4:
    uVar6 = 1;
  }
  return uVar6;
}

