
void FUN_002718c8(undefined8 param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  puVar3 = PTR_DAT_04bcd350;
  uVar7 = FUN_0026c070(*(undefined8 *)PTR_DAT_04bcd350);
  if ((uVar7 & 1) != 0) {
    lVar8 = *(long *)puVar3;
    lVar11 = *(long *)(lVar8 + 0x48);
    if (((lVar11 != 0) && (uVar1 = *(uint *)(param_2 + 1), 0xf < uVar1)) &&
       (uVar1 <= *(ushort *)(lVar8 + 0x98) + 0x10)) {
      lVar8 = *param_2;
      cVar2 = *(char *)(lVar8 + 1);
      cVar4 = FUN_0026be6c();
      if (cVar2 == cVar4) {
        cVar2 = *(char *)(lVar8 + 2);
        plVar9 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
        lVar10 = (**(code **)(*plVar9 + 0x50))(plVar9,cVar2);
        if ((((lVar10 != 0) && (*(long *)(lVar10 + 0x40) == param_2[2])) &&
            ((cVar4 = FUN_0026be6c(*(undefined8 *)puVar3), cVar2 != cVar4 &&
             ((*(char *)(lVar8 + 0xd) == '\0' && (*(char *)(lVar8 + 0xe) == '\0')))))) &&
           (*(char *)(lVar8 + 0xf) == '\0')) {
          uVar5 = FUN_00228490(lVar8 + 4);
          uVar6 = FUN_00228490(lVar8 + 8);
          uVar7 = FUN_002212e4(lVar11);
          if ((uVar7 & 1) == 0) {
            uVar7 = FUN_0027ff70(lVar11,cVar2,uVar5,uVar6);
            if ((uVar7 & 1) == 0) {
              return;
            }
            FUN_002211bc(lVar11,0);
          }
          FUN_0028025c(lVar11,cVar2,lVar8,uVar1);
          return;
        }
      }
    }
  }
  return;
}

