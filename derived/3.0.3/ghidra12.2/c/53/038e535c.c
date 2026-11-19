
void FUN_038e535c(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined1 auStack_14 [4];
  
  puVar3 = PTR_DAT_04bcfb08;
  bVar2 = *(byte *)(param_1 + 0x1c);
  (**(code **)PTR_DAT_04bcfb08)(auStack_14,0,bVar2 & 1,bVar2 >> 1 & 1,bVar2 >> 2 & 1,bVar2 >> 3 & 1)
  ;
  uVar1 = *(uint *)(param_1 + 0x1c);
  (**(code **)puVar3)(auStack_14,1,uVar1 >> 4 & 1,uVar1 >> 5 & 1,uVar1 >> 6 & 1,uVar1 >> 7 & 1);
  bVar2 = *(byte *)(param_1 + 0x1d);
  (**(code **)puVar3)(auStack_14,2,bVar2 & 1,bVar2 >> 1 & 1,bVar2 >> 2 & 1,bVar2 >> 3 & 1);
  uVar1 = *(uint *)(param_1 + 0x1c);
  (**(code **)puVar3)(auStack_14,3,uVar1 >> 0xc & 1,uVar1 >> 0xd & 1,uVar1 >> 0xe & 1,
                      uVar1 >> 0xf & 1);
  bVar2 = *(byte *)(param_1 + 0x1e);
  (**(code **)puVar3)(auStack_14,4,bVar2 & 1,bVar2 >> 1 & 1,bVar2 >> 2 & 1,bVar2 >> 3 & 1);
  uVar1 = *(uint *)(param_1 + 0x1c);
  (**(code **)puVar3)(auStack_14,5,uVar1 >> 0x14 & 1,uVar1 >> 0x15 & 1,uVar1 >> 0x16 & 1,
                      uVar1 >> 0x17 & 1);
  uVar1 = *(uint *)(param_1 + 0x1c);
  (**(code **)puVar3)(auStack_14,6,uVar1 >> 0x18 & 1,uVar1 >> 0x19 & 1,uVar1 >> 0x1a & 1,
                      uVar1 >> 0x1b & 1);
  uVar1 = *(uint *)(param_1 + 0x1c);
  (**(code **)puVar3)(auStack_14,7,uVar1 >> 0x1c & 1,uVar1 >> 0x1d & 1,uVar1 >> 0x1e & 1,
                      uVar1 >> 0x1f);
  (**(code **)PTR_DAT_04bcf168)(*(undefined8 *)(param_2 + 0xb8),auStack_14);
  return;
}

