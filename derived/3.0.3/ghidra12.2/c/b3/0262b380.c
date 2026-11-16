
void FUN_0262b380(long param_1,long param_2,undefined8 param_3,uint *param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint *puVar8;
  
  uVar5 = 0;
  do {
    uVar6 = uVar5 >> 3 & 0x1fffffff;
    uVar7 = 1 << (ulong)((uint)uVar5 & 7);
    if ((uVar7 & *(byte *)(param_2 + uVar6)) != 0) {
      if ((uVar7 & *(byte *)(param_5 + uVar6)) != 0) {
        if ((uint)uVar5 - (uint)*(ushort *)(param_1 + 0xea6e0) < *(uint *)(param_1 + 0xea6c0)) {
          puVar8 = *(uint **)(*(long *)(param_1 + 0xea6c8) +
                              (ulong)*(ushort *)(param_1 + 0xea6e0) * -8 + uVar5 * 8);
          uVar7 = 0;
          if (puVar8 != (uint *)0x0) {
            uVar7 = *puVar8;
            if (uVar7 != 0 && puVar8 != (uint *)(ulong)uVar7) {
              puVar4 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
              if (((*puVar4 != 0) && (uVar7 = puVar4[1], uVar7 != 0)) &&
                 ((ulong)(ushort)puVar4[2] != 0)) {
                lVar1 = 0xc;
                if (*(char *)((long)puVar4 + 10) != '\0') {
                  lVar1 = 0x1c;
                }
                lVar1 = (long)puVar4 + lVar1 + (ulong)(ushort)puVar4[2] * 8;
                if (lVar1 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar7);
                  }
                  if (*puVar4 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < DAT_05557780) &&
                     (uVar3 = *(ushort *)(DAT_05557788 + (long)(int)uVar2 * 2), uVar7 = (uint)uVar3,
                     uVar3 < 0xb)) goto LAB_0262b494;
                }
              }
            }
            goto LAB_0262b490;
          }
        }
        else {
LAB_0262b490:
          uVar7 = 0;
        }
LAB_0262b494:
        if (uVar7 == *param_4) goto LAB_0262b3c0;
      }
      *(byte *)(param_2 + uVar6) = *(byte *)(param_2 + uVar6) & ((byte)(1 << (uVar5 & 7)) ^ 0xff);
    }
LAB_0262b3c0:
    uVar5 = uVar5 + 1;
    if ((int)uVar5 == 0x800) {
      return;
    }
  } while( true );
}

