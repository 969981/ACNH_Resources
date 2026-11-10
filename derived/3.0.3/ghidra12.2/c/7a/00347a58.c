
uint FUN_00347a58(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint local_3c;
  uint local_38;
  uint local_34;
  
  puVar2 = PTR_DAT_04bcf028;
  uVar1 = *(uint *)(param_2 + 4);
  uVar4 = 8;
  if ((uVar1 >> 4 & 1) != 0) {
    local_34 = 0;
    (**(code **)PTR_DAT_04bcf028)(*param_1,4,&local_34);
    uVar4 = local_34;
    if ((int)local_34 < 9) {
      uVar4 = 8;
    }
  }
  if ((uVar1 >> 9 & 1) == 0) {
  }
  else {
    local_38 = 0;
    (**(code **)puVar2)(*param_1,0xd,&local_38);
    if ((int)uVar4 <= (int)local_38) {
      uVar4 = local_38;
    }
    (**(code **)puVar2)(*param_1,0x35,&local_38);
    if ((int)uVar4 <= (int)local_38) {
      uVar4 = local_38;
    }
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    local_3c = 0;
    (**(code **)puVar2)(*param_1,10,&local_3c);
    if ((int)uVar4 <= (int)local_3c) {
      uVar4 = local_3c;
    }
  }
  uVar3 = uVar4;
  if (uVar4 < 0x21) {
    uVar3 = 0x20;
  }
  if ((uVar1 & 0x40) != 0) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4;
  if (uVar4 < 0x201) {
    uVar3 = 0x200;
  }
  if ((uVar1 & 0x1a0) != 0) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4;
  if (uVar4 < 0x11) {
    uVar3 = 0x10;
  }
  if ((uVar1 & 0x4000) != 0) {
    uVar4 = uVar3;
  }
  return uVar4;
}

