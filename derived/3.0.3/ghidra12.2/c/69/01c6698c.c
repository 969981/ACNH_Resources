
void FUN_01c6698c(long *param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  long lVar17;
  undefined *puVar18;
  bool bVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined *local_80;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 *local_68;
  long local_60;
  undefined8 local_58;
  
  puVar22 = &local_58;
  uVar20 = FUN_01df3270(&local_58);
  if ((uVar20 & 1) == 0) {
    if (*(int *)(DAT_05351250 + 0xb0) != 1) {
      if (*(char *)((long)param_1 + 0xc) == '\0') {
        *(undefined1 *)((long)param_1 + 0xc) = 1;
      }
      *(undefined4 *)(param_1 + 1) = 3;
      return;
    }
    puVar22 = (undefined8 *)(DAT_05351250 + 0x90);
  }
  FUN_038d1270(param_1 + 2,"%016lx",*puVar22);
  (**(code **)(param_1[2] + 0x18))(param_1 + 2);
  puVar18 = PTR_DAT_04bc0ec8;
  local_78 = 0;
  local_60 = 0x10;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_80 = puVar1;
  local_68 = &local_78;
  FUN_0018b070(&local_80,param_1[3],0xffffffffffffffff);
  plVar2 = (long *)param_1[10];
  if (plVar2 < (long *)param_1[0xb]) {
    *plVar2 = (long)puVar1;
    plVar21 = plVar2 + 1;
    *(undefined1 *)plVar21 = 0;
    plVar2[3] = (long)plVar21;
    plVar2[4] = 0x10;
    if ((undefined **)plVar2 != &local_80) {
      *(undefined1 *)(plVar2 + 1) = local_78;
      uVar3 = *(undefined1 *)((long)plVar2 + 9);
      uVar4 = *(undefined1 *)((long)plVar2 + 10);
      uVar5 = *(undefined1 *)((long)plVar2 + 0xb);
      bVar19 = local_68 == &local_78;
      local_78 = 0;
      uVar6 = *(undefined1 *)((long)plVar2 + 0xc);
      uVar7 = *(undefined1 *)((long)plVar2 + 0xd);
      uVar8 = *(undefined1 *)((long)plVar2 + 0xe);
      uVar9 = *(undefined1 *)((long)plVar2 + 0xf);
      lVar17 = plVar2[2];
      uVar10 = *(undefined1 *)((long)plVar2 + 0x11);
      uVar11 = *(undefined1 *)((long)plVar2 + 0x12);
      *(undefined1 *)((long)plVar2 + 9) = local_77;
      uVar12 = *(undefined1 *)((long)plVar2 + 0x13);
      uVar13 = *(undefined1 *)((long)plVar2 + 0x14);
      uVar14 = *(undefined1 *)((long)plVar2 + 0x15);
      uVar15 = *(undefined1 *)((long)plVar2 + 0x16);
      uVar16 = *(undefined1 *)((long)plVar2 + 0x17);
      *(undefined1 *)((long)plVar2 + 10) = local_76;
      *(undefined1 *)((long)plVar2 + 0xb) = local_75;
      *(undefined1 *)((long)plVar2 + 0xc) = local_74;
      *(undefined1 *)((long)plVar2 + 0xd) = local_73;
      *(undefined1 *)((long)plVar2 + 0xe) = local_72;
      *(undefined1 *)((long)plVar2 + 0xf) = local_71;
      *(undefined1 *)(plVar2 + 2) = local_70;
      *(undefined1 *)((long)plVar2 + 0x11) = local_6f;
      *(undefined1 *)((long)plVar2 + 0x12) = local_6e;
      *(undefined1 *)((long)plVar2 + 0x13) = local_6d;
      *(undefined1 *)((long)plVar2 + 0x14) = local_6c;
      *(undefined1 *)((long)plVar2 + 0x15) = local_6b;
      *(undefined1 *)((long)plVar2 + 0x16) = local_6a;
      *(undefined1 *)((long)plVar2 + 0x17) = local_69;
      plVar2[3] = (long)local_68;
      plVar2[4] = local_60;
      local_60 = 0x10;
      local_77 = uVar3;
      local_76 = uVar4;
      local_75 = uVar5;
      local_74 = uVar6;
      local_73 = uVar7;
      local_72 = uVar8;
      local_71 = uVar9;
      local_70 = (char)lVar17;
      local_6f = uVar10;
      local_6e = uVar11;
      local_6d = uVar12;
      local_6c = uVar13;
      local_6b = uVar14;
      local_6a = uVar15;
      local_69 = uVar16;
      local_68 = &local_78;
      if (bVar19) {
        plVar2[3] = (long)plVar21;
      }
    }
    param_1[10] = (long)(plVar2 + 5);
  }
  else {
    FUN_01c67120(param_1 + 9,&local_80);
  }
  local_80 = puVar18 + 0x10;
  FUN_0018b1a0(&local_80);
  *(byte *)(param_1 + 0xc) = param_3 & 1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,param_4);
  return;
}

