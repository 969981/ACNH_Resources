
/* WARNING: Removing unreachable block (ram,0x02ed2814) */
/* WARNING: Removing unreachable block (ram,0x02ed271c) */

void FUN_02ed2684(long param_1,byte param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if ((param_2 & 1) != 0) {
    if (*(char *)(param_1 + 0x234) == '\0') {
      *(undefined1 *)(param_1 + 0x234) = 1;
    }
    plVar2 = *(long **)(**(long **)(*(long *)(param_1 + 0x218) + 0x3f8) + 0x1b0);
    if (((plVar2 != (long *)0x0) && (uVar3 = (**(code **)(*plVar2 + 0x50))(), (uVar3 & 1) != 0)) &&
       (*(char *)(param_1 + 0x220) != '\0')) {
      (**(code **)(**(long **)(param_1 + 0x218) + 0x120))(*(long **)(param_1 + 0x218),0);
    }
    puVar6 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
    if (((*PTR_DAT_04bc7280 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc7280);
    }
    if (((puVar6 != (undefined8 *)0x0) &&
        (uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc7278), (uVar3 & 1) != 0)) &&
       (uVar3 = FUN_02ee2990(puVar6), (uVar3 & 1) == 0)) {
      FUN_02ed2900(param_1);
    }
    goto LAB_02ed2858;
  }
  if (*(char *)(param_1 + 0x234) != '\0') {
    *(undefined1 *)(param_1 + 0x234) = 0;
  }
  plVar2 = *(long **)(param_1 + 0x218);
  plVar4 = *(long **)(*(long *)plVar2[0x7f] + 0x1b0);
  if (plVar4 == (long *)0x0) {
LAB_02ed27a4:
    (**(code **)(*plVar2 + 0x128))(plVar2,0);
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
    if ((uVar3 & 1) != 0) {
      plVar2 = *(long **)(param_1 + 0x218);
      goto LAB_02ed27a4;
    }
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x218) + 0x570);
  if ((((lVar5 != 0) && (*(long **)(lVar5 + 0x1b0) != (long *)0x0)) &&
      (uVar3 = (**(code **)(**(long **)(lVar5 + 0x1b0) + 0x60))(), (uVar3 & 1) != 0)) &&
     (plVar2 = *(long **)(lVar5 + 0x1b0), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x40))(plVar2,0);
  }
  puVar6 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar6 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc7278), (uVar3 & 1) != 0)) {
    *(byte *)((long)puVar6 + 0x239) = *(byte *)((long)puVar6 + 0x239) | 6;
  }
LAB_02ed2858:
  if ((*(long *)(param_1 + 0x218) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x218) + 0x210), lVar5 != 0)) {
    *(byte *)(lVar5 + 0x54) = (param_2 ^ 0xff) & 1;
  }
  return;
}

