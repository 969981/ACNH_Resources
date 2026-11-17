
/* WARNING: Removing unreachable block (ram,0x02f0853c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_02f08500(uint param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if ((puVar7 != (undefined8 *)0x0) &&
     (uVar4 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc73c0), (uVar4 & 1) != 0)) {
    lVar5 = puVar7[0x49];
    puVar1 = (undefined8 *)(lVar5 + 0x350);
    puVar2 = *(undefined8 **)(lVar5 + 0x358);
    while (puVar2 != puVar1) {
      puVar6 = (undefined8 *)puVar2[1];
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = puVar6;
    }
    *(undefined4 *)(lVar5 + 0x360) = 0;
    *(undefined8 **)(lVar5 + 0x358) = puVar1;
    *(undefined8 **)(lVar5 + 0x350) = puVar1;
    *(undefined1 *)(lVar5 + 0x220) = 0;
    if ((param_2 & 1) != 0) {
      *(undefined8 *)(lVar5 + 0x228) = 0;
      *(undefined4 *)(lVar5 + 0x240) = 0;
      *(undefined8 *)(lVar5 + 600) = 0;
      *(undefined4 *)(lVar5 + 0x270) = 0;
      *(undefined8 *)(lVar5 + 0x288) = 0;
      *(undefined4 *)(lVar5 + 0x2a0) = 0;
      *(undefined8 *)(lVar5 + 0x2b8) = 0;
      *(undefined4 *)(lVar5 + 0x2d0) = 0;
      *(undefined8 *)(lVar5 + 0x2e8) = 0;
      *(undefined4 *)(lVar5 + 0x300) = 0;
      *(undefined8 *)(lVar5 + 0x318) = 0;
      *(undefined4 *)(lVar5 + 0x330) = 0;
      *(undefined4 *)(lVar5 + 0x348) = 0;
      *(undefined2 *)(lVar5 + 0x34c) = 0;
    }
    if ((param_1 & 1) != 0) {
      FUN_030e9b78(puVar7[0x49],0);
    }
    if ((param_1 >> 1 & 1) != 0) {
      FUN_030e9b78(puVar7[0x49],1);
    }
    if ((param_1 >> 2 & 1) != 0) {
      FUN_030e9b78(puVar7[0x49],2);
    }
    if ((param_1 >> 4 & 1) != 0) {
      FUN_030e9b78(puVar7[0x49],4);
    }
    if ((param_1 >> 3 & 1) != 0) {
      FUN_030e9b78(puVar7[0x49],3);
      return;
    }
  }
  return;
}

