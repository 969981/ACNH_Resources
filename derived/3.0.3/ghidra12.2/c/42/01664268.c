
undefined8 * FUN_01664268(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    if (*(uint *)(*(long *)PTR_DAT_04bbdb78 + 0x20) <= param_2) {
      param_2 = 0;
    }
    lVar3 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdb78 + 0x28) + (long)(int)param_2 * 8);
    if (lVar3 != 0) {
      puVar4 = *(undefined8 **)(lVar3 + 0x78);
      goto LAB_016642b4;
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_016642b4:
  if (((*PTR_DAT_04bb6208 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6208), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb6200 = PTR_DAT_04bb6210 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6208);
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bb6200);
    if ((uVar2 & 1) == 0) {
      puVar4 = (undefined8 *)0x0;
    }
  }
  return puVar4;
}

