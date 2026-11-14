
void FUN_0161304c(undefined8 param_1,uint param_2,ushort param_3)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  puVar4 = PTR_DAT_04bbdb78;
  puVar3 = PTR_DAT_04bb2200;
  if (*(long *)(*(long *)PTR_DAT_04bb2200 + 0x58) == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    uVar1 = param_2;
    if (*(uint *)(*(long *)PTR_DAT_04bbdb78 + 0x20) <= param_2) {
      uVar1 = 0;
    }
    plVar8 = *(long **)(*(long *)(*(long *)PTR_DAT_04bbdb78 + 0x28) + (long)(int)uVar1 * 8);
  }
  if ((*PTR_DAT_04bbdb68 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(PTR_DAT_04bbdb68);
    if (iVar5 != 0) {
      *(undefined ***)PTR_DAT_04bbdb60 = &PTR_LAB_049b3b38;
      __cxa_guard_release(PTR_DAT_04bbdb68);
    }
  }
  param_3 = param_3 ^ 1;
  if (((plVar8 != (long *)0x0) &&
      (uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,PTR_DAT_04bbdb60), (uVar6 & 1) != 0)) &&
     (plVar8[0x196] != 0)) {
    lVar7 = *(long *)(plVar8[0x196] + 0x118);
    bVar2 = (byte)param_3 & 1;
    *(byte *)(lVar7 + 0x4d0) = bVar2;
    *(byte *)(lVar7 + 0x570) = bVar2;
    *(byte *)(lVar7 + 0x710) = bVar2;
    *(byte *)(lVar7 + 0x770) = bVar2;
    *(byte *)(lVar7 + 0x7b0) = bVar2;
    *(byte *)(lVar7 + 2000) = bVar2;
    *(byte *)(lVar7 + 0x7f0) = bVar2;
    *(byte *)(lVar7 + 0x870) = bVar2;
    *(byte *)(lVar7 + 0x890) = bVar2;
    *(byte *)(lVar7 + 0x8b0) = bVar2;
    *(byte *)(lVar7 + 0x970) = bVar2;
    *(byte *)(lVar7 + 0x990) = bVar2;
  }
  if (*(long *)(*(long *)puVar3 + 0x58) == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    if (*(uint *)(*(long *)puVar4 + 0x20) <= param_2) {
      param_2 = 0;
    }
    plVar8 = *(long **)(*(long *)(*(long *)puVar4 + 0x28) + (long)(int)param_2 * 8);
  }
  if (((*PTR_DAT_04bbdc88 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbdc88), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bbdc80 = PTR_DAT_04bbdc90 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbdc88);
  }
  if (((plVar8 == (long *)0x0) ||
      (uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,PTR_DAT_04bbdc80), (uVar6 & 1) == 0)) ||
     ((*(ushort *)(plVar8 + 0x11) & 1) == (param_3 & 1))) {
    return;
  }
  nn::os::LockMutex((MutexType *)(plVar8[4] + 0x4f8));
  *(ushort *)(plVar8 + 0x11) = *(ushort *)(plVar8 + 0x11) & 0xfffe | param_3 & 1;
  nn::os::UnlockMutex((MutexType *)(plVar8[4] + 0x4f8));
  return;
}

