
byte FUN_01a469c8(long param_1,undefined4 *param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  
  puVar4 = PTR_DAT_04bb43c0;
  local_40 = 0;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar4 == 0) {
LAB_01a46b14:
    lVar9 = *(long *)(param_1 + 8);
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_01a46b14;
    lVar9 = *(long *)PTR_DAT_04bc0428;
    uVar6 = FUN_0277d6c4(param_2);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar6) ||
       (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8), puVar7 == (uint *)0x0)
       ) goto LAB_01a46b14;
    uVar6 = *puVar7;
    lVar9 = *(long *)(param_1 + 8);
    if (uVar6 != 0 && puVar7 != (uint *)(ulong)uVar6) {
      puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar6);
      if (((*puVar8 != 0) && (uVar6 = puVar8[1], uVar6 != 0)) && ((ulong)(ushort)puVar8[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar6 != 0) {
            uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar6);
          }
          if (*puVar8 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05327190) &&
             (uVar3 = *(ushort *)(DAT_05327198 + (long)(int)uVar2 * 2), uVar6 = (uint)uVar3,
             uVar3 < 0x13e)) goto LAB_01a46b1c;
        }
      }
    }
  }
  uVar6 = 0;
LAB_01a46b1c:
  if ((uVar6 < 0x13e) && ((uint)((int)uVar6 >> 3) < 0x28)) {
    bVar5 = *(byte *)(lVar9 + (ulong)(uint)((int)uVar6 >> 3)) >> (ulong)(uVar6 & 7) & 1;
  }
  else {
    bVar5 = 0;
  }
  return bVar5;
}

