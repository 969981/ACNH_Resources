
uint FUN_039558c0(undefined8 *param_1,long param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *local_c8;
  undefined8 *local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined *local_a8;
  char *pcStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_a0 = "agl::Debug::xml";
  local_a8 = puVar1;
  plVar4 = (long *)FUN_038c6d48(param_3 + 0x400,&local_a8,
                                *(undefined8 *)(*(long *)PTR_DAT_04bb4e50 + 0x58),8,1,0);
  lVar5 = FUN_038f01ec(0,plVar4,0,param_3);
  uVar7 = *(undefined8 *)(lVar5 + 8);
  FUN_03955a50(param_1,uVar7,plVar4);
  pcStack_a0 = "data";
  local_c0 = &DAT_0407ebb1;
  local_c8 = puVar1;
  local_a8 = puVar1;
  uVar7 = FUN_038f3be0(uVar7,&local_a8,&local_c8,plVar4);
  FUN_03956510(param_1,uVar7,plVar4);
  local_60 = 0x20;
  pcStack_a0 = (char *)param_1[10];
  uStack_70 = *(undefined8 *)(param_2 + 8);
  local_5c = 0;
  local_58 = 0;
  uStack_90 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
  local_68 = param_1 + 0x16;
  local_a8 = puVar1;
  local_98 = puVar1;
  local_88 = puVar1;
  uStack_80 = pcStack_a0;
  local_78 = puVar1;
  uVar3 = FUN_03984c20(*(undefined8 *)PTR_DAT_04bd0fe0,lVar5,&local_a8,0x1000000);
  if (((uVar3 & 1) != 0) && (param_1[0x15] != 0)) {
    puStack_b8 = puVar2 + 0x10;
    local_c8 = (undefined *)((ulong)local_c8 & 0xffffffff00000000);
    local_b0 = param_1[0x17];
    puVar6 = (undefined8 *)(param_1[0x15] + 8);
    local_c0 = param_1;
    (**(code **)*puVar6)(puVar6,&local_c8);
  }
  (**(code **)(*plVar4 + 0x20))(plVar4);
  return uVar3 & 1;
}

