
void FUN_0170cfc8(long *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  puVar1 = (undefined4 *)(param_2 + 0x5c30);
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(puVar1);
  lVar8 = *(long *)puVar2;
  if (lVar8 == 0) goto LAB_0170d180;
  lVar9 = *(long *)(lVar9 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
  if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
     (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0170d180;
  local_48 = 0;
  local_50 = *puVar1;
  uStack_4c = *(undefined4 *)(param_2 + 0x5c34);
  uVar3 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 == 0) {
LAB_0170d158:
    uVar4 = 0;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0170d158;
    lVar8 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(puVar1);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
       (puVar5 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8), puVar5 == (uint *)0x0)
       ) goto LAB_0170d158;
    uVar3 = *puVar5;
    uVar4 = 0;
    if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
      puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      uVar4 = 0;
      if (*puVar7 != 0) {
        uVar3 = puVar7[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar8 != 0) {
            uVar4 = 0;
            if ((ulong)uVar3 != 0) {
              uVar4 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar3);
            }
            if (*puVar7 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if ((uVar4 < *(uint *)PTR_DAT_04bc01a8) &&
               (uVar4 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc01a8 + 8) + (long)(int)uVar4 * 2),
               uVar4 < 6)) goto LAB_0170d15c;
          }
        }
        goto LAB_0170d158;
      }
    }
  }
LAB_0170d15c:
  if (uVar4 != 0) {
    if (uVar4 < 6) {
      puVar6 = *(undefined8 **)(PTR_DAT_04bbe038 + (ulong)uVar4 * 8 + 0x30);
    }
    else {
      puVar6 = &DAT_0407ebb1;
    }
    *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
    param_1[1] = (long)puVar6;
    return;
  }
LAB_0170d180:
  lVar8 = *(long *)(PTR_PTR_04bb2238 + 8);
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = lVar8;
  return;
}

