
bool FUN_02543ddc(byte *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  byte bVar8;
  bool bVar9;
  undefined1 auStack_60 [8];
  long *local_58;
  char local_50;
  char local_4f;
  char local_4e;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_14;
  
  bVar8 = *param_1;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  local_48 = CONCAT71(local_48._1_7_,bVar8);
  lVar2 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_48,1);
  if (lVar2 == 0) goto LAB_02543ed0;
  lVar6 = *(long *)(lVar2 + 0x1aa0);
  if (lVar6 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar6 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(lVar2 + 0x1aa0) == 0) goto LAB_02543e94;
      plVar4 = *(long **)(*(long *)(lVar2 + 0x1aa0) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_48 = *(ulong *)(lVar2 + 0x1a80);
      local_40 = *(undefined8 *)(lVar2 + 0x1a88);
      local_38 = 0x8b8;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_02543e94:
  FUN_02816c30(*(long *)(lVar2 + 0x1a88) + *(long *)(lVar2 + 0x1a80),param_1 + 4,
               *(undefined4 *)(param_1 + 0xc),0);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x1aa0) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x1aa0) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
LAB_02543ed0:
  piVar7 = (int *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      piVar7 = (int *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_14 = *piVar7;
  if (local_14 == 0) {
    bVar9 = false;
  }
  else {
    FUN_0071c8d0(&local_58,&local_14,PTR_DAT_04bb3238,0);
    plVar4 = local_58;
    if (local_58 != (long *)0x0) {
      if (((*PTR_DAT_04bb3778 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3778);
      }
      uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb3770);
      if ((uVar3 & 1) == 0) {
        local_4f = '\0';
      }
    }
    bVar9 = ((local_58 != (long *)0x0 && local_50 != '\0') && local_4f != '\0') && local_4e != '\0';
    if (((local_58 != (long *)0x0 && local_50 != '\0') && local_4f != '\0') && local_4e != '\0') {
      uVar3 = (ulong)local_40 >> 0x20;
      local_48 = CONCAT44((int)(local_48 >> 0x20),*(undefined4 *)(param_1 + 0x10)) &
                 0xffffff00ffffffff;
      local_40 = CONCAT44((uint)uVar3 & 0xff000000,6);
      FUN_02321e44(auStack_60,local_58,&local_48);
    }
  }
  return bVar9;
}

