
byte FUN_01b945e4(long param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)(param_1 + 8);
  local_40 = 0;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_48);
  uVar4 = 0;
  if (*(long *)puVar2 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if (uVar3 < *(uint *)(lVar8 + 0x1d8)) {
      uVar4 = 0;
      if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0) goto LAB_01b9472c;
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if (uVar4 < *(uint *)(lVar8 + 0x1d8)) {
        puVar5 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8);
        uVar4 = 0;
        if (puVar5 == (uint *)0x0) goto LAB_01b9472c;
        uVar4 = *puVar5;
        if (uVar4 != 0 && puVar5 != (uint *)(ulong)uVar4) {
          puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
          if (((*puVar6 != 0) && (uVar4 = puVar6[1], uVar4 != 0)) && ((ulong)(ushort)puVar6[2] != 0)
             ) {
            lVar8 = 0xc;
            if (*(char *)((long)puVar6 + 10) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar6 + lVar8 + (ulong)(ushort)puVar6[2] * 8;
            if (lVar8 != 0) {
              uVar3 = 0;
              if ((ulong)uVar4 != 0) {
                uVar3 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar4);
              }
              if (*puVar6 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05327268) &&
                 (uVar1 = *(ushort *)(DAT_05327270 + (long)(int)uVar3 * 2), uVar4 = (uint)uVar1,
                 uVar1 < 0x4f)) goto LAB_01b9472c;
            }
          }
        }
      }
    }
    uVar4 = 0;
  }
LAB_01b9472c:
  if (uVar4 < 0x4f) {
    uVar3 = uVar4 + 7;
    if (-1 < (int)uVar4) {
      uVar3 = uVar4;
    }
    if ((uint)((int)uVar3 >> 3) < 10) {
      return *(byte *)(lVar7 + (ulong)(uint)((int)uVar3 >> 3)) >> (ulong)(uVar4 & 7) & 1;
    }
  }
  return 0;
}

