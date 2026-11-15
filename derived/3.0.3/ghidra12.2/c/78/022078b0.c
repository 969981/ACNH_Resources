
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022078b0(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  short sVar2;
  undefined **local_30;
  char *pcStack_28;
  
  local_30 = &PTR_LAB_048f9770;
  pcStack_28 = "HarvestPlazaHandTool";
  sVar2 = FUN_02196ed0(param_2,&local_30);
  uVar1 = DAT_0558600c;
  if (sVar2 == 2) {
    FUN_021e8e40(param_1);
  }
  else if (sVar2 == 1) {
    *param_1 = 0x3623;
    FUN_0277d4ac(param_1);
  }
  else {
    *(undefined4 *)param_1 = _DAT_05586008;
    *(undefined4 *)((long)param_1 + 4) = uVar1;
  }
  return;
}

