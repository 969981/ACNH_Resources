
uint FUN_028d7d60(long param_1,long *param_2,float *param_3)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined *local_5e0;
  undefined8 local_5d8;
  undefined1 auStack_5d0 [24];
  float local_5b8;
  float local_5b0;
  undefined *local_5a8;
  undefined8 local_5a0;
  undefined4 local_598;
  undefined1 local_594 [31];
  undefined1 local_575;
  undefined4 local_5c;
  undefined4 local_58;
  undefined2 local_54;
  
  if (param_3 == (float *)0x0) {
    return 0;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  if ((undefined1 *)param_2[1] == &DAT_04071901) {
LAB_028d7e08:
    local_5a8 = PTR_DAT_04bb2010 + 0x10;
    local_5a0 = (char *)0x0;
    uVar7 = FUN_01689940(&local_5a8);
joined_r0x028d7e20:
    if ((uVar7 & 1) == 0) goto LAB_028d7f48;
    local_5a0._4_4_ = (int)((ulong)local_5a0 >> 0x20);
    local_5d8._0_4_ = (int)local_5a0;
    local_5d8._4_4_ = local_5a0._4_4_;
LAB_028d7f20:
    param_3[1] = 0.0;
    *param_3 = (float)(int)local_5d8 * 5.0 + 5.0;
    fVar11 = (float)local_5d8._4_4_ * 5.0 + 5.0;
  }
  else {
    uVar10 = 0;
    bVar5 = true;
    do {
      cVar3 = ((undefined1 *)param_2[1])[uVar10];
      if (cVar3 != (&DAT_04071901)[uVar10]) break;
      if (cVar3 == '\0') {
        if (bVar5) goto LAB_028d7e08;
        break;
      }
      bVar5 = uVar10 < 0x80000;
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x80001);
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    if ((undefined1 *)param_2[1] == &DAT_040f3cf9) {
LAB_028d7f00:
      local_5a8 = PTR_DAT_04bb2010 + 0x10;
      local_5a0 = (char *)0x0;
      uVar7 = FUN_0168b490(&local_5a8);
      goto joined_r0x028d7e20;
    }
    uVar10 = 0;
    bVar5 = true;
    do {
      cVar3 = ((undefined1 *)param_2[1])[uVar10];
      if (cVar3 != (&DAT_040f3cf9)[uVar10]) break;
      if (cVar3 == '\0') {
        if (bVar5) goto LAB_028d7f00;
        break;
      }
      bVar5 = uVar10 < 0x80000;
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x80001);
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    if ((undefined1 *)param_2[1] == &DAT_040b02b3) goto LAB_028d7f00;
    uVar10 = 0;
    bVar5 = true;
    do {
      cVar3 = ((undefined1 *)param_2[1])[uVar10];
      if (cVar3 != (&DAT_040b02b3)[uVar10]) break;
      if (cVar3 == '\0') {
        if (bVar5) goto LAB_028d7f00;
        break;
      }
      bVar5 = uVar10 < 0x80000;
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x80001);
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    if ((undefined1 *)param_2[1] == &DAT_04096555) {
LAB_028d81bc:
      uVar7 = 0;
      goto LAB_028d7f48;
    }
    uVar10 = 0;
    bVar5 = true;
    do {
      cVar3 = ((undefined1 *)param_2[1])[uVar10];
      if (cVar3 != (&DAT_04096555)[uVar10]) break;
      if (cVar3 == '\0') {
        if (bVar5) goto LAB_028d81bc;
        break;
      }
      bVar5 = uVar10 < 0x80000;
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x80001);
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    if ((undefined1 *)param_2[1] == &DAT_0406c81e) {
LAB_028d8040:
      if (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0) {
        local_5a8 = PTR_DAT_04bb2020 + 0x10;
        local_5a0 = "HostPlayerOwsFirstTalk";
        iVar6 = FUN_02743000(&local_5a8);
        if (iVar6 != 0) goto LAB_028d8114;
LAB_028d844c:
        lVar9 = *(long *)PTR_DAT_04bb5c90;
        fVar11 = *(float *)(lVar9 + 0x40);
        *param_3 = fVar11;
        param_3[1] = *(float *)(lVar9 + 0x44);
        fVar12 = *(float *)(lVar9 + 0x48);
        fVar13 = 45.0;
LAB_028d8474:
        fVar11 = fVar11 + fVar13;
        param_3[1] = 0.0;
LAB_028d847c:
        *param_3 = fVar11;
        fVar12 = fVar12 + 20.0;
LAB_028d8488:
        param_3[2] = fVar12;
      }
      else {
        FUN_025196e4(auStack_5d0);
        local_5a8 = PTR_DAT_04bb2020 + 0x10;
        local_5a0 = "OwsFirstTalk";
        iVar6 = FUN_0274bce0(auStack_5d0,&local_5a8);
        if (iVar6 == 0) goto LAB_028d844c;
LAB_028d8114:
        puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar7 = *puVar8 ^ *puVar8 << 0xb;
        uVar2 = puVar8[3];
        *puVar8 = puVar8[1];
        puVar8[1] = puVar8[2];
        uVar7 = uVar7 >> 8 ^ uVar2 >> 0x13 ^ uVar7 ^ uVar2;
        puVar8[2] = uVar2;
        puVar8[3] = uVar7;
        uVar7 = (uint)((ulong)uVar7 * 100 >> 0x20);
        local_5a8 = PTR_DAT_04bb2010 + 0x10;
        local_5a0 = (char *)0x0;
        if (0x45 < uVar7) {
          if (uVar7 < 0x5f) {
            uVar10 = FUN_0168a7e0(&local_5a8);
            goto joined_r0x028d81b8;
          }
          lVar9 = *(long *)PTR_DAT_04bb5c90;
          fVar11 = *(float *)(lVar9 + 0x40);
          *param_3 = fVar11;
          param_3[1] = *(float *)(lVar9 + 0x44);
          fVar12 = *(float *)(lVar9 + 0x48);
          param_3[1] = 0.0;
          fVar11 = fVar11 + 45.0;
          goto LAB_028d847c;
        }
        uVar10 = FUN_0168a170(&local_5a8);
joined_r0x028d81b8:
        if ((uVar10 & 1) == 0) goto LAB_028d81bc;
        local_5a0._4_4_ = (int)((ulong)local_5a0 >> 0x20);
        *param_3 = (float)(int)local_5a0 * 5.0 + 5.0;
        param_3[2] = (float)local_5a0._4_4_ * 5.0 + 5.0;
LAB_028d81a0:
        param_3[1] = 0.0;
      }
      uVar7 = 1;
      goto LAB_028d7f48;
    }
    uVar10 = 0;
    bVar5 = true;
    do {
      cVar3 = ((undefined1 *)param_2[1])[uVar10];
      if (cVar3 != (&DAT_0406c81e)[uVar10]) break;
      if (cVar3 == '\0') {
        if (bVar5) goto LAB_028d8040;
        break;
      }
      bVar5 = uVar10 < 0x80000;
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x80001);
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar4 = PTR_DAT_04bb2020;
    if ((undefined1 *)param_2[1] == &DAT_040eeb6e) {
LAB_028d81c8:
      *param_3 = *(float *)(param_1 + 0x28);
      param_3[1] = *(float *)(param_1 + 0x2c);
      fVar12 = *(float *)(param_1 + 0x30);
      goto LAB_028d8488;
    }
    uVar10 = 0;
    bVar5 = true;
    do {
      cVar3 = ((undefined1 *)param_2[1])[uVar10];
      if (cVar3 != (&DAT_040eeb6e)[uVar10]) break;
      if (cVar3 == '\0') {
        if (bVar5) goto LAB_028d81c8;
        break;
      }
      bVar5 = uVar10 < 0x80000;
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x80001);
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_5a0 = &DAT_040d4701;
    local_5a8 = puVar1;
    uVar10 = FUN_00710cb0(param_2,&local_5a8);
    if ((uVar10 & 1) != 0) {
      fVar13 = 15.0;
      lVar9 = *(long *)PTR_DAT_04bb5c90;
      fVar11 = *(float *)(lVar9 + 0x40);
      *param_3 = fVar11;
      param_3[1] = *(float *)(lVar9 + 0x44);
      fVar12 = *(float *)(lVar9 + 0x48);
      goto LAB_028d8474;
    }
    local_5a0 = &DAT_04086b30;
    local_5a8 = puVar1;
    uVar10 = FUN_00710cb0(param_2,&local_5a8);
    if ((uVar10 & 1) == 0) {
      puVar1 = puVar4 + 0x10;
      local_5a0 = &DAT_0406c590;
      local_5a8 = puVar1;
      uVar10 = FUN_00710cb0(param_2,&local_5a8);
      if ((uVar10 & 1) != 0) {
        local_575 = 0;
        local_5a0 = local_594;
        local_598 = 0x20;
        local_594[0] = 0;
        local_5a8 = PTR_DAT_04bb2028 + 0x10;
        (**(code **)(*param_2 + 0x18))(param_2);
        FUN_038d1270(&local_5a8,"V_%s_EventObj_0",param_2[1]);
        uVar7 = FUN_0118b058(param_3,&local_5a8);
        if ((uVar7 & 1) == 0) goto LAB_028d7f48;
        param_3[1] = 0.0;
        fVar11 = param_3[2];
        *param_3 = *param_3 + -6.5;
        fVar12 = 7.0;
        goto LAB_028d8424;
      }
      local_5a0 = &DAT_040b026f;
      local_5a8 = puVar1;
      uVar10 = FUN_00710cb0(param_2,&local_5a8);
      if ((uVar10 & 1) != 0) {
        local_575 = 0;
        local_5a0 = local_594;
        local_598 = 0x20;
        local_594[0] = 0;
        local_5a8 = PTR_DAT_04bb2028 + 0x10;
        FUN_0118b520(param_2);
        FUN_0118b61c(auStack_5d0);
        FUN_006bd410(&local_5a8,auStack_5d0);
        uVar7 = FUN_0118b058(param_3,&local_5a8);
        if ((uVar7 & 1) == 0) goto LAB_028d7f48;
        param_3[1] = 0.0;
        fVar11 = param_3[2];
        *param_3 = *param_3 + -15.0;
        fVar12 = 10.0;
        goto LAB_028d8424;
      }
      local_5a8 = puVar4 + 0x10;
      local_5a0 = &DAT_0409b637;
      uVar10 = FUN_00710cb0(param_2,&local_5a8);
      if ((uVar10 & 1) != 0) goto LAB_028d844c;
      uVar10 = FUN_00710cb0(param_2,&DAT_055b5368);
      if ((uVar10 & 1) == 0) {
        *param_3 = *(float *)(param_1 + 0x1c);
        param_3[1] = *(float *)(param_1 + 0x20);
        fVar12 = *(float *)(param_1 + 0x24);
        goto LAB_028d8488;
      }
      local_5c = 0;
      local_54 = 0;
      memset(&local_5a0,0,0x540);
      local_58 = 0;
      local_5a8 = (undefined *)0x0;
      FUN_01377e60(&local_5a8,&local_5c);
      uVar10 = FUN_01379ce0(auStack_5d0,&local_5c,&local_5a8);
      if ((uVar10 & 1) != 0) {
        *param_3 = local_5b8;
        param_3[2] = local_5b0;
        goto LAB_028d81a0;
      }
      local_5e0 = PTR_DAT_04bb2010 + 0x10;
      local_5d8 = 0;
      uVar7 = FUN_0168b490(&local_5e0);
      if ((uVar7 & 1) == 0) goto LAB_028d7f48;
      goto LAB_028d7f20;
    }
    local_575 = 0;
    local_5a0 = local_594;
    local_598 = 0x20;
    local_594[0] = 0;
    local_5a8 = PTR_DAT_04bb2028 + 0x10;
    (**(code **)(*param_2 + 0x18))(param_2);
    FUN_038d1270(&local_5a8,"V_%s_EventObj_0",param_2[1]);
    uVar7 = FUN_0118b058(param_3,&local_5a8);
    if ((uVar7 & 1) == 0) goto LAB_028d7f48;
    param_3[1] = 0.0;
    fVar11 = param_3[2];
    *param_3 = *param_3 + -6.0;
    fVar12 = 5.5;
LAB_028d8424:
    fVar11 = fVar11 + fVar12;
  }
  param_3[2] = fVar11;
LAB_028d7f48:
  return uVar7 & 1;
}

