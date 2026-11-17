
/* WARNING: Removing unreachable block (ram,0x02d0a20c) */
/* WARNING: Removing unreachable block (ram,0x02d0a1f0) */

void FUN_02d0a128(long *param_1,ushort *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 uStack_38;
  uint local_34;
  
  piVar1 = (int *)((long)param_1 + 0x927fc);
  if (*piVar1 != 2) {
    return;
  }
  if (*piVar1 != 2) {
    return;
  }
  local_44 = 0xfffe;
  FUN_0277d4ac(&local_44);
  plVar5 = (long *)(**(code **)(*param_1 + 0x2e8))(param_1);
  uVar6 = (**(code **)(*plVar5 + 0x70))(plVar5,3);
  uVar2 = 3;
  if ((uVar6 & 1) == 0) {
    uVar2 = 4;
  }
  plVar5 = (long *)(**(code **)(*param_1 + 0x2e8))(param_1);
  (**(code **)(*plVar5 + 0x48))(plVar5,&local_44,uVar2);
  puVar3 = PTR_DAT_04bb43c0;
  if (*piVar1 != 2) {
    return;
  }
  if (*piVar1 == 2) {
    local_34 = 3;
    local_3c = (undefined4)param_1[0x12504];
    uStack_38 = *(undefined4 *)((long)param_1 + 0x92824);
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_3c);
    if (*(long *)puVar3 == 0) {
LAB_02d0a26c:
      local_34 = 4;
    }
    else {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((*(uint *)(lVar7 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02d0a26c;
      local_34 = 3;
    }
    if (local_34 < 10) {
      plVar5 = param_1 + 0x12501 + local_34;
      if (9 < local_34) {
        plVar5 = param_1 + 0x12501;
      }
      goto LAB_02d0a2a0;
    }
  }
  plVar5 = (long *)&DAT_05586008;
LAB_02d0a2a0:
  local_3c = (undefined4)*plVar5;
  uStack_38 = *(undefined4 *)((long)plVar5 + 4);
  uVar6 = FUN_0277d7b4(&local_44,&local_3c);
  if ((uVar6 & 1) != 0) {
    *param_2 = *param_2 | 8;
  }
  return;
}

