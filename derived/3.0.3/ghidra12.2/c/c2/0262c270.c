
void FUN_0262c270(long param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  ushort uVar7;
  uint *puVar8;
  
  uVar5 = 0;
  do {
    uVar6 = uVar5 >> 3 & 0x1fffffff;
    uVar3 = 1 << (ulong)((uint)uVar5 & 7);
    if (((uVar3 & *(byte *)(param_2 + uVar6)) != 0) && ((uVar3 & *(byte *)(param_3 + uVar6)) != 0))
    {
      if (((uint)uVar5 - (uint)*(ushort *)(param_1 + 0xea6e0) < *(uint *)(param_1 + 0xea6c0)) &&
         (puVar8 = *(uint **)(*(long *)(param_1 + 0xea6c8) +
                              (ulong)*(ushort *)(param_1 + 0xea6e0) * -8 + uVar5 * 8),
         puVar8 != (uint *)0x0)) {
        uVar3 = *puVar8;
        if (uVar3 == 0 || puVar8 == (uint *)(ulong)uVar3) {
LAB_0262c378:
          uVar7 = 0;
        }
        else {
          puVar4 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
          if (((*puVar4 == 0) || (uVar3 = puVar4[1], uVar3 == 0)) || ((ulong)(ushort)puVar4[2] == 0)
             ) goto LAB_0262c378;
          lVar1 = 0xc;
          if (*(char *)((long)puVar4 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar4 + lVar1 + (ulong)(ushort)puVar4[2] * 8;
          if (lVar1 == 0) goto LAB_0262c378;
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar3);
          }
          if (*puVar4 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((DAT_055577a0 <= uVar2) ||
             (uVar7 = *(ushort *)(DAT_055577a8 + (long)(int)uVar2 * 2), 2 < uVar7))
          goto LAB_0262c378;
        }
        if (uVar7 == 0) goto LAB_0262c2b0;
      }
      *(byte *)(param_2 + uVar6) = *(byte *)(param_2 + uVar6) & ((byte)(1 << (uVar5 & 7)) ^ 0xff);
    }
LAB_0262c2b0:
    uVar5 = uVar5 + 1;
    if ((int)uVar5 == 0x800) {
      return;
    }
  } while( true );
}

