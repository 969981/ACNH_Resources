
void FUN_002708d4(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined **local_78;
  undefined1 auStack_70 [32];
  
  puVar1 = PTR_DAT_04bc1510;
  plVar5 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  puVar2 = PTR_DAT_04bcd350;
  lVar11 = plVar5[0x13];
  uVar9 = *param_2;
  uVar6 = FUN_0026c894(*(undefined8 *)PTR_DAT_04bcd350);
  uVar3 = FUN_002840d8(uVar6,uVar9,*(undefined4 *)(param_2 + 1));
  FUN_0022726c(&local_78,param_2 + 3);
  lVar10 = *(long *)(param_1 + 0x58);
  if (lVar10 == 0) {
    FUN_00276be4(*(undefined8 *)(lVar11 + 0x90),uVar3,&local_78);
  }
  else if (*(char *)(lVar10 + 0x88) != '\0') {
    uVar4 = FUN_0026be6c(*(undefined8 *)puVar2);
    lVar7 = (**(code **)(*plVar5 + 0x50))(plVar5,uVar4);
    if (lVar7 != 0) {
      uVar8 = FUN_0022740c(lVar7 + 0x10,&local_78);
      if (((uVar8 & 1) != 0) &&
         (uVar8 = FUN_00264e24(lVar10,uVar9,*(undefined4 *)(param_2 + 1)), (uVar8 & 1) != 0)) {
        FUN_00276be4(*(undefined8 *)(lVar11 + 0x90),uVar3,lVar7 + 0x10);
        *(undefined8 *)(param_1 + 0x80) = **(undefined8 **)puVar1;
      }
    }
  }
  local_78 = &PTR_LAB_04840580;
  FUN_0021f584(auStack_70);
  return;
}

