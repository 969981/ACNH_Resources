
undefined4 FUN_012ffbd4(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 local_48 [2];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  iVar7 = FUN_0137d304();
  if (iVar7 == 2) {
LAB_012ffbfc:
    uVar10 = 0;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x28);
    iVar2 = *(int *)(param_2 + 8);
    if ((iVar8 <= iVar2) && (iVar2 <= iVar8 + 3)) {
      iVar3 = *(int *)(param_1 + 0x2c);
      iVar4 = *(int *)(param_2 + 0xc);
      if ((iVar3 <= iVar4) &&
         ((((iVar4 <= iVar3 + 3 && ((uint)(iVar2 - iVar8) < 3)) && ((uint)(iVar4 - iVar3) < 3)) &&
          ((*(uint *)(param_1 + 0x18) >> (ulong)((iVar4 - iVar3) * 3 + (iVar2 - iVar8) & 0x1f) & 1)
           != 0)))) {
        local_48[0] = 0;
        uVar9 = iVar2 - *(int *)(param_1 + 0x160);
        uVar5 = iVar4 - *(int *)(param_1 + 0x164);
        lVar1 = param_1 + 0x30;
        if (uVar5 < 3 && uVar9 < 3) {
          lVar1 = param_1 + 0x30 + (ulong)(uVar5 * 3 + uVar9) * 0x20;
        }
        iVar8 = FUN_0277d6c4(lVar1);
        lVar6 = DAT_05150358;
        if (iVar8 == 0xea79) {
          return 0;
        }
        if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
             ((*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0 &&
              ((*(long *)(DAT_05150358 + 0x488) != 0 &&
               (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))))) &&
            (*(long *)(DAT_05150358 + 0x2b0) != 0)) &&
           (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)) {
          uVar9 = FUN_0277d6c4(lVar1);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar6 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            FUN_0124c030(local_48,lVar1);
            iVar8 = FUN_0123db50(auStack_40,local_38);
            if ((iVar8 - 0x18U < 7) || (iVar8 = FUN_0123db50(auStack_40,local_38), iVar8 == 0x1f))
            goto LAB_012ffbfc;
          }
        }
      }
    }
    uVar10 = 1;
    if (iVar7 != 0) {
      uVar10 = 2;
    }
  }
  return uVar10;
}

