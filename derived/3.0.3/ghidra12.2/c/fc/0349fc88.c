
void FUN_0349fc88(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined2 local_5b;
  undefined4 local_58;
  undefined8 local_50;
  long local_48;
  undefined *local_40;
  char *pcStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  local_60 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_5b = 0xff00;
  local_5c = 1;
  local_58 = 0xffffffff;
  local_68 = PTR_DAT_04bc5008 + 0x10;
  local_48 = *(long *)(param_1 + 0x218);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "/L_ItemBalloon_00";
  local_40 = puVar1;
  local_50 = FUN_02bcb7b8(**(long **)(local_48 + 0x3f8) + 0x38,&local_40);
  pcStack_38 = "NameWindowCtrlSeq";
  local_40 = puVar1;
  uVar2 = FUN_02bcffa8(uVar2,&local_40,param_1,&local_68);
  *(undefined8 *)(param_1 + 0x220) = uVar2;
  return;
}

