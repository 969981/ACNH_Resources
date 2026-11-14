
float FUN_0163fa80(undefined8 param_1,uint param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x58) + 0xe88);
  plVar1 = plVar5 + param_2;
  if (1 < param_2) {
    plVar1 = plVar5;
  }
  lVar4 = *plVar1;
  iVar2 = (int)**(short **)PTR_DAT_04bbdc40;
  if (*(uint *)(lVar4 + 0x4f20) <= (uint)(int)**(short **)PTR_DAT_04bbdc40) {
    iVar2 = 0;
  }
  if (*(short *)(*(long *)(lVar4 + 0x4f28) + (long)iVar2 * 4 + 2) == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(*(long *)(lVar4 + 0x4f38) +
                       (ulong)*(ushort *)(*(long *)(lVar4 + 0x4f28) + (long)iVar2 * 4) * 8);
  }
  if (((*PTR_DAT_04bbdc30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbdc30), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bbdc28 = PTR_DAT_04bbd8c8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbdc30);
  }
  uVar3 = (**(code **)(*plVar5 + 0x48))(plVar5,PTR_DAT_04bbdc28);
  if ((uVar3 & 1) == 0) {
    plVar5 = (long *)0x0;
  }
  return *(float *)(plVar5 + 0x34) * *(float *)(plVar5 + 0x25);
}

