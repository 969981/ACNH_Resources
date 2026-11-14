
void FUN_01be0874(long param_1)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *local_30;
  char *pcStack_28;
  
  uVar5 = (ulong)(uint)(**(int **)PTR_DAT_04bb3448 << 1) | 1;
  if (0x1f < (uint)uVar5) {
    uVar5 = 0;
  }
  bVar1 = (&DAT_04058440)[uVar5];
  if (bVar1 == 0) {
    *(undefined8 *)(param_1 + 0x87e0) = PTR_u_0123456789_04bc0850;
    puVar6 = PTR_DAT_04bc0860;
  }
  else {
    *(undefined8 *)(param_1 + 0x87e0) = PTR_u_0123456789_04bc0858;
    if (bVar1 < 8) {
      puVar6 = (&PTR_u_abcdefghijklmnopqrstuvwxyz_______04a3d020)[(char)(bVar1 - 1)];
    }
    else {
      puVar6 = (undefined *)0x0;
    }
  }
  *(undefined **)(param_1 + 0x87e8) = puVar6;
  puVar6 = PTR_DAT_04bb2718;
  *(undefined4 *)(param_1 + 0x87f0) = 0;
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "Ruby_00.fcpx";
  lVar7 = *(long *)(*(long *)(*(long *)puVar6 + 0x400) + 8);
  plVar3 = *(long **)(lVar7 + 8);
  if ((plVar3 == (long *)0x0) ||
     (uVar2 = (**(code **)(*plVar3 + 0x40))(plVar3,&local_30), (int)uVar2 < 0)) {
    lVar4 = 0;
    if (*(long *)(lVar7 + 0x38) != 0) {
      lVar4 = FUN_03b0e360(*(long *)(lVar7 + 0x38),&local_30);
    }
  }
  else {
    if (*(uint *)(lVar7 + 0x10) <= uVar2) {
      uVar2 = 0;
    }
    lVar4 = *(long *)(lVar7 + 0x18) + (ulong)uVar2 * 0x108;
  }
  *(long *)(lVar7 + 0x30) = lVar4;
  FUN_01c03bb0(*(undefined8 *)(param_1 + 0x28));
  return;
}

