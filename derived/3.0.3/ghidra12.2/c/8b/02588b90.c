
void FUN_02588b90(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined **local_40;
  char *pcStack_38;
  
  FUN_02602950(param_1,0x14);
  uVar1 = FUN_0277d6c4(*param_2);
  local_40 = &PTR_LAB_048f9770;
  pcStack_38 = "ItemUniqueId";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar1);
  }
  uVar1 = FUN_02557120(&local_40,*param_2);
  local_40 = &PTR_LAB_048f9770;
  pcStack_38 = "DamageLimit";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar1);
  }
  return;
}

