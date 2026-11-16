
undefined8 FUN_02790980(undefined2 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ushort uVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  uVar6 = FUN_02582fe0(param_3);
  uVar6 = FUN_027906a0(uVar6,param_2,uVar6 & 0xffffffff);
  puVar4 = PTR_DAT_04bb43c0;
  if ((uVar6 & 1) == 0) {
LAB_02790b98:
    uVar7 = 0;
  }
  else {
    lVar12 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(param_2);
    lVar11 = *(long *)puVar4;
    if (lVar11 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        local_48 = 0;
        local_50 = *param_2;
        uStack_4c = param_2[1];
        uVar5 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar4 == 0) {
LAB_02790b2c:
          uVar8 = 0xbc;
        }
        else {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_02790b2c;
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(param_2);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
             (puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8),
             puVar9 == (uint *)0x0)) goto LAB_02790b2c;
          uVar5 = *puVar9;
          uVar8 = 0;
          if ((uVar5 != 0) && (puVar9 != (uint *)(ulong)uVar5)) {
            puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar5);
            uVar8 = 0;
            if (*puVar10 != 0) {
              uVar5 = puVar10[1];
              if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
                lVar11 = 0xc;
                if (*(char *)((long)puVar10 + 10) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
                if (lVar11 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar5 != 0) {
                    uVar3 = (uint)((ulong)((long)puVar9 - lVar11) / (ulong)uVar5);
                  }
                  if (*puVar10 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if ((uVar3 < DAT_05326ec0) &&
                     (uVar8 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar8 < 0xbd))
                  goto LAB_02790b30;
                }
              }
              uVar8 = 0;
            }
          }
        }
LAB_02790b30:
        if (uVar8 != 0x75) goto LAB_02790b98;
      }
    }
    uVar5 = 0;
    do {
      uVar6 = FUN_0277d7b4((long)param_1 + ((long)((ulong)uVar5 << 0x20) >> 0x1d),param_2);
      if ((((uVar6 & 1) != 0) &&
          (*(char *)((long)param_1 + (long)(int)uVar5 * 8 + 3) == *(char *)((long)param_2 + 3))) &&
         (*(int *)(param_1 + (long)(int)uVar5 * 4 + 2) == param_2[1])) goto LAB_02790b98;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 100);
    uVar7 = 1;
    puVar1 = param_1 + (ulong)*(uint *)(param_1 + 800) * 4;
    if (99 < *(uint *)(param_1 + 800)) {
      puVar1 = param_1;
    }
    *puVar1 = *(undefined2 *)param_2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)((long)param_2 + 2);
    *(undefined1 *)((long)puVar1 + 3) = *(undefined1 *)((long)param_2 + 3);
    *(undefined4 *)(puVar1 + 2) = param_2[1];
    puVar2 = (undefined8 *)((long)(param_1 + 400) + (ulong)*(uint *)(param_1 + 800) * 8);
    if (99 < *(uint *)(param_1 + 800)) {
      puVar2 = (undefined8 *)(param_1 + 400);
    }
    *puVar2 = *(undefined8 *)(DAT_04da6480 + 0x4060);
    *(int *)(param_1 + 800) = (*(int *)(param_1 + 800) + 1) % 100;
  }
  return uVar7;
}

