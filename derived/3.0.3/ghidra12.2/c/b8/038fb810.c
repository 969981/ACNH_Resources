
void FUN_038fb810(long param_1,long param_2,char *param_3,uint *param_4,short *param_5)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  if ((*param_4 != 0xffffffff) && (*param_5 != -1)) {
    uVar4 = (*DAT_04c61cf0)(*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x30));
    puVar3 = PTR_DAT_04bcf300;
    cVar1 = *param_3;
    uVar6 = *(undefined8 *)(param_2 + 0xb8);
    if (cVar1 != -1) {
      (**(code **)PTR_DAT_04bcf300)(uVar6,0,(long)cVar1,uVar4);
    }
    uVar7 = (uint)(cVar1 != -1);
    if (param_3[1] != -1) {
      (**(code **)puVar3)(uVar6,1,(long)param_3[1],uVar4);
      uVar7 = uVar7 | 2;
    }
    if (param_3[2] != -1) {
      (**(code **)puVar3)(uVar6,2,(long)param_3[2],uVar4);
      uVar7 = uVar7 | 4;
    }
    if (param_3[3] == -1) {
      if (uVar7 == 0) {
        return;
      }
    }
    else {
      (**(code **)puVar3)(uVar6,5,(long)param_3[3],uVar4);
      uVar7 = uVar7 | 8;
    }
    if (((*(byte *)(param_1 + 0x5c8) >> 3 & 1) == 0) &&
       ((*(ulong *)(param_2 + 0x100) >> ((ulong)*param_4 & 0x3f) & 1) != 0)) {
      uVar2 = uVar7 & 2 | (uint)((uVar7 & 5) != 0);
      uVar7 = uVar7 >> 1 & 4;
      if (uVar2 != 0 || uVar7 != 0) {
        uVar5 = 0x10;
        if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
          uVar5 = 0x110;
        }
        (*DAT_04c62b58)(*(undefined8 *)(param_2 + 0xb8),uVar5 | uVar7 << 1 | uVar2);
        *(undefined8 *)(param_2 + 0x100) = 0;
      }
    }
  }
  return;
}

