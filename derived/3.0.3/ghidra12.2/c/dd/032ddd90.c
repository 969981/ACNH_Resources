
void FUN_032ddd90(int *param_1,int *param_2,long *param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort uVar6;
  ushort *puVar7;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  puVar4 = (ushort *)param_3[1];
  uVar6 = *puVar4;
  if (uVar6 == 0) {
    iVar3 = 0;
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    iVar3 = 0;
    do {
      puVar5 = puVar4;
      puVar7 = puVar4;
      while ((uVar6 & 0xfffe) != 0xe) {
        puVar5 = puVar5 + 1;
        uVar6 = *puVar5;
        iVar2 = iVar2 + 1;
        puVar7 = puVar7 + 1;
        if (uVar6 == 0) goto LAB_032dde68;
      }
      if (uVar6 == 0xe) {
        puVar4 = (ushort *)((long)puVar7 + (ulong)puVar5[3] + 8);
      }
      else {
        puVar1 = puVar5;
        puVar4 = puVar7 + 3;
        if (uVar6 != 0xf) {
          puVar1 = (ushort *)0x0;
          puVar4 = puVar5;
        }
        puVar5 = puVar1;
      }
      iVar3 = iVar3 + ((uint)((int)puVar4 - (int)puVar7) >> 1 & 0xffff);
      if ((puVar5[1] == 0) && (puVar5[2] == 0)) {
        iVar2 = (uint)(puVar5[5] >> 1) + iVar2;
        iVar3 = iVar3 - (uint)(puVar5[5] >> 1);
      }
      uVar6 = *puVar4;
    } while (uVar6 != 0);
  }
LAB_032dde68:
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2 + iVar3;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar2;
  }
  return;
}

