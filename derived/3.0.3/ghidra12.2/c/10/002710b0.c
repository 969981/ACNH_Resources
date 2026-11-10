
void FUN_002710b0(undefined8 param_1,long *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined *puVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  
  if (param_2[2] != 0 && (int)param_2[1] == 9) {
    lVar10 = *param_2;
    cVar6 = *(char *)(lVar10 + 1);
    cVar1 = *(char *)(lVar10 + 2);
    cVar4 = *(char *)(lVar10 + 3);
    uVar2 = *(undefined1 *)(lVar10 + 4);
    uVar7 = FUN_00228490(lVar10 + 5);
    puVar3 = PTR_DAT_04bcd350;
    uVar8 = FUN_0026c070(*(undefined8 *)PTR_DAT_04bcd350);
    if ((uVar8 & 1) == 0) {
      cVar5 = FUN_0026be6c(*(undefined8 *)puVar3);
      if ((cVar6 == cVar5) && (cVar6 = FUN_0026bfe0(*(undefined8 *)puVar3), cVar1 == cVar6)) {
        lVar10 = *(long *)(*(long *)puVar3 + 0x20);
        if (*(char *)(lVar10 + 0x104) == '\0') {
          if (*(uint *)(*(long *)puVar3 + 0xbc) == uVar7) {
            plVar9 = (long *)FUN_002ba790(DAT_04c61168);
            lVar10 = (**(code **)(*plVar9 + 0x50))(plVar9,cVar4);
            if (lVar10 != 0) {
              *(undefined1 *)(lVar10 + 0x88) = 1;
              return;
            }
          }
        }
        else if (*(uint *)(lVar10 + 0x100) == uVar7) {
          FUN_0027fcc0(lVar10,cVar4,uVar2);
          return;
        }
      }
    }
    else if (((cVar6 == cVar4) && (*(uint *)(*(long *)puVar3 + 0xbc) <= uVar7)) &&
            (cVar4 = FUN_0026bfe0(), cVar1 != cVar4)) {
      FUN_00271ddc(param_1,cVar1,cVar1,cVar6,uVar2,uVar7);
      return;
    }
  }
  return;
}

