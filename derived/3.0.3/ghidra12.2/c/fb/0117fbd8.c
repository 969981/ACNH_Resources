
void FUN_0117fbd8(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  void *pvVar10;
  long lVar11;
  undefined8 local_a0;
  char *local_98;
  undefined *puStack_90;
  char *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined8 local_60;
  undefined2 local_58;
  undefined4 local_54;
  undefined *local_50;
  char *pcStack_48;
  
  puVar1 = PTR_DAT_04bb2020;
  local_a0 = PTR_DAT_04bb2020 + 0x10;
  local_98 = "EventFlowHeap";
  uVar7 = FUN_038c6d48(0x333333,&local_a0,param_2,8,1,0);
  *(undefined8 *)(param_1 + 8) = uVar7;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    pvVar10 = malloc(0x5fd0);
  }
  else {
    plVar9 = param_2;
    if (param_2 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar11 + 8);
      if (lVar8 != 0) {
        plVar9 = (long *)(lVar8 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      pvVar10 = (void *)0x0;
      if (plVar9 == (long *)0x0) goto LAB_0117fc98;
    }
    pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x5fd0,8);
  }
LAB_0117fc98:
  *(void **)(param_1 + 0x1d98) = pvVar10;
  puVar1 = puVar1 + 0x10;
  local_a0 = (undefined *)CONCAT44(8,(undefined4)local_a0);
  local_58 = 0x100;
  uStack_70 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  local_60 = 0x280;
  uVar4 = (ulong)local_a0 >> 0x10;
  local_68 = 1;
  local_66 = 0;
  local_54 = 0;
  local_a0 = (undefined *)CONCAT62((uint6)uVar4 & 0xffffffffff00,1);
  local_78 = 0;
  local_98 = (char *)0x300000;
  local_88 = "ForEventFlowResource";
  uStack_80 = 0x66666;
  puStack_90 = puVar1;
  FUN_03f2ab60(param_1,&local_a0);
  puVar6 = PTR_DAT_04bbb888;
  uVar3 = *(uint *)PTR_DAT_04bbb888;
  *(uint *)PTR_DAT_04bbb888 = uVar3 + 1;
  puVar5 = PTR_DAT_04bbb880;
  puVar2 = PTR_DAT_04bbb880 + (ulong)uVar3 * 0x58;
  if (99 < uVar3) {
    puVar2 = PTR_DAT_04bbb880;
  }
  pcStack_48 = "AI_NPC_Indoor";
  local_50 = puVar1;
  FUN_01185f80(puVar2 + 0x10,&local_50,param_1);
  uVar3 = *(uint *)puVar6;
  *(uint *)puVar6 = uVar3 + 1;
  puVar2 = puVar5 + (ulong)uVar3 * 0x58;
  if (99 < uVar3) {
    puVar2 = puVar5;
  }
  pcStack_48 = "AI_NPC_Common";
  local_50 = puVar1;
  FUN_01185f80(puVar2 + 0x10,&local_50,param_1);
  uVar3 = *(uint *)puVar6;
  *(uint *)puVar6 = uVar3 + 1;
  puVar2 = puVar5 + (ulong)uVar3 * 0x58;
  if (99 < uVar3) {
    puVar2 = puVar5;
  }
  pcStack_48 = "AI_NPC_Outdoor";
  local_50 = puVar1;
  FUN_01185f80(puVar2 + 0x10,&local_50,param_1);
  FUN_01186cb0(PTR_DAT_04bbb850,param_1);
  FUN_010f6790(param_2,param_1);
  FUN_011848c0(param_2,param_1);
  return;
}

