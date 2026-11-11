
void FUN_0040c724(long *param_1,undefined1 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  short sVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *local_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  
  FUN_00204400(param_1,0xb);
  *param_1 = (long)(PTR_DAT_04bd29a0 + 0x10);
  FUN_0040b9a0(param_1 + 4,0x17);
  FUN_0040c4f0(param_1 + 0x16);
  FUN_0040bb14(param_1 + 0x28,0x1b);
  *(undefined1 *)(param_1 + 0x3a) = param_2;
  FUN_001f874c();
  if ((char)param_1[0x3a] != '\0') {
    FUN_001fab4c(param_1 + 0x16,8);
    puVar4 = PTR_DAT_04bd29a8;
    (**(code **)(*(long *)PTR_DAT_04bd29a8 + 0x10))(PTR_DAT_04bd29a8);
    puVar5 = PTR_DAT_04bd29b0;
    sVar8 = *(short *)PTR_DAT_04bd29b0;
    if (sVar8 == 0) {
      plVar6 = (long *)FUN_00185a6c(0xa0);
      puVar3 = PTR_DAT_04bc13b8;
      puVar9 = PTR_DAT_04bc13b0;
      puVar1 = PTR_DAT_04bc13a8;
      puVar2 = PTR_DAT_04bc1390;
      puVar10 = PTR_DAT_04bc0ec8;
      if (plVar6 != (long *)0x0) {
        FUN_001f98c8(plVar6);
        *(undefined1 *)((long)plVar6 + 9) = 0;
        *plVar6 = (long)(puVar9 + 0x10);
        FUN_00186524(plVar6 + 4);
        *(undefined1 *)(plVar6 + 0x11) = 0;
        plVar6[0xb] = (long)(puVar10 + 0x10);
        plVar6[6] = (long)(puVar10 + 0x10);
        *(undefined1 *)(plVar6 + 7) = 0;
        *(undefined1 *)(plVar6 + 0xc) = 0;
        *(undefined4 *)((long)plVar6 + 0x8c) = 0;
        plVar6[0x12] = 0;
        plVar6[9] = (long)(plVar6 + 7);
        plVar6[10] = 0x10;
        uVar7 = *(undefined8 *)puVar3;
        *(undefined4 *)(plVar6 + 0x13) = 0;
        plVar6[0x10] = (long)(puVar2 + 0x10);
        *plVar6 = (long)(puVar1 + 0x10);
        *(undefined8 *)((long)plVar6 + 0xc) = 0;
        plVar6[3] = 0;
        plVar6[0xe] = (long)(plVar6 + 0xc);
        plVar6[0xf] = 0x10;
        puVar9 = PTR_DAT_04bc13b0;
        FUN_001865b0(plVar6 + 4,uVar7);
        plVar6[5] = 0;
        FUN_0018a58c(plVar6 + 6,&DAT_0407ebb1);
        local_78 = 0;
        local_74 = 0;
        local_70 = 0;
        local_68 = 0;
        local_80 = puVar2 + 0x10;
        FUN_001fd7ec(plVar6 + 0x10,&local_80);
      }
      FUN_001f8c60(PTR_DAT_04bcc970,plVar6);
      plVar6 = (long *)FUN_00185a6c(0xd0);
      if (plVar6 != (long *)0x0) {
        FUN_001f98c8(plVar6);
        *(undefined1 *)((long)plVar6 + 9) = 0;
        *plVar6 = (long)(puVar9 + 0x10);
        FUN_00186524(plVar6 + 4);
        *(undefined1 *)(plVar6 + 0x11) = 0;
        puVar1 = puVar10 + 0x10;
        plVar6[0xb] = (long)puVar1;
        *(undefined1 *)(plVar6 + 7) = 0;
        *(undefined1 *)(plVar6 + 0xc) = 0;
        *(undefined4 *)((long)plVar6 + 0x8c) = 0;
        plVar6[0x12] = 0;
        plVar6[6] = (long)puVar1;
        plVar6[9] = (long)(plVar6 + 7);
        plVar6[10] = 0x10;
        *(undefined4 *)(plVar6 + 0x13) = 0;
        plVar6[0x10] = (long)(puVar2 + 0x10);
        plVar6[0xe] = (long)(plVar6 + 0xc);
        plVar6[0xf] = 0x10;
        *plVar6 = (long)(PTR_DAT_04bc13a8 + 0x10);
        *(undefined8 *)((long)plVar6 + 0xc) = 0;
        uVar7 = *(undefined8 *)PTR_DAT_04bc13b8;
        plVar6[3] = 0;
        FUN_001865b0(plVar6 + 4,uVar7);
        plVar6[5] = 0;
        FUN_0018a58c(plVar6 + 6,&DAT_0407ebb1);
        puVar10 = PTR_DAT_04bc0ec8;
        local_78 = 0;
        local_74 = 0;
        local_70 = 0;
        local_68 = 0;
        local_80 = puVar2 + 0x10;
        FUN_001fd7ec(plVar6 + 0x10,&local_80);
        *(undefined1 *)(plVar6 + 0x14) = 0;
        plVar6[0x15] = (long)puVar1;
        *(undefined1 *)(plVar6 + 0x16) = 0;
        puVar1 = PTR_DAT_04bd2958;
        plVar6[0x18] = (long)(plVar6 + 0x16);
        plVar6[0x19] = 0x10;
        *plVar6 = (long)(puVar1 + 0x10);
      }
      FUN_001f8c60(PTR_DAT_04bcc970,plVar6);
      plVar6 = (long *)FUN_00185a6c(0xe0);
      if (plVar6 != (long *)0x0) {
        FUN_001f98c8(plVar6);
        *(undefined1 *)((long)plVar6 + 9) = 0;
        *plVar6 = (long)(puVar9 + 0x10);
        FUN_00186524(plVar6 + 4);
        *(undefined1 *)(plVar6 + 0x11) = 0;
        *(undefined4 *)((long)plVar6 + 0x8c) = 0;
        *(undefined1 *)(plVar6 + 7) = 0;
        *(undefined1 *)(plVar6 + 0xc) = 0;
        plVar6[9] = (long)(plVar6 + 7);
        plVar6[10] = 0x10;
        plVar6[0xb] = (long)(puVar10 + 0x10);
        plVar6[0x12] = 0;
        *(undefined4 *)(plVar6 + 0x13) = 0;
        plVar6[6] = (long)(puVar10 + 0x10);
        plVar6[0x10] = (long)(puVar2 + 0x10);
        plVar6[0xe] = (long)(plVar6 + 0xc);
        plVar6[0xf] = 0x10;
        *plVar6 = (long)(PTR_DAT_04bc13a8 + 0x10);
        *(undefined8 *)((long)plVar6 + 0xc) = 0;
        uVar7 = *(undefined8 *)PTR_DAT_04bc13b8;
        plVar6[3] = 0;
        FUN_001865b0(plVar6 + 4,uVar7);
        plVar6[5] = 0;
        FUN_0018a58c(plVar6 + 6,&DAT_0407ebb1);
        local_78 = 0;
        local_74 = 0;
        local_70 = 0;
        local_68 = 0;
        local_80 = puVar2 + 0x10;
        FUN_001fd7ec(plVar6 + 0x10,&local_80);
        puVar10 = PTR_DAT_04bc13a0;
        *(undefined1 *)(plVar6 + 0x14) = 0;
        *plVar6 = (long)(puVar10 + 0x10);
        FUN_0019d7fc(plVar6 + 0x15,0,0);
        *plVar6 = (long)(PTR_DAT_04bc1388 + 0x10);
      }
      FUN_001f8c60(PTR_DAT_04bcc970,plVar6);
      sVar8 = *(short *)puVar5;
    }
    *(short *)puVar5 = sVar8 + 1;
    (**(code **)(*(long *)puVar4 + 0x20))(puVar4);
  }
  return;
}

