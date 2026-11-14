
long * FUN_0153a17c(undefined8 param_1,undefined4 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  undefined *puVar5;
  
  lVar1 = DAT_05ae7600;
  switch(param_2) {
  case 0:
    if (DAT_05ae7600 == 0) goto LAB_0153a338;
    if (param_3 == (long *)0x0) {
LAB_0153a1dc:
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        param_3 = (long *)(lVar2 + 0xa8);
      }
      param_3 = (long *)*param_3;
      if (param_3 != (long *)0x0) goto LAB_0153a208;
      plVar3 = (long *)0x0;
    }
    else {
LAB_0153a208:
      plVar3 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x298,8);
    }
    break;
  case 1:
    if (DAT_05ae7600 == 0) {
      plVar3 = malloc(0x298);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar1 + 8);
        if (lVar2 != 0) {
          param_3 = (long *)(lVar2 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar3 = (long *)0x0;
          goto LAB_0153a37c;
        }
      }
      plVar3 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x298,8);
    }
LAB_0153a37c:
    FUN_00705c50(plVar3);
    plVar3[0x52] = 0;
    plVar3[0x51] = 0;
    uVar4 = *(uint *)(plVar3 + 0x4c) & 0xfffffff0;
    plVar3[0x50] = 0;
    plVar3[0x4f] = 0;
    puVar5 = PTR_DAT_04bbd450;
    goto LAB_0153a414;
  case 2:
    if (DAT_05ae7600 == 0) {
      plVar3 = malloc(0x298);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar1 + 8);
        if (lVar2 != 0) {
          param_3 = (long *)(lVar2 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar3 = (long *)0x0;
          goto LAB_0153a3b4;
        }
      }
      plVar3 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x298,8);
    }
LAB_0153a3b4:
    FUN_00705c50(plVar3);
    plVar3[0x52] = 0;
    plVar3[0x51] = 0;
    uVar4 = *(uint *)(plVar3 + 0x4c) & 0xfffffff0;
    plVar3[0x50] = 0;
    plVar3[0x4f] = 0;
    puVar5 = PTR_DAT_04bbd438;
    goto LAB_0153a414;
  case 3:
    if (DAT_05ae7600 == 0) {
      plVar3 = malloc(0x298);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar1 + 8);
        if (lVar2 != 0) {
          param_3 = (long *)(lVar2 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar3 = (long *)0x0;
          goto LAB_0153a3ec;
        }
      }
      plVar3 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x298,8);
    }
LAB_0153a3ec:
    FUN_00705c50(plVar3);
    plVar3[0x52] = 0;
    plVar3[0x51] = 0;
    uVar4 = *(uint *)(plVar3 + 0x4c) & 0xfffffff0;
    plVar3[0x50] = 0;
    plVar3[0x4f] = 0;
    puVar5 = PTR_DAT_04bbd448;
    goto LAB_0153a414;
  default:
    if (DAT_05ae7600 != 0) {
      if (param_3 == (long *)0x0) goto LAB_0153a1dc;
      goto LAB_0153a208;
    }
LAB_0153a338:
    plVar3 = malloc(0x298);
  }
  FUN_00705c50(plVar3);
  plVar3[0x52] = 0;
  plVar3[0x51] = 0;
  uVar4 = *(uint *)(plVar3 + 0x4c) & 0xfffffff0;
  plVar3[0x50] = 0;
  plVar3[0x4f] = 0;
  puVar5 = PTR_DAT_04bbd440;
LAB_0153a414:
  *(uint *)(plVar3 + 0x4c) = uVar4;
  *plVar3 = (long)(puVar5 + 0x10);
  return plVar3;
}

