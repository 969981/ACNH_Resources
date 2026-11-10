
void FUN_0034fa90(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_3 + 0x18) + 8);
  *(undefined1 **)(param_1 + 0x10) = param_1 + 0x18;
  (*DAT_04c62278)();
  (**(code **)PTR_DAT_04bcf228)(*(undefined8 *)(param_1 + 0x10),*(undefined2 *)(param_3 + 2),1);
  (**(code **)PTR_DAT_04bcf818)
            (*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_3 + 8),
             *(undefined4 *)(param_3 + 0xc));
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_0034cd20(*param_3);
  (**(code **)PTR_DAT_04bcf838)(uVar2,uVar1);
  *param_1 = 1;
  param_1[1] = param_1[1] & 0xfe;
  return;
}

