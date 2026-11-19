
/* WARNING: Removing unreachable block (ram,0x03c4bb34) */

void FUN_03c4ba50(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_04b80458;
  FUN_038e18e4(param_1 + 1);
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  FUN_038e3114(param_1 + 10,0,0x7fff);
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_038e3114(param_1 + 0x14,0,0x7fff);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((long)param_1 + 0x11c) = 0;
  param_1[0x22] = (undefined1 *)((long)param_1 + 0x11c);
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0x20;
  *(undefined1 *)((long)param_1 + 0x13b) = 0;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = puVar1;
  FUN_038e18e4(param_1 + 0x2e);
  puVar1 = PTR_DAT_04bb2628;
  param_1[0x3a] = param_1 + 0x3a;
  param_1[0x3b] = param_1 + 0x3a;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  lVar4 = *(long *)puVar1;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3c] = 0xffffffff00000000;
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  lVar5 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    pvVar3 = malloc(0x10000);
  }
  else {
    plVar2 = *(long **)(lVar4 + 0x118);
    if (plVar2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar5 + 8);
      if (lVar4 != 0) {
        plVar2 = (long *)(lVar4 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) goto LAB_03c4bbe8;
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x10000,8);
  }
  if (pvVar3 != (void *)0x0) {
    lVar5 = 0x3ff;
    param_1[0x37] = pvVar3;
    *(undefined4 *)((long)param_1 + 0x1cc) = 0x400;
    plVar2 = (long *)((long)pvVar3 + 0x80);
    do {
      plVar2[-8] = (long)plVar2;
      plVar2[-0x10] = (long)(plVar2 + -8);
      lVar5 = lVar5 + -3;
      *plVar2 = (long)(plVar2 + 8);
      plVar2 = plVar2 + 0x18;
    } while (lVar5 != 0);
    *(undefined8 *)((long)pvVar3 + 0xffc0) = 0;
    param_1[0x38] = pvVar3;
  }
LAB_03c4bbe8:
  *(undefined4 *)((long)param_1 + 0x1e4) = 0x30;
  return;
}

