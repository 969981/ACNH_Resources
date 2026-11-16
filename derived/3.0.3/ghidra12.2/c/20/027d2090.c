
void FUN_027d2090(undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 param_4,
                 undefined1 param_5,byte param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 uVar5;
  uint uVar6;
  ushort uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint *local_68;
  
  *(undefined2 *)param_1 = *(undefined2 *)param_2;
  *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)((long)param_2 + 2);
  *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_2 + 3);
  param_1[1] = param_2[1];
  puVar4 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(param_2);
  lVar11 = *(long *)puVar4;
  if (lVar11 == 0) goto LAB_027d229c;
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if ((*(uint *)(lVar12 + 0x1d8) <= uVar6) ||
     (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_027d229c;
  local_68 = (uint *)0x0;
  local_70 = *param_2;
  uStack_6c = param_2[1];
  local_78 = &PTR_FUN_04a36b50;
  uVar6 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar4 == 0) {
LAB_027d226c:
    uVar7 = 0;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_027d226c;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar6 = FUN_0277d6c4(param_2);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar6) ||
       (puVar8 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8), puVar8 == (uint *)0x0
       )) goto LAB_027d226c;
    uVar7 = 0;
    uVar6 = *puVar8;
    local_68 = puVar8;
    if ((uVar6 != 0) && (puVar8 != (uint *)(ulong)uVar6)) {
      puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
      uVar7 = 0;
      if (*puVar9 != 0) {
        uVar6 = puVar9[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar11 != 0) {
            uVar1 = 0;
            if ((ulong)uVar6 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar6);
            }
            if (*puVar9 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326d48) &&
               (uVar7 = *(ushort *)(DAT_05326d50 + (long)(int)uVar1 * 2), uVar7 < 0x52))
            goto LAB_027d2274;
          }
        }
        uVar7 = 0;
      }
    }
  }
LAB_027d2274:
  if (uVar7 == 0x49) {
    FUN_01aeb1f0(&local_78,0);
    *param_1 = local_70;
    param_1[1] = uStack_6c;
  }
LAB_027d229c:
  if (*param_3 == 0) {
    param_1[8] = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
  }
  else {
    uVar2 = *(undefined8 *)param_3;
    uVar3 = *(undefined8 *)(param_3 + 2);
    uVar10 = *(undefined8 *)(param_3 + 4);
    param_1[8] = param_3[6];
    *(undefined8 *)(param_1 + 2) = uVar2;
    *(undefined8 *)(param_1 + 4) = uVar3;
    *(undefined8 *)(param_1 + 6) = uVar10;
  }
  param_1[9] = param_4;
  *(undefined1 *)(param_1 + 10) = param_5;
  uVar5 = DAT_05453f1c;
  *(byte *)((long)param_1 + 0x2b) = param_6 & 1;
  *(undefined1 *)((long)param_1 + 0x29) = uVar5;
  return;
}

