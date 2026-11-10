
void FUN_0034ee0c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_3 + 4);
  (*DAT_04c626e8)();
  (*DAT_04c626f0)(param_1,param_3[4] & 1);
  (*DAT_04c626f8)(param_1,(byte)param_3[4] >> 1 & 1);
  (*DAT_04c62708)(param_1,(byte)param_3[4] >> 2 & 1);
  uVar4 = FUN_0034cd30(*param_3);
  (**(code **)PTR_DAT_04bcfc10)(param_1,uVar4);
  uVar4 = FUN_0034cd50(param_3[0x1b]);
  puVar2 = PTR_DAT_04bcfc20;
  (**(code **)PTR_DAT_04bcfc20)(param_1,2,uVar4);
  uVar4 = FUN_0034cd40(param_3[0x18]);
  uVar5 = FUN_0034cd40(param_3[0x19]);
  uVar6 = FUN_0034cd40(param_3[0x1a]);
  puVar3 = PTR_DAT_04bcfc28;
  (**(code **)PTR_DAT_04bcfc28)(param_1,2,uVar4,uVar5,uVar6);
  uVar4 = FUN_0034cd50(param_3[0xb]);
  (**(code **)puVar2)(param_1,1,uVar4);
  uVar4 = FUN_0034cd40(param_3[8]);
  uVar5 = FUN_0034cd40(param_3[9]);
  uVar6 = FUN_0034cd40(param_3[10]);
  (**(code **)puVar3)(param_1,1,uVar4,uVar5,uVar6);
  *(uint *)(param_1 + 0x10) = (uint)(byte)param_3[0x1c];
  *(uint *)(param_1 + 0x14) = (uint)(byte)param_3[0xc];
  *(uint *)(param_1 + 8) = (uint)(byte)param_3[1];
  bVar1 = param_3[2];
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(uint *)(param_1 + 0xc) = (uint)bVar1;
  return;
}

