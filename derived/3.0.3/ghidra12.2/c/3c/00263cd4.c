
undefined4 FUN_00263cd4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined8 local_228;
  undefined4 local_220;
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  int local_188;
  ErrorResultVariant aEStack_184 [12];
  int local_178 [4];
  int local_168;
  ErrorResultVariant aEStack_164 [12];
  int local_158 [4];
  int local_148;
  ErrorResultVariant aEStack_144 [12];
  int local_138 [4];
  int local_128;
  ErrorResultVariant aEStack_124 [12];
  int local_118 [4];
  int local_108;
  ErrorResultVariant aEStack_104 [12];
  int local_f8 [4];
  int local_e8;
  ErrorResultVariant aEStack_e4 [12];
  int local_d8 [4];
  int local_c8;
  ErrorResultVariant aEStack_c4 [12];
  int local_b8 [4];
  int local_a8;
  ErrorResultVariant aEStack_a4 [12];
  int local_98 [4];
  int local_88;
  ErrorResultVariant aEStack_84 [12];
  int local_78 [4];
  int local_68;
  ErrorResultVariant aEStack_64 [12];
  int local_58;
  ErrorResultVariant local_54 [4];
  undefined8 local_50;
  undefined4 local_44;
  
  uVar5 = FUN_00263ba8();
  if ((uVar5 & 1) != 0) {
    return 1;
  }
  if (2 < **(int **)(param_1 + 0x60) - 2U) {
    uVar5 = FUN_00264418(param_1);
    uVar4 = 5;
    if ((uVar5 & 1) != 0) {
      uVar4 = 1;
    }
    return uVar4;
  }
  FUN_002296c4(&local_228,*(int **)(param_1 + 0x60) + 1);
  if ((int)local_228 == 0) {
    plVar6 = (long *)FUN_002ba790(DAT_04c61168);
    puVar3 = PTR_DAT_04bcd350;
    uVar4 = FUN_0026be6c(*(undefined8 *)PTR_DAT_04bcd350);
    lVar9 = (**(code **)(*plVar6 + 0x50))(plVar6,uVar4);
    if (lVar9 != 0) {
      lVar10 = FUN_002ba788(DAT_04c61168);
      plVar6 = (long *)(lVar9 + 0x10);
      uVar5 = FUN_0022740c(lVar10 + 0x108,plVar6);
      if ((uVar5 & 1) == 0) {
        local_228 = 0x200000000000;
        local_220 = 0;
        (**(code **)(*plVar6 + 0x28))(plVar6,&local_228);
        lVar10 = FUN_002ba788(DAT_04c61168);
        local_228 = 0x200000000000;
        local_220 = 0;
        (**(code **)(*(long *)(lVar10 + 0x108) + 0x28))(lVar10 + 0x108,&local_228);
      }
      FUN_002b3fa8(&local_228);
      plVar8 = (long *)FUN_002ba788(DAT_04c61168);
      (**(code **)(*plVar8 + 0x20))(&local_58,plVar8,lVar9,&local_228);
      plVar8 = (long *)FUN_002ba788(DAT_04c61168);
      (**(code **)(*plVar8 + 0x60))(plVar8,&local_228);
      plVar8 = (long *)FUN_002ba788(DAT_04c61168);
      (**(code **)(*plVar8 + 0x68))(plVar8,plVar6);
      uVar5 = FUN_0026c550(*(undefined8 *)puVar3);
      if ((uVar5 & 1) == 0) {
        DAT_04c5fcb0 = FUN_002b43f4(&local_228);
      }
      *(undefined **)(param_1 + 0x30) = PTR_FUN_04bcda20;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "JoinMeshJob::SendJoinRequest";
      FUN_002b4104(&local_228);
      return 0;
    }
    lVar10 = *(long *)(param_1 + 0xb8);
    lVar9 = *(long *)(DAT_04c5fbb0 + 0x30);
    plVar6 = (long *)FUN_00228380();
    iVar1 = 0;
    if (*plVar6 != 0) {
      iVar1 = (int)((lVar9 - lVar10) / *plVar6);
    }
    if (-1 < iVar1) {
      DAT_04c5fd0b = (undefined1)*(undefined4 *)(param_1 + 0xa0);
      DAT_04c5fcfc = iVar1;
    }
    piVar11 = *(int **)(param_1 + 0x58);
    if (piVar11 == (int *)0x0) goto LAB_0026407c;
    if (2 < *piVar11 - 2U) {
      local_58 = 0;
      local_228 = CONCAT44(local_228._4_4_,0x6439);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_228 + 4),(Result *)&local_58);
      FUN_002296c4(auStack_1a8,&local_228);
      FUN_00220ff8(piVar11,auStack_1a8);
    }
    uVar5 = FUN_0026c550(*(undefined8 *)puVar3);
    if ((uVar5 & 1) == 0) {
      local_58 = 0;
      local_228 = CONCAT44(local_228._4_4_,0x6439);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_228 + 4),(Result *)&local_58);
      puVar2 = PTR_DAT_04bccf00;
      *(int *)(PTR_DAT_04bccf00 + 0x11c) = (int)local_228;
      *(undefined4 *)(puVar2 + 300) = *(undefined4 *)(param_1 + 0xb4);
    }
    uVar7 = *(undefined8 *)puVar3;
  }
  else {
    local_228 = local_228 & 0xffffffff00000000;
    local_58 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_228 + 4),(Result *)&local_58);
    FUN_002296c4(&local_58,*(long *)(param_1 + 0x60) + 4);
    local_78[0] = 0;
    local_68 = 0x643f;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)local_78);
    puVar3 = PTR_DAT_04bcd350;
    if (local_58 == local_68) {
LAB_00263f94:
      plVar6 = *(long **)(*(long *)puVar3 + 0x110);
      if (plVar6 != (long *)0x0) {
        local_50 = 0;
        local_58 = 0x16;
        local_54[0] = (ErrorResultVariant)0xfd;
        (**(code **)(*plVar6 + 0x10))(plVar6,&local_58);
      }
LAB_00263fc4:
      FUN_002296c4(&local_58,*(long *)(param_1 + 0x60) + 4);
    }
    else {
      FUN_002296c4(local_78,*(long *)(param_1 + 0x60) + 4);
      local_44 = 0;
      local_88 = 0x6442;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_44);
      if (local_78[0] == local_88) goto LAB_00263f94;
      FUN_002296c4(local_98,*(long *)(param_1 + 0x60) + 4);
      local_44 = 0;
      local_a8 = 0x6443;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_a4,(Result *)&local_44);
      if (local_98[0] == local_a8) goto LAB_00263f94;
      FUN_002296c4(local_b8,*(long *)(param_1 + 0x60) + 4);
      local_44 = 0;
      local_c8 = 0x6444;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_c4,(Result *)&local_44);
      if (local_b8[0] == local_c8) goto LAB_00263f94;
      FUN_002296c4(local_d8,*(long *)(param_1 + 0x60) + 4);
      local_44 = 0;
      local_e8 = 0x6445;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_e4,(Result *)&local_44);
      if (local_d8[0] == local_e8) goto LAB_00263f94;
      FUN_002296c4(local_f8,*(long *)(param_1 + 0x60) + 4);
      local_44 = 0;
      local_108 = 0x6467;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_104,(Result *)&local_44);
      if (local_f8[0] == local_108) goto LAB_00263f94;
      FUN_002296c4(local_118,*(long *)(param_1 + 0x60) + 4);
      local_44 = 0;
      local_128 = 0x6468;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_124,(Result *)&local_44);
      if (local_118[0] == local_128) goto LAB_00263f94;
      FUN_002296c4(local_138,*(long *)(param_1 + 0x60) + 4);
      local_44 = 0;
      local_148 = 0x6469;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_144,(Result *)&local_44);
      if (local_138[0] == local_148) goto LAB_00263f94;
      FUN_002296c4(local_158,*(long *)(param_1 + 0x60) + 4);
      local_44 = 0;
      local_168 = 0x646a;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_164,(Result *)&local_44);
      if (local_158[0] == local_168) goto LAB_00263f94;
      FUN_002296c4(local_178,*(long *)(param_1 + 0x60) + 4);
      local_44 = 0;
      local_188 = 0x644a;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_184,(Result *)&local_44);
      if (local_178[0] == local_188) goto LAB_00263f94;
      FUN_002296c4(&local_58,*(long *)(param_1 + 0x60) + 4);
      local_78[0] = 0;
      local_68 = 0x10c26;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)local_78);
      if (local_58 == local_68) goto LAB_00263fc4;
      FUN_002296c4(local_78,*(long *)(param_1 + 0x60) + 4);
      local_b8[0] = 0;
      local_88 = 0x6470;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)local_b8);
      if (local_78[0] == local_88) goto LAB_00263fc4;
      FUN_002296c4(local_98,*(long *)(param_1 + 0x60) + 4);
      local_b8[0] = 0;
      local_a8 = 0x646f;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_a4,(Result *)local_b8);
      if (local_98[0] == local_a8) goto LAB_00263fc4;
      FUN_002296c4(&local_58,*(long *)(param_1 + 0x60) + 4);
      local_78[0] = 0;
      local_68 = 0xc25;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)local_78);
      if (local_58 == local_68) {
        local_58 = 0x6c3d;
      }
      else {
        local_58 = 0x6439;
      }
      local_68 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(local_54,(Result *)&local_68);
    }
    FUN_00229780(&local_228,&local_58);
    lVar10 = *(long *)(param_1 + 0xb8);
    lVar9 = *(long *)(DAT_04c5fbb0 + 0x30);
    plVar6 = (long *)FUN_00228380();
    iVar1 = 0;
    if (*plVar6 != 0) {
      iVar1 = (int)((lVar9 - lVar10) / *plVar6);
    }
    if (-1 < iVar1) {
      DAT_04c5fd0b = (undefined1)*(undefined4 *)(param_1 + 0xa0);
      DAT_04c5fcfc = iVar1;
    }
    piVar11 = *(int **)(param_1 + 0x58);
    if (piVar11 == (int *)0x0) goto LAB_0026407c;
    if (2 < *piVar11 - 2U) {
      FUN_002296c4(auStack_198,&local_228);
      FUN_00220ff8(piVar11,auStack_198);
    }
    uVar5 = FUN_0026c550(*(undefined8 *)puVar3);
    puVar2 = PTR_DAT_04bccf00;
    if ((uVar5 & 1) == 0) {
      *(int *)(PTR_DAT_04bccf00 + 0x11c) = (int)local_228;
      *(undefined4 *)(puVar2 + 300) = *(undefined4 *)(param_1 + 0xb4);
    }
    uVar7 = *(undefined8 *)puVar3;
  }
  FUN_0026c264(uVar7);
  *(undefined8 *)(param_1 + 0x58) = 0;
LAB_0026407c:
  FUN_00221064(*(undefined8 *)(param_1 + 0x60));
  FUN_00220f24(*(undefined8 *)(param_1 + 0x60));
  return 1;
}

