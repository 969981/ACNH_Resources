
void FUN_025f4e3c(long *param_1,ulong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *local_40;
  char *pcStack_38;
  
  if (*(int *)((long)param_1 + 0x24) != 0) {
    return;
  }
  iVar4 = (**(code **)(*param_1 + 0x20))();
  if (iVar4 != -1) {
    iVar4 = (**(code **)(*param_1 + 0x20))(param_1);
    local_40 = (undefined *)CONCAT44(local_40._4_4_,iVar4);
    if ((iVar4 < 0xd) && (*(char *)(*(long *)PTR_DAT_04bb2268 + 0xb0) != '\0')) {
      if (*(byte *)(param_1 + 3) < 8) {
        local_40 = (undefined *)CONCAT71(local_40._1_7_,*(byte *)(param_1 + 3));
        lVar6 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_40,1);
      }
      else {
        if (*(int *)((long)param_1 + 0x1c) == -1) {
          return;
        }
        if (*(long *)PTR_DAT_04bb46b0 == 0) {
          return;
        }
        lVar6 = FUN_026eec4c();
      }
      if (lVar6 != 0) {
        lVar8 = lVar6 + 0x194b0;
        if (*(long *)(lVar6 + 0x194b8) == 0) {
          lVar8 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
        }
        if ((*(long **)(lVar8 + 0x2a840) == (long *)0x0) ||
           (puVar7 = (undefined8 *)**(long **)(lVar8 + 0x2a840), puVar7 == (undefined8 *)0x0)) {
          uVar5 = 1;
        }
        else {
          uVar5 = (**(code **)*puVar7)();
          uVar5 = uVar5 ^ 1;
        }
        puVar1 = (undefined4 *)(*(long *)(lVar8 + 0x2a828) + *(long *)(lVar8 + 0x2a820));
        puVar2 = puVar1 + (param_2 & 0xffffffff);
        if ((param_2 & 0xffffff00) != 0) {
          puVar2 = puVar1;
        }
        uVar3 = *puVar2;
        if ((((uVar5 & 1) == 0) && (*(long *)(lVar8 + 0x2a840) != 0)) &&
           (puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0x2a840) + 8), puVar7 != (undefined8 *)0x0))
        {
          (**(code **)*puVar7)();
        }
        local_40 = PTR_DAT_04bb2020 + 0x10;
        pcStack_38 = "SerialNumber";
        if (param_1[1] != 0) {
          FUN_02605660(param_1[1],&local_40,uVar3);
        }
      }
    }
  }
  return;
}

