
void FUN_0262aae0(long param_1,long param_2,uint *param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint *puVar9;
  
  if ((int)*param_3 < 0x53) {
    uVar3 = *param_3;
    uVar6 = 0;
    do {
      uVar7 = uVar6 >> 3 & 0x1fffffff;
      uVar8 = 1 << (ulong)((uint)uVar6 & 7);
      if (((uVar8 & *(byte *)(param_2 + uVar7)) == 0) && ((uVar8 & *(byte *)(param_4 + uVar7)) != 0)
         ) {
        if ((uint)uVar6 - (uint)*(ushort *)(param_1 + 0xea6e0) < *(uint *)(param_1 + 0xea6c0)) {
          puVar9 = *(uint **)(*(long *)(param_1 + 0xea6c8) +
                              (ulong)*(ushort *)(param_1 + 0xea6e0) * -8 + uVar6 * 8);
          uVar8 = 0;
          if (puVar9 != (uint *)0x0) {
            uVar8 = *puVar9;
            if (uVar8 != 0 && puVar9 != (uint *)(ulong)uVar8) {
              puVar5 = (uint *)((long)puVar9 - (long)(ulong)uVar8);
              if (((*puVar5 != 0) && (uVar8 = puVar5[1], uVar8 != 0)) &&
                 ((ulong)(ushort)puVar5[2] != 0)) {
                lVar1 = 0xc;
                if (*(char *)((long)puVar5 + 10) != '\0') {
                  lVar1 = 0x1c;
                }
                lVar1 = (long)puVar5 + lVar1 + (ulong)(ushort)puVar5[2] * 8;
                if (lVar1 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar8 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar9 - lVar1) / (ulong)uVar8);
                  }
                  if (*puVar5 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < DAT_055577b0) &&
                     (uVar4 = *(ushort *)(DAT_055577b8 + (long)(int)uVar2 * 2), uVar8 = (uint)uVar4,
                     uVar4 < 0x53)) goto LAB_0262abec;
                }
              }
            }
            goto LAB_0262abe8;
          }
        }
        else {
LAB_0262abe8:
          uVar8 = 0;
        }
LAB_0262abec:
        if (uVar8 == uVar3) {
          *(byte *)(param_2 + uVar7) = (byte)(1 << (uVar6 & 7)) | *(byte *)(param_2 + uVar7);
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 != 0x800);
  }
  return;
}

