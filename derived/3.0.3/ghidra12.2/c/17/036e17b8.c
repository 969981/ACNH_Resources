
void FUN_036e17b8(long param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *local_38;
  char *local_30;
  undefined1 local_28;
  byte local_27;
  
  puVar2 = PTR_DAT_04bc3a48;
  if ((*(int *)(param_1 + 0x14) != 0) &&
     ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))
     ) {
    *(byte *)(param_1 + 0x3ac) = *(byte *)(param_1 + 0x3ac) & 0xfe;
    if (*(int *)(param_1 + 0x14) == 2) {
      local_38 = PTR_DAT_04bb2020 + 0x10;
      local_30 = "SeqShareHouseOngoing";
      iVar3 = FUN_02758850(&local_38);
      if (iVar3 == 0) {
        if ((((*(ushort **)puVar2 == (ushort *)0x0) || ((**(ushort **)puVar2 & 1) == 0)) ||
            (*(long *)PTR_DAT_04bc1530 == 0)) ||
           (lVar5 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar5 == 0)) {
          uVar1 = *(undefined2 *)(param_1 + 0x2a);
        }
        else {
          local_30 = (char *)(lVar5 + 0x38);
          local_28 = 1;
          if (*(long **)(lVar5 + 0x60) == (long *)0x0) {
            local_27 = 0;
          }
          else {
            puVar4 = (undefined8 *)**(long **)(lVar5 + 0x60);
            local_27 = 0;
            if (puVar4 != (undefined8 *)0x0) {
              local_27 = (**(code **)*puVar4)();
            }
          }
          local_27 = local_27 & 1;
          local_38 = PTR_DAT_04bb7688 + 0x10;
          uVar1 = *(undefined2 *)(*(long *)(lVar5 + 0x48) + *(long *)(lVar5 + 0x40) + 2);
          FUN_02640184(&local_38);
        }
        FUN_03760540(uVar1);
      }
    }
    if (*(int *)(param_1 + 0x14) == 2) {
      *(uint *)(param_1 + 0x1a70) = *(uint *)(param_1 + 0x1a70) | 0x40000;
    }
    *(undefined8 *)(param_1 + 0x14) = 0x300000008;
  }
  return;
}

