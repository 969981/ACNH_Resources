
void FUN_03a80004(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if ((*(long *)(param_1 + 0x418) == 0) || (*(char *)(*(long *)(param_1 + 8) + 0x530) == '\0')) {
    return;
  }
  lVar3 = *(long *)(param_3 + 0x3d0);
  if (((*(ushort *)(lVar3 + 0x8a) & 0x21) == 0 || (*(ushort *)(lVar3 + 0x8a) & 2) == 0) ||
     (*(long *)(lVar3 + 0x1f8) == 0)) {
    puVar4 = (undefined8 *)PTR_DAT_04bd13c0;
    if (*(undefined8 **)(lVar3 + 0x78) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(lVar3 + 0x78);
    }
  }
  else {
    puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x1f8) + 8);
  }
  if (((*PTR_DAT_04bb6208 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6208), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb6200 = PTR_DAT_04bb6210 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6208);
  }
  uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bb6200);
  if ((uVar2 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  FUN_03a8f720(*(undefined8 *)(param_1 + 0x418),param_2,*(undefined1 *)(param_3 + 8),puVar4);
  return;
}

