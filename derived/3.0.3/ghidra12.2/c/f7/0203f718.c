
uint FUN_0203f718(void)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  int local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64 [2];
  undefined8 local_5c;
  char local_54;
  char local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined8 *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_34;
  byte local_30;
  undefined8 local_28;
  
  local_28 = 0x397d;
  FUN_0277d4ac(&local_28);
  local_38 = 0;
  if (DAT_05aed670 == 0) {
    puVar3 = &DAT_055c04a0;
  }
  else {
    puVar3 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar3,0);
      puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar3 = &DAT_055c04a0;
      }
    }
  }
  local_34 = *(undefined4 *)(puVar3 + 7);
  local_30 = FUN_017baf44();
  local_30 = local_30 & 1;
  local_40 = PTR_DAT_04bb3140 + 0x10;
  local_50 = &DAT_048f9750;
  local_48 = 0x1c00000020;
  uVar2 = FUN_01a50590(&local_40,0,&local_50,&local_28);
  if ((uVar2 & 1) != 0) {
    local_5c = 0xfffe;
    FUN_0277d4ac(&local_5c);
    local_78 = (undefined8 *)((ulong)local_78._4_4_ << 0x20);
    local_64[0] = 0;
    local_5c = local_28;
    local_54 = (char)local_48;
    local_53 = (char)((ulong)local_48 >> 0x20);
    local_52 = 0;
    local_68 = 0;
    local_51 = 0;
    FUN_01afbaa4(local_64,&local_5c,&local_68);
    local_78 = &DAT_048f9750;
    local_70 = (int)local_54;
    iStack_6c = (int)local_53;
    FUN_01a50970(&local_40,0,local_64,&local_78);
  }
  return uVar2 & 1;
}

