
/* WARNING: Removing unreachable block (ram,0x02f081f0) */

void FUN_02f081b4(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
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
  plVar4 = (long *)puVar3[0x48];
  if (plVar4 == (long *)0x0) goto LAB_02f0829c;
  if (*(uint *)(plVar4 + 0x15) < 7 && (1 << (ulong)(*(uint *)(plVar4 + 0x15) & 0x1f) & 0x58U) != 0)
  {
    uVar2 = (**(code **)(*plVar4 + 0xe0))(plVar4);
    if ((uVar2 & 1) != 0) goto LAB_02f0829c;
  }
  else {
    if ((int)plVar4[0x15] == 5 || (int)plVar4[0x15] == 2) {
      FUN_03869260(puVar3,plVar4);
      *(undefined1 *)((long)plVar4 + 0x165) = 1;
      goto LAB_02f0829c;
    }
    if (6 < *(uint *)(plVar4 + 0x15) || (1 << (ulong)(*(uint *)(plVar4 + 0x15) & 0x1f) & 0x58U) == 0
       ) goto LAB_02f0829c;
  }
  (**(code **)(*plVar4 + 0xa8))(plVar4);
LAB_02f0829c:
  if (param_1 != (undefined8 *)0x0) {
    lVar5 = puVar3[0x48];
    iVar1 = (**(code **)*param_1)(param_1);
    if (-1 < iVar1) {
      *(undefined2 *)(lVar5 + 0x230) = 0;
      *(undefined1 *)(lVar5 + 0x232) = 0;
      *(undefined4 *)(lVar5 + 0x23c) = 0x5a;
      *(int *)(lVar5 + 0x234) = iVar1;
      plVar4 = (long *)**(undefined8 **)(*(long *)(lVar5 + 0x210) + 0x230);
      if (plVar4 != (long *)0x0) {
        local_40 = PTR_DAT_04bc4f00 + 0x10;
        local_38 = 0x14;
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
        (**(code **)(plVar4[3] + 0x158))(0,plVar4[1]);
      }
      *(undefined2 *)(lVar5 + 0x238) = 0x100;
    }
    *(undefined8 **)(lVar5 + 0x220) = param_1;
  }
  return;
}

