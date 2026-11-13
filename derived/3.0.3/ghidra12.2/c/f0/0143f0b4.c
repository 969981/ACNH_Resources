
long * FUN_0143f0b4(undefined8 param_1,undefined4 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  byte bVar10;
  
  lVar5 = DAT_05ae7600;
  switch(param_2) {
  default:
    plVar6 = (long *)FUN_038aa4a0(0x360,param_3,8);
    FUN_01430da8();
    puVar8 = &DAT_0499b888;
    goto LAB_0143f21c;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    if (DAT_05ae7600 == 0) {
      plVar6 = malloc(0x368);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar5 + 8);
        if (lVar7 != 0) {
          param_3 = (long *)(lVar7 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar6 = (long *)0x0;
          goto LAB_0143f344;
        }
      }
      plVar6 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x368,8);
    }
LAB_0143f344:
    FUN_00705c50(plVar6);
    plVar6[0x50] = 0xffffffff;
    puVar8 = PTR_DAT_04bbcbe0;
    plVar6[0x51] = 0xffffffff;
    plVar6[0x52] = 0xffffffff;
    *(undefined2 *)(plVar6 + 0x53) = 0;
    *(undefined4 *)(plVar6 + 0x54) = 0;
    plVar6[0x55] = 0;
    *(undefined4 *)(plVar6 + 0x56) = 0;
    *plVar6 = (long)(puVar8 + 0x10);
    plVar6[0x57] = 0;
    *(undefined4 *)(plVar6 + 0x58) = 0;
    plVar6[0x4f] = (long)&PTR_LAB_04ba4ef0;
    *(undefined1 *)((long)plVar6 + 0x2c4) = 0xff;
    plVar6[0x59] = 0xfffe;
    FUN_0277d4ac(plVar6 + 0x59);
    plVar6[0x60] = 0;
    plVar6[0x5b] = 0x22;
    *(undefined4 *)((long)plVar6 + 0x307) = 0;
    plVar6[0x5a] = 0;
    *(undefined4 *)(plVar6 + 0x5c) = 0;
    plVar6[0x5d] = 0;
    uVar2 = DAT_041e9408;
    uVar1 = DAT_041e9400;
    plVar6[0x62] = (long)&DAT_04ba4b10;
    plVar6[0x5e] = 0;
    plVar6[0x5f] = 0;
    plVar6[99] = 0;
    *(undefined4 *)(plVar6 + 100) = 0;
    *(undefined4 *)(plVar6 + 0x6a) = 0;
    plVar6[0x69] = 0;
    *(undefined8 *)((long)plVar6 + 0x32c) = uVar2;
    uVar3 = DAT_041e9418;
    uVar2 = DAT_041e9410;
    *(undefined8 *)((long)plVar6 + 0x324) = uVar1;
    *(undefined8 *)((long)plVar6 + 0x334) = uVar2;
    uVar4 = DAT_041e9420;
    *(undefined8 *)((long)plVar6 + 0x33c) = uVar3;
    plVar6[0x6b] = 0x3dcccccd;
    *(undefined4 *)((long)plVar6 + 0x344) = uVar4;
    puVar8 = PTR_DAT_04bbcc20;
    *(undefined2 *)(plVar6 + 0x6c) = 0;
    goto LAB_0143f438;
  case 10:
  case 0xb:
    if (DAT_05ae7600 == 0) {
      plVar6 = malloc(0x360);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar5 + 8);
        if (lVar7 != 0) {
          param_3 = (long *)(lVar7 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar6 = (long *)0x0;
          goto LAB_0143fefc;
        }
      }
      plVar6 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x360,8);
    }
LAB_0143fefc:
    FUN_00705c50(plVar6);
    plVar6[0x50] = 0xffffffff;
    puVar8 = PTR_DAT_04bbcbe0;
    plVar6[0x51] = 0xffffffff;
    plVar6[0x52] = 0xffffffff;
    *(undefined2 *)(plVar6 + 0x53) = 0;
    *(undefined4 *)(plVar6 + 0x54) = 0;
    plVar6[0x55] = 0;
    *(undefined4 *)(plVar6 + 0x56) = 0;
    *plVar6 = (long)(puVar8 + 0x10);
    plVar6[0x57] = 0;
    *(undefined4 *)(plVar6 + 0x58) = 0;
    plVar6[0x4f] = (long)&PTR_LAB_04ba4ef0;
    *(undefined1 *)((long)plVar6 + 0x2c4) = 0xff;
    plVar6[0x59] = 0xfffe;
    FUN_0277d4ac(plVar6 + 0x59);
    plVar6[0x60] = 0;
    plVar6[0x5b] = 0x22;
    *(undefined4 *)((long)plVar6 + 0x307) = 0;
    plVar6[0x5a] = 0;
    *(undefined4 *)(plVar6 + 0x5c) = 0;
    plVar6[0x5d] = 0;
    uVar2 = DAT_041e9408;
    uVar1 = DAT_041e9400;
    plVar6[0x62] = (long)&DAT_04ba4b10;
    plVar6[0x5e] = 0;
    plVar6[0x5f] = 0;
    plVar6[99] = 0;
    *(undefined4 *)(plVar6 + 100) = 0;
    *(undefined4 *)(plVar6 + 0x6a) = 0;
    plVar6[0x69] = 0;
    *(undefined8 *)((long)plVar6 + 0x32c) = uVar2;
    uVar3 = DAT_041e9418;
    uVar2 = DAT_041e9410;
    *(undefined8 *)((long)plVar6 + 0x324) = uVar1;
    *(undefined8 *)((long)plVar6 + 0x334) = uVar2;
    uVar4 = DAT_041e9420;
    *(undefined8 *)((long)plVar6 + 0x33c) = uVar3;
    *(undefined4 *)(plVar6 + 0x6b) = 0x3dcccccd;
    *(undefined4 *)((long)plVar6 + 0x344) = uVar4;
    puVar8 = PTR_DAT_04bbcbf8;
    goto LAB_014403ec;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x10:
    if (DAT_05ae7600 == 0) {
      plVar6 = malloc(0x548);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar5 + 8);
        if (lVar7 != 0) {
          param_3 = (long *)(lVar7 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar6 = (long *)0x0;
          goto LAB_0143f798;
        }
      }
      plVar6 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x548,8);
    }
LAB_0143f798:
    FUN_01444750(plVar6);
    *(undefined4 *)(plVar6 + 0xa8) = 0;
    *plVar6 = (long)&PTR_LAB_0499d4b0;
    *(undefined1 *)((long)plVar6 + 0x544) = 1;
    goto LAB_01440638;
  case 0x11:
    plVar6 = (long *)FUN_038aa4a0(0x540,param_3,8);
    FUN_01446b54();
    break;
  case 0x12:
    plVar6 = (long *)FUN_038aa4a0(0x550,param_3,8);
    FUN_01444750();
    puVar8 = &DAT_0499b030;
    plVar6[0xa8] = 0;
    *(undefined1 *)(plVar6 + 0xa9) = 0;
    goto LAB_0143f438;
  case 0x13:
    plVar6 = (long *)FUN_038aa4a0(0x580,param_3,8);
    FUN_01444750();
    *(undefined4 *)(plVar6 + 0xac) = 0x10;
    *(undefined1 *)((long)plVar6 + 0x564) = 0;
    plVar6[0xab] = (long)plVar6 + 0x564;
    *plVar6 = (long)&PTR_LAB_0499b3a0;
    *(undefined1 *)(plVar6 + 0xa9) = 0;
    plVar6[0xa8] = 0;
    *(undefined1 *)((long)plVar6 + 0x573) = 0;
    plVar6[0xaa] = (long)&PTR_LAB_048fb098;
    *(undefined4 *)(plVar6 + 0xaf) = 0xffffffff;
    break;
  case 0x14:
    plVar6 = (long *)FUN_038aa4a0(0x548,param_3,8);
    FUN_01444750();
    *plVar6 = (long)(PTR_DAT_04bbcd48 + 0x10);
    *(undefined1 *)(plVar6 + 0xa8) = 0;
    bVar10 = DAT_0548e140;
    if (7 < DAT_0548e140) {
      bVar10 = 0xff;
    }
    *(byte *)((long)plVar6 + 0x541) = bVar10;
    break;
  case 0x15:
    plVar6 = (long *)FUN_038aa4a0(0x360,param_3,8);
    FUN_01456590();
    break;
  case 0x16:
    plVar6 = (long *)FUN_038aa4a0(0x568,param_3,8);
    FUN_01444750();
    puVar8 = PTR_DAT_04bbcd80;
    *(undefined2 *)((long)plVar6 + 0x54c) = 0xffff;
    plVar6[0xaa] = 0;
    plVar6[0xab] = 0;
    *plVar6 = (long)(puVar8 + 0x10);
    *(undefined4 *)(plVar6 + 0xa8) = 1;
    *(undefined8 *)((long)plVar6 + 0x544) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar6 + 0x55d) = 0;
    bVar10 = DAT_0548e140;
    if (7 < DAT_0548e140) {
      bVar10 = 0xff;
    }
    *(byte *)((long)plVar6 + 0x565) = bVar10;
    break;
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1c:
    if (DAT_05ae7600 == 0) {
      plVar6 = malloc(0x378);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar5 + 8);
        if (lVar7 != 0) {
          param_3 = (long *)(lVar7 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar6 = (long *)0x0;
          goto LAB_0143f7cc;
        }
      }
      plVar6 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x378,8);
    }
LAB_0143f7cc:
    FUN_00705c50(plVar6);
    plVar6[0x50] = 0xffffffff;
    puVar8 = PTR_DAT_04bbcbe0;
    plVar6[0x51] = 0xffffffff;
    plVar6[0x52] = 0xffffffff;
    *(undefined2 *)(plVar6 + 0x53) = 0;
    *(undefined4 *)(plVar6 + 0x54) = 0;
    plVar6[0x55] = 0;
    *(undefined4 *)(plVar6 + 0x56) = 0;
    *plVar6 = (long)(puVar8 + 0x10);
    plVar6[0x57] = 0;
    *(undefined4 *)(plVar6 + 0x58) = 0;
    plVar6[0x4f] = (long)&PTR_LAB_04ba4ef0;
    *(undefined1 *)((long)plVar6 + 0x2c4) = 0xff;
    plVar6[0x59] = 0xfffe;
    FUN_0277d4ac(plVar6 + 0x59);
    plVar6[0x60] = 0;
    plVar6[0x5b] = 0x22;
    puVar8 = PTR_DAT_04bb3ea8;
    *(undefined4 *)((long)plVar6 + 0x307) = 0;
    plVar6[0x62] = (long)(puVar8 + 0x10);
    plVar6[0x5a] = 0;
    *(undefined4 *)(plVar6 + 0x5c) = 0;
    plVar6[0x5d] = 0;
    plVar6[0x5e] = 0;
    plVar6[0x5f] = 0;
    plVar6[99] = 0;
    uVar2 = DAT_041e9408;
    uVar1 = DAT_041e9400;
    *(undefined4 *)(plVar6 + 100) = 0;
    *(undefined4 *)(plVar6 + 0x6a) = 0;
    plVar6[0x69] = 0;
    *(undefined8 *)((long)plVar6 + 0x32c) = uVar2;
    uVar4 = DAT_041e9420;
    uVar3 = DAT_041e9418;
    uVar2 = DAT_041e9410;
    *(undefined8 *)((long)plVar6 + 0x324) = uVar1;
    *(undefined4 *)((long)plVar6 + 0x344) = uVar4;
    *(undefined8 *)((long)plVar6 + 0x334) = uVar2;
    *(undefined8 *)((long)plVar6 + 0x33c) = uVar3;
    *(undefined4 *)(plVar6 + 0x6b) = 0x3dcccccd;
    *(undefined2 *)((long)plVar6 + 0x35c) = 0;
    *(undefined1 *)((long)plVar6 + 0x362) = 0;
    *(undefined2 *)((long)plVar6 + 0x364) = 0;
    *(undefined1 *)((long)plVar6 + 0x36a) = 0;
    *(undefined4 *)((long)plVar6 + 0x36c) = 0;
    *(undefined1 *)(plVar6 + 0x6e) = 0;
    *plVar6 = (long)&PTR_LAB_0499d810;
    *(undefined4 *)((long)plVar6 + 0x35e) = 0x101;
    *(undefined4 *)((long)plVar6 + 0x366) = 0x101;
    break;
  case 0x1b:
  case 0x27:
  case 0x2d:
  case 0x4c:
    if (DAT_05ae7600 == 0) {
      plVar6 = malloc(0x360);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar5 + 8);
        if (lVar7 != 0) {
          param_3 = (long *)(lVar7 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar6 = (long *)0x0;
          goto LAB_0143f900;
        }
      }
      plVar6 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x360,8);
    }
LAB_0143f900:
    FUN_00705c50(plVar6);
    plVar6[0x50] = 0xffffffff;
    puVar8 = PTR_DAT_04bbcbe0;
    plVar6[0x51] = 0xffffffff;
    plVar6[0x52] = 0xffffffff;
    *(undefined2 *)(plVar6 + 0x53) = 0;
    *(undefined4 *)(plVar6 + 0x54) = 0;
    plVar6[0x55] = 0;
    *(undefined4 *)(plVar6 + 0x56) = 0;
    *plVar6 = (long)(puVar8 + 0x10);
    plVar6[0x57] = 0;
    *(undefined4 *)(plVar6 + 0x58) = 0;
    plVar6[0x4f] = (long)&PTR_LAB_04ba4ef0;
    *(undefined1 *)((long)plVar6 + 0x2c4) = 0xff;
    plVar6[0x59] = 0xfffe;
    FUN_0277d4ac(plVar6 + 0x59);
    plVar6[0x60] = 0;
    plVar6[0x5b] = 0x22;
    *(undefined4 *)((long)plVar6 + 0x307) = 0;
    plVar6[0x5a] = 0;
    *(undefined4 *)(plVar6 + 0x5c) = 0;
    plVar6[0x5d] = 0;
    plVar6[0x5e] = 0;
    plVar6[0x5f] = 0;
    uVar2 = DAT_041e9408;
    uVar1 = DAT_041e9400;
    plVar6[0x62] = (long)&DAT_04ba4b10;
    plVar6[99] = 0;
    *(undefined4 *)(plVar6 + 100) = 0;
    *(undefined4 *)(plVar6 + 0x6a) = 0;
    plVar6[0x69] = 0;
    *(undefined8 *)((long)plVar6 + 0x32c) = uVar2;
    uVar4 = DAT_041e9420;
    uVar3 = DAT_041e9418;
    uVar2 = DAT_041e9410;
    *(undefined8 *)((long)plVar6 + 0x324) = uVar1;
    *(undefined8 *)((long)plVar6 + 0x334) = uVar2;
    *(undefined8 *)((long)plVar6 + 0x33c) = uVar3;
    *(undefined4 *)((long)plVar6 + 0x344) = uVar4;
    *(undefined4 *)(plVar6 + 0x6b) = 0x3dcccccd;
    ppuVar9 = &PTR_LAB_0499dff0;
    goto LAB_014402e8;
  case 0x1d:
    plVar6 = (long *)FUN_038aa4a0(0x540,param_3,8);
    FUN_0146bc34();
    break;
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
    if (DAT_05ae7600 == 0) {
      plVar6 = malloc(0x548);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar5 + 8);
        if (lVar7 != 0) {
          param_3 = (long *)(lVar7 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar6 = (long *)0x0;
          goto LAB_0143fa00;
        }
      }
      plVar6 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x548,8);
    }
LAB_0143fa00:
    FUN_01444750(plVar6);
    puVar8 = &DAT_0499e6a0;
    *(undefined4 *)(plVar6 + 0xa8) = 0;
    goto LAB_01440630;
  case 0x23:
  case 0x26:
    if (DAT_05ae7600 == 0) {
      plVar6 = malloc(0x360);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar5 + 8);
        if (lVar7 != 0) {
          param_3 = (long *)(lVar7 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar6 = (long *)0x0;
          goto LAB_0143fffc;
        }
      }
      plVar6 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x360,8);
    }
LAB_0143fffc:
    FUN_00705c50(plVar6);
    plVar6[0x50] = 0xffffffff;
    puVar8 = PTR_DAT_04bbcbe0;
    plVar6[0x51] = 0xffffffff;
    plVar6[0x52] = 0xffffffff;
    *(undefined2 *)(plVar6 + 0x53) = 0;
    *(undefined4 *)(plVar6 + 0x54) = 0;
    plVar6[0x55] = 0;
    *(undefined4 *)(plVar6 + 0x56) = 0;
    *plVar6 = (long)(puVar8 + 0x10);
    plVar6[0x57] = 0;
    *(undefined4 *)(plVar6 + 0x58) = 0;
    plVar6[0x4f] = (long)&PTR_LAB_04ba4ef0;
    *(undefined1 *)((long)plVar6 + 0x2c4) = 0xff;
    plVar6[0x59] = 0xfffe;
    FUN_0277d4ac(plVar6 + 0x59);
    plVar6[0x60] = 0;
    plVar6[0x5b] = 0x22;
    *(undefined4 *)((long)plVar6 + 0x307) = 0;
    plVar6[0x5a] = 0;
    *(undefined4 *)(plVar6 + 0x5c) = 0;
    plVar6[0x5d] = 0;
    plVar6[0x5e] = 0;
    plVar6[0x5f] = 0;
    uVar2 = DAT_041e9408;
    uVar1 = DAT_041e9400;
    plVar6[0x62] = (long)&DAT_04ba4b10;
    plVar6[99] = 0;
    *(undefined4 *)(plVar6 + 100) = 0;
    *(undefined4 *)(plVar6 + 0x6a) = 0;
    plVar6[0x69] = 0;
    *(undefined8 *)((long)plVar6 + 0x32c) = uVar2;
    uVar4 = DAT_041e9420;
    uVar3 = DAT_041e9418;
    uVar2 = DAT_041e9410;
    *(undefined8 *)((long)plVar6 + 0x324) = uVar1;
    *(undefined8 *)((long)plVar6 + 0x334) = uVar2;
    *(undefined8 *)((long)plVar6 + 0x33c) = uVar3;
    *(undefined4 *)((long)plVar6 + 0x344) = uVar4;
    puVar8 = &DAT_049a0470;
    goto LAB_014402e0;
  case 0x24:
    plVar6 = (long *)FUN_038aa4a0(0x368,param_3,8);
    FUN_0144ea3c();
    break;
  case 0x25:
  case 0x28:
    if (DAT_05ae7600 == 0) {
      plVar6 = malloc(0x360);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar5 + 8);
        if (lVar7 != 0) {
          param_3 = (long *)(lVar7 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar6 = (long *)0x0;
          goto LAB_014400f8;
        }
      }
      plVar6 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x360,8);
    }
LAB_014400f8:
    FUN_00705c50(plVar6);
    plVar6[0x50] = 0xffffffff;
    puVar8 = PTR_DAT_04bbcbe0;
    plVar6[0x51] = 0xffffffff;
    plVar6[0x52] = 0xffffffff;
    *(undefined2 *)(plVar6 + 0x53) = 0;
    *(undefined4 *)(plVar6 + 0x54) = 0;
    plVar6[0x55] = 0;
    *(undefined4 *)(plVar6 + 0x56) = 0;
    *plVar6 = (long)(puVar8 + 0x10);
    plVar6[0x57] = 0;
    *(undefined4 *)(plVar6 + 0x58) = 0;
    plVar6[0x4f] = (long)&PTR_LAB_04ba4ef0;
    *(undefined1 *)((long)plVar6 + 0x2c4) = 0xff;
    plVar6[0x59] = 0xfffe;
    FUN_0277d4ac(plVar6 + 0x59);
    plVar6[0x60] = 0;
    plVar6[0x5b] = 0x22;
    *(undefined4 *)((long)plVar6 + 0x307) = 0;
    plVar6[0x5a] = 0;
    *(undefined4 *)(plVar6 + 0x5c) = 0;
    plVar6[0x5d] = 0;
    plVar6[0x5e] = 0;
    plVar6[0x5f] = 0;
    uVar2 = DAT_041e9408;
    uVar1 = DAT_041e9400;
    plVar6[0x62] = (long)&DAT_04ba4b10;
    plVar6[99] = 0;
    *(undefined4 *)(plVar6 + 100) = 0;
    *(undefined4 *)(plVar6 + 0x6a) = 0;
    plVar6[0x69] = 0;
    *(undefined8 *)((long)plVar6 + 0x32c) = uVar2;
    uVar4 = DAT_041e9420;
    uVar3 = DAT_041e9418;
    uVar2 = DAT_041e9410;
    *(undefined8 *)((long)plVar6 + 0x324) = uVar1;
    *(undefined8 *)((long)plVar6 + 0x334) = uVar2;
    *(undefined8 *)((long)plVar6 + 0x33c) = uVar3;
    *(undefined4 *)((long)plVar6 + 0x344) = uVar4;
    puVar8 = &DAT_049a0738;
    goto LAB_014402e0;
  case 0x29:
  case 0x2c:
    if (DAT_05ae7600 == 0) {
      plVar6 = malloc(0x360);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar5 + 8);
        if (lVar7 != 0) {
          param_3 = (long *)(lVar7 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar6 = (long *)0x0;
          goto LAB_014401f4;
        }
      }
      plVar6 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x360,8);
    }
LAB_014401f4:
    FUN_00705c50(plVar6);
    plVar6[0x50] = 0xffffffff;
    puVar8 = PTR_DAT_04bbcbe0;
    plVar6[0x51] = 0xffffffff;
    plVar6[0x52] = 0xffffffff;
    *(undefined2 *)(plVar6 + 0x53) = 0;
    *(undefined4 *)(plVar6 + 0x54) = 0;
    plVar6[0x55] = 0;
    *(undefined4 *)(plVar6 + 0x56) = 0;
    *plVar6 = (long)(puVar8 + 0x10);
    plVar6[0x57] = 0;
    *(undefined4 *)(plVar6 + 0x58) = 0;
    plVar6[0x4f] = (long)&PTR_LAB_04ba4ef0;
    *(undefined1 *)((long)plVar6 + 0x2c4) = 0xff;
    plVar6[0x59] = 0xfffe;
    FUN_0277d4ac(plVar6 + 0x59);
    plVar6[0x60] = 0;
    plVar6[0x5b] = 0x22;
    *(undefined4 *)((long)plVar6 + 0x307) = 0;
    plVar6[0x5a] = 0;
    *(undefined4 *)(plVar6 + 0x5c) = 0;
    plVar6[0x5d] = 0;
    plVar6[0x5e] = 0;
    plVar6[0x5f] = 0;
    uVar2 = DAT_041e9408;
    uVar1 = DAT_041e9400;
    plVar6[0x62] = (long)&DAT_04ba4b10;
    plVar6[99] = 0;
    *(undefined4 *)(plVar6 + 100) = 0;
    *(undefined4 *)(plVar6 + 0x6a) = 0;
    plVar6[0x69] = 0;
    *(undefined8 *)((long)plVar6 + 0x32c) = uVar2;
    uVar4 = DAT_041e9420;
    uVar3 = DAT_041e9418;
    uVar2 = DAT_041e9410;
    *(undefined8 *)((long)plVar6 + 0x324) = uVar1;
    *(undefined8 *)((long)plVar6 + 0x334) = uVar2;
    *(undefined8 *)((long)plVar6 + 0x33c) = uVar3;
    *(undefined4 *)((long)plVar6 + 0x344) = uVar4;
    puVar8 = &DAT_049a3ab8;
LAB_014402e0:
    *(undefined4 *)(plVar6 + 0x6b) = 0x3dcccccd;
    ppuVar9 = (undefined **)(puVar8 + 0x10);
    goto LAB_014402e8;
  case 0x2a:
    plVar6 = (long *)FUN_038aa4a0(0x360,param_3,8);
    FUN_01430da8();
    puVar8 = &DAT_049a3528;
    goto LAB_0143f21c;
  case 0x2b:
    plVar6 = (long *)FUN_038aa4a0(0x360,param_3,8);
    FUN_01430da8();
    ppuVar9 = &PTR_LAB_0499dd50;
    goto LAB_014402e8;
  case 0x2e:
    plVar6 = (long *)FUN_038aa4a0(0x360,param_3,8);
    FUN_01430da8();
    ppuVar9 = &PTR_LAB_0499e290;
    goto LAB_014402e8;
  case 0x2f:
    plVar6 = (long *)FUN_038aa4a0(0x3a0,param_3,8);
    FUN_01462af4();
    break;
  case 0x30:
  case 0x31:
    if (DAT_05ae7600 == 0) {
      plVar6 = malloc(0x360);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar5 + 8);
        if (lVar7 != 0) {
          param_3 = (long *)(lVar7 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar6 = (long *)0x0;
          goto LAB_014402fc;
        }
      }
      plVar6 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x360,8);
    }
LAB_014402fc:
    FUN_00705c50(plVar6);
    plVar6[0x50] = 0xffffffff;
    puVar8 = PTR_DAT_04bbcbe0;
    plVar6[0x51] = 0xffffffff;
    plVar6[0x52] = 0xffffffff;
    *(undefined2 *)(plVar6 + 0x53) = 0;
    *(undefined4 *)(plVar6 + 0x54) = 0;
    plVar6[0x55] = 0;
    *(undefined4 *)(plVar6 + 0x56) = 0;
    *plVar6 = (long)(puVar8 + 0x10);
    plVar6[0x57] = 0;
    *(undefined4 *)(plVar6 + 0x58) = 0;
    plVar6[0x4f] = (long)&PTR_LAB_04ba4ef0;
    *(undefined1 *)((long)plVar6 + 0x2c4) = 0xff;
    plVar6[0x59] = 0xfffe;
    FUN_0277d4ac(plVar6 + 0x59);
    plVar6[0x60] = 0;
    plVar6[0x5b] = 0x22;
    *(undefined4 *)((long)plVar6 + 0x307) = 0;
    plVar6[0x5a] = 0;
    *(undefined4 *)(plVar6 + 0x5c) = 0;
    plVar6[0x5d] = 0;
    uVar2 = DAT_041e9408;
    uVar1 = DAT_041e9400;
    plVar6[0x62] = (long)&DAT_04ba4b10;
    plVar6[0x5e] = 0;
    plVar6[0x5f] = 0;
    plVar6[99] = 0;
    *(undefined4 *)(plVar6 + 100) = 0;
    *(undefined4 *)(plVar6 + 0x6a) = 0;
    plVar6[0x69] = 0;
    *(undefined8 *)((long)plVar6 + 0x32c) = uVar2;
    uVar3 = DAT_041e9418;
    uVar2 = DAT_041e9410;
    *(undefined8 *)((long)plVar6 + 0x324) = uVar1;
    *(undefined8 *)((long)plVar6 + 0x334) = uVar2;
    uVar4 = DAT_041e9420;
    *(undefined8 *)((long)plVar6 + 0x33c) = uVar3;
    *(undefined4 *)(plVar6 + 0x6b) = 0x3dcccccd;
    *(undefined4 *)((long)plVar6 + 0x344) = uVar4;
    puVar8 = PTR_DAT_04bbcc88;
LAB_014403ec:
    *(undefined2 *)((long)plVar6 + 0x35c) = 0;
    *plVar6 = (long)(puVar8 + 0x10);
    break;
  case 0x32:
  case 0x33:
    if (DAT_05ae7600 == 0) {
      plVar6 = malloc(0x360);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar5 + 8);
        if (lVar7 != 0) {
          param_3 = (long *)(lVar7 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar6 = (long *)0x0;
          goto LAB_01440408;
        }
      }
      plVar6 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x360,8);
    }
LAB_01440408:
    FUN_00705c50(plVar6);
    plVar6[0x50] = 0xffffffff;
    puVar8 = PTR_DAT_04bbcbe0;
    plVar6[0x51] = 0xffffffff;
    plVar6[0x52] = 0xffffffff;
    *(undefined2 *)(plVar6 + 0x53) = 0;
    *(undefined4 *)(plVar6 + 0x54) = 0;
    plVar6[0x55] = 0;
    *(undefined4 *)(plVar6 + 0x56) = 0;
    *plVar6 = (long)(puVar8 + 0x10);
    plVar6[0x57] = 0;
    *(undefined4 *)(plVar6 + 0x58) = 0;
    plVar6[0x4f] = (long)&PTR_LAB_04ba4ef0;
    *(undefined1 *)((long)plVar6 + 0x2c4) = 0xff;
    plVar6[0x59] = 0xfffe;
    FUN_0277d4ac(plVar6 + 0x59);
    plVar6[0x60] = 0;
    plVar6[0x5b] = 0x22;
    *(undefined4 *)((long)plVar6 + 0x307) = 0;
    plVar6[0x5a] = 0;
    *(undefined4 *)(plVar6 + 0x5c) = 0;
    plVar6[0x5d] = 0;
    uVar2 = DAT_041e9408;
    uVar1 = DAT_041e9400;
    plVar6[0x62] = (long)&DAT_04ba4b10;
    plVar6[0x5e] = 0;
    plVar6[0x5f] = 0;
    plVar6[99] = 0;
    *(undefined4 *)(plVar6 + 100) = 0;
    *(undefined4 *)(plVar6 + 0x6a) = 0;
    plVar6[0x69] = 0;
    *(undefined8 *)((long)plVar6 + 0x32c) = uVar2;
    uVar3 = DAT_041e9418;
    uVar2 = DAT_041e9410;
    *(undefined8 *)((long)plVar6 + 0x324) = uVar1;
    *(undefined8 *)((long)plVar6 + 0x334) = uVar2;
    uVar4 = DAT_041e9420;
    *(undefined8 *)((long)plVar6 + 0x33c) = uVar3;
    *(undefined4 *)(plVar6 + 0x6b) = 0x3dcccccd;
    *(undefined4 *)((long)plVar6 + 0x344) = uVar4;
    puVar8 = PTR_DAT_04bbcd58;
    goto LAB_014405f8;
  case 0x34:
  case 0x35:
    if (DAT_05ae7600 == 0) {
      plVar6 = malloc(0x360);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar5 + 8);
        if (lVar7 != 0) {
          param_3 = (long *)(lVar7 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar6 = (long *)0x0;
          goto LAB_01440508;
        }
      }
      plVar6 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x360,8);
    }
LAB_01440508:
    FUN_00705c50(plVar6);
    plVar6[0x50] = 0xffffffff;
    puVar8 = PTR_DAT_04bbcbe0;
    plVar6[0x51] = 0xffffffff;
    plVar6[0x52] = 0xffffffff;
    *(undefined2 *)(plVar6 + 0x53) = 0;
    *(undefined4 *)(plVar6 + 0x54) = 0;
    plVar6[0x55] = 0;
    *(undefined4 *)(plVar6 + 0x56) = 0;
    *plVar6 = (long)(puVar8 + 0x10);
    plVar6[0x57] = 0;
    *(undefined4 *)(plVar6 + 0x58) = 0;
    plVar6[0x4f] = (long)&PTR_LAB_04ba4ef0;
    *(undefined1 *)((long)plVar6 + 0x2c4) = 0xff;
    plVar6[0x59] = 0xfffe;
    FUN_0277d4ac(plVar6 + 0x59);
    plVar6[0x60] = 0;
    plVar6[0x5b] = 0x22;
    *(undefined4 *)((long)plVar6 + 0x307) = 0;
    plVar6[0x5a] = 0;
    *(undefined4 *)(plVar6 + 0x5c) = 0;
    plVar6[0x5d] = 0;
    uVar2 = DAT_041e9408;
    uVar1 = DAT_041e9400;
    plVar6[0x62] = (long)&DAT_04ba4b10;
    plVar6[0x5e] = 0;
    plVar6[0x5f] = 0;
    plVar6[99] = 0;
    *(undefined4 *)(plVar6 + 100) = 0;
    *(undefined4 *)(plVar6 + 0x6a) = 0;
    plVar6[0x69] = 0;
    *(undefined8 *)((long)plVar6 + 0x32c) = uVar2;
    uVar3 = DAT_041e9418;
    uVar2 = DAT_041e9410;
    *(undefined8 *)((long)plVar6 + 0x324) = uVar1;
    *(undefined8 *)((long)plVar6 + 0x334) = uVar2;
    uVar4 = DAT_041e9420;
    *(undefined8 *)((long)plVar6 + 0x33c) = uVar3;
    *(undefined4 *)(plVar6 + 0x6b) = 0x3dcccccd;
    *(undefined4 *)((long)plVar6 + 0x344) = uVar4;
    puVar8 = PTR_DAT_04bbccf0;
LAB_014405f8:
    *(undefined1 *)((long)plVar6 + 0x35c) = 0;
    *plVar6 = (long)(puVar8 + 0x10);
    *(uint *)(plVar6 + 0x4c) = *(uint *)(plVar6 + 0x4c) | 1;
    break;
  case 0x36:
    plVar6 = (long *)FUN_038aa4a0(0x360,param_3,8);
    FUN_0144d798();
    break;
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
    if (DAT_05ae7600 == 0) {
      plVar6 = malloc(0x598);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar5 + 8);
        if (lVar7 != 0) {
          param_3 = (long *)(lVar7 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar6 = (long *)0x0;
          goto LAB_0143f730;
        }
      }
      plVar6 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x598,8);
    }
LAB_0143f730:
    FUN_01444750(plVar6);
    *plVar6 = (long)&PTR_LAB_049a0a10;
    *(undefined2 *)(plVar6 + 0xac) = 0;
    *(undefined4 *)(plVar6 + 0xad) = 0;
    plVar6[0xae] = 0;
    *(undefined4 *)(plVar6 + 0xaf) = 0;
    plVar6[0xb0] = 0;
    *(undefined4 *)(plVar6 + 0xb2) = 0;
    plVar6[0xa8] = (long)&PTR_LAB_04ba4ef0;
    plVar6[0xa9] = 0xffffffff;
    plVar6[0xaa] = 0xffffffff;
    plVar6[0xab] = 0xffffffff;
    plVar6[0xb1] = -0x100000000;
    goto LAB_01440638;
  case 0x3c:
    plVar6 = (long *)FUN_038aa4a0(0x540,param_3,8);
    FUN_01444750();
    puVar8 = &DAT_049a31c8;
    goto LAB_0143f21c;
  case 0x3d:
    plVar6 = (long *)FUN_038aa4a0(0x540,param_3,8);
    FUN_01444750();
    puVar8 = &DAT_0499bb50;
    goto LAB_0143f21c;
  case 0x3e:
    plVar6 = (long *)FUN_038aa4a0(0x548,param_3,8);
    FUN_01444750();
    puVar8 = &DAT_0499ea00;
    *(undefined1 *)(plVar6 + 0xa8) = 0;
LAB_0143f438:
    *plVar6 = (long)(puVar8 + 0x10);
    break;
  case 0x3f:
    plVar6 = (long *)FUN_038aa4a0(0x540,param_3,8);
    FUN_01444750();
    puVar8 = &DAT_0499acd0;
    goto LAB_0143f21c;
  case 0x40:
    plVar6 = (long *)FUN_038aa4a0(0x360,param_3,8);
    FUN_01430da8();
    puVar8 = &DAT_049a2900;
    goto LAB_0143f21c;
  case 0x41:
    plVar6 = (long *)FUN_038aa4a0(0x360,param_3,8);
    FUN_01430da8();
    puVar8 = &DAT_049a4440;
    goto LAB_0143f21c;
  case 0x42:
    plVar6 = (long *)FUN_038aa4a0(0x540,param_3,8);
    FUN_01444750();
    puVar8 = &DAT_049a1150;
    goto LAB_0143f21c;
  case 0x43:
    plVar6 = (long *)FUN_038aa4a0(0x3a0,param_3,8);
    FUN_01458934();
    break;
  case 0x44:
    plVar6 = (long *)FUN_038aa4a0(0x360,param_3,8);
    FUN_01430da8();
    puVar8 = &DAT_049a1750;
    goto LAB_0143fed8;
  case 0x45:
    plVar6 = (long *)FUN_038aa4a0(0x540,param_3,8);
    FUN_01444750();
    puVar8 = &DAT_0499cea0;
    goto LAB_0143f21c;
  case 0x46:
    plVar6 = (long *)FUN_038aa4a0(0x360,param_3,8);
    FUN_01459144();
    break;
  case 0x47:
    plVar6 = (long *)FUN_038aa4a0(0x540,param_3,8);
    FUN_01444750();
    puVar8 = &DAT_049a2bc8;
    goto LAB_0143f21c;
  case 0x48:
    plVar6 = (long *)FUN_038aa4a0(0x360,param_3,8);
    FUN_01430da8();
    puVar8 = &DAT_0499fc68;
    goto LAB_0143f21c;
  case 0x49:
    plVar6 = (long *)FUN_038aa4a0(0x548,param_3,8);
    FUN_0145403c();
    break;
  case 0x4b:
    plVar6 = (long *)FUN_038aa4a0(0x500,param_3,8);
    FUN_01448cac();
    break;
  case 0x4d:
    plVar6 = (long *)FUN_038aa4a0(0x360,param_3,8);
    FUN_0144b764();
    break;
  case 0x4e:
    plVar6 = (long *)FUN_038aa4a0(0x540,param_3,8);
    FUN_01444750();
    puVar8 = &DAT_049a2240;
LAB_0143f21c:
    ppuVar9 = (undefined **)(puVar8 + 0x10);
LAB_014402e8:
    *plVar6 = (long)ppuVar9;
    break;
  case 0x4f:
    plVar6 = (long *)FUN_038aa4a0(0x360,param_3,8);
    FUN_01430da8();
    puVar8 = &DAT_0499daa0;
LAB_0143fed8:
    *(undefined4 *)((long)plVar6 + 0x35c) = 0;
    *plVar6 = (long)(puVar8 + 0x10);
    break;
  case 0x50:
  case 0x51:
    if (DAT_05ae7600 == 0) {
      plVar6 = malloc(0x540);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar5 + 8);
        if (lVar7 != 0) {
          param_3 = (long *)(lVar7 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar6 = (long *)0x0;
          goto LAB_01440620;
        }
      }
      plVar6 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x540,8);
    }
LAB_01440620:
    FUN_01444750(plVar6);
    puVar8 = &DAT_049a40e0;
LAB_01440630:
    *plVar6 = (long)(puVar8 + 0x10);
LAB_01440638:
    *(uint *)(plVar6 + 0x75) = *(uint *)(plVar6 + 0x75) | 4;
  }
  return plVar6;
}

