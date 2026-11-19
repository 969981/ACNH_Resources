
long * FUN_03bdd5c8(long param_1,long param_2,long *param_3,undefined4 param_4)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined *local_50;
  undefined8 uStack_48;
  
  plVar3 = DAT_05aec218;
  (**(code **)(*DAT_05aec218 + 0x10))(DAT_05aec218);
  lVar5 = FUN_03bec2a0(param_1,param_2,param_3,param_4);
  if (lVar5 == 0) {
    plVar7 = (long *)0x0;
    goto LAB_03bdd764;
  }
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar7 = malloc(0x130);
  }
  else {
    plVar7 = param_3;
    if (param_3 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar9 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
        goto LAB_03bdd694;
      }
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x130,8);
  }
LAB_03bdd694:
  FUN_03bf34d8(plVar7,param_2,param_1,lVar5,param_3);
  puVar2 = PTR_DAT_04bd23e8;
  plVar7[0x20] = 0;
  *(undefined1 *)(plVar7 + 0x21) = 0;
  plVar7[0x22] = 0;
  plVar7[0x23] = 0;
  plVar7[0x24] = 0;
  plVar7[0x25] = 0;
  *plVar7 = (long)(puVar2 + 0x10);
  bVar4 = *(char *)(param_2 + 0x40) != '\0';
  *(byte *)(plVar7 + 0x1b) = *(byte *)(plVar7 + 0x1b) & 0x7f | bVar4 << 7;
  lVar9 = *(long *)(param_2 + 0x48);
  plVar7[0x1f] = lVar9;
  if (!bVar4) {
    uStack_48 = *(undefined8 *)(plVar7[6] + 0x10);
    local_50 = PTR_DAT_04bb2020 + 0x10;
    lVar9 = FUN_03b3e4f0(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 8),lVar9,&local_50);
    plVar7[0x20] = lVar9;
  }
  plVar8 = (long *)(lVar5 + 0x20);
  lVar9 = *plVar8;
  plVar1 = (long *)((long)*(int *)(lVar5 + 0x34) + (long)plVar7);
  *plVar8 = (long)plVar1;
  *plVar1 = lVar9;
  plVar1[1] = (long)plVar8;
  if (lVar9 != 0) {
    *(long **)(lVar9 + 8) = plVar1;
  }
  *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
  if (*(char *)(param_1 + 0x7b) != '\0') {
    FUN_03bf3a60(plVar7);
  }
LAB_03bdd764:
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return plVar7;
}

