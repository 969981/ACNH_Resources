
void FUN_00275588(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if (7 < *(uint *)(param_2 + 1)) {
    uVar2 = FUN_00228490(*param_2 + 4);
    puVar1 = PTR_DAT_04bc1510;
    lVar3 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
    if (*(long *)(lVar3 + 0x98) != 0) {
      uVar4 = FUN_0026c894(DAT_04c603c8);
      FUN_002840f0(uVar4,uVar2);
      plVar5 = (long *)FUN_002ba790(*(undefined8 *)puVar1);
      lVar3 = (**(code **)(*plVar5 + 0x60))(plVar5,param_2 + 3);
      if ((lVar3 != 0) && (0x1f < *(byte *)(lVar3 + 0x38))) {
        *(undefined8 *)(lVar3 + 0x80) = **(undefined8 **)puVar1;
      }
    }
  }
  return;
}

