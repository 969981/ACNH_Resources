
undefined8 FUN_0384b0f4(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **local_58;
  char *local_50;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_04bb3350;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  uVar3 = *(undefined8 *)(lVar2 + 0xa8);
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xfe;
  local_58 = &PTR_LAB_048f9770;
  local_50 = "Game::XLink::System";
  local_50 = (char *)FUN_038c6d48(0x1500000 - param_2[1],&local_58,*param_2,8,1,0);
  *(char **)(param_1 + 0x68) = local_50;
  local_58 = (undefined **)CONCAT44(local_58._4_4_,1000);
  FUN_03830f70(param_1 + 0xe8,&local_58);
  local_58 = *(undefined ***)(param_1 + 0x68);
  FUN_0384a120(param_1 + 0x638,&local_58);
  local_50 = *(char **)(param_1 + 0x68);
  local_58 = &PTR_FUN_04b5e288;
  FUN_03836330((undefined **)(param_1 + 0x930),&local_58);
  local_50 = *(char **)(param_1 + 0x68);
  local_48 = param_2[1];
  local_58 = (undefined **)(param_1 + 0x930);
  FUN_03839944(param_1 + 0x660,&local_58);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
  *(undefined8 *)(lVar2 + 0xa8) = uVar3;
  return 1;
}

