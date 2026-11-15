
void FUN_01f0a53c(long *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  short sVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  
  puVar5 = PTR_DAT_04bb9a68;
  uVar3 = *(uint *)(param_1 + 0x15f0);
  if (uVar3 < 3) {
    sVar4 = *(short *)PTR_DAT_04bbdeb0;
    if (sVar4 == -1) {
      puVar6 = DAT_0523a180;
    }
    else {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      puVar6 = *(undefined4 **)PTR_DAT_04bb9a68;
      if ((*puVar1 >> 0x1d & 1) != 0) {
        puVar2 = puVar6 + (ulong)uVar3 * 7;
        if (2 < uVar3) {
          puVar2 = puVar6;
        }
        if ((((float)puVar2[1] != 0.0) || ((float)puVar2[2] != 0.0)) || ((float)puVar2[3] != 0.0)) {
          (**(code **)(*param_1 + 0x518))(param_1);
          puVar6 = *(undefined4 **)puVar5;
        }
      }
    }
    puVar2 = puVar6 + (ulong)uVar3 * 7;
    if (2 < uVar3) {
      puVar2 = puVar6;
    }
    *puVar2 = *(undefined4 *)(param_1[1] + 0x230);
  }
  return;
}

