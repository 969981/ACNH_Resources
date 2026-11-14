
undefined8 FUN_01512e10(long param_1)

{
  uint uVar1;
  short sVar2;
  undefined *puVar3;
  uint uVar4;
  ushort uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 == -1) {
    return 1;
  }
  puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
  if (0xff < (uint)(int)sVar2) {
    puVar6 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar6 >> 0x19 & 1) == 0) {
    return 1;
  }
  if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0))
  {
    if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 4) {
      return 1;
    }
    if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 5) {
      return 1;
    }
  }
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_1 + 4);
  lVar8 = *(long *)puVar3;
  if (lVar8 == 0) {
    return 1;
  }
  lVar9 = *(long *)(lVar9 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
  if (*(uint *)(lVar9 + 0x1d8) <= uVar4) {
    return 1;
  }
  if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return 1;
  }
  local_48 = 0;
  local_50 = *(undefined4 *)(param_1 + 4);
  uStack_4c = *(undefined4 *)(param_1 + 8);
  uVar4 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1 + 4);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
         (puVar6 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar6 != (uint *)0x0)) {
        uVar5 = 0;
        uVar4 = *puVar6;
        if ((uVar4 != 0) && (puVar6 != (uint *)(ulong)uVar4)) {
          puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
          uVar5 = 0;
          if (*puVar7 != 0) {
            uVar4 = puVar7[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
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
                if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                   uVar5 < 0xbd)) goto LAB_01513044;
              }
            }
            uVar5 = 0;
          }
        }
        goto LAB_01513044;
      }
    }
  }
  uVar5 = 0xbc;
LAB_01513044:
  if (uVar5 == 0xb8) {
    return 0;
  }
  return 1;
}

