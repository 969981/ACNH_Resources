
void FUN_0383d65c(float param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 local_b8;
  undefined **local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  ulong local_50;
  undefined8 local_48;
  long lStack_40;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 local_28;
  
  if ((param_3 != 0) && (0.0 <= param_1)) {
    if (28900.0 <= param_1) {
      if (44100.0 <= param_1) {
        if (*(long *)(param_2 + 0x58) != 0) {
          FUN_03f45838(param_2 + 0x48);
        }
        puVar1 = PTR_DAT_04bcb2c0;
        lStack_40 = *(long *)(param_2 + 0x40);
        if (lStack_40 != 0) {
          local_98 = CONCAT53(local_98._3_5_,0x10000);
          local_98 = CONCAT62(local_98._2_6_,1);
          local_60 = PTR_DAT_04bb2020 + 0x10;
          local_58 = PTR_DAT_04bb2120;
          lVar2 = *(long *)PTR_DAT_04bb28b0;
          *(undefined8 *)(param_2 + 0x40) = 0;
          local_50 = local_50 & 0xffffffffffffff00;
          local_48 = 0;
          local_a0 = puVar1 + 0x10;
          local_38 = 0;
          local_80 = (undefined *)(lVar2 + 0x598);
          local_78 = 0;
          local_68 = (undefined *)(lVar2 + 0x5b8);
          local_70 = (undefined *)0x0;
          local_90 = *(undefined8 *)(lVar2 + 0x198);
          local_88 = 0;
          local_b8 = 0;
          local_28 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
          local_b0 = &local_a0;
          uStack_a8 = 0;
          puStack_30 = local_60;
          FUN_03f45184(lVar2 + 0x1a8,&local_b8);
        }
        *(undefined4 *)(param_2 + 0x10) = 0;
      }
    }
    else if ((*(long *)(param_3 + 8) != 0) && (*(long *)(param_3 + 0x10) != 0)) {
      *(undefined4 *)(param_2 + 0x10) = 3;
      local_a0 = (undefined *)
                 ((ulong)CONCAT61((int6)((ulong)local_a0 >> 0x10),*(undefined1 *)(param_3 + 1)) << 8
                 );
      local_90 = *(undefined8 *)(param_3 + 0x18);
      local_80 = PTR_DAT_04bb2020 + 0x10;
      local_88 = 0;
      local_68 = PTR_DAT_04bb2120;
      local_98 = 0;
      local_78 = *(undefined8 *)(param_3 + 0x28);
      local_50 = param_2 + 0x80;
      local_58 = PTR_DAT_04bb2120;
      local_70 = local_80;
      local_60 = local_80;
      FUN_0383a520(DAT_05ae0b40,&local_a0,0);
    }
  }
  return;
}

