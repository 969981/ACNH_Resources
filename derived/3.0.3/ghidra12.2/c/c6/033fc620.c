
void FUN_033fc620(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (((DAT_0574d760 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0574d760), iVar1 != 0)) {
    DAT_0574d720 = 0;
    DAT_0574d75c = 0;
    DAT_0574d724 = 0x42e6000042820000;
    DAT_0574d72c = 0x100000000;
    DAT_0574d734 = 0x4393800043750000;
    DAT_0574d73c = 0x200000000;
    DAT_0574d744 = 0x42480000439b0000;
    DAT_0574d74c = 0x300000000;
    DAT_0574d754 = 0x4366000043020000;
    __cxa_guard_release(&DAT_0574d760);
  }
  lVar5 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar4 = malloc(0x60);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar5 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) goto LAB_033fc6e4;
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x60,8);
  }
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x18) = puVar4;
    puVar4[6] = 0;
    puVar4[4] = puVar4 + 6;
    puVar4[2] = puVar4 + 4;
    *puVar4 = puVar4 + 2;
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    if (puVar4 + 8 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 8) = 0x400000000;
      *(undefined8 **)(param_1 + 0x10) = puVar4 + 8;
    }
  }
LAB_033fc6e4:
  FUN_03858260(param_1,&DAT_0574d720);
  FUN_03858260(param_1,0x574d730);
  FUN_03858260(param_1,0x574d740);
  FUN_03858260(param_1,0x574d750);
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (0 < *(int *)(param_1 + 8)) {
    lVar5 = 0;
    do {
      lVar2 = lVar5 * 8;
      lVar5 = lVar5 + 1;
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + lVar2) + 0xc) = 0x3f000000;
    } while (lVar5 < *(int *)(param_1 + 8));
  }
  return;
}

