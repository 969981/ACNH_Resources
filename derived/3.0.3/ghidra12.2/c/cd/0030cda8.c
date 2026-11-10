
bool FUN_0030cda8(long param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  cVar1 = *(char *)(param_1 + 0x394);
  cVar2 = *(char *)(param_1 + 0x39c);
  cVar3 = *(char *)(param_1 + 0x3a4);
  cVar4 = *(char *)(param_1 + 0x3d0);
  cVar5 = *(char *)(param_1 + 0x3d2);
  iVar6 = FUN_00227cb0(param_1 + 0x3d8);
  iVar7 = FUN_00227cb0(param_1 + 0x418);
  iVar8 = FUN_00227cb0(param_1 + 0x458);
  iVar9 = FUN_00227cb0(param_1 + 0x4c8);
  return ((iVar9 != 0 || iVar8 != 0) || (iVar7 != 0 || iVar6 != 0)) ||
         (((cVar2 != '\0' || cVar1 != '\0') || (cVar3 != '\0' || cVar4 != '\0')) || cVar5 != '\0');
}

