
void FUN_038e4d90(undefined1 *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [8];
  
  uVar6 = *(undefined8 *)(param_2 + 0xb8);
  (**(code **)PTR_DAT_04bcfa50)(auStack_68);
  (**(code **)PTR_DAT_04bcfac8)(auStack_70);
  puVar5 = PTR_DAT_04bcfa68;
  puVar4 = PTR_DAT_04bcfa60;
  puVar3 = PTR_DAT_04bcfa58;
  puVar2 = PTR_DAT_04bcf160;
  if (*(int *)(param_1 + 4) != 0) {
    uVar8 = 0;
    do {
      if ((*(uint *)(param_1 + 4) >> (ulong)(uVar8 & 0x1f) & 1) != 0) {
        (**(code **)PTR_DAT_04bcfad0)(auStack_70,uVar8,1);
        (**(code **)puVar3)(auStack_68,uVar8);
        puVar7 = param_1 + (long)(int)uVar8 * 6 + 0x28;
        (**(code **)puVar4)(auStack_68,*puVar7,puVar7[2],puVar7[1],puVar7[3]);
        (**(code **)puVar5)(auStack_68,puVar7[4],puVar7[5]);
        (**(code **)puVar2)(uVar6,auStack_68);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != 8);
  }
  (**(code **)PTR_DAT_04bcfad8)(auStack_70,3);
  (**(code **)PTR_DAT_04bcf170)(uVar6,auStack_70);
  (**(code **)PTR_DAT_04bcf178)(uVar6,param_1 + 8);
  puVar2 = PTR_DAT_04bcfb08;
  bVar1 = param_1[0x1c];
  (**(code **)PTR_DAT_04bcfb08)(auStack_6c,0,bVar1 & 1,bVar1 >> 1 & 1,bVar1 >> 2 & 1,bVar1 >> 3 & 1)
  ;
  uVar8 = *(uint *)(param_1 + 0x1c);
  (**(code **)puVar2)(auStack_6c,1,uVar8 >> 4 & 1,uVar8 >> 5 & 1,uVar8 >> 6 & 1,uVar8 >> 7 & 1);
  bVar1 = param_1[0x1d];
  (**(code **)puVar2)(auStack_6c,2,bVar1 & 1,bVar1 >> 1 & 1,bVar1 >> 2 & 1,bVar1 >> 3 & 1);
  uVar8 = *(uint *)(param_1 + 0x1c);
  (**(code **)puVar2)(auStack_6c,3,uVar8 >> 0xc & 1,uVar8 >> 0xd & 1,uVar8 >> 0xe & 1,
                      uVar8 >> 0xf & 1);
  bVar1 = param_1[0x1e];
  (**(code **)puVar2)(auStack_6c,4,bVar1 & 1,bVar1 >> 1 & 1,bVar1 >> 2 & 1,bVar1 >> 3 & 1);
  uVar8 = *(uint *)(param_1 + 0x1c);
  (**(code **)puVar2)(auStack_6c,5,uVar8 >> 0x14 & 1,uVar8 >> 0x15 & 1,uVar8 >> 0x16 & 1,
                      uVar8 >> 0x17 & 1);
  uVar8 = *(uint *)(param_1 + 0x1c);
  (**(code **)puVar2)(auStack_6c,6,uVar8 >> 0x18 & 1,uVar8 >> 0x19 & 1,uVar8 >> 0x1a & 1,
                      uVar8 >> 0x1b & 1);
  uVar8 = *(uint *)(param_1 + 0x1c);
  (**(code **)puVar2)(auStack_6c,7,uVar8 >> 0x1c & 1,uVar8 >> 0x1d & 1,uVar8 >> 0x1e & 1,
                      uVar8 >> 0x1f);
  (**(code **)PTR_DAT_04bcf168)(uVar6,auStack_6c);
  (**(code **)PTR_DAT_04bcfc00)(auStack_78,*param_1);
  (**(code **)PTR_DAT_04bcfc08)(auStack_78,param_1[1]);
  (**(code **)PTR_DAT_04bcfc10)(auStack_78,param_1[100]);
  (**(code **)PTR_DAT_04bcfc18)(auStack_78,param_1[3]);
  (**(code **)PTR_DAT_04bcfc20)(auStack_78,3,param_1[0x6a]);
  (**(code **)PTR_DAT_04bcfc28)(auStack_78,3,param_1[0x67],param_1[0x68],param_1[0x69]);
  (**(code **)PTR_DAT_04bcf180)(uVar6,auStack_78);
  if (param_1[3] != '\0') {
    (**(code **)PTR_DAT_04bcf188)(uVar6,3,*(undefined4 *)(param_1 + 0x24));
    (**(code **)PTR_DAT_04bcf190)(uVar6,3,0xff);
    (**(code **)PTR_DAT_04bcf198)(uVar6,3,*(undefined4 *)(param_1 + 0x20));
  }
  (**(code **)PTR_DAT_04bbd900)(auStack_7c,param_1[0x65]);
  (**(code **)PTR_DAT_04bbd908)(auStack_7c,1);
  (**(code **)PTR_DAT_04bbd910)(auStack_7c,param_1[0x6b]);
  (**(code **)PTR_DAT_04bbd918)(auStack_7c,-(param_1[0x6d] & 1) & 7);
  (**(code **)PTR_DAT_04bbd920)(uVar6,auStack_7c);
  (**(code **)PTR_DAT_04bbd928)
            (*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),
             *(undefined4 *)(param_1 + 0x60),uVar6);
  (**(code **)PTR_DAT_04bcf1d0)(uVar6,param_1[0x6e]);
  return;
}

