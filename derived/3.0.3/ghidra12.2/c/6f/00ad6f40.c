
void * FUN_00ad6f40(long *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  void *__s;
  ulong uVar8;
  long lVar9;
  
  if (DAT_04daa210 != (void *)0x0) {
    return DAT_04daa210;
  }
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    __s = malloc(0x420);
  }
  else {
    plVar7 = param_1;
    if (param_1 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar9 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        __s = (void *)0x0;
        goto LAB_00ad6fd4;
      }
    }
    __s = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x420,8);
  }
LAB_00ad6fd4:
  FUN_038c69f0((long)__s + 0x400,param_1,3);
  *(undefined ***)((long)__s + 0x400) = &PTR_FUN_04933968;
  DAT_04daa208 = (long)__s + 0x400;
  memset(__s,0,0x400);
  lVar9 = 0;
  do {
    piVar2 = (int *)((long)__s + lVar9);
    piVar2[0] = 0;
    piVar2[1] = 0;
    uVar5 = nn::os::GetSystemTick();
    lVar9 = lVar9 + 8;
    uVar3 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
    uVar5 = uVar3 ^ uVar3 * 0x800;
    uVar4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
    uVar3 = uVar4 ^ uVar4 * 0x800;
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
    uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
    *(short *)(piVar2 + 1) = (short)(uVar5 >> 0x10);
    uVar8 = (ulong)(uVar3 >> 8 ^ uVar5 >> 0x13 ^ uVar3 ^ uVar5) * 0x1b;
    *(char *)((long)piVar2 + 6) = (char)(uVar8 >> 0x20);
    lVar6 = (ulong)((uVar5 >> 0x10) + 0x7f1cd4ef) << (uVar8 >> 0x20) + 3;
    iVar1 = (int)((ulong)lVar6 >> 0x20) + (int)lVar6;
    *piVar2 = iVar1;
    *(char *)((long)piVar2 + 7) =
         (char)iVar1 + (char)((uint)iVar1 >> 0x10) + (char)((uint)iVar1 >> 0x18) +
         (char)((uint)iVar1 >> 8) + -0x2d;
  } while (lVar9 != 0x400);
  DAT_04daa210 = __s;
  return __s;
}

