
void FUN_0383e178(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  undefined *local_50;
  char *pcStack_48;
  
  pbVar8 = *(byte **)(param_1 + 0x40);
  if (pbVar8 == (byte *)0x0) {
    pbVar9 = (byte *)0x0;
  }
  else {
    pbVar9 = (byte *)0x0;
    if ((*pbVar8 & 2) != 0) {
      pbVar9 = pbVar8 + 0x10;
    }
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "SLink";
  lVar5 = FUN_038c6d48(0,&local_50,*(undefined8 *)(param_2 + 0x10),8,1,0);
  *(long *)(param_1 + 0x18) = lVar5;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x28);
  puVar3 = PTR_DAT_04bb3350;
  if (lVar5 == 0) {
    lVar10 = 1;
    lVar5 = *(long *)PTR_DAT_04bb2698;
    if (lVar5 != 0) {
LAB_0383e24c:
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      plVar7 = (long *)(lVar5 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 != (long *)0x0) goto LAB_0383e270;
    }
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar5;
    lVar5 = *(long *)PTR_DAT_04bb2698;
    if (lVar5 != 0) {
      plVar7 = *(long **)(param_1 + 0x18);
      if (plVar7 == (long *)0x0) goto LAB_0383e24c;
LAB_0383e270:
      (**(code **)(*plVar7 + 0x30))(plVar7,8,8);
    }
  }
  FUN_0383dd40(param_1,param_2,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(**(long **)(param_2 + 8) + 0x170))();
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 8);
    *(byte **)(param_1 + 0x78) = pbVar9;
    *(long *)(*(long *)(param_1 + 0x20) + 0x118) = param_1 + 0x68;
    FUN_03bf3e20(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18));
    puVar4 = PTR_DAT_04bc3ee8;
    lVar5 = *(long *)(param_1 + 0x20);
    *(byte **)(lVar5 + 0x110) = pbVar9;
    lVar6 = *(long *)(*(long *)puVar4 + 0xf0);
    if (lVar6 != 0) {
      iVar2 = *(int *)(lVar6 + 0xd0) + *(int *)(lVar6 + 0xcc) + -1;
      iVar1 = 0;
      if (*(int *)(lVar6 + 200) <= iVar2) {
        iVar1 = *(int *)(lVar6 + 200);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + (long)(iVar2 - iVar1) * 8);
      if ((lVar6 != 0) && (0 < *(int *)(lVar6 + 8))) goto LAB_0383e33c;
    }
    lVar6 = *(long *)(*(long *)puVar4 + 0x128);
    if ((lVar6 == 0) || (*(int *)(lVar6 + 8) < 1)) {
      FUN_03be4980(*(undefined8 *)(*(long *)(lVar5 + 0x30) + 0x18),pbVar9);
    }
  }
LAB_0383e33c:
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
  if (lVar10 != 1) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    *(long *)(lVar5 + 0xa8) = lVar10;
  }
  return;
}

