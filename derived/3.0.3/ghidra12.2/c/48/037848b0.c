
undefined8 FUN_037848b0(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *local_40;
  undefined2 local_38;
  
  uVar4 = 0;
  if ((param_1 != (undefined1 *)0x0) && (param_2 != (undefined1 *)0x0)) {
    if (DAT_05aed670 == 0) {
      puVar6 = &DAT_055c04a0;
    }
    else {
      puVar6 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar6 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar6,0);
        puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar2 != 0x758f7eaf) {
          puVar6 = &DAT_055c04a0;
        }
      }
    }
    iVar2 = *(int *)(puVar6 + 7);
    if (((iVar2 == -0x7975b8e8) || (iVar2 == -0x17df00c3)) || (iVar2 == -0x3e092032)) {
      local_40 = PTR_DAT_04bb7648 + 0x10;
      local_38 = *DAT_05ab5ea8;
      lVar5 = FUN_03775a30(&local_40);
      uVar4 = 0;
      if (lVar5 != 0) {
        if ((*(long **)(lVar5 + 0x28) == (long *)0x0) ||
           (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x28), puVar6 == (undefined8 *)0x0)) {
          uVar3 = 1;
        }
        else {
          uVar3 = (**(code **)*puVar6)();
          uVar3 = uVar3 ^ 1;
        }
        lVar1 = *(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8);
        *param_1 = *(undefined1 *)(lVar1 + 5);
        *param_2 = *(undefined1 *)(lVar1 + 6);
        if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
          (**(code **)*puVar6)();
        }
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

