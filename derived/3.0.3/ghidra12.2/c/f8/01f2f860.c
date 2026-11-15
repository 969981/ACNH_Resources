
void FUN_01f2f860(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined1 local_3c;
  undefined1 local_35;
  
  local_48 = 0x10;
  *param_1 = &PTR_LAB_04a65760;
  local_35 = 0;
  local_44 = 0x65636e6172746e45;
  local_3c = 0;
  puStack_50 = &local_44;
  local_58 = PTR_DAT_04bb2ab0 + 0x10;
  uVar2 = FUN_02931830(PTR_DAT_04bc39e0,&local_58,0);
  if (((-1 < (int)uVar2) && (DAT_05aed670 != 0)) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar3 = FUN_006bd550(*puVar4,0);
    if (((iVar3 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
       ((lVar6 = *(long *)(DAT_05aed670 + 0x330), lVar6 != 0 && (uVar2 < *(uint *)(lVar6 + 0x260))))
       ) {
      lVar6 = lVar6 + 0x250;
      uVar1 = uVar2 + 1 & 3;
      if (2 < uVar2) {
        uVar2 = uVar2 + 1 & 0xfffffffc;
        do {
          uVar2 = uVar2 - 4;
          lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 8) + 8) + 8) + 8);
        } while (uVar2 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        lVar6 = *(long *)(lVar6 + 8);
      }
      if ((lVar6 != 0) && (lVar6 != 0x40)) {
        *(undefined1 *)(lVar6 + -4) = 0;
      }
    }
  }
  uVar5 = FUN_02549590();
  if ((uVar5 & 1) != 0) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f08c8 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f08c8);
        puVar7 = &DAT_054f08c0;
        if (iVar3 != 0) {
          DAT_054f08c0 = 0;
          __cxa_guard_release(&DAT_054f08c8);
          puVar7 = &DAT_054f08c0;
        }
      }
      else {
        puVar7 = &DAT_054f08c0;
      }
    }
    else {
      puVar7 = (uint *)(DAT_054f5738 + 0x1fc);
    }
    local_58 = (undefined *)((ulong)local_58 & 0xffffffff00000000);
    *puVar7 = *puVar7 & 0xfffffffe;
  }
  if (DAT_054f5738 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar7 = &DAT_054f08c0;
      if (iVar3 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
        puVar7 = &DAT_054f08c0;
      }
    }
    else {
      puVar7 = &DAT_054f08c0;
    }
  }
  else {
    puVar7 = (uint *)(DAT_054f5738 + 0x1fc);
  }
  local_58._0_4_ = 1;
  if ((*puVar7 >> 1 & 1) != 0) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f08c8 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f08c8);
        puVar7 = &DAT_054f08c0;
        if (iVar3 != 0) {
          DAT_054f08c0 = 0;
          __cxa_guard_release(&DAT_054f08c8);
        }
      }
      else {
        puVar7 = &DAT_054f08c0;
      }
    }
    else {
      puVar7 = (uint *)(DAT_054f5738 + 0x1fc);
    }
    *puVar7 = *puVar7 & 0xfffffffd;
  }
  local_58._0_4_ = 1;
  FUN_01e61130(param_1);
  return;
}

