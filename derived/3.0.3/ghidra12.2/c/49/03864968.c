
void FUN_03864968(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ushort uVar5;
  long *plVar6;
  undefined4 uVar7;
  
  iVar2 = *(int *)(param_1 + 0x474);
  if (iVar2 == 0) {
    return;
  }
  if (iVar2 == 5) {
    if (*(char *)(param_1 + 0x478) != '\0') {
      return;
    }
LAB_03864994:
    lVar4 = *(long *)(param_1 + 0x200);
    uVar7 = 2;
    uVar5 = *(ushort *)(lVar4 + 0x2f8) & 0xfffd;
  }
  else {
    if (*(char *)(param_1 + 0x478) == '\0') {
      if (iVar2 != 4) {
        if (iVar2 == 3) {
          plVar6 = *(long **)(param_1 + 0x50);
          if (((*PTR_DAT_04bc4c98 & 1) == 0) &&
             (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4c98), iVar2 != 0)) {
            *(undefined **)PTR_DAT_04bc4c90 = PTR_DAT_04bc4ca0 + 0x10;
            __cxa_guard_release(PTR_DAT_04bc4c98);
          }
          if (plVar6 == (long *)0x0) {
            return;
          }
          uVar3 = (**(code **)*plVar6)(plVar6,PTR_DAT_04bc4c90);
          if ((uVar3 & 1) == 0) {
            return;
          }
          uVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,0);
          if ((uVar3 & 1) == 0) {
            return;
          }
          uVar7 = 4;
        }
        else {
          if (iVar2 != 1) {
            return;
          }
          plVar6 = *(long **)(param_1 + 0x50);
          if (((*PTR_DAT_04bc4c98 & 1) == 0) &&
             (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4c98), iVar2 != 0)) {
            *(undefined **)PTR_DAT_04bc4c90 = PTR_DAT_04bc4ca0 + 0x10;
            __cxa_guard_release(PTR_DAT_04bc4c98);
          }
          if (plVar6 == (long *)0x0) {
            uVar5 = 0;
            uVar7 = 2;
          }
          else {
            uVar3 = (**(code **)*plVar6)(plVar6,PTR_DAT_04bc4c90);
            uVar7 = 2;
            if ((uVar3 & 1) == 0) {
              uVar5 = 0;
            }
            else {
              uVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,0);
              bVar1 = (uVar3 & 1) == 0;
              uVar5 = 0;
              if (bVar1) {
                uVar5 = 2;
              }
              uVar7 = 2;
              if (bVar1) {
                uVar7 = 3;
              }
            }
          }
          *(ushort *)(*(long *)(param_1 + 0x200) + 0x2f8) =
               *(ushort *)(*(long *)(param_1 + 0x200) + 0x2f8) & 0xfffd | uVar5;
        }
        goto LAB_038649c4;
      }
      goto LAB_03864994;
    }
    lVar4 = *(long *)(param_1 + 0x200);
    uVar7 = 5;
    uVar5 = *(ushort *)(lVar4 + 0x2f8) | 2;
  }
  *(ushort *)(lVar4 + 0x2f8) = uVar5;
LAB_038649c4:
  *(undefined4 *)(param_1 + 0x474) = uVar7;
  return;
}

