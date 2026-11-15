
uint FUN_021f1800(undefined4 *param_1,undefined4 *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long *plVar7;
  long lVar8;
  undefined *local_8f8;
  long lStack_8f0;
  long local_8e8 [207];
  long local_270 [6];
  long local_240 [6];
  undefined1 auStack_210 [152];
  undefined *local_178;
  char *local_170;
  undefined4 local_168;
  undefined1 local_164 [255];
  undefined1 local_65;
  
  *param_2 = 0;
  *param_1 = 0;
  puVar2 = PTR_DAT_04bb3350;
  plVar7 = *(long **)(*(long *)PTR_DAT_04bb3968 + 0x17598);
  if (plVar7 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)(lVar4 + 0xa8);
    *(long **)(lVar4 + 0xa8) = plVar7;
    (**(code **)(*param_3 + 0x18))(param_3);
    FUN_0074fda4(auStack_210,"Param/NpcRoom/%s.byml",param_3[1]);
    uVar3 = FUN_03eba3a0(auStack_210);
    if ((uVar3 & 1) != 0) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      local_170 = "NpcRoom";
      local_178 = puVar1;
      (**(code **)(*param_3 + 0x18))(param_3);
      lStack_8f0 = param_3[1];
      local_8f8 = puVar1;
      FUN_00b62c50(local_8e8,&local_178,&local_8f8,0);
      local_170 = local_164;
      local_65 = 0;
      local_168 = 0x100;
      local_164[0] = 0;
      local_178 = PTR_DAT_04bb21f8 + 0x10;
      uVar5 = (**(code **)(local_8e8[0] + 0xf0))(local_8e8,&local_178,1);
      if ((uVar5 & 1) != 0) {
        FUN_03c27e60(local_8e8,&local_178,plVar7);
      }
      puVar6 = (undefined4 *)(**(code **)(local_270[0] + 0xf0))(local_270);
      *param_1 = *puVar6;
      puVar6 = (undefined4 *)(**(code **)(local_240[0] + 0xf0))(local_240);
      *param_2 = *puVar6;
      (**(code **)(local_8e8[0] + 0x20))(local_8e8);
      FUN_00b634e0(local_8e8);
    }
    (**(code **)(*plVar7 + 0x58))(plVar7);
    if (lVar8 != 1) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      *(long *)(lVar4 + 0xa8) = lVar8;
    }
  }
  return uVar3 & 1;
}

