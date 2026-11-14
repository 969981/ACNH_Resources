
/* WARNING: Removing unreachable block (ram,0x01b01058) */

bool FUN_01b00ff4(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  ushort uVar8;
  uint *puVar9;
  
  puVar7 = *(uint **)(param_1 + 0x10);
  if (puVar7 == (uint *)0x0) {
    uVar8 = 0xbc;
    bVar4 = false;
    goto LAB_01b0123c;
  }
  uVar3 = *puVar7;
  if (uVar3 == 0 || puVar7 == (uint *)(ulong)uVar3) {
LAB_01b01020:
    uVar8 = 0;
  }
  else {
    puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    uVar8 = 0;
    if (*puVar9 != 0) {
      uVar3 = puVar9[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar3);
          }
          if (*puVar9 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05327190) &&
             (uVar8 = *(ushort *)(DAT_05327198 + (long)(int)uVar2 * 2), uVar8 < 0x13e))
          goto LAB_01b01024;
        }
      }
      goto LAB_01b01020;
    }
  }
LAB_01b01024:
  if (uVar8 == 0x120) {
    bVar4 = true;
  }
  else {
    uVar8 = 0;
    uVar3 = *puVar7;
    if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
      puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
      uVar8 = 0;
      if (*puVar9 != 0) {
        uVar3 = puVar9[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar3 != 0) {
              uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar3);
            }
            if (*puVar9 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05327190) &&
               (uVar8 = *(ushort *)(DAT_05327198 + (long)(int)uVar2 * 2), uVar8 < 0x13e))
            goto LAB_01b01174;
          }
        }
        uVar8 = 0;
      }
    }
LAB_01b01174:
    bVar4 = uVar8 == 0x121;
  }
  uVar3 = *puVar7;
  uVar8 = 0;
  if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
    puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    uVar8 = 0;
    if (*puVar9 != 0) {
      uVar3 = puVar9[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar3);
          }
          if (*puVar9 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326ec0) &&
             (uVar8 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar8 < 0xbd))
          goto LAB_01b0123c;
        }
      }
      uVar8 = 0;
    }
  }
LAB_01b0123c:
  if (uVar8 == 0) {
    iVar6 = FUN_01ad7260();
    bVar5 = false;
    if (iVar6 != 0) {
      bVar5 = bVar4;
    }
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

