
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0233cf00(undefined4 *param_1,long param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  ushort uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  puVar4 = PTR_DAT_04bb43c0;
  puVar1 = (undefined4 *)(param_2 + 0xc1e0);
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(puVar1);
  lVar9 = *(long *)puVar4;
  if (lVar9 == 0) goto LAB_0233d0c4;
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if ((*(uint *)(lVar10 + 0x1d8) <= uVar5) ||
     (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_0233d0c4;
  local_48 = 0;
  local_50 = *puVar1;
  uStack_4c = *(undefined4 *)(param_2 + 0xc1e4);
  uVar5 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar4 == 0) {
LAB_0233d0a0:
    uVar6 = 0xbc;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_0233d0a0;
    lVar9 = *(long *)PTR_DAT_04bc0428;
    uVar5 = FUN_0277d6c4(puVar1);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar5) ||
       (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8), puVar7 == (uint *)0x0)
       ) goto LAB_0233d0a0;
    uVar5 = *puVar7;
    uVar6 = 0;
    if ((uVar5 != 0) && (puVar7 != (uint *)(ulong)uVar5)) {
      puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar5);
      uVar6 = 0;
      if (*puVar8 != 0) {
        uVar5 = puVar8[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar9 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar5);
            }
            if (*puVar8 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar6 < 0xbd))
            goto LAB_0233d0a4;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_0233d0a4:
  if (uVar6 == 0xc) {
    uVar3 = *(undefined4 *)(param_2 + 0xc1e4);
    *param_1 = *puVar1;
    param_1[1] = uVar3;
    return;
  }
LAB_0233d0c4:
  uVar3 = DAT_0558600c;
  *param_1 = _DAT_05586008;
  param_1[1] = uVar3;
  return;
}

