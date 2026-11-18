
/* WARNING: Removing unreachable block (ram,0x032d62b0) */
/* WARNING: Removing unreachable block (ram,0x032d62d0) */

void FUN_032d6244(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined1 local_38;
  
  lVar3 = FUN_032d6390();
  if (lVar3 == 0) {
    local_48 = PTR_DAT_04bb2020 + 0x10;
    local_50 = *(undefined8 *)(*(long *)(DAT_05739190 + 8) + 0x50);
    local_38 = 0;
    plVar4 = *(long **)(param_1 + 0x330);
    local_40 = param_2;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x50,8);
    puVar2 = PTR_DAT_04bc9428;
    *(undefined4 *)(plVar4 + 5) = 0x20;
    *(undefined1 *)((long)plVar4 + 0x4b) = 0;
    *(undefined1 *)((long)plVar4 + 0x2c) = 0;
    plVar4[4] = (long)plVar4 + 0x2c;
    puVar1 = PTR_DAT_04bb2028;
    *plVar4 = (long)(puVar2 + 0x10);
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)(puVar1 + 0x10);
    FUN_032c8f40(plVar4,&local_50,(undefined8 *)(param_1 + 0x330));
    lVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
    if (lVar3 != 0) {
      uVar6 = (ulong)*(uint *)(param_1 + 800);
      if (99 < *(uint *)(param_1 + 800)) {
        uVar6 = 0;
      }
      plVar5 = *(long **)(param_1 + uVar6 * 8);
      *(long **)(param_1 + uVar6 * 8) = plVar4;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      *(long **)(param_1 + 0x328) = plVar4;
      *(int *)(param_1 + 800) = *(int *)(param_1 + 800) + 1;
    }
  }
  return;
}

