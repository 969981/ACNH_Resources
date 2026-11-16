
void FUN_0268bd40(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  uint *puVar9;
  long lVar10;
  undefined **local_48;
  undefined4 local_40;
  undefined4 local_3c;
  uint *local_38;
  
  uVar2 = *(undefined1 *)((long)param_2 + 2);
  uVar3 = *(undefined1 *)((long)param_2 + 3);
  local_40 = *param_2;
  local_3c = param_2[1];
  *(undefined2 *)param_1 = *(undefined2 *)param_2;
  *(undefined1 *)((long)param_1 + 2) = uVar2;
  *(undefined1 *)((long)param_1 + 3) = uVar3;
  param_1[1] = local_3c;
  puVar5 = PTR_DAT_04bb43c0;
  local_48 = &PTR_FUN_04a36b50;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  local_38 = (uint *)0x0;
  uVar6 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar5 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_1);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
         ((local_38 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8),
          local_38 != (uint *)0x0 &&
          (uVar6 = *local_38, uVar6 != 0 && local_38 != (uint *)(ulong)uVar6)))) {
        puVar9 = (uint *)((long)local_38 - (long)(ulong)uVar6);
        if ((*puVar9 != 0) && ((uVar6 = puVar9[1], uVar6 != 0 && ((ulong)(ushort)puVar9[2] != 0))))
        {
          lVar10 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar10 != 0) {
            uVar1 = 0;
            if ((ulong)uVar6 != 0) {
              uVar1 = (uint)((ulong)((long)local_38 - lVar10) / (ulong)uVar6);
            }
            if (*puVar9 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if (((uVar1 < DAT_05327410) &&
                (uVar4 = *(ushort *)(DAT_05327418 + (long)(int)uVar1 * 2),
                uVar4 < 0x39 && (uVar4 | 4) == 0xf)) &&
               (iVar7 = FUN_01ad7260(&local_48), param_3 < iVar7)) {
              iVar7 = FUN_01ad7260(&local_48);
              if (((iVar7 != 0) &&
                  ((param_3 == 0 || (iVar7 = FUN_01ad7260(&local_48), param_3 < iVar7)))) &&
                 (puVar8 = (ushort *)FUN_01afd600(&local_48), puVar8 != (ushort *)0x0)) {
                *puVar8 = *puVar8 & 0xfff8 | (ushort)param_3 & 7;
              }
              *param_1 = local_40;
              param_1[1] = local_3c;
            }
          }
        }
      }
    }
  }
  return;
}

