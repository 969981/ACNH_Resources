
undefined8
FUN_0123e350(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined8 param_4,byte *param_5)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  undefined8 local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  byte local_38 [4];
  uint local_34;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_58 = 0;
  local_68 = PTR_DAT_04bc0510 + 0x10;
  local_60 = *param_2;
  uStack_5c = param_2[1];
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar3 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
         (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar7 != (uint *)0x0)) {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0x86);
        uVar4 = *puVar7;
        if (uVar4 != 0 && puVar7 != (uint *)(ulong)uVar4) {
          puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
          if (((*puVar8 != 0) && (uVar4 = puVar8[1], uVar4 != 0)) && ((ulong)(ushort)puVar8[2] != 0)
             ) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar9 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar4);
              }
              if (*puVar8 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                 local_34 = (uint)uVar2, uVar2 < 0xbd)) goto LAB_0123e4c4;
            }
          }
        }
        local_34 = 0;
        goto LAB_0123e4c4;
      }
    }
  }
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x86);
  local_34 = 0xbc;
LAB_0123e4c4:
  if ((local_34 != (uint)local_78) || (uVar5 = FUN_0122bf28(param_4), (uVar5 & 1) == 0)) {
    uVar6 = FUN_01239cf0(param_1,param_2,param_3 & 1,1);
    return uVar6;
  }
  if ((*param_5 < 8) &&
     (((uVar4 = FUN_02582d8c(param_5,1), uVar4 < 8 &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0')))) {
    local_38[0] = *param_5;
    local_78 = PTR_DAT_04bb2020 + 0x10;
    pcStack_70 = "PlantMoneyFlag";
    if (7 < local_38[0]) {
      local_38[0] = 0xff;
    }
    local_34 = FUN_02582fe0(local_38);
    FUN_021294b0(&local_78,1,&local_34);
  }
  if (param_1 != (undefined4 *)0x0) {
    local_34 = FUN_0277d6c4(param_2);
    FUN_012505d4(&local_78,&local_34);
    *param_1 = (uint)local_78;
    param_1[1] = local_78._4_4_;
  }
  return 1;
}

