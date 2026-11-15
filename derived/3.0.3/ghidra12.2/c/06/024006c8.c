
void FUN_024006c8(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  float local_3c;
  float local_38;
  float local_34;
  
  local_38 = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  local_3c = (float)*(int *)(param_1 + 0x190a) * 0.001;
  local_34 = (float)*(int *)(param_1 + 0x1910) * 0.001;
  local_38 = (float)FUN_016e026c(0,&local_3c,0,0);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),&local_3c);
  plVar6 = *(long **)(param_1 + 0x60);
  if (plVar6 != (long *)0x0) {
    if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37b8);
    }
    uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,PTR_DAT_04bb37b0);
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar6 + 0x498))(plVar6,1);
    }
  }
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
  uVar5 = (uint)*(byte *)(param_1 + 0x1ee8);
  bVar2 = 7 < uVar5;
  if (bVar2) {
    uVar5 = 0xff;
  }
  lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar5 * 0x740;
  if (bVar2) {
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
    *(undefined4 *)(lVar1 + 0x424) = 3;
    FUN_01393458(lVar1 + 0x4c8);
  }
  else {
    *(undefined4 *)(lVar1 + 0x424) = 4;
  }
  return;
}

