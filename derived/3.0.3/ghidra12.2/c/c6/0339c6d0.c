
void FUN_0339c6d0(undefined4 *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined **local_fa8;
  undefined4 local_fa0;
  undefined2 local_f9c;
  byte local_f9a;
  undefined4 local_f98;
  undefined4 uStack_f94;
  undefined4 local_f90;
  undefined4 uStack_f8c;
  undefined *local_40;
  char *pcStack_38;
  
  plVar2 = (long *)(param_1 + 4);
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0339c72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 4))(plVar2,param_2,*param_1,param_1 + 1);
    return;
  }
  switch(*param_1) {
  case 0:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xb;
    FUN_03387e08(param_2,&local_40,&local_fa8);
    break;
  case 1:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x19;
    FUN_033a36b4(param_2,&local_40,&local_fa8);
    break;
  case 2:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x2e;
    FUN_033a38bc(param_2,&local_40,&local_fa8);
    break;
  case 3:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x46;
    FUN_033a3ad8(param_2,&local_40,&local_fa8);
    break;
  case 4:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x5e;
    FUN_033a43bc(param_2,&local_40,&local_fa8);
    break;
  case 5:
    local_f98 = param_1[2];
    local_f9a = *(byte *)(param_1 + 1);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    uStack_f94 = 0x30;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x6a;
    goto LAB_033a2858;
  case 6:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x78;
    FUN_0338948c(param_2,&local_40,&local_fa8);
    break;
  case 7:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x88;
    FUN_033a8be0(param_2,&local_40,&local_fa8);
    break;
  case 8:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x9c;
    FUN_033ab5d0(param_2,&local_40,&local_fa8);
    break;
  case 9:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xae;
    FUN_033ab740(param_2,&local_40,&local_fa8);
    break;
  case 10:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xc0;
    FUN_03387f84(param_2,&local_40,&local_fa8);
    break;
  case 0xb:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xce;
    FUN_033a8de0(param_2,&local_40,&local_fa8);
    break;
  case 0xc:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xe2;
    FUN_033a914c(param_2,&local_40,&local_fa8);
    break;
  case 0xd:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xf8;
    FUN_033a8f50(param_2,&local_40,&local_fa8);
    break;
  case 0xe:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x10d;
    FUN_033a4244(param_2,&local_40,&local_fa8);
    break;
  case 0xf:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x119;
    FUN_033a45f0(param_2,&local_40,&local_fa8);
    break;
  case 0x10:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x127;
    FUN_033a7508(param_2,&local_40,&local_fa8);
    break;
  case 0x11:
    FUN_033a5bd0(&local_fa8);
    local_f9a = *(byte *)(param_1 + 1);
    local_f98 = param_1[2];
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x132;
    FUN_02e9b8ec(param_2,&local_40,&local_fa8);
    break;
  case 0x12:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x142;
    FUN_033a5c74(param_2,&local_40,&local_fa8);
    break;
  case 0x13:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x152;
    FUN_033a5e84(param_2,&local_40,&local_fa8);
    break;
  case 0x14:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x161;
    FUN_033a6da8(param_2,&local_40,&local_fa8);
    break;
  case 0x15:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x170;
    FUN_033a6f18(param_2,&local_40,&local_fa8);
    break;
  case 0x16:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x189;
    FUN_033a77f8(param_2,&local_40,&local_fa8);
    break;
  case 0x17:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 400;
    FUN_033ac578(param_2,&local_40,&local_fa8);
    break;
  case 0x18:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x19f;
    FUN_033a8408(param_2,&local_40,&local_fa8);
    break;
  case 0x19:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x1ad;
    FUN_033a8580(param_2,&local_40,&local_fa8);
    break;
  case 0x1a:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x1bd;
    FUN_033a4768(param_2,&local_40,&local_fa8);
    break;
  case 0x1b:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x1cf;
    FUN_033a5308(param_2,&local_40,&local_fa8);
    break;
  case 0x1c:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x1dd;
    FUN_033a6c30(param_2,&local_40,&local_fa8);
    break;
  case 0x1d:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x1ed;
    FUN_033a7680(param_2,&local_40,&local_fa8);
    break;
  case 0x1e:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x1f9;
    FUN_033a8868(param_2,&local_40,&local_fa8);
    break;
  case 0x1f:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x207;
    FUN_033a658c(param_2,&local_40,&local_fa8);
    break;
  case 0x20:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x210;
    FUN_033a66fc(param_2,&local_40,&local_fa8);
    break;
  case 0x21:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x21d;
    FUN_033a686c(param_2,&local_40,&local_fa8);
    break;
  case 0x22:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x22a;
    FUN_033a9368(param_2,&local_40,&local_fa8);
    break;
  case 0x23:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x237;
    FUN_033aa5b4(param_2,&local_40,&local_fa8);
    break;
  case 0x24:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x24a;
    FUN_033aa72c(param_2,&local_40,&local_fa8);
    break;
  case 0x25:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x261;
    goto LAB_0339feb0;
  case 0x26:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x277;
    FUN_033b2960(param_2,&local_40,&local_fa8);
    break;
  case 0x27:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x288;
    FUN_033a5768(param_2,&local_40,&local_fa8);
    break;
  case 0x28:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x293;
    FUN_033a58e0(param_2,&local_40,&local_fa8);
    break;
  case 0x29:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x2a4;
    FUN_033aa89c(param_2,&local_40,&local_fa8);
    break;
  case 0x2a:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x2be;
    FUN_033aaa0c(param_2,&local_40,&local_fa8);
    break;
  case 0x2b:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x2e1;
    FUN_033aab7c(param_2,&local_40,&local_fa8);
    break;
  case 0x2c:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x307;
    FUN_033aacec(param_2,&local_40,&local_fa8);
    break;
  case 0x2d:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 799;
    FUN_033aae64(param_2,&local_40,&local_fa8);
    break;
  case 0x2e:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x337;
    FUN_033ab098(param_2,&local_40,&local_fa8);
    break;
  case 0x2f:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x353;
    FUN_033ab208(param_2,&local_40,&local_fa8);
    break;
  case 0x30:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x36d;
    FUN_033b0bd8(param_2,&local_40,&local_fa8);
    break;
  case 0x31:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x382;
    FUN_033a4e04(param_2,&local_40,&local_fa8);
    break;
  case 0x32:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x38d;
    FUN_033ac7b4(param_2,&local_40,&local_fa8);
    break;
  case 0x33:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x3a0;
    FUN_033a5a58(param_2,&local_40,&local_fa8);
    break;
  case 0x34:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x3b7;
    FUN_033a4c94(param_2,&local_40,&local_fa8);
    break;
  case 0x35:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x3ca;
    FUN_033a4a48(param_2,&local_40,&local_fa8);
    break;
  case 0x36:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x3d9;
    FUN_033a7200(param_2,&local_40,&local_fa8);
    break;
  case 0x37:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x3e6;
    FUN_033a5480(param_2,&local_40,&local_fa8);
    break;
  case 0x38:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x3ee;
    FUN_033a8a70(param_2,&local_40,&local_fa8);
    break;
  case 0x39:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x3fb;
    FUN_033a7384(param_2,&local_40,&local_fa8);
    break;
  case 0x3a:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x40c;
    FUN_033aa1f8(param_2,&local_40,&local_fa8);
    break;
  case 0x3b:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x41b;
    FUN_033a3c50(param_2,&local_40,&local_fa8);
    break;
  case 0x3c:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x42c;
    FUN_033a69e4(param_2,&local_40,&local_fa8);
    break;
  case 0x3d:
    local_fa8 = (undefined **)(PTR_DAT_04bc8568 + 0x10);
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    uStack_f94 = 0;
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x43a;
    FUN_0316b5d8(param_2,&local_40,&local_fa8);
    break;
  case 0x3e:
    local_fa8 = (undefined **)(PTR_DAT_04bc70a0 + 0x10);
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    uStack_f94 = 0;
    local_f90 = 0;
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x445;
    FUN_02ec283c(param_2,&local_40,&local_fa8);
    break;
  case 0x3f:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x44f;
    FUN_033aa43c(param_2,&local_40,&local_fa8);
    break;
  case 0x40:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x460;
    FUN_033a3eb8(param_2,&local_40,&local_fa8);
    break;
  case 0x41:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x478;
    FUN_033a5ff4(param_2,&local_40,&local_fa8);
    break;
  case 0x42:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x485;
    FUN_033a5190(param_2,&local_40,&local_fa8);
    break;
  case 0x43:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x492;
    FUN_02d1c6cc(param_2,&local_40,&local_fa8);
    break;
  case 0x44:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x4a0;
    FUN_033a55f0(param_2,&local_40,&local_fa8);
    break;
  case 0x45:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x4af;
    FUN_033a40d4(param_2,&local_40,&local_fa8);
    break;
  case 0x46:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x4ca;
    FUN_033a61fc(param_2,&local_40,&local_fa8);
    break;
  case 0x47:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x4d2;
    FUN_033a6374(param_2,&local_40,&local_fa8);
    break;
  case 0x48:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x4df;
    FUN_033b1c94(param_2,&local_40,&local_fa8);
    break;
  case 0x49:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x4eb;
    FUN_033b27e8(param_2,&local_40,&local_fa8);
    break;
  case 0x4a:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x4fb;
    FUN_033a4f7c(param_2,&local_40,&local_fa8);
    break;
  case 0x4b:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x506;
    FUN_033a7088(param_2,&local_40,&local_fa8);
    break;
  case 0x4c:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x514;
    FUN_033a7970(param_2,&local_40,&local_fa8);
    break;
  case 0x4d:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x521;
    FUN_033a7ae0(param_2,&local_40,&local_fa8);
    break;
  case 0x4e:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x534;
    FUN_033a94e0(param_2,&local_40,&local_fa8);
    break;
  case 0x4f:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x53d;
    FUN_033a96fc(param_2,&local_40,&local_fa8);
    break;
  case 0x50:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x552;
    FUN_033a9874(param_2,&local_40,&local_fa8);
    break;
  case 0x51:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x56c;
    FUN_033acca0(param_2,&local_40,&local_fa8);
    break;
  case 0x52:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x580;
    FUN_033b148c(param_2,&local_40,&local_fa8);
    break;
  case 0x53:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x595;
    FUN_033b1e0c(param_2,&local_40,&local_fa8);
    break;
  case 0x54:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x5b2;
    FUN_033b2258(param_2,&local_40,&local_fa8);
    break;
  case 0x55:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x5cd;
    FUN_033b2468(param_2,&local_40,&local_fa8);
    break;
  case 0x56:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x5ee;
    FUN_033ab458(param_2,&local_40,&local_fa8);
    break;
  case 0x57:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x5ff;
    FUN_033b182c(param_2,&local_40,&local_fa8);
    break;
  case 0x58:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x614;
    FUN_033b19a4(param_2,&local_40,&local_fa8);
    break;
  case 0x59:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x62f;
    FUN_0315908c(param_2,&local_40,&local_fa8);
    break;
  case 0x5a:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x645;
    FUN_033a7d18(param_2,&local_40,&local_fa8);
    break;
  case 0x5b:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x65f;
    FUN_033a7e90(param_2,&local_40,&local_fa8);
    break;
  case 0x5c:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x67a;
    FUN_033a8000(param_2,&local_40,&local_fa8);
    break;
  case 0x5d:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x68e;
    FUN_033a820c(param_2,&local_40,&local_fa8);
    break;
  case 0x5e:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x6ab;
    FUN_033b0f74(param_2,&local_40,&local_fa8);
    break;
  case 0x5f:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x6ba;
    FUN_033b2678(param_2,&local_40,&local_fa8);
    break;
  case 0x60:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x6c7;
    FUN_033b1264(param_2,&local_40,&local_fa8);
    break;
  case 0x61:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x6db;
    FUN_033b10ec(param_2,&local_40,&local_fa8);
    break;
  case 0x62:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x6e7;
    FUN_033b16bc(param_2,&local_40,&local_fa8);
    break;
  case 99:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x6fb;
    FUN_033b1b1c(param_2,&local_40,&local_fa8);
    break;
  case 100:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x70c;
    FUN_033ad3e0(param_2,&local_40,&local_fa8);
    break;
  case 0x65:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x723;
    FUN_033af740(param_2,&local_40,&local_fa8);
    break;
  case 0x66:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x735;
    FUN_033aedf8(param_2,&local_40,&local_fa8);
    break;
  case 0x67:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x74c;
    FUN_033af8b0(param_2,&local_40,&local_fa8);
    break;
  case 0x68:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x761;
    FUN_033afab0(param_2,&local_40,&local_fa8);
    break;
  case 0x69:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x773;
    FUN_033aef68(param_2,&local_40,&local_fa8);
    break;
  case 0x6a:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x78c;
    FUN_033afcac(param_2,&local_40,&local_fa8);
    break;
  case 0x6b:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x7a9;
    FUN_033afe24(param_2,&local_40,&local_fa8);
    break;
  case 0x6c:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x7c7;
    FUN_033b028c(param_2,&local_40,&local_fa8);
    break;
  case 0x6d:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x7e2;
    FUN_033ad558(param_2,&local_40,&local_fa8);
    break;
  case 0x6e:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x7eb;
    FUN_033ace10(param_2,&local_40,&local_fa8);
    break;
  case 0x6f:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x804;
    FUN_033acf80(param_2,&local_40,&local_fa8);
    break;
  case 0x70:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x81d;
    FUN_033add48(param_2,&local_40,&local_fa8);
    break;
  case 0x71:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x835;
    FUN_033adf58(param_2,&local_40,&local_fa8);
    break;
  case 0x72:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x84d;
LAB_0339feb0:
    local_f90 = 0;
    uStack_f94 = 0;
    local_f9c = 1;
    local_fa8 = (undefined **)(PTR_DAT_04bc7080 + 0x10);
    local_40 = PTR_DAT_04bb2020 + 0x10;
    FUN_02ec113c(param_2,&local_40,&local_fa8);
    break;
  case 0x73:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x861;
    FUN_033ada54(param_2,&local_40,&local_fa8);
    break;
  case 0x74:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x880;
    FUN_033ad0f0(param_2,&local_40,&local_fa8);
    break;
  case 0x75:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x895;
    FUN_033ae0d8(param_2,&local_40,&local_fa8);
    break;
  case 0x76:
    local_fa8 = (undefined **)(PTR_DAT_04bc7150 + 0x10);
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    uStack_f94 = 0;
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x8ac;
    FUN_02ec8054(param_2,&local_40,&local_fa8);
    break;
  case 0x77:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x8ca;
    FUN_033ae3b8(param_2,&local_40,&local_fa8);
    break;
  case 0x78:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x8df;
    FUN_033b07fc(param_2,&local_40,&local_fa8);
    break;
  case 0x79:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x8f4;
    FUN_033ae248(param_2,&local_40,&local_fa8);
    break;
  case 0x7a:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x8fc;
    FUN_02c53430(param_2,&local_40,&local_fa8);
    break;
  case 0x7b:
    local_f98 = param_1[2];
    local_fa8 = (undefined **)(PTR_DAT_04bc59c0 + 0x10);
    local_f9a = *(byte *)(param_1 + 1);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_f9c = 1;
    uStack_f94 = 0xffffffff;
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x908;
    FUN_02c53818(param_2,&local_40,&local_fa8);
    break;
  case 0x7c:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x923;
    FUN_033aeb08(param_2,&local_40,&local_fa8);
    break;
  case 0x7d:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x93b;
    FUN_033af0d8(param_2,&local_40,&local_fa8);
    break;
  case 0x7e:
    local_fa8 = (undefined **)(PTR_DAT_04bc7100 + 0x10);
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    uStack_f94 = 0;
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x94d;
    FUN_02ec5d58(param_2,&local_40,&local_fa8);
    break;
  case 0x7f:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x95c;
    FUN_033af3c8(param_2,&local_40,&local_fa8);
    break;
  case 0x80:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x97f;
    FUN_033af5c8(param_2,&local_40,&local_fa8);
    break;
  case 0x81:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x996;
    FUN_033ad268(param_2,&local_40,&local_fa8);
    break;
  case 0x82:
    local_fa8 = &PTR_LAB_04b24040;
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    uStack_f94 = 0;
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x9ac;
    FUN_033adbcc(param_2,&local_40,&local_fa8);
    break;
  case 0x83:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x9d1;
    FUN_033ac92c(param_2,&local_40,&local_fa8);
    break;
  case 0x84:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x9ea;
    FUN_033acaa4(param_2,&local_40,&local_fa8);
    break;
  case 0x85:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xa07;
    FUN_033ad764(param_2,&local_40,&local_fa8);
    break;
  case 0x86:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xa23;
    FUN_033ad8dc(param_2,&local_40,&local_fa8);
    break;
  case 0x87:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xa3f;
    FUN_033ae990(param_2,&local_40,&local_fa8);
    break;
  case 0x88:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xa61;
    FUN_033ae528(param_2,&local_40,&local_fa8);
    break;
  case 0x89:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xa79;
    FUN_033ae6a0(param_2,&local_40,&local_fa8);
    break;
  case 0x8a:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xa97;
    FUN_033ae818(param_2,&local_40,&local_fa8);
    break;
  case 0x8b:
    local_f9a = *(byte *)(param_1 + 1);
    local_fa8 = &PTR_LAB_04b24060;
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f90 = 0x4b24260;
    uStack_f8c = 0;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xaaf;
    FUN_033aec80(param_2,&local_40,&local_fa8);
    break;
  case 0x8c:
    local_f9a = *(byte *)(param_1 + 1);
    local_fa8 = &PTR_LAB_04b24080;
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f90 = 0x4b24260;
    uStack_f8c = 0;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xad5;
    FUN_033af250(param_2,&local_40,&local_fa8);
    break;
  case 0x8d:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xafa;
    FUN_033aff9c(param_2,&local_40,&local_fa8);
    break;
  case 0x8e:
    local_f9a = *(byte *)(param_1 + 1);
    local_fa8 = &PTR_LAB_04b240a0;
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f90 = 0x4b24288;
    uStack_f8c = 0;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xb25;
    FUN_033b0114(param_2,&local_40,&local_fa8);
    break;
  case 0x8f:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xb54;
    FUN_033b0490(param_2,&local_40,&local_fa8);
    break;
  case 0x90:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xb7e;
    FUN_033b0600(param_2,&local_40,&local_fa8);
    break;
  case 0x91:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xbab;
    FUN_033a86f0(param_2,&local_40,&local_fa8);
    break;
  case 0x92:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xbba;
    FUN_033b0a64(param_2,&local_40,&local_fa8);
    break;
  case 0x93:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xbd0;
    FUN_033a9a84(param_2,&local_40,&local_fa8);
    break;
  case 0x94:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xbdb;
    FUN_033a9bf8(param_2,&local_40,&local_fa8);
    break;
  case 0x95:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xbee;
    FUN_033a9df8(param_2,&local_40,&local_fa8);
    break;
  case 0x96:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xbf9;
    FUN_033a9ff8(param_2,&local_40,&local_fa8);
    break;
  case 0x97:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xc07;
    FUN_033ab940(param_2,&local_40,&local_fa8);
    break;
  case 0x98:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xc17;
    FUN_033abb50(param_2,&local_40,&local_fa8);
    break;
  case 0x99:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xc2b;
    FUN_033abf50(param_2,&local_40,&local_fa8);
    break;
  case 0x9a:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xc3d;
    FUN_033abd50(param_2,&local_40,&local_fa8);
    break;
  case 0x9b:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xc4f;
    FUN_033b0d48(param_2,&local_40,&local_fa8);
    break;
  case 0x9c:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xc6b;
    FUN_033b2010(param_2,&local_40,&local_fa8);
    break;
  case 0x9d:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xc8c;
    FUN_033ac160(param_2,&local_40,&local_fa8);
    break;
  case 0x9e:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xca7;
    FUN_033ac370(param_2,&local_40,&local_fa8);
    break;
  case 0x9f:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xcc2;
    FUN_03387c94(param_2,&local_40,&local_fa8);
    break;
  case 0xa0:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xcd2;
    FUN_03388ae0(param_2,&local_40,&local_fa8);
    break;
  case 0xa1:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xcdb;
    FUN_03388320(param_2,&local_40,&local_fa8);
    break;
  case 0xa2:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xce7;
    FUN_0338852c(param_2,&local_40,&local_fa8);
    break;
  case 0xa3:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xcf8;
    FUN_03389318(param_2,&local_40,&local_fa8);
    break;
  case 0xa4:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xd0a;
    FUN_03388c54(param_2,&local_40,&local_fa8);
    break;
  case 0xa5:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xd16;
    FUN_03388dc8(param_2,&local_40,&local_fa8);
    break;
  case 0xa6:
    local_fa8 = (undefined **)(PTR_DAT_04bc5ad0 + 0x10);
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    uStack_f94 = 0;
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xd1f;
    FUN_03388754(param_2,&local_40,&local_fa8);
    break;
  case 0xa7:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xd2f;
    FUN_033880f8(param_2,&local_40,&local_fa8);
    break;
  case 0xa8:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xd3d;
    FUN_03388f3c(param_2,&local_40,&local_fa8);
    break;
  case 0xa9:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xd4b;
    FUN_033888c8(param_2,&local_40,&local_fa8);
    break;
  case 0xaa:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0xd5b;
    FUN_033891a4(param_2,&local_40,&local_fa8);
    break;
  case 0xab:
    local_f9a = *(byte *)(param_1 + 1);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_f98 = param_1[2];
    uStack_f94 = 0;
    goto LAB_033a2840;
  case 0xac:
    local_f98 = param_1[2];
    local_f9a = *(byte *)(param_1 + 1);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    uStack_f94 = 1;
    goto LAB_033a2840;
  case 0xad:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 2;
    goto LAB_033a2840;
  case 0xae:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 3;
    goto LAB_033a2840;
  case 0xaf:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 4;
    goto LAB_033a2840;
  case 0xb0:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 5;
    goto LAB_033a2840;
  case 0xb1:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 6;
    goto LAB_033a2840;
  case 0xb2:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 7;
    goto LAB_033a2840;
  case 0xb3:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 8;
    goto LAB_033a2840;
  case 0xb4:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 9;
    goto LAB_033a2840;
  case 0xb5:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 10;
    goto LAB_033a2840;
  case 0xb6:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0xb;
    goto LAB_033a2840;
  case 0xb7:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0xc;
    goto LAB_033a2840;
  case 0xb8:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0xd;
    goto LAB_033a2840;
  case 0xb9:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0xe;
    goto LAB_033a2840;
  case 0xba:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0xf;
    goto LAB_033a2840;
  case 0xbb:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x10;
    goto LAB_033a2840;
  case 0xbc:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x11;
    goto LAB_033a2840;
  case 0xbd:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x12;
    goto LAB_033a2840;
  case 0xbe:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x13;
    goto LAB_033a2840;
  case 0xbf:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x14;
    goto LAB_033a2840;
  case 0xc0:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x15;
    goto LAB_033a2840;
  case 0xc1:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x16;
    goto LAB_033a2840;
  case 0xc2:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x17;
    goto LAB_033a2840;
  case 0xc3:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x18;
    goto LAB_033a2840;
  case 0xc4:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x19;
    goto LAB_033a2840;
  case 0xc5:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x1a;
    goto LAB_033a2840;
  case 0xc6:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x1b;
    goto LAB_033a2840;
  case 199:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x1c;
    goto LAB_033a2840;
  case 200:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x1d;
    goto LAB_033a2840;
  case 0xc9:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x1e;
    goto LAB_033a2840;
  case 0xca:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x1f;
    goto LAB_033a2840;
  case 0xcb:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x20;
    goto LAB_033a2840;
  case 0xcc:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x21;
    goto LAB_033a2840;
  case 0xcd:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x22;
    goto LAB_033a2840;
  case 0xce:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x23;
    goto LAB_033a2840;
  case 0xcf:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x24;
    goto LAB_033a2840;
  case 0xd0:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x25;
    goto LAB_033a2840;
  case 0xd1:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x26;
    goto LAB_033a2840;
  case 0xd2:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x27;
    goto LAB_033a2840;
  case 0xd3:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x28;
    goto LAB_033a2840;
  case 0xd4:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x29;
    goto LAB_033a2840;
  case 0xd5:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x2a;
    goto LAB_033a2840;
  case 0xd6:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x2b;
    goto LAB_033a2840;
  case 0xd7:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x2c;
    goto LAB_033a2840;
  case 0xd8:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x2d;
    goto LAB_033a2840;
  case 0xd9:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x2e;
    goto LAB_033a2840;
  case 0xda:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f98 = param_1[2];
    uStack_f94 = 0x2f;
LAB_033a2840:
    pcStack_38 = "SwkbdInputSeq";
LAB_033a2858:
    local_f9c = 1;
    local_fa8 = (undefined **)(PTR_DAT_04bc5780 + 0x10);
    local_40 = PTR_DAT_04bb2020 + 0x10;
    FUN_033a48d8(param_2,&local_40,&local_fa8);
    break;
  case 0xdb:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x1164;
    FUN_033b2ad0(param_2,&local_40,&local_fa8);
    break;
  case 0xdc:
    local_fa8 = (undefined **)(PTR_DAT_04bc7060 + 0x10);
    local_f9a = *(byte *)(param_1 + 1);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_f9c = 1;
    local_f98 = param_1[2];
    uStack_f94 = 0;
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x117d;
    FUN_02ebfc54(param_2,&local_40,&local_fa8);
    break;
  case 0xdd:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x1191;
    FUN_033b2c40(param_2,&local_40,&local_fa8);
    break;
  case 0xde:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x11a9;
    FUN_033b2db8(param_2,&local_40,&local_fa8);
    break;
  case 0xdf:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x11c6;
    FUN_033b2f30(param_2,&local_40,&local_fa8);
    break;
  case 0xe0:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x11e7;
    FUN_033b312c(param_2,&local_40,&local_fa8);
    break;
  case 0xe1:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x1207;
    FUN_033b32a4(param_2,&local_40,&local_fa8);
    break;
  case 0xe2:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x1223;
    FUN_033b34b0(param_2,&local_40,&local_fa8);
    break;
  case 0xe3:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x1233;
    FUN_033b3628(param_2,&local_40,&local_fa8);
    break;
  case 0xe4:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x124e;
    FUN_033b3828(param_2,&local_40,&local_fa8);
    break;
  case 0xe5:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x125a;
    FUN_033b39a0(param_2,&local_40,&local_fa8);
    break;
  case 0xe6:
    FUN_033b3b18(&local_fa8);
    local_f9a = *(byte *)(param_1 + 1);
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x126f;
    FUN_02ebe17c(param_2,&local_40,&local_fa8);
    break;
  case 0xe7:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x1285;
    FUN_033b3c2c(param_2,&local_40,&local_fa8);
    break;
  case 0xe8:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x1298;
    FUN_033b3d9c(param_2,&local_40,&local_fa8);
    break;
  case 0xe9:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x12b1;
    FUN_033b3f18(param_2,&local_40,&local_fa8);
    break;
  case 0xea:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x12ca;
    FUN_033b4164(param_2,&local_40,&local_fa8);
    break;
  case 0xeb:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x12dc;
    FUN_033b4390(param_2,&local_40,&local_fa8);
    break;
  case 0xed:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x1308;
    FUN_033b4500(param_2,&local_40,&local_fa8);
    break;
  case 0xee:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x131f;
    FUN_033b4678(param_2,&local_40,&local_fa8);
    break;
  case 0xef:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x1338;
    FUN_033b47e8(param_2,&local_40,&local_fa8);
    break;
  case 0xf0:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x1358;
    FUN_033b4958(param_2,&local_40,&local_fa8);
    break;
  case 0xf1:
    FUN_033b4ac8(&local_fa8);
    local_f9a = *(byte *)(param_1 + 1);
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x136f;
    FUN_02da6f6c(param_2,&local_40,&local_fa8);
    break;
  case 0xf2:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x138a;
    FUN_033b4b5c(param_2,&local_40,&local_fa8);
    break;
  case 0xf3:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x13a8;
    FUN_033b4cd4(param_2,&local_40,&local_fa8);
    break;
  case 0xf4:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x13c0;
    FUN_033b4e4c(param_2,&local_40,&local_fa8);
    break;
  case 0xf5:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x13e1;
    FUN_033b4fbc(param_2,&local_40,&local_fa8);
    break;
  case 0xf6:
    local_fa8 = (undefined **)(PTR_DAT_04bc62e0 + 0x10);
    local_f9a = *(byte *)(param_1 + 1);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_f9c = 1;
    local_f98 = param_1[2];
    local_f90 = 0;
    uStack_f8c = 0;
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x13fb;
    FUN_033b51bc(param_2,&local_40,&local_fa8);
    break;
  case 0xf7:
    local_f9a = *(byte *)(param_1 + 1);
    local_fa8 = &PTR_LAB_04b240c0;
    local_f98 = param_1[2];
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    uStack_f94 = 0x30;
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x1418;
    FUN_033b532c(param_2,&local_40,&local_fa8);
    break;
  case 0xf8:
    local_f9a = *(byte *)(param_1 + 1);
    if (7 < local_f9a) {
      local_f9a = 0xff;
    }
    local_fa8 = (undefined **)(PTR_DAT_04bc39b0 + 0x10);
    local_fa0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_f9c = 1;
    local_f98 = param_1[2];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = PTR_s_cInvalid_04bc6398 + 0x143b;
    FUN_033b549c(param_2,&local_40,&local_fa8);
  }
  return;
}

