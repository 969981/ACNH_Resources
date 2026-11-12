
bool FUN_006f2324(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  void *__s1;
  void *__s2;
  int iVar4;
  
  if (param_2 == param_3) {
    return true;
  }
  __s1 = (void *)(**(code **)(*param_2 + 0x18))(param_2);
  iVar2 = (**(code **)(*param_2 + 0x20))(param_2);
  if (__s1 == (void *)0x0 || iVar2 == 0) {
    iVar2 = -1;
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    *(undefined4 *)(param_1 + 0x3d) = 0;
    param_1[3] = (long)&PTR_FUN_048fc6e0;
    param_1[1] = (long)__s1;
    param_1[2] = 0;
    (**(code **)(*param_1 + 0x18))(param_1);
    FUN_006f1490(param_1);
    iVar2 = (int)((ulong)(param_1[0x3f] - (long)__s1) >> 1);
  }
  __s2 = (void *)(**(code **)(*param_3 + 0x18))(param_3);
  iVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  iVar4 = -1;
  if ((__s2 != (void *)0x0) && (iVar3 != 0)) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    *(undefined4 *)(param_1 + 0x3d) = 0;
    param_1[3] = (long)&PTR_FUN_048fc6e0;
    param_1[1] = (long)__s2;
    param_1[2] = 0;
    (**(code **)(*param_1 + 0x18))(param_1);
    FUN_006f1490(param_1);
    iVar4 = (int)((ulong)(param_1[0x3f] - (long)__s2) >> 1);
  }
  bVar1 = false;
  if ((-1 < iVar2) && (iVar2 == iVar4)) {
    iVar2 = memcmp(__s1,__s2,(ulong)(uint)(iVar2 << 1));
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}

