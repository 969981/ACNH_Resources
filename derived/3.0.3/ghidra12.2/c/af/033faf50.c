
undefined8 FUN_033faf50(void)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 local_80 [4];
  undefined4 local_7c;
  int local_74;
  undefined **local_68;
  undefined1 *puStack_60;
  undefined4 local_58;
  undefined1 local_54 [7];
  undefined1 local_4d;
  undefined **local_48;
  undefined1 *puStack_40;
  undefined4 local_38;
  undefined1 local_34 [7];
  undefined1 local_2d;
  undefined2 local_28;
  undefined4 local_26;
  undefined1 local_22;
  
  iVar4 = 0;
  if (DAT_05aed670 != 0) {
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
      iVar4 = 0;
    }
    else {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar3 = FUN_006bd550(*puVar5,0);
      iVar4 = 0;
      if ((iVar3 == 0x758f7eaf) && (iVar4 = 0, DAT_05aed670 != 0)) {
        iVar4 = 0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          iVar4 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
        }
      }
    }
  }
  lVar2 = DAT_0523adf0;
  if ((DAT_05292434 == iVar4) && (DAT_0523adf0 != 0)) {
    if (*(int *)(DAT_0523adf0 + 0x98) != 0) {
      return 1;
    }
    if (*(int *)(DAT_04cd19d8 + 0x15c) == 0) {
      local_80[0] = 0;
      local_58 = 8;
      puStack_60 = local_54;
      puStack_40 = local_34;
      local_4d = 0;
      local_54[0] = 0;
      local_38 = 8;
      local_2d = 0;
      local_34[0] = 0;
      local_28 = 0;
      local_22 = 0;
      local_7c = 0xffffffff;
      local_48 = &PTR_LAB_04908da0;
      local_26 = 0x101;
      local_68 = &PTR_LAB_04908da0;
      if ((*(int *)(DAT_0523adf0 + 0xc) != -1) && (DAT_05574040 != 0)) {
        puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
        if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
          lVar6 = (**(code **)(*(long *)*puVar5 + 0x38))();
          if (lVar6 == 0) {
            return 0;
          }
          lVar6 = lVar6 + 0x70;
        }
        else {
          if (puVar5 == (undefined8 *)0x0) {
            return 0;
          }
          if ((long *)puVar5[0x26] == (long *)0x0) {
            return 0;
          }
          lVar6 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
          if (lVar6 == 0) {
            return 0;
          }
        }
        puVar1 = &LAB_002057b0 + lVar6;
        if (*(char *)(lVar2 + 8) != '\0') {
          puVar1 = (undefined1 *)(lVar6 + 0x20b9e8);
        }
        uVar7 = FUN_016d4af0(local_80,lVar2 + 8,puVar1 + (long)*(int *)(lVar2 + 0xc) * 0xc40);
        if (((uVar7 & 1) != 0) && (iVar4 = FUN_0252d29c(), local_74 == iVar4)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

