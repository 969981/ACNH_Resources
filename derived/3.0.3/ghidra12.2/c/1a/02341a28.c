
void FUN_02341a28(long param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  undefined **local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  byte local_58;
  byte local_57;
  
  FUN_0090a7d0(&local_90,*(undefined8 *)PTR_DAT_04bb4868,param_3);
  puVar2 = PTR_DAT_04bb43c0;
  bVar8 = local_57 ^ 1;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  bVar7 = local_58 ^ 1;
  uVar3 = FUN_0277d6c4(param_2);
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) goto LAB_02341c20;
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if ((*(uint *)(lVar10 + 0x1d8) <= uVar3) ||
     (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_02341c20;
  local_80 = 0;
  local_88 = *param_2;
  uStack_84 = param_2[1];
  local_90 = &PTR_FUN_04a36b50;
  uVar3 = FUN_0277d6c4(&local_88);
  if (*(long *)puVar2 == 0) {
LAB_02341bec:
    uVar3 = 0x21;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_02341bec;
    lVar9 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(param_2);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
       (puVar5 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8), puVar5 == (uint *)0x0)
       ) goto LAB_02341bec;
    uVar1 = *puVar5;
    uVar3 = 0;
    if ((uVar1 != 0) && (puVar5 != (uint *)(ulong)uVar1)) {
      puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar1);
      uVar3 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar6 + lVar9 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar5 - lVar9) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326af0) &&
               (uVar3 = (uint)*(ushort *)(DAT_05326af8 + (long)(int)uVar1 * 2), uVar3 < 0xa2))
            goto LAB_02341bf0;
          }
        }
        uVar3 = 0;
      }
    }
  }
LAB_02341bf0:
  uVar3 = uVar3 - 10;
  if ((uVar3 < 0xb) && ((0x40fU >> (ulong)(uVar3 & 0x1f) & 1) != 0)) {
    bVar8 = (&DAT_0417a6f4)[(int)uVar3];
    bVar7 = bVar8;
  }
LAB_02341c20:
  lVar9 = *(long *)(param_1 + 0x1150);
  if (lVar9 != 0) {
    if (((long)*(short *)(param_1 + 0xc1e8) != -1) && (*(short *)(param_1 + 0xc1ea) != -1)) {
      plVar4 = (long *)**(undefined8 **)
                         (*(long *)(lVar9 + 0x38) + (long)*(short *)(param_1 + 0xc1e8) * 8);
      (**(code **)(*plVar4 + 0x88))(plVar4,(int)*(short *)(param_1 + 0xc1ea),bVar8 != 0);
    }
    if (((long)*(short *)(param_1 + 0xc1ec) != -1) && (*(short *)(param_1 + 0xc1ee) != -1)) {
      plVar4 = (long *)**(undefined8 **)
                         (*(long *)(lVar9 + 0x38) + (long)*(short *)(param_1 + 0xc1ec) * 8);
      (**(code **)(*plVar4 + 0x88))(plVar4,(int)*(short *)(param_1 + 0xc1ee),bVar7 != 0);
    }
  }
  return;
}

