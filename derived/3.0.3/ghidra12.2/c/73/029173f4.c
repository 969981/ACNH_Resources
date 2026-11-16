
undefined8 FUN_029173f4(undefined8 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = PTR_DAT_04bb2720;
  lVar5 = *(long *)PTR_DAT_04bb2720;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x330) != 0)) {
    puVar3 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
    iVar2 = FUN_006bd550(*puVar3,0);
    if ((iVar2 == 0x758f7eaf) &&
       ((*(long *)puVar1 != 0 && (lVar5 = *(long *)(*(long *)puVar1 + 0x330), lVar5 != 0)))) {
      uVar4 = FUN_029174a0(lVar5,param_1,param_2);
      return uVar4;
    }
  }
  return 0;
}

