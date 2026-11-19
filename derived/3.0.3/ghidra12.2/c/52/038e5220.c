
void FUN_038e5220(undefined1 *param_1,long param_2)

{
  undefined1 auStack_28 [8];
  
  (**(code **)PTR_DAT_04bcfc00)(auStack_28,*param_1);
  (**(code **)PTR_DAT_04bcfc08)(auStack_28,param_1[1]);
  (**(code **)PTR_DAT_04bcfc10)(auStack_28,param_1[100]);
  (**(code **)PTR_DAT_04bcfc18)(auStack_28,param_1[3]);
  (**(code **)PTR_DAT_04bcfc20)(auStack_28,3,param_1[0x6a]);
  (**(code **)PTR_DAT_04bcfc28)(auStack_28,3,param_1[0x67],param_1[0x68],param_1[0x69]);
  (**(code **)PTR_DAT_04bcf180)(*(undefined8 *)(param_2 + 0xb8),auStack_28);
  if (param_1[3] != '\0') {
    (**(code **)PTR_DAT_04bcf188)(*(undefined8 *)(param_2 + 0xb8),3,*(undefined4 *)(param_1 + 0x24))
    ;
    (**(code **)PTR_DAT_04bcf190)(*(undefined8 *)(param_2 + 0xb8),3,0xff);
    (**(code **)PTR_DAT_04bcf198)(*(undefined8 *)(param_2 + 0xb8),3,*(undefined4 *)(param_1 + 0x20))
    ;
  }
  return;
}

