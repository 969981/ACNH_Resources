
byte FUN_01af4a7c(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  ushort uVar8;
  uint *puVar9;
  uint *puVar10;
  
  puVar9 = *(uint **)(param_1 + 0x10);
  if (puVar9 == (uint *)0x0) {
    uVar8 = 0xbc;
  }
  else {
    uVar3 = *puVar9;
    if (uVar3 != 0 && puVar9 != (uint *)(ulong)uVar3) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
      if (((*puVar10 != 0) && (uVar3 = puVar10[1], uVar3 != 0)) && ((ulong)(ushort)puVar10[2] != 0))
      {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar9 - lVar1) / (ulong)uVar3);
          }
          if (*puVar10 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326ec0) &&
             (uVar8 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar8 < 0xbd))
          goto LAB_01af4b30;
        }
      }
    }
    uVar8 = 0;
  }
LAB_01af4b30:
  if (uVar8 == 0x7f) {
    iVar6 = FUN_0277d6c4(param_1 + 8);
    puVar4 = PTR_DAT_04bb46f0;
    if (iVar6 != 0x3100) {
      puVar9 = *(uint **)(param_1 + 0x10);
      if (puVar9 == (uint *)0x0) {
        uVar8 = 0xbc;
      }
      else {
        uVar3 = *puVar9;
        uVar8 = 0;
        if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
          puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
          uVar8 = 0;
          if (*puVar10 != 0) {
            uVar3 = puVar10[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
              lVar1 = 0xc;
              if (*(char *)((long)puVar10 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
              if (lVar1 != 0) {
                uVar2 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar9 - lVar1) / (ulong)uVar3);
                }
                if (*puVar10 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar8 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar8 < 0xbd))
                goto LAB_01af4bfc;
              }
            }
            uVar8 = 0;
          }
        }
      }
LAB_01af4bfc:
      if (uVar8 != 0x7f) goto LAB_01af4c68;
    }
    uVar3 = *(uint *)(param_1 + 0xc);
    uVar7 = FUN_0261d530(*(undefined8 *)PTR_DAT_04bb46f0,uVar3);
    bVar5 = 0;
    if (((uVar7 & 1) != 0) && ((uVar3 & 0xffff) < 0x800)) {
      bVar5 = *(byte *)(*(long *)puVar4 + ((ulong)(uVar3 >> 3) & 0x1fff) + 0xe99e0) >>
              (ulong)(uVar3 & 7) & 1;
    }
  }
  else {
LAB_01af4c68:
    bVar5 = 0;
  }
  return bVar5;
}

