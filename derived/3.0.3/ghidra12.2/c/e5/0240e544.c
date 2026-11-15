
void FUN_0240e544(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar2 = &DAT_05240280;
    }
    else {
      puVar2 = &DAT_05240280;
    }
  }
  local_48 = PTR_DAT_04bb2020 + 0x10;
  uStack_40 = "PlayerJumpValleyReadyWait";
  FUN_017029bc(puVar2,&local_48,6,0,0);
  bVar3 = *(byte *)(param_1 + 0x1ee8);
  local_38 = 0x3f800000;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  local_48 = (undefined *)CONCAT71(local_48._1_7_,bVar3);
  local_34 = 1;
  local_48 = (undefined *)CONCAT44((float)*(int *)(param_1 + 0x190a) * 0.001,(undefined4)local_48);
  uStack_40 = (char *)CONCAT44((float)*(int *)(param_1 + 0x1910) * 0.001,
                               (float)(int)*(short *)(param_1 + 0x190e) * 0.25);
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_48,*(undefined4 *)(param_1 + 0x230),1);
  return;
}

