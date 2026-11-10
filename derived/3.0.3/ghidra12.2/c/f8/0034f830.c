
void FUN_0034f830(undefined1 *param_1,undefined8 param_2,char *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_3 + 0x30) + 8);
  *(undefined1 **)(param_1 + 0x10) = param_1 + 0x18;
  (*DAT_04c62278)();
  (**(code **)PTR_DAT_04bcf228)
            (*(undefined8 *)(param_1 + 0x10),*(undefined2 *)(param_3 + 0x10),
             *(undefined2 *)(param_3 + 0x12));
  if (*param_3 != '\x02') {
    (**(code **)PTR_DAT_04bcf818)
              (*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_3 + 0x20),
               *(undefined4 *)(param_3 + 0x24));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_0034cc60(*(undefined4 *)(param_3 + 4));
  FUN_0034e898(uVar2,uVar1,*(undefined8 *)(param_1 + 8));
  (*DAT_04c62298)(*(undefined8 *)(param_1 + 0x10),
                  *(undefined4 *)(&DAT_04130cc8 + (ulong)(byte)param_3[8] * 4),
                  *(undefined4 *)(&DAT_04130cc8 + (ulong)(byte)param_3[9] * 4),
                  *(undefined4 *)(&DAT_04130cc8 + (ulong)(byte)param_3[10] * 4),
                  *(undefined4 *)(&DAT_04130cc8 + (ulong)(byte)param_3[0xb] * 4));
  (**(code **)PTR_DAT_04bcf830)(*(undefined8 *)(param_1 + 0x10),param_3[1] != '\0');
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_0034cd20(*param_3);
  (**(code **)PTR_DAT_04bcf838)(uVar2,uVar1);
  param_1[1] = param_1[1] & 0xfe;
  *param_1 = 1;
  return;
}

