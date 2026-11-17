
void FUN_02fed730(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 600);
  if (lVar6 == 0) {
    return;
  }
  if (((DAT_056d4420 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d4420), iVar1 != 0)) {
    DAT_056d439c = 0;
    DAT_056d43a0 = 0x41b4000043a8c000;
    DAT_056d4418 = 0;
    DAT_056d43a8 = 0x100000000;
    DAT_056d43b0 = 0x4287000041b40000;
    DAT_056d43b8 = 0x200000000;
    DAT_056d43c0 = 0x42e1000042870000;
    DAT_056d43c8 = 0x300000000;
    DAT_056d43d0 = 0x431d800042e10000;
    DAT_056d43d8 = 0x400000000;
    DAT_056d43e0 = 0x434a8000431d8000;
    DAT_056d43e8 = 0x500000000;
    DAT_056d43f0 = 0x43778000434a8000;
    DAT_056d43f8 = 0x600000000;
    DAT_056d4400 = 0x4392400043778000;
    DAT_056d4408 = 0x700000000;
    DAT_056d4410 = 0x43a8c00043924000;
    __cxa_guard_release(&DAT_056d4420);
  }
  lVar5 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar4 = malloc(0xc0);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar5 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) goto LAB_02fed818;
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0xc0,8);
  }
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 **)(lVar6 + 0x18) = puVar4;
    puVar4[0xe] = 0;
    puVar4[0xc] = puVar4 + 0xe;
    puVar4[10] = puVar4 + 0xc;
    puVar4[8] = puVar4 + 10;
    puVar4[6] = puVar4 + 8;
    puVar4[4] = puVar4 + 6;
    puVar4[2] = puVar4 + 4;
    *puVar4 = puVar4 + 2;
    *(undefined8 **)(lVar6 + 0x20) = puVar4;
    if (puVar4 + 0x10 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar6 + 8) = 0x800000000;
      *(undefined8 **)(lVar6 + 0x10) = puVar4 + 0x10;
    }
  }
LAB_02fed818:
  FUN_03858260(lVar6,&DAT_056d439c);
  FUN_03858260(lVar6,0x56d43ac);
  FUN_03858260(lVar6,0x56d43bc);
  FUN_03858260(lVar6,0x56d43cc);
  FUN_03858260(lVar6,0x56d43dc);
  FUN_03858260(lVar6,0x56d43ec);
  FUN_03858260(lVar6,0x56d43fc);
  FUN_03858260(lVar6,0x56d440c);
  *(undefined1 *)(lVar6 + 0x28) = 0;
  if (0 < *(int *)(lVar6 + 8)) {
    lVar5 = 0;
    do {
      lVar2 = lVar5 * 8;
      lVar5 = lVar5 + 1;
      *(undefined4 *)(*(long *)(*(long *)(lVar6 + 0x10) + lVar2) + 0xc) = 0x3f000000;
    } while (lVar5 < *(int *)(lVar6 + 8));
  }
  return;
}

