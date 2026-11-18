
undefined8 FUN_034224f0(long param_1,byte *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  short sVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint *puVar10;
  byte local_4 [4];
  
  sVar6 = *(short *)PTR_DAT_04bb6298;
  if (sVar6 != -1) {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8;
    if (0xff < (uint)(int)sVar6) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      return 1;
    }
  }
  puVar9 = *(uint **)(param_1 + 0x10);
  if ((puVar9 != (uint *)0x0) && (uVar4 = *puVar9, uVar4 != 0 && puVar9 != (uint *)(ulong)uVar4)) {
    puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
    if ((*puVar10 != 0) && ((uVar4 = puVar10[1], uVar4 != 0 && ((ulong)(ushort)puVar10[2] != 0)))) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar10 + lVar2 + (ulong)(ushort)puVar10[2] * 8;
      if (lVar2 != 0) {
        uVar3 = 0;
        if ((ulong)uVar4 != 0) {
          uVar3 = (uint)((ulong)((long)puVar9 - lVar2) / (ulong)uVar4);
        }
        if (*puVar10 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < DAT_05326ec0) &&
           (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2),
           uVar5 < 0xbd && (uVar5 & 0xfffe) == 0x1a)) {
          local_4[0] = *param_2;
          if (7 < local_4[0]) {
            local_4[0] = 0xff;
          }
          uVar7 = FUN_02669430(local_4);
          if (((uVar7 & 1) == 0) &&
             (((DAT_0537d558 == 0 || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
              (*(int *)(DAT_0537d558 + 0x80) != 1)))) {
            uVar8 = FUN_0235a840(param_2);
            return uVar8;
          }
        }
      }
    }
  }
  return 1;
}

