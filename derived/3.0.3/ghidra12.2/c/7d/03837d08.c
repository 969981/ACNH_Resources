
void FUN_03837d08(float param_1,long param_2,undefined1 *param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 local_88;
  undefined1 local_87;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined **ppuStack_68;
  undefined8 local_60;
  undefined **ppuStack_58;
  undefined8 local_50;
  undefined **ppuStack_48;
  undefined8 local_40;
  long lStack_38;
  
  if ((param_3 != (undefined1 *)0x0) && (0.0 <= param_1)) {
    if (param_1 < 28900.0) {
      *(undefined4 *)(param_2 + 4) = 3;
      local_87 = *param_3;
      uStack_78 = *(undefined8 *)(param_3 + 8);
      local_70 = *(undefined8 *)(param_3 + 0x10);
      local_88 = 0;
      local_80 = 0;
      local_60 = *(undefined8 *)(param_3 + 0x20);
      ppuStack_68 = &PTR_LAB_048f9770;
      ppuStack_58 = &PTR_LAB_048f9770;
      local_50 = *(undefined8 *)(param_3 + 0xb8);
      ppuStack_48 = &PTR_LAB_048f9770;
      local_40 = *(undefined8 *)(param_3 + 0x150);
      lStack_38 = param_2 + 0x1420;
      FUN_0383a0e0(DAT_05ae0928,&local_88,0);
    }
    else if (44100.0 <= param_1) {
      (**(code **)(**(long **)(param_2 + 0x10) + 0x160))();
      puVar1 = PTR_DAT_04bb3350;
      lVar5 = *(long *)(param_2 + 0x18);
      if (lVar5 == 0) {
        lVar4 = 1;
        plVar3 = *(long **)(param_2 + 0x10);
      }
      else {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar4 = *(long *)(lVar2 + 0xa8);
        *(long *)(lVar2 + 0xa8) = lVar5;
        plVar3 = *(long **)(param_2 + 0x10);
      }
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0xb0))();
      }
      if (lVar4 != 1) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
        *(long *)(lVar5 + 0xa8) = lVar4;
      }
      *(undefined8 *)(param_2 + 0x10) = 0;
      (**(code **)(**(long **)(param_2 + 0x18) + 0x20))();
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 4) = 0;
    }
  }
  return;
}

