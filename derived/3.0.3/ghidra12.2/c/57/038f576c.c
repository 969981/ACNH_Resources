
undefined8 FUN_038f576c(long param_1,long param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  if (*param_3 == -1) {
    return 0;
  }
  FUN_038f5930(param_1 + 0xa0,param_1);
  if (*(int *)(param_1 + 0x50) == -1) {
    return 0;
  }
  uVar4 = (*DAT_04c61d00)(*(undefined8 *)(DAT_05ae77d8 + 0x30),*(undefined4 *)(param_1 + 0xa8));
  puVar3 = PTR_DAT_04bcf318;
  cVar1 = (char)*param_3;
  uVar6 = *(undefined8 *)(param_2 + 0xb8);
  if (cVar1 != -1) {
    (**(code **)PTR_DAT_04bcf318)(uVar6,0,(long)cVar1,uVar4);
  }
  uVar7 = (uint)(cVar1 != -1);
  if (*(char *)((long)param_3 + 1) != -1) {
    (**(code **)puVar3)(uVar6,1,(long)*(char *)((long)param_3 + 1),uVar4);
    uVar7 = uVar7 | 2;
  }
  if (*(char *)((long)param_3 + 2) != -1) {
    (**(code **)puVar3)(uVar6,2,(long)*(char *)((long)param_3 + 2),uVar4);
    uVar7 = uVar7 | 4;
  }
  if (*(char *)((long)param_3 + 3) == -1) {
    if (uVar7 == 0) {
      return 1;
    }
  }
  else {
    (**(code **)puVar3)(uVar6,5,(long)*(char *)((long)param_3 + 3),uVar4);
    uVar7 = uVar7 | 8;
  }
  if (((*(byte *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) &&
     ((*(ulong *)(param_2 + 0x100) >> ((ulong)*(uint *)(param_1 + 0xa8) & 0x3f) & 1) != 0)) {
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
  return 1;
}

