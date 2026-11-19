
void FUN_03830e0c(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_80;
  char *local_78;
  undefined **ppuStack_70;
  char *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_40;
  undefined2 local_38;
  undefined4 local_34;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    plVar3 = malloc(0x68);
  }
  else {
    plVar3 = param_2;
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar4 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x68,8);
  }
  *(undefined1 *)((long)plVar3 + 0x33) = 0;
  puVar1 = PTR_DAT_04bb2028;
  *(undefined4 *)(plVar3 + 2) = 0x20;
  *(undefined1 *)((long)plVar3 + 0x14) = 0;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[9] = 0;
  *(undefined1 *)(plVar3 + 10) = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = (long)plVar3 + 0x14;
  *(long **)(param_1 + 8) = plVar3;
  local_80 = &PTR_LAB_048f9770;
  local_78 = "AppSoundRes";
  uStack_50 = FUN_038c6d48(0x8500000,&local_80,param_2,0x1000,1,0);
  *(undefined8 *)(param_1 + 0x10) = uStack_50;
  local_80 = (undefined **)CONCAT44(8,(undefined4)local_80);
  local_38 = 0x100;
  local_46 = 0;
  local_34 = 0;
  local_80 = (undefined **)((ulong)local_80 & 0xffffffffff000000);
  local_48 = 0;
  local_68 = "ForXLinkAsset";
  uStack_60 = 0;
  local_40 = 0x280;
  local_58 = 0;
  local_78 = (char *)0x0;
  ppuStack_70 = &PTR_LAB_048f9770;
  FUN_03f2ab60(param_1 + 0x360,&local_80);
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
  return;
}

