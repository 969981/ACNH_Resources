
undefined4 FUN_02080828(undefined8 param_1,long param_2,undefined4 *param_3)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  float *pfVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  float fVar9;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_48 = 0;
  local_50 = *param_3;
  uStack_4c = param_3[1];
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_3);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
         ((puVar6 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8),
          puVar6 != (uint *)0x0 && (uVar4 = *puVar6, uVar4 != 0 && puVar6 != (uint *)(ulong)uVar4)))
         ) {
        puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
        if ((*puVar7 != 0) && ((uVar4 = puVar7[1], uVar4 != 0 && ((ulong)(ushort)puVar7[2] != 0))))
        {
          lVar8 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar6 - lVar8) / (ulong)uVar4);
            }
            if (*puVar7 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_053272b8) &&
               (uVar2 = *(ushort *)(DAT_053272c0 + (long)(int)uVar1 * 2), uVar2 < 0x13)) {
              if (uVar2 == 1) {
                return 0x3f800000;
              }
              if ((uVar2 == 0xb) &&
                 (fVar9 = *(float *)(param_2 + 4),
                 pfVar5 = (float *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x24a8) + 0xf0
                                               ))(*(long *)PTR_DAT_04bb3968 + 0x24a8),
                 *pfVar5 / 10.0 < fVar9)) {
                return 0x3f800000;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

