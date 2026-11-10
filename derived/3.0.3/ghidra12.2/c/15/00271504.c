
void FUN_00271504(undefined8 param_1,long *param_2)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  char cVar4;
  byte bVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_04bcd350;
  uVar6 = FUN_002212e4(*(undefined8 *)(*(long *)PTR_DAT_04bcd350 + 0x10));
  if (((uVar6 & 1) == 0) && ((int)param_2[1] == 3)) {
    lVar10 = *param_2;
    cVar1 = *(char *)(lVar10 + 1);
    plVar7 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
    lVar8 = (**(code **)(*plVar7 + 0x50))(plVar7,cVar1);
    if ((lVar8 != 0) &&
       (((*(long *)(lVar8 + 0x40) == param_2[2] &&
         (cVar4 = FUN_0026be6c(*(undefined8 *)puVar3), cVar1 == cVar4)) &&
        (bVar2 = *(byte *)(lVar10 + 2), bVar2 < 0x20)))) {
      bVar5 = FUN_0026be6c(*(undefined8 *)puVar3);
      if (bVar2 != bVar5) {
        uVar9 = *(undefined8 *)(*(long *)puVar3 + 0x38);
        uVar6 = FUN_002789b0(uVar9,1,bVar2);
        if ((uVar6 & 1) != 0) {
          FUN_002211bc(uVar9,0);
          return;
        }
      }
    }
  }
  return;
}

