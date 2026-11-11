
undefined8 * FUN_00466390(int *param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  
  iVar6 = param_1[0x2a];
  lVar3 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
  lVar5 = DAT_04c6f058;
  if (lVar3 != 0) {
    lVar5 = lVar3;
  }
  puVar4 = (undefined8 *)FUN_00422030(*(undefined8 *)(lVar5 + 0x58),1,iVar6);
  FUN_0043a810(puVar4,0,(long)param_1[0x2a]);
  puVar4[2] = 1;
  *puVar4 = &PTR_LAB_0485b0a8;
  puVar4[1] = 0xffffffff;
  puVar4[1] = (long)param_1[0x2a];
  FUN_004437e0(puVar4,0);
  if (0 < param_1[0x28]) {
    iVar6 = param_1[0x29];
    lVar5 = 0;
    piVar7 = param_1;
    do {
      piVar1 = (int *)((long)piVar7[2] + (long)puVar4);
      iVar2 = iVar6 - piVar7[2];
      if (piVar7[3] == 0) {
        *(short *)((long)piVar1 + 2) = (short)iVar2;
        *(short *)piVar1 = (short)*piVar7;
      }
      else {
        *piVar1 = iVar2;
        piVar1[1] = *piVar7;
      }
      piVar1 = piVar7 + 1;
      piVar7 = piVar7 + 4;
      iVar6 = *piVar1 + iVar6;
      lVar5 = lVar5 + 1;
    } while (lVar5 < param_1[0x28]);
  }
  return puVar4;
}

