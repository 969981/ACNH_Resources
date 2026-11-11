
void FUN_003cd1a0(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_04bd0100;
  if (*PTR_DAT_04bd0100 == '\0') {
    uVar5 = FUN_003c5b84();
    lVar6 = FUN_003c5c90(uVar5,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
    uVar5 = FUN_003c5c08();
    uVar5 = FUN_003c5c90(uVar5,*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
    uVar7 = FUN_003c5b84();
    FUN_003c5c9c(uVar7,param_2,lVar6,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18)
                );
    uVar7 = FUN_003c5c08();
    FUN_003c5c9c(uVar7,lVar6 + param_2,uVar5,*(undefined8 *)(param_1 + 0x38),
                 *(undefined4 *)(param_1 + 0x40));
    puVar4 = PTR_DAT_04bd0228;
    puVar3 = PTR_DAT_04bd0118;
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)PTR_DAT_04bd0110 = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)puVar4 = uVar1;
    *(undefined8 *)puVar3 = uVar5;
    *(undefined4 *)PTR_DAT_04bd0230 = *(undefined4 *)(param_1 + 0x40);
    *puVar2 = 1;
    return;
  }
  return;
}

