
void FUN_031ff554(long param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined *local_40;
  char *local_38;
  long local_18;
  
  if (param_2 == 0) {
    return;
  }
  plVar2 = *(long **)(param_2 + 0x58);
  local_40 = (undefined *)0x0;
  if (((plVar2 == (long *)0x0) ||
      ((**(code **)(*plVar2 + 0x28))(plVar2,&local_40), local_40 == (undefined *)0x0)) ||
     (plVar2 = (long *)(local_40 + 0xb8), *plVar2 == 0)) {
    *(undefined1 *)(param_1 + 1) = 0;
    bVar1 = true;
  }
  else {
    lVar3 = FUN_00364ec0(plVar2,"SelectCursorSideways");
    *(bool *)(param_1 + 1) = lVar3 != 0;
    lVar3 = FUN_00364ec0(plVar2,"SelectCursorDecideAnimInvalid");
    bVar1 = lVar3 == 0;
  }
  *(bool *)(param_1 + 2) = bVar1;
  plVar2 = *(long **)(param_2 + 0x1d0);
  local_40 = PTR_DAT_04bc0cb8 + 0x10;
  local_38 = (char *)CONCAT44(local_38._4_4_,0x18);
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_40);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  local_38 = "OnEyeFollowButton";
  (**(code **)(plVar2[3] + 0x1a0))(&local_18,plVar2[1],&local_40);
  *(bool *)param_1 = local_18 != 0;
  return;
}

