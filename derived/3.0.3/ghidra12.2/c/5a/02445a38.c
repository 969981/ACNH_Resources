
void FUN_02445a38(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  undefined *local_30;
  char *pcStack_28;
  
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "PlayerMenuWait";
  FUN_017081d0(puVar6,&local_30,6,1,0);
  puVar1 = PTR_DAT_04bb27c0;
  if (DAT_0546aef0 == 0) {
    return;
  }
  lVar5 = *(long *)PTR_DAT_04bb27c0;
  if (lVar5 == 0) {
    return;
  }
  plVar7 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) +
                     ((ulong)(DAT_0546aef0 >> 0x11) & 0x7ff8));
  if (((plVar7 == (long *)0x0) || ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar7 + 0x46) != DAT_0546aef0)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar5 + 0x288) == 1 || *(int *)(lVar5 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar8 = 1;
      goto joined_r0x02445b44;
    }
    if (*(uint *)(lVar5 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar5 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02445b44;
    }
  }
  uVar8 = 0;
joined_r0x02445b44:
  if (plVar7 != (long *)0x0) {
    if (((*PTR_DAT_04bb8118 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb8118), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb8110 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb8118);
    }
    uVar3 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb8110);
    if ((uVar8 & uVar3) == 1) {
      *(undefined4 *)((long)plVar7 + 0x274) = 2;
    }
  }
  return;
}

