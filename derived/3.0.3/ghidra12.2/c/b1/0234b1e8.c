
void FUN_0234b1e8(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  char *pcStack_60;
  long local_50;
  undefined8 local_48;
  
  *(char *)(param_1 + 0xc1ae) = (char)param_2;
  puVar1 = PTR_DAT_04bb2020;
  local_68 = PTR_DAT_04bb2020 + 0x10;
  pcStack_60 = "PlayerBody";
  lVar2 = FUN_0074f690(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x78),&local_68);
  if (lVar2 != 0) {
    FUN_0090f5d0(&local_68,*(undefined8 *)PTR_DAT_04bb4868,param_2);
    if ((*(long *)(lVar2 + 8) != 0) && (lVar2 = *(long *)(*(long *)(lVar2 + 8) + 0x20), lVar2 != 0))
    {
      (**(code **)(local_50 + 0x18))(&local_50);
      lVar2 = FUN_038fe510(lVar2,local_48);
      if (lVar2 != 0) {
        local_78 = puVar1 + 0x10;
        pcStack_70 = "mCheek_Alb.0";
        FUN_039a9540(*(undefined8 *)(param_1 + 0x1150),lVar2,&local_78);
      }
    }
  }
  return;
}

