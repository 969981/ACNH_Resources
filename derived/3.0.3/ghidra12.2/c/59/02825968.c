
void FUN_02825968(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  ushort uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_48 = 0;
  local_50 = *(undefined4 *)(param_2 + 0x84);
  uStack_4c = *(undefined4 *)(param_2 + 0x88);
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_50);
  uVar5 = 0;
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4((undefined4 *)(param_2 + 0x84));
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
            if ((uVar1 < DAT_05327190) &&
               (uVar5 = *(ushort *)(DAT_05327198 + (long)(int)uVar1 * 2), uVar5 < 0x13e))
            goto LAB_02825ab8;
          }
        }
      }
    }
    uVar5 = 0;
  }
LAB_02825ab8:
  if (uVar5 == 0x89) {
    uVar2 = *(undefined4 *)(param_2 + 0x88);
    *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x84);
    *(undefined4 *)((long)param_1 + 4) = uVar2;
    return;
  }
  *param_1 = 0x1fd6;
  FUN_0277d4ac(param_1);
  return;
}

