
void FUN_02b25e6c(long param_1,long param_2,long param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  float local_4c [3];
  
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((puVar1[1] & 1) != 0) {
      if (param_2 == 0) {
        return;
      }
      if ((*puVar1 & 1) != 0) {
        return;
      }
      goto LAB_02b25f18;
    }
  }
  if (param_2 == 0) {
    return;
  }
LAB_02b25f18:
  *(uint *)(param_1 + 0xc) = *(int *)(param_3 + 0x18) + 0x20000000U >> 0x1e;
  if (*(uint *)(param_1 + 0xc) < 4) {
    local_4c[0] = (float)(&DAT_04102a20)[(int)*(uint *)(param_1 + 0xc)];
  }
  else {
    local_4c[0] = 1.4013e-45;
  }
  *(int *)(param_2 + 0x10) = (int)(long)((float)(int)local_4c[0] * 90.0 * 11930465.0);
  uVar5 = FUN_02b26110(param_1,param_3);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_02b271e0(param_1);
    iVar3 = *(int *)(param_1 + 0x73c + (uVar5 & 0xffffffff) * 4);
    FUN_02b274d8(param_1,param_3 + 0xc,uVar5 & 0xffffffff);
    if (iVar3 == 1) {
      FUN_02b27974(param_1,param_2,param_3 + 0x28);
      return;
    }
    iVar3 = *(int *)(param_1 + 0x73c + (uVar5 & 0xffffffff) * 4);
    if (iVar3 == 3) {
      uVar6 = 0x13;
    }
    else if (iVar3 == 2) {
      uVar6 = 0x15;
    }
    else if (iVar3 == 0) {
      uVar6 = 0x14;
    }
    else {
      uVar6 = 0x16;
    }
    if ((*(int *)(param_2 + 8) == 0) && (uVar6 < 0x18)) {
      *(int *)(param_2 + 8) = 1 << (ulong)uVar6;
    }
  }
  else {
    uVar5 = FUN_02b1eb30(param_1,param_1 + 0x20);
    if ((uVar5 & 1) != 0) {
      *(undefined1 *)(param_2 + 0xc) = 1;
    }
    local_4c[1] = 0.0;
    if (*(uint *)(param_1 + 0xc) < 3) {
      puVar7 = (undefined4 *)(&PTR_DAT_04aa1bf0)[(int)*(uint *)(param_1 + 0xc)];
    }
    else {
      puVar7 = &DAT_0414dbe0;
    }
    local_4c[0] = (float)*(int *)(param_1 + 0x18) * 10.0 + 5.0;
    local_4c[2] = (float)*(int *)(param_1 + 0x1c) * 10.0 + 5.0;
    uVar2 = *puVar7;
    if (((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) ||
       (*(char *)(DAT_04cfae30 + 0x11c8) != '\0')) {
      uVar8 = 0xc3fa0000;
    }
    else {
      uVar8 = FUN_0093a950(DAT_04cfae30 + 0x28,local_4c,0);
    }
    *(float *)(param_2 + 0x14) = local_4c[0];
    *(undefined4 *)(param_2 + 0x18) = uVar8;
    *(float *)(param_2 + 0x1c) = local_4c[2];
    *(undefined4 *)(param_2 + 0x20) = uVar2;
  }
  return;
}

