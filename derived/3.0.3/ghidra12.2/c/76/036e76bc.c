
undefined8 FUN_036e76bc(undefined8 *param_1,long param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = param_1[1];
  iVar2 = *(int *)(param_2 + 8);
  if ((((*(int *)(lVar8 + 0x10) <= iVar2) && (iVar2 <= *(int *)(lVar8 + 0x20))) &&
      (iVar3 = *(int *)(param_2 + 0xc), *(int *)(lVar8 + 0x14) <= iVar3)) &&
     (iVar3 <= *(int *)(lVar8 + 0x24))) {
    pfVar1 = *(float **)*param_1;
    uVar4 = *(uint *)((long *)*param_1)[1];
    iVar5 = FUN_006f0400((float)iVar2 * 5.0 - *pfVar1,(float)iVar3 * 5.0 - pfVar1[2]);
    if (((uVar4 ^ 0x80000000) ==
         (uint)(long)((float)(iVar5 + 0x20000000U >> 0x1e) * 90.0 * 11930465.0)) &&
       (uVar6 = FUN_035aa210(iVar2,iVar3,param_1[2]), (uVar6 & 1) != 0)) {
      uVar6 = FUN_035aa210(iVar2 + -1,iVar3,param_1[2]);
      if ((uVar6 & 1) != 0) {
        uVar6 = FUN_035aa210(iVar2,iVar3 + -1,param_1[2]);
        if ((uVar6 & 1) != 0) {
          uVar7 = FUN_035aa210(iVar2 + -1,iVar3 + -1,param_1[2]);
          return uVar7;
        }
      }
    }
  }
  return 0;
}

