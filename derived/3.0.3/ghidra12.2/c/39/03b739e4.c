
void FUN_03b739e4(long param_1,int param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  lVar1 = DAT_05ae7600;
  if (param_2 == 48000) {
    if (DAT_05ae7600 == 0) {
      puVar4 = malloc(0x18);
    }
    else {
      plVar3 = param_3;
      if (param_3 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar3 = (long *)(lVar1 + 8);
        if (lVar2 != 0) {
          plVar3 = (long *)(lVar2 + 0xa8);
        }
        plVar3 = (long *)*plVar3;
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
    }
    *puVar4 = &DAT_04b77fb0;
    puVar4[1] = &DAT_041e6a08;
    lVar1 = DAT_05ae7600;
    *(undefined4 *)(puVar4 + 2) = 0x79;
    *(undefined8 **)(param_1 + 8) = puVar4;
    if (lVar1 == 0) {
      puVar4 = malloc(0x18);
    }
    else {
      plVar3 = param_3;
      if (param_3 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar3 = (long *)(lVar1 + 8);
        if (lVar2 != 0) {
          plVar3 = (long *)(lVar2 + 0xa8);
        }
        plVar3 = (long *)*plVar3;
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
    }
    *puVar4 = &DAT_04b77fb0;
    puVar4[1] = &DAT_041e6ec2;
    lVar1 = DAT_05ae7600;
    *(undefined4 *)(puVar4 + 2) = 0x70;
    *(undefined8 **)(param_1 + 0x10) = puVar4;
    if (lVar1 == 0) {
      puVar4 = malloc(0x18);
    }
    else {
      plVar3 = param_3;
      if (param_3 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar3 = (long *)(lVar1 + 8);
        if (lVar2 != 0) {
          plVar3 = (long *)(lVar2 + 0xa8);
        }
        plVar3 = (long *)*plVar3;
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
    }
    *puVar4 = &DAT_04b77fe0;
    puVar4[1] = &DAT_041e7322;
    lVar1 = DAT_05ae7600;
    *(undefined4 *)(puVar4 + 2) = 0x7a;
    *(undefined8 **)(param_1 + 0x18) = puVar4;
    if (lVar1 == 0) {
      puVar4 = malloc(0x18);
    }
    else {
      plVar3 = param_3;
      if (param_3 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar3 = (long *)(lVar1 + 8);
        if (lVar2 != 0) {
          plVar3 = (long *)(lVar2 + 0xa8);
        }
        plVar3 = (long *)*plVar3;
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
    }
    *puVar4 = &DAT_04b77fe0;
    puVar4[1] = &DAT_041e77e6;
    lVar1 = DAT_05ae7600;
    *(undefined4 *)(puVar4 + 2) = 0x74;
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    if (lVar1 == 0) {
      puVar4 = malloc(0x18);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar1 + 8);
        if (lVar2 != 0) {
          param_3 = (long *)(lVar2 + 0xa8);
        }
        param_3 = (long *)*param_3;
      }
      puVar4 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x18,8);
    }
    uVar6 = 0x74;
    puVar7 = &DAT_041e7c6e;
  }
  else {
    if (param_2 != 32000) goto LAB_03b73e9c;
    if (DAT_05ae7600 == 0) {
      puVar4 = malloc(0x18);
    }
    else {
      plVar3 = param_3;
      if (param_3 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar3 = (long *)(lVar1 + 8);
        if (lVar2 != 0) {
          plVar3 = (long *)(lVar2 + 0xa8);
        }
        plVar3 = (long *)*plVar3;
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
    }
    *puVar4 = &DAT_04b77fb0;
    puVar4[1] = &DAT_041e55d6;
    lVar1 = DAT_05ae7600;
    *(undefined4 *)(puVar4 + 2) = 0x70;
    *(undefined8 **)(param_1 + 8) = puVar4;
    if (lVar1 == 0) {
      puVar4 = malloc(0x18);
    }
    else {
      plVar3 = param_3;
      if (param_3 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar3 = (long *)(lVar1 + 8);
        if (lVar2 != 0) {
          plVar3 = (long *)(lVar2 + 0xa8);
        }
        plVar3 = (long *)*plVar3;
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
    }
    *puVar4 = &DAT_04b77fb0;
    puVar4[1] = &DAT_041e5a36;
    lVar1 = DAT_05ae7600;
    *(undefined4 *)(puVar4 + 2) = 0x61;
    *(undefined8 **)(param_1 + 0x10) = puVar4;
    if (lVar1 == 0) {
      puVar4 = malloc(0x18);
    }
    else {
      plVar3 = param_3;
      if (param_3 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar3 = (long *)(lVar1 + 8);
        if (lVar2 != 0) {
          plVar3 = (long *)(lVar2 + 0xa8);
        }
        plVar3 = (long *)*plVar3;
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
    }
    *puVar4 = &DAT_04b77fe0;
    puVar4[1] = &DAT_041e5e00;
    lVar1 = DAT_05ae7600;
    *(undefined4 *)(puVar4 + 2) = 0x7a;
    *(undefined8 **)(param_1 + 0x18) = puVar4;
    if (lVar1 == 0) {
      puVar4 = malloc(0x18);
    }
    else {
      plVar3 = param_3;
      if (param_3 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar3 = (long *)(lVar1 + 8);
        if (lVar2 != 0) {
          plVar3 = (long *)(lVar2 + 0xa8);
        }
        plVar3 = (long *)*plVar3;
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
    }
    *puVar4 = &DAT_04b77fe0;
    puVar4[1] = &DAT_041e62c4;
    lVar1 = DAT_05ae7600;
    *(undefined4 *)(puVar4 + 2) = 0x5d;
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    if (lVar1 == 0) {
      puVar4 = malloc(0x18);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar1 + 8);
        if (lVar2 != 0) {
          param_3 = (long *)(lVar2 + 0xa8);
        }
        param_3 = (long *)*param_3;
      }
      puVar4 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x18,8);
    }
    uVar6 = 0x5d;
    puVar7 = &DAT_041e6666;
  }
  *(undefined4 *)(puVar4 + 2) = uVar6;
  *puVar4 = &DAT_04b77fe0;
  puVar4[1] = puVar7;
  *(undefined8 **)(param_1 + 0x28) = puVar4;
LAB_03b73e9c:
  uVar8 = *(undefined8 *)(param_1 + 8);
  uVar5 = FUN_03b38a74();
  FUN_003b6364(uVar5,0x7b,uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = FUN_03b38a74();
  FUN_003b6364(uVar5,0x7c,uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = FUN_03b38a74();
  FUN_003b6364(uVar5,0x7d,uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = FUN_03b38a74();
  FUN_003b6364(uVar5,0x7e,uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = FUN_03b38a74();
  FUN_003b6364(uVar5,0x7f,uVar8);
  return;
}

