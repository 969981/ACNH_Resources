
void FUN_038e54d0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [8];
  
  uVar5 = *(undefined8 *)(param_2 + 0xb8);
  (**(code **)PTR_DAT_04bcfa50)(auStack_68);
  (**(code **)PTR_DAT_04bcfac8)(auStack_6c);
  puVar4 = PTR_DAT_04bcfa68;
  puVar3 = PTR_DAT_04bcfa60;
  puVar2 = PTR_DAT_04bcfa58;
  puVar1 = PTR_DAT_04bcf160;
  if (*(int *)(param_1 + 4) != 0) {
    uVar7 = 0;
    do {
      if ((*(uint *)(param_1 + 4) >> (ulong)(uVar7 & 0x1f) & 1) != 0) {
        (**(code **)PTR_DAT_04bcfad0)(auStack_6c,uVar7,1);
        (**(code **)puVar2)(auStack_68,uVar7);
        puVar6 = (undefined1 *)(param_1 + 0x28 + (long)(int)uVar7 * 6);
        (**(code **)puVar3)(auStack_68,*puVar6,puVar6[2],puVar6[1],puVar6[3]);
        (**(code **)puVar4)(auStack_68,puVar6[4],puVar6[5]);
        (**(code **)puVar1)(uVar5,auStack_68);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 8);
  }
  (**(code **)PTR_DAT_04bcfad8)(auStack_6c,3);
  (**(code **)PTR_DAT_04bcf170)(uVar5,auStack_6c);
  return;
}

