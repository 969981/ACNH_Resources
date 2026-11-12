
bool FUN_00817520(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = param_1 + 2;
  if ((*(byte *)(param_1 + 3) >> 1 & 1) == 0) {
    if ((char)param_1[1] != '\0') {
      bVar1 = true;
      goto LAB_00817584;
    }
  }
  else {
    uVar2 = FUN_03f2d924(plVar3);
    bVar1 = true;
    if (((uVar2 & 1) != 0) || ((char)param_1[1] != '\0')) goto LAB_00817584;
  }
  if (*param_1 == 0) {
    return false;
  }
  bVar1 = *(char *)(*param_1 + 0x161) != '\0';
LAB_00817584:
  if (bVar1 == false) {
    return false;
  }
  if (*param_1 == 0) {
    return bVar1;
  }
  uVar2 = FUN_03f2dedc(plVar3,0);
  if ((uVar2 & 1) == 0) {
    return false;
  }
  uVar2 = FUN_03f2eb0c(plVar3);
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  lVar4 = *param_1;
  if (((*(byte *)(lVar4 + 0x128) >> 1 & 1) != 0) || (*(char *)(lVar4 + 0x118) != '\0')) {
    plVar3 = *(long **)(*(long *)(*(long *)PTR_DAT_04bb2110 + 0x10) +
                       (long)*(int *)(lVar4 + 0x108) * 8);
    nn::os::LockMutex((MutexType *)(plVar3 + 0x4d));
    (**(code **)(*plVar3 + 0x38))(plVar3,lVar4 + 0x110);
    nn::os::UnlockMutex((MutexType *)(plVar3 + 0x4d));
  }
  *(undefined1 *)(lVar4 + 0x162) = 1;
  *param_1 = 0;
  return true;
}

