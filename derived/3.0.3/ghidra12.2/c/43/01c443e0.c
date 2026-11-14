
uint FUN_01c443e0(undefined8 param_1,short *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  undefined8 uVar9;
  short local_40;
  short local_3e;
  undefined4 local_3c;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_40 = *param_2;
  if (local_40 == -2) {
    return 0;
  }
  local_3e = param_2[1];
  local_38 = 0;
  local_3c = *(undefined4 *)(param_2 + 2);
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar3 == 0) {
LAB_01c4454c:
    uVar4 = 0xbc;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01c4454c;
    lVar8 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_2);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
       (puVar6 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8), puVar6 == (uint *)0x0)
       ) goto LAB_01c4454c;
    uVar4 = *puVar6;
    if (uVar4 == 0 || puVar6 == (uint *)(ulong)uVar4) {
LAB_01c44544:
      uVar4 = 0;
    }
    else {
      puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
      if (((*puVar7 == 0) || (uVar4 = puVar7[1], uVar4 == 0)) || ((ulong)(ushort)puVar7[2] == 0))
      goto LAB_01c44544;
      lVar8 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        lVar8 = 0x1c;
      }
      lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
      if (lVar8 == 0) goto LAB_01c44544;
      uVar1 = 0;
      if ((ulong)uVar4 != 0) {
        uVar1 = (uint)((ulong)((long)puVar6 - lVar8) / (ulong)uVar4);
      }
      if (*puVar7 <= uVar1) {
        uVar1 = 0xffffffff;
      }
      if ((*(uint *)PTR_DAT_04bc00c8 <= uVar1) ||
         (uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
         uVar4 = (uint)uVar2, 0xbc < uVar2)) goto LAB_01c44544;
    }
  }
  uVar4 = uVar4 - 0x69;
  if (uVar4 < 0x3d) {
    if ((1L << ((ulong)uVar4 & 0x3f) & 0x1800000000000086U) != 0) {
      uVar4 = 1;
      goto LAB_01c44580;
    }
    if ((ulong)uVar4 == 0) {
      uVar9 = *(undefined8 *)PTR_DAT_04bb4800;
      uVar5 = FUN_0277d6c4(param_2);
      uVar4 = FUN_019da4a0(uVar9,uVar5);
      uVar4 = uVar4 ^ 1;
      goto LAB_01c44580;
    }
  }
  uVar4 = 0;
LAB_01c44580:
  return uVar4 & 1;
}

