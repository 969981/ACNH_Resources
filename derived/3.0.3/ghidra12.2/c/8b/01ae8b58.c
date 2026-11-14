
bool FUN_01ae8b58(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  
  puVar6 = *(uint **)(param_1 + 0x10);
  if (puVar6 == (uint *)0x0) {
    uVar5 = 0xbc;
    goto LAB_01ae8c64;
  }
  uVar4 = *puVar6;
  if (uVar4 != 0 && puVar6 != (uint *)(ulong)uVar4) {
    puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
    uVar4 = *puVar7;
    if (uVar4 != 0) {
      uVar8 = puVar7[1];
      if ((uVar8 == 0) || ((ulong)(ushort)puVar7[2] == 0)) {
LAB_01ae8bf0:
        uVar8 = DAT_05326ec0;
      }
      else {
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar1 == 0) goto LAB_01ae8bf0;
        uVar2 = 0;
        if ((ulong)uVar8 != 0) {
          uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar8);
        }
        if (uVar4 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        uVar8 = *(uint *)PTR_DAT_04bc00c8;
        if ((uVar2 < uVar8) &&
           (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) == 0xae)) {
          return true;
        }
      }
      uVar2 = puVar7[1];
      if ((uVar2 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar1 != 0) {
          uVar3 = 0;
          if ((ulong)uVar2 != 0) {
            uVar3 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar2);
          }
          if (uVar4 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < uVar8) &&
             (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar5 < 0xbd))
          goto LAB_01ae8c64;
        }
      }
    }
  }
  uVar5 = 0;
LAB_01ae8c64:
  return uVar5 == 0xad;
}

