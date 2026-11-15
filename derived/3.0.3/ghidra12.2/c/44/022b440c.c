
undefined8
FUN_022b440c(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  uint local_58;
  undefined4 local_54;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  lVar7 = *(long *)puVar2;
  if (lVar7 == 0) {
    return 0;
  }
  lVar8 = *(long *)(lVar8 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if (*(uint *)(lVar8 + 0x1d8) <= uVar3) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return 0;
  }
  local_60 = 0;
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uVar3 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar2 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
         (puVar5 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar5 != (uint *)0x0)) {
        local_58 = 0;
        uVar3 = *puVar5;
        if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
          puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
          local_58 = 0;
          if (*puVar6 != 0) {
            uVar3 = puVar6[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
              lVar7 = 0xc;
              if (*(char *)((long)puVar6 + 10) != '\0') {
                lVar7 = 0x1c;
              }
              lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
              if (lVar7 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar5 - lVar7) / (ulong)uVar3);
                }
                if (*puVar6 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (local_58 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                   local_58 < 0xbd)) goto LAB_022b45c4;
              }
            }
            local_58 = 0;
          }
        }
        goto LAB_022b45c4;
      }
    }
  }
  local_58 = 0xbc;
LAB_022b45c4:
  local_54 = 0x9d;
  if (local_58 == 0x9d) {
    lVar7 = FUN_0251b3b0(param_1 + 0x10,0);
    lVar8 = FUN_0251bdc4(param_1 + 0x10,0);
    if ((lVar7 != 0) && (lVar8 != 0)) {
      uVar4 = FUN_022ad160(param_1,param_2,lVar7,lVar8 + 4,param_3,param_4,param_5 & 1);
      return uVar4;
    }
  }
  return 0;
}

