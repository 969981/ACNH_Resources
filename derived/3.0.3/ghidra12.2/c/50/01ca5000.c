
void FUN_01ca5000(long param_1,ulong param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  short sVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  int iStack_44;
  
  lVar9 = *(long *)(*(long *)PTR_DAT_04bb21d8 + 0x3d8);
  iVar3 = *(int *)(lVar9 + 0x10);
  if (iVar3 == 0) {
    puVar8 = (undefined8 *)(*(long *)(DAT_05ae6a60 + 0x38) + 0x270);
  }
  else if (iVar3 == 1) {
    puVar8 = (undefined8 *)(*(long *)(DAT_05ae6a60 + 0x48) + 0x30);
  }
  else {
    if (iVar3 != 2) {
      piVar10 = (int *)0x0;
      lVar11 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x20);
      goto joined_r0x01ca5090;
    }
    puVar8 = (undefined8 *)(*(long *)(DAT_05ae6a60 + 0x40) + 0x240);
  }
  piVar10 = (int *)*puVar8;
  lVar11 = *(long *)(DAT_05ae6a60 + 0x20);
joined_r0x01ca5090:
  if ((param_2 & 1) != 0) {
    sVar5 = **(short **)(param_1 + 0x1b8);
    FUN_03870d80(piVar10);
    FUN_03c09d18(lVar9,sVar5 == 0);
    FUN_01ca5680(piVar10,*(undefined4 *)(param_1 + 0x18c));
  }
  *(undefined1 *)(lVar11 + 0x28) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x2088);
  uVar4 = *(undefined4 *)(param_1 + 0x2080);
  local_50 = (uint)*(byte *)(param_1 + 0x19c) * 0x6c078965 + 1;
  uStack_4c = (local_50 ^ local_50 >> 0x1e) * 0x6c078965 + 2;
  local_48 = (uStack_4c ^ uStack_4c >> 0x1e) * 0x6c078965 + 3;
  iStack_44 = (local_48 ^ local_48 >> 0x1e) * 0x6c078965 + 4;
  piVar10[2] = 1;
  FUN_038a3af0(piVar10 + 3,4,uVar6,uVar4,&local_50);
  FUN_002446c0(piVar10 + 0x13be,0);
  uVar1 = *(ushort *)(param_1 + 0x19e) & 0x1f;
  if (1 < *(int *)(DAT_05358908 + 0xc4) - 1U) {
    uVar1 = *(ushort *)(param_1 + 0x19e);
  }
  FUN_03871164(piVar10,uVar1);
  if (**(short **)(param_1 + 0x1b8) != 0) {
    FUN_0387173c(piVar10,param_1 + 0x1b0);
  }
  if (*piVar10 == 1) {
    FUN_002cc04c(piVar10 + 0x836,0,0);
    FUN_002cbda4(piVar10 + 0x918,0,0);
  }
  piVar10[1] = piVar10[1] & 0xfffffffeU | (uint)*(byte *)(param_1 + 0x1a1);
  FUN_03870f04(piVar10,1);
  piVar10[0x834] = 1;
  FUN_03871908(piVar10,0);
  *(char *)(lVar11 + 0x14) = (char)*(undefined4 *)(param_1 + 0x198);
  *(bool *)(lVar11 + 0x21) = 1 < *(int *)(param_1 + 0x198);
  uVar7 = *(undefined2 *)(param_1 + 400);
  uVar2 = uVar7;
  if (*(char *)(param_1 + 0x194) != '\0') {
    uVar2 = 1;
  }
  if (1 < *(int *)(DAT_05358908 + 0xc4) - 1U) {
    uVar7 = 0xc;
  }
  FUN_03872108(piVar10,0,uVar2,uVar7);
  FUN_0387220c(piVar10,0,*(undefined1 *)(param_1 + 0x1a0));
  if (*piVar10 == 1) {
    FUN_0030c1a0(piVar10 + 0x1148,1);
  }
  piVar10[0x834] = 1;
  uVar4 = *(undefined4 *)(param_1 + 400);
  *(undefined1 *)(lVar9 + 0x418) = 1;
  *(undefined4 *)(lVar9 + 0xe0) = uVar4;
  return;
}

