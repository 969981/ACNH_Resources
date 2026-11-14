
void FUN_01811320(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined1 local_4c;
  undefined1 local_35;
  
  local_35 = 0;
  local_58 = 0x20;
  local_4c = 0;
  local_54 = 0x65636e6172746e45;
  puStack_60 = &local_54;
  local_68 = PTR_DAT_04bb2028 + 0x10;
  lVar2 = FUN_02917a1c(&local_68);
  if (lVar2 == 0) {
    if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar3,0);
      if (((iVar1 == 0x758f7eaf) &&
          (((DAT_05aed670 != 0 && (lVar2 = *(long *)(DAT_05aed670 + 0x330), lVar2 != 0)) &&
           (*(int *)(lVar2 + 0x260) != 0)))) &&
         ((*(long *)(lVar2 + 600) != 0 && (lVar2 = *(long *)(lVar2 + 600) + -0x40, lVar2 != 0))))
      goto LAB_01811384;
    }
    *param_1 = 0;
    uVar4 = 0;
  }
  else {
LAB_01811384:
    *param_1 = *(undefined4 *)(lVar2 + 0x18);
    uVar4 = *(undefined4 *)(lVar2 + 0x1c);
  }
  *param_2 = uVar4;
  return;
}

