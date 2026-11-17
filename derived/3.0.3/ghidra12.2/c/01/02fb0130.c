
void FUN_02fb0130(undefined8 param_1,uint *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  short sVar5;
  uint uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  int iVar10;
  
  puVar1 = PTR_DAT_04bb5108;
  if (((1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) &&
      (*(char *)(*(long *)PTR_DAT_04bb38d0 + 0xb4) == '\0')) &&
     ((lVar7 = *(long *)PTR_DAT_04bb4860, *(char *)(lVar7 + 0x34) == '\0' ||
      (*(int *)(PTR_DAT_04bb5108 + 8) <= *(int *)(lVar7 + 0x10))))) {
    if (*(char *)(lVar7 + 100) == '\0') {
      *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)PTR_DAT_04bb5108;
      iVar10 = *(int *)(puVar1 + 8);
    }
    else {
      iVar10 = *(int *)(PTR_DAT_04bb5108 + 8);
      if (*(int *)(lVar7 + 0x40) <= iVar10) goto LAB_02fb01f0;
      *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)PTR_DAT_04bb5108;
    }
    *(int *)(lVar7 + 0x40) = iVar10;
    uVar3 = puVar1[0x2c];
    *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)(puVar1 + 0x18);
    uVar4 = puVar1[0x20];
    *(undefined1 *)(lVar7 + 100) = uVar3;
    uVar8 = *(undefined4 *)(puVar1 + 0x24);
    uVar2 = *(undefined4 *)(puVar1 + 0x28);
    *(undefined1 *)(lVar7 + 0x58) = uVar4;
    *(undefined4 *)(lVar7 + 0x5c) = uVar8;
    *(undefined4 *)(lVar7 + 0x60) = uVar2;
  }
LAB_02fb01f0:
  FUN_02f07ed0(*(char *)((long)param_2 + 5) * 0x3c);
  if (*param_2 < 4) {
    uVar8 = *(undefined4 *)(&DAT_04130b54 + (long)(int)*param_2 * 4);
  }
  else {
    uVar8 = 3;
  }
  uVar6 = param_2[3];
  switch(uVar8) {
  case 0:
    sVar5 = *(short *)PTR_DAT_04bb6298;
    if (sVar5 == -1) {
LAB_02fb02b8:
      if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x3f5c743d) ||
         ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x2f1ac06c &&
          (*(int *)(*(long *)PTR_DAT_04bb3728 + 0xb0) != 0)))) goto LAB_02fb02f8;
      uVar8 = 7;
    }
    else {
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
      if (0xff < (uint)(int)sVar5) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) == 0) goto LAB_02fb02b8;
LAB_02fb02f8:
      uVar8 = 3;
    }
    puVar9 = *(undefined8 **)PTR_DAT_04bc2fc8;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    break;
  case 1:
  case 2:
    break;
  case 3:
    uVar8 = 0;
    break;
  default:
    uVar8 = 3;
  }
  if ((char)uVar6 == '\0') {
    FUN_02f08500(uVar8,1);
    return;
  }
  return;
}

