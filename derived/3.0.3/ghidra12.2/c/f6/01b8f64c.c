
bool FUN_01b8f64c(undefined8 param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  uint *puVar6;
  long lVar7;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar1 == 0) {
LAB_01b8f728:
    puVar4 = (uint *)0x0;
    uVar2 = 0xbc;
    bVar5 = true;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_01b8f728;
    lVar7 = *(long *)PTR_DAT_04bc0428;
    uVar2 = FUN_0277d6c4(param_2);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar2) ||
       (puVar4 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8), puVar4 == (uint *)0x0)
       ) goto LAB_01b8f728;
    uVar2 = *puVar4;
    if (uVar2 == 0 || puVar4 == (uint *)(ulong)uVar2) goto LAB_01b8f718;
    puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar2);
    uVar2 = 0;
    if (*puVar6 == 0) {
LAB_01b8f71c:
      bVar5 = false;
    }
    else {
      uVar2 = puVar6[1];
      if ((uVar2 == 0) || ((ulong)(ushort)puVar6[2] == 0)) {
LAB_01b8f718:
        uVar2 = 0;
        goto LAB_01b8f71c;
      }
      lVar7 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar7 = 0x1c;
      }
      lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar7 == 0) goto LAB_01b8f718;
      uVar3 = 0;
      if ((ulong)uVar2 != 0) {
        uVar3 = (uint)((ulong)((long)puVar4 - lVar7) / (ulong)uVar2);
      }
      if (*puVar6 <= uVar3) {
        uVar3 = 0xffffffff;
      }
      if (DAT_05326ec0 <= uVar3) goto LAB_01b8f718;
      uVar2 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2);
      if (uVar2 < 0xbd) goto LAB_01b8f71c;
      bVar5 = false;
      uVar2 = 0;
    }
  }
  if ((uVar2 - 0x70 < 0x38) && ((1L << ((ulong)(uVar2 - 0x70) & 0x3f) & 0xf0000000000003U) != 0)) {
    return true;
  }
  if (uVar2 == 0x54) {
    return true;
  }
  if (bVar5) {
    uVar3 = 2;
  }
  else {
    uVar2 = *puVar4;
    uVar3 = 0;
    if ((uVar2 != 0) && (puVar4 != (uint *)(ulong)uVar2)) {
      puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar2);
      uVar3 = 0;
      if (*puVar6 != 0) {
        uVar2 = puVar6[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar7 != 0) {
            uVar3 = 0;
            if ((ulong)uVar2 != 0) {
              uVar3 = (uint)((ulong)((long)puVar4 - lVar7) / (ulong)uVar2);
            }
            if (*puVar6 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05327180) &&
               (uVar3 = (uint)*(ushort *)(DAT_05327188 + (long)(int)uVar3 * 2), uVar3 < 3))
            goto LAB_01b8f814;
          }
        }
        uVar3 = 0;
      }
    }
  }
LAB_01b8f814:
  return uVar3 - 3 < 0xfffffffe;
}

