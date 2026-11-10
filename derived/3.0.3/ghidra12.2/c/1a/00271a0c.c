
void FUN_00271a0c(undefined8 param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 local_40;
  undefined4 local_38;
  
  puVar3 = PTR_DAT_04bcd350;
  uVar7 = FUN_0026c070(*(undefined8 *)PTR_DAT_04bcd350);
  if (((uVar7 & 1) == 0) && (lVar8 = FUN_0026c88c(*(undefined8 *)puVar3), lVar8 != 0)) {
    uVar1 = *(uint *)(param_2 + 1);
    if (0xb < uVar1) {
      lVar9 = *param_2;
      cVar2 = *(char *)(lVar9 + 1);
      cVar4 = FUN_0026be6c(*(undefined8 *)puVar3);
      if (((cVar2 == cVar4) && ((ushort)*(byte *)(lVar9 + 2) <= *(ushort *)(*(long *)puVar3 + 0x98))
          ) && (*(char *)(lVar9 + 3) == '\0')) {
        uVar5 = FUN_00228490(lVar9 + 4);
        uVar6 = FUN_00228490(lVar9 + 8);
        if ((*(uint *)(lVar8 + 0x38) <= uVar5) &&
           ((uVar5 != *(uint *)(lVar8 + 0x38) || (*(uint *)(lVar8 + 0x34) < uVar6)))) {
          local_38 = 0;
          local_40 = 0x200000000000;
          FUN_002826a8(lVar8,&local_40);
          FUN_002828b0(&local_40,lVar8,lVar9 + 0xc,uVar1 - 0xc);
          if ((int)local_40 == 0) {
            *(uint *)(lVar8 + 0x34) = uVar6;
            *(uint *)(lVar8 + 0x38) = uVar5;
          }
        }
      }
    }
  }
  return;
}

