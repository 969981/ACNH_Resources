
void FUN_02237dd4(void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  if ((((DAT_05463160 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(DAT_05463160 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != DAT_05463160)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      goto joined_r0x02237e90;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02237e90;
    }
  }
  uVar8 = 0;
joined_r0x02237e90:
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0x2a];
    if (((DAT_05463260 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05463260), iVar3 != 0)) {
      DAT_05463258 = PTR_DAT_04bc0e10 + 0x10;
      __cxa_guard_release(&DAT_05463260);
    }
    uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,&DAT_05463258);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar8;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      *(byte *)((long)plVar7 + 0x286) = *(byte *)((long)plVar7 + 0x286) | 8;
    }
  }
  return;
}

