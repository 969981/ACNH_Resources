
undefined8 FUN_03422820(long param_1,byte *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint *puVar8;
  byte local_4 [4];
  
  puVar7 = *(uint **)(param_1 + 0x10);
  if ((puVar7 != (uint *)0x0) && (uVar3 = *puVar7, uVar3 != 0 && puVar7 != (uint *)(ulong)uVar3)) {
    puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    if ((*puVar8 != 0) && ((uVar3 = puVar8[1], uVar3 != 0 && ((ulong)(ushort)puVar8[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar3 != 0) {
          uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar3);
        }
        if (*puVar8 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_05326ec0) &&
           (uVar4 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2),
           uVar4 < 0xbd && (uVar4 == 0x4b || uVar4 == 0x4c))) {
          local_4[0] = *param_2;
          if (7 < local_4[0]) {
            local_4[0] = 0xff;
          }
          uVar5 = FUN_02669430(local_4);
          if (((uVar5 & 1) == 0) &&
             (((DAT_0537d558 == 0 || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
              (*(int *)(DAT_0537d558 + 0x80) != 1)))) {
            uVar6 = FUN_0235a840(param_2);
            return uVar6;
          }
        }
      }
    }
  }
  return 1;
}

