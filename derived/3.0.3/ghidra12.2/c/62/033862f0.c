
/* WARNING: Removing unreachable block (ram,0x03386328) */

void FUN_033862f0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 uStack_35;
  undefined4 local_34;
  
  local_34 = 1;
  puVar7 = *(undefined8 **)(DAT_05739190 + 0x48);
  if (((*PTR_DAT_04bc7828 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc7828), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc7820 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7828);
  }
  if ((puVar7 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc7820), (uVar2 & 1) != 0)) {
    if (((long *)puVar7[0x42] != (long *)0x0) &&
       ((((lVar3 = (**(code **)(*(long *)puVar7[0x42] + 0x220))(), lVar3 != 0 &&
          (*(uint *)(lVar3 + 0x48) < 7)) &&
         ((1 << (ulong)(*(uint *)(lVar3 + 0x48) & 0x1f) & 0x58U) != 0)) &&
        (*(int *)(lVar3 + 0x218) != 3)))) {
      *(undefined4 *)(lVar3 + 0x218) = 3;
      *(undefined1 *)(lVar3 + 0x21d) = 1;
    }
    lVar3 = *(long *)(puVar7[0x46] + 0x210);
    if (((*(uint *)(lVar3 + 0x48) < 7) &&
        ((1 << (ulong)(*(uint *)(lVar3 + 0x48) & 0x1f) & 0x58U) != 0)) &&
       (*(int *)(lVar3 + 0x218) != 3)) {
      *(undefined4 *)(lVar3 + 0x218) = 3;
      *(undefined1 *)(lVar3 + 0x21d) = 1;
    }
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0xd0) + 0x26c) = 1;
  }
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 != 0) {
    plVar4 = *(long **)(lVar3 + 0x10);
    plVar5 = plVar4;
    if (*(int *)(lVar3 + 0x18) < 1) {
      plVar5 = (long *)0x0;
    }
    if ((plVar5 != (long *)0x0) && (plVar5 = plVar5 + -8, plVar5 != (long *)0x0)) {
      do {
        FUN_0338b130(lVar3,plVar5[5],1);
        plVar4 = *(long **)(lVar3 + 0x10);
        plVar6 = plVar4;
        if (*(int *)(lVar3 + 0x18) < 1) {
          plVar6 = (long *)0x0;
        }
        plVar5 = plVar6 + -8;
      } while (plVar6 != (long *)0x0 && plVar5 != (long *)0x0);
    }
    while (plVar4 != (long *)(lVar3 + 8)) {
      plVar5 = (long *)plVar4[1];
      plVar6 = plVar5;
      if (*plVar4 != 0) {
        *(long **)(*plVar4 + 8) = plVar5;
        plVar6 = (long *)plVar4[1];
      }
      if (plVar6 != (long *)0x0) {
        *plVar6 = *plVar4;
      }
      *plVar4 = 0;
      plVar4[1] = 0;
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + -1;
      plVar4[-8] = *(long *)(lVar3 + 0x20);
      *(long **)(lVar3 + 0x20) = plVar4 + -8;
      plVar4 = plVar5;
    }
  }
  lVar3 = *(long *)(param_1 + 0x458);
  if (lVar3 == 0) {
    *(undefined1 *)(param_1 + 0x44d) = 0;
  }
  else {
    if ((*(char *)(lVar3 + 0x48) == '\0') || (*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x41f3ce7)) {
      *(undefined1 *)(param_1 + 0x44d) = 0;
    }
    else {
      *(undefined1 *)(*(long *)PTR_DAT_04bb28f8 + 0x87f8) = 1;
      *(undefined1 *)(param_1 + 0x44d) = 0;
      lVar3 = *(long *)(param_1 + 0x458);
      if (lVar3 == 0) {
        return;
      }
    }
    FUN_0252d11c(&uStack_35);
    FUN_034464c8(lVar3,&uStack_35,*(undefined8 *)(param_1 + 0x450));
  }
  return;
}

