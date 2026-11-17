
/* WARNING: Removing unreachable block (ram,0x02f08024) */

void FUN_02f07fe8(int param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined *local_40;
  undefined4 local_38;
  
  local_40 = (undefined *)CONCAT44(local_40._4_4_,0xd);
  puVar3 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc73c0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  plVar5 = (long *)puVar3[0x48];
  if (plVar5 == (long *)0x0) goto LAB_02f080d0;
  if (*(uint *)(plVar5 + 0x15) < 7 && (1 << (ulong)(*(uint *)(plVar5 + 0x15) & 0x1f) & 0x58U) != 0)
  {
    uVar2 = (**(code **)(*plVar5 + 0xe0))(plVar5);
    if ((uVar2 & 1) != 0) goto LAB_02f080d0;
  }
  else {
    if ((int)plVar5[0x15] == 5 || (int)plVar5[0x15] == 2) {
      FUN_03869260(puVar3,plVar5);
      *(undefined1 *)((long)plVar5 + 0x165) = 1;
      goto LAB_02f080d0;
    }
    if (6 < *(uint *)(plVar5 + 0x15) || (1 << (ulong)(*(uint *)(plVar5 + 0x15) & 0x1f) & 0x58U) == 0
       ) goto LAB_02f080d0;
  }
  (**(code **)(*plVar5 + 0xa8))(plVar5);
LAB_02f080d0:
  if (-1 < param_1) {
    lVar4 = puVar3[0x48];
    *(undefined4 *)(lVar4 + 0x23c) = 0x5a;
    *(undefined2 *)(lVar4 + 0x230) = 0;
    *(undefined1 *)(lVar4 + 0x232) = 0;
    *(int *)(lVar4 + 0x234) = param_1;
    plVar5 = (long *)**(undefined8 **)(*(long *)(lVar4 + 0x210) + 0x230);
    if (plVar5 != (long *)0x0) {
      local_40 = PTR_DAT_04bc4f00 + 0x10;
      local_38 = 0x14;
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_40);
      (**(code **)(plVar5[3] + 0x158))(0,plVar5[1]);
    }
    *(undefined8 *)(lVar4 + 0x220) = 0;
    *(undefined2 *)(lVar4 + 0x238) = 0x100;
  }
  return;
}

