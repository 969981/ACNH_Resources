
undefined8 FUN_02790410(undefined2 *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  uVar7 = FUN_027906a0();
  puVar5 = PTR_DAT_04bb43c0;
  if ((uVar7 & 1) == 0) {
LAB_027905f8:
    uVar8 = 0;
  }
  else {
    lVar12 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(param_2);
    lVar11 = *(long *)puVar5;
    if (lVar11 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        local_48 = 0;
        local_50 = *param_2;
        uStack_4c = param_2[1];
        uVar6 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar5 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            lVar11 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(param_2);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
               (((puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8),
                 puVar9 != (uint *)0x0 && (uVar6 = *puVar9, uVar6 != 0)) &&
                (puVar9 != (uint *)(ulong)uVar6)))) {
              puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
              if (((*puVar10 != 0) && (uVar6 = puVar10[1], uVar6 != 0)) &&
                 ((ulong)(ushort)puVar10[2] != 0)) {
                lVar11 = 0xc;
                if (*(char *)((long)puVar10 + 10) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
                if (lVar11 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar6 != 0) {
                    uVar3 = (uint)((ulong)((long)puVar9 - lVar11) / (ulong)uVar6);
                  }
                  if (*puVar10 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if (((uVar3 < DAT_05326ec0) &&
                      (uVar4 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar4 < 0xbd)) &&
                     (uVar4 == 0x75)) goto LAB_027905f8;
                }
              }
            }
          }
        }
      }
    }
    uVar6 = 0;
    do {
      uVar7 = FUN_0277d7b4((long)param_1 + ((long)((ulong)uVar6 << 0x20) >> 0x1d),param_2);
      if ((((uVar7 & 1) != 0) &&
          (*(char *)((long)param_1 + (long)(int)uVar6 * 8 + 3) == *(char *)((long)param_2 + 3))) &&
         (*(int *)(param_1 + (long)(int)uVar6 * 4 + 2) == param_2[1])) goto LAB_027905f8;
      uVar6 = uVar6 + 1;
    } while (uVar6 != 100);
    uVar8 = 1;
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
  return uVar8;
}

