
/* WARNING: Removing unreachable block (ram,0x032c6b68) */
/* WARNING: Removing unreachable block (ram,0x032c6c10) */

void FUN_032c6b2c(long param_1,uint param_2)

{
  size_t __size;
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong *puVar4;
  void *__s;
  ulong __size_00;
  long lVar5;
  
  puVar1 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 0x38) != 0) {
    return;
  }
  __size_00 = (ulong)param_2;
  if ((int)param_2 < 1) {
    return;
  }
  __size = __size_00 * 8 + 8;
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(__size);
  }
  else {
    plVar2 = (long *)**(long **)(param_1 + 0x18);
    if (plVar2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar5 + 8);
      if (lVar3 != 0) {
        plVar2 = (long *)(lVar3 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) goto LAB_032c6bfc;
    }
    puVar4 = (ulong *)(**(code **)(*plVar2 + 0x30))(plVar2,__size,8);
  }
  if (puVar4 != (ulong *)0x0) {
    *puVar4 = __size_00;
    memset(puVar4 + 1,0,__size_00 * 8);
    *(uint *)(param_1 + 0x30) = param_2;
    *(ulong **)(param_1 + 0x38) = puVar4 + 1;
  }
LAB_032c6bfc:
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
    __s = malloc(__size_00);
  }
  else {
    plVar2 = (long *)**(long **)(param_1 + 0x18);
    if (plVar2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar5 + 8);
      if (lVar3 != 0) {
        plVar2 = (long *)(lVar3 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        return;
      }
    }
    __s = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,__size_00,1);
  }
  if (__s != (void *)0x0) {
    memset(__s,0,__size_00);
    *(uint *)(param_1 + 0x40) = param_2;
    *(void **)(param_1 + 0x48) = __s;
  }
  return;
}

