
uint FUN_0044b860(int param_1,long *param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  
  puVar4 = (undefined8 *)(*param_2 + (long)param_1 * 0x18);
  uVar5 = *puVar4;
  iVar6 = *(int *)((long)puVar4 + 0xc);
  uVar1 = param_3 + 1;
  uVar2 = uVar1;
  if (iVar6 < 0) {
    plVar3 = (long *)FUN_00426e90(uVar5,0x2000);
  }
  else {
    do {
      uVar2 = FUN_0044b860(iVar6,param_2,uVar2,param_4);
      iVar6 = *(int *)(*param_2 + (long)iVar6 * 0x18 + 0x10);
    } while (-1 < iVar6);
    plVar3 = (long *)FUN_00426e90(uVar5,0x2000);
  }
  if (plVar3 != (long *)0x0) {
    *plVar3 = (long)(int)(uVar1 * 0x20000 | param_4 & 3 | (uVar2 & 0x7fff) << 2);
  }
  return uVar2;
}

