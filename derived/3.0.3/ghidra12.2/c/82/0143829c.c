
void FUN_0143829c(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  ushort uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  uStack_3c = *(undefined4 *)((long)param_1 + 0x2cc);
  local_38 = 0;
  local_40 = (undefined4)param_1[0x59];
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  uVar5 = 0;
  if (*(long *)puVar2 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_1 + 0x59);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
         ((puVar6 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8),
          puVar6 != (uint *)0x0 && (uVar3 = *puVar6, uVar3 != 0 && puVar6 != (uint *)(ulong)uVar3)))
         ) {
        puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
        if ((*puVar7 != 0) && ((uVar3 = puVar7[1], uVar3 != 0 && ((ulong)(ushort)puVar7[2] != 0))))
        {
          lVar8 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar6 - lVar8) / (ulong)uVar3);
            }
            if (*puVar7 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326d48) &&
               (uVar5 = *(ushort *)(DAT_05326d50 + (long)(int)uVar1 * 2), uVar5 < 0x52))
            goto LAB_014383e4;
          }
        }
      }
    }
    uVar5 = 0;
  }
LAB_014383e4:
  if ((((uVar5 == 9) && ((int)param_1[0x50] != 2)) &&
      (uVar3 = (**(code **)(*param_1 + 0x198))(param_1), 2 < uVar3)) &&
     ((uVar4 = (**(code **)(*param_1 + 0x1b0))(param_1), (uVar4 & 1) == 0 ||
      ((int)param_1[0x50] != 2)))) {
    FUN_03ebb160(param_1 + 0x4f,2);
                    /* WARNING: Could not recover jumptable at 0x0143847c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x218))(param_1,2,0);
    return;
  }
  return;
}

