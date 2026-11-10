
void FUN_001bcd34(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined *local_180;
  undefined1 local_178 [16];
  undefined1 *local_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  undefined8 local_150;
  
  FUN_0018c3a4(auStack_158);
  uVar4 = FUN_00186ea0(auStack_158,"TransportBufferThread(recv ");
  uVar4 = FUN_00186ea0(uVar4,(&PTR_DAT_04be22f8)[*(uint *)(param_1 + 0xe0)]);
  FUN_00186ea0(uVar4,&DAT_04094801);
  plVar5 = (long *)FUN_00185a6c(0x78);
  if (plVar5 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0xd8) = 0;
    iVar2 = *(int *)PTR_DAT_04bcc5c8;
    lVar6 = 0;
  }
  else {
    local_178[0] = 0;
    puVar1 = PTR_DAT_04bc0ec8 + 0x10;
    local_168 = local_178;
    uStack_160 = 0x10;
    local_180 = puVar1;
    FUN_0018b070(&local_180,local_150,0xffffffffffffffff);
    FUN_0018889c(plVar5,&local_180,*(undefined4 *)PTR_DAT_04bcbb60);
    puVar3 = PTR_DAT_04bcc5e0;
    plVar5[0xb] = 0;
    plVar5[0xc] = 0;
    plVar5[0xd] = 0;
    *plVar5 = (long)(puVar3 + 0x10);
    *(long **)(param_1 + 0xd8) = plVar5;
    local_180 = puVar1;
    FUN_0018b1a0(&local_180);
    lVar6 = *(long *)(param_1 + 0xd8);
    iVar2 = *(int *)PTR_DAT_04bcc5c8;
  }
  if (iVar2 != -0x80000000) {
    *(int *)(lVar6 + 0x54) = iVar2;
  }
  *(long *)(lVar6 + 0x68) = param_1;
  puVar1 = PTR_LAB_04bcc5d8;
  *(undefined4 *)(lVar6 + 0x70) = 0;
  *(undefined **)(lVar6 + 0x58) = puVar1;
  *(undefined8 *)(lVar6 + 0x60) = 0;
  FUN_00188cf0(lVar6,0);
  FUN_0018c3d4(auStack_158);
  return;
}

