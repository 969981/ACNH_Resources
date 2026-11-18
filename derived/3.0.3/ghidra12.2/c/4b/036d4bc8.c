
void FUN_036d4bc8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  undefined4 uVar6;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined **local_90;
  undefined ***pppuStack_88;
  undefined4 *local_80;
  undefined4 local_70;
  undefined2 local_6c;
  undefined **local_68;
  
  puVar3 = PTR_DAT_04bb4978;
  cVar5 = DAT_0545c458 != -1;
  if (DAT_0545c45c != -1) {
    cVar5 = cVar5 + '\x01';
  }
  if (cVar5 != '\0') {
    uVar6 = FUN_036ffe70(*(undefined8 *)PTR_DAT_04bb4978,0);
    local_6c = FUN_036ffc70(*(undefined8 *)puVar3,0);
    puVar4 = PTR_DAT_04bb5d40;
    puVar2 = PTR_DAT_04bb37e0;
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    local_a0 = *(undefined4 *)(PTR_DAT_04bb5d40 + 8);
    uStack_9c = *(undefined4 *)(PTR_DAT_04bb5d40 + 0xc);
    local_90 = &PTR_LAB_04b45388;
    local_98 = *(undefined4 *)PTR_DAT_04bb37e0;
    uStack_94 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_a8 = puVar1;
    pppuStack_88 = &local_68;
    local_80 = &local_70;
    local_70 = uVar6;
    local_68 = &local_a8;
    FUN_036d1c90(&local_90);
    FUN_03700064(*(undefined8 *)puVar3,0,&local_98,&local_a8);
    if (cVar5 != '\x01') {
      uVar6 = FUN_036ffe70(*(undefined8 *)puVar3,1);
      local_6c = FUN_036ffc70(*(undefined8 *)puVar3,1);
      local_a0 = *(undefined4 *)(puVar4 + 8);
      uStack_9c = *(undefined4 *)(puVar4 + 0xc);
      local_98 = *(undefined4 *)puVar2;
      uStack_94 = *(undefined4 *)(puVar2 + 4);
      local_68 = &local_a8;
      local_90 = &PTR_LAB_04b45388;
      local_a8 = puVar1;
      pppuStack_88 = &local_68;
      local_80 = &local_70;
      local_70 = uVar6;
      FUN_036d1c90(&local_90);
      FUN_03700064(*(undefined8 *)puVar3,1,&local_98,&local_a8);
    }
  }
  return;
}

