
void FUN_00a88244(long param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint *puVar9;
  float fVar10;
  
  puVar1 = (undefined4 *)(param_1 + 0x653fc);
  *(undefined4 *)(param_1 + 0x65410) = param_2;
  uVar5 = *(int *)(param_1 + 0x65410) - 3;
  if (uVar5 < 0xd) {
    uVar7 = *(undefined4 *)(&DAT_04168224 + (long)(int)uVar5 * 4);
  }
  else {
    uVar7 = 0;
  }
  *(undefined4 *)(param_1 + 0x6542c) = uVar7;
  switch(*(undefined4 *)(param_1 + 0x65410)) {
  case 1:
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x65430) = 0;
    *(undefined8 *)(param_1 + 0x65438) = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    puVar6 = PTR_DAT_04bb6298;
    *(undefined2 *)(param_1 + 0x65444) = 0;
    sVar4 = *(short *)puVar6;
    if (sVar4 != -1) {
      puVar8 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar8 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((((*puVar8 >> 0x1e & 1) != 0) &&
           (uVar5 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 10) - (uint)DAT_0534e320,
           uVar5 < DAT_0534e300)) &&
          (puVar8 = *(uint **)(DAT_0534e308 + (long)(int)uVar5 * 8), puVar8 != (uint *)0x0)) &&
         (uVar5 = *puVar8, uVar5 != 0 && puVar8 != (uint *)(ulong)uVar5)) {
        puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar5);
        if (((*puVar9 != 0) && (uVar5 = puVar9[1], uVar5 != 0)) && ((ulong)(ushort)puVar9[2] != 0))
        {
          lVar2 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar2 != 0) {
            uVar3 = 0;
            if ((ulong)uVar5 != 0) {
              uVar3 = (uint)((ulong)((long)puVar8 - lVar2) / (ulong)uVar5);
            }
            if (*puVar9 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if (((uVar3 < *(uint *)PTR_DAT_04bc0e58) &&
                (*(short *)(*(long *)(PTR_DAT_04bc0e58 + 8) + (long)(int)uVar3 * 2) == 3)) &&
               ((fVar10 = (float)FUN_0163f214((undefined8 *)(param_1 + 0x65438)), 4.5 <= fVar10 &&
                (fVar10 < 18.5)))) {
              *(undefined2 *)(param_1 + 0x65444) = 0x101;
            }
          }
        }
      }
    }
    break;
  default:
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 0x65430) = 0;
    break;
  case 9:
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x65430) = 0;
    *(undefined8 *)(param_1 + 0x65438) = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    puVar6 = PTR_DAT_04bb6298;
    *(undefined1 *)(param_1 + 0x65444) = 0;
    sVar4 = *(short *)puVar6;
    if (sVar4 != -1) {
      puVar8 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar8 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((((*puVar8 >> 0x1e & 1) != 0) &&
           (uVar5 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 10) - (uint)DAT_0534e320,
           uVar5 < DAT_0534e300)) &&
          (puVar8 = *(uint **)(DAT_0534e308 + (long)(int)uVar5 * 8), puVar8 != (uint *)0x0)) &&
         (uVar5 = *puVar8, uVar5 != 0 && puVar8 != (uint *)(ulong)uVar5)) {
        puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar5);
        if (((*puVar9 != 0) && (uVar5 = puVar9[1], uVar5 != 0)) && ((ulong)(ushort)puVar9[2] != 0))
        {
          lVar2 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar2 != 0) {
            uVar3 = 0;
            if ((ulong)uVar5 != 0) {
              uVar3 = (uint)((ulong)((long)puVar8 - lVar2) / (ulong)uVar5);
            }
            if (*puVar9 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if (((uVar3 < *(uint *)PTR_DAT_04bc0e58) &&
                (*(short *)(*(long *)(PTR_DAT_04bc0e58 + 8) + (long)(int)uVar3 * 2) == 3)) &&
               ((fVar10 = (float)FUN_0163f214((undefined8 *)(param_1 + 0x65438)), fVar10 < 18.5 &&
                ((4.5 <= fVar10 && (*(char *)(param_1 + 0x65445) != '\0')))))) {
              *(undefined1 *)(param_1 + 0x65444) = 1;
            }
          }
        }
      }
    }
  }
  switch(*(undefined4 *)(param_1 + 0x65410)) {
  case 1:
    *(undefined8 *)(param_1 + 0x65400) = 0;
    *(undefined8 *)(param_1 + 0x65408) = 0;
    return;
  default:
    *(undefined4 *)(param_1 + 0x65400) = 0;
    *(undefined4 *)(param_1 + 0x65408) = 0;
    return;
  case 6:
  case 7:
  case 0xc:
  case 0xd:
    *(undefined4 *)(param_1 + 0x65408) = 0;
    *(undefined4 *)(param_1 + 0x65400) = 0x3f800000;
    return;
  case 8:
  case 10:
  case 0xb:
    *(undefined4 *)(param_1 + 0x65400) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x65408) = 0x3f800000;
    return;
  case 9:
    *(undefined1 **)(param_1 + 0x65400) = &DAT_3f8000003f800000;
    *(undefined1 **)(param_1 + 0x65408) = &DAT_3f8000003f800000;
    return;
  }
}

