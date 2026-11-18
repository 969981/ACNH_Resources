
byte FUN_0355180c(long param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  puVar5 = PTR_DAT_04bc0510;
  puVar4 = PTR_DAT_04bb43c0;
  piVar1 = (int *)(param_1 + 8);
  local_58 = 0;
  local_68 = PTR_DAT_04bc0510 + 0x10;
  local_60 = *param_2;
  uStack_5c = param_2[1];
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar4 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(param_2);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
         ((puVar8 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8),
          puVar8 != (uint *)0x0 && (uVar7 = *puVar8, uVar7 != 0 && puVar8 != (uint *)(ulong)uVar7)))
         ) {
        puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
        if ((*puVar9 != 0) && ((uVar7 = puVar9[1], uVar7 != 0 && ((ulong)(ushort)puVar9[2] != 0))))
        {
          lVar10 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar10 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar7);
            }
            if (*puVar9 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if (((uVar2 < DAT_05326f28) &&
                (uVar3 = *(ushort *)(DAT_05326f30 + (long)(int)uVar2 * 2), uVar3 < 0x100)) &&
               (uVar3 == 0x49)) {
              bVar6 = *piVar1 == 4;
              goto LAB_03551ae4;
            }
          }
        }
      }
    }
  }
  local_60 = *param_2;
  uStack_5c = param_2[1];
  local_68 = puVar5 + 0x10;
  lVar10 = *(long *)puVar4;
  local_58 = 0;
  uVar7 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar4 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(param_2);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if (((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
          ((puVar8 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8),
           puVar8 != (uint *)0x0 && (uVar7 = *puVar8, uVar7 != 0)))) &&
         (puVar8 != (uint *)(ulong)uVar7)) {
        puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
        if (((*puVar9 != 0) && (uVar7 = puVar9[1], uVar7 != 0)) && ((ulong)(ushort)puVar9[2] != 0))
        {
          lVar10 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar10 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar7);
            }
            if (*puVar9 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if (((uVar2 < DAT_05326ec0) &&
                (uVar3 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar3 < 0xbd)) &&
               (uVar3 == 0x9c)) {
              bVar6 = *piVar1 == 0xd;
              goto LAB_03551ae4;
            }
          }
        }
      }
    }
  }
  bVar6 = 1;
  FUN_033fd270(&local_68,piVar1,1);
  if ((int)local_68 != 0) {
    if ((int)local_68 == 1) {
      bVar6 = 0;
    }
    else {
      bVar6 = (**(code **)CONCAT44(uStack_5c,local_60))(&local_60,param_2);
    }
  }
LAB_03551ae4:
  return bVar6 & 1;
}

