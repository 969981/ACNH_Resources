
void FUN_039efca4(long param_1,long param_2,char *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  lVar4 = *(long *)(param_1 + 0x380);
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + 0x120);
    uVar7 = *(ulong *)(lVar5 + 0x60);
    if (uVar7 != 0) {
      lVar1 = 0;
      if (*(long *)(lVar5 + 0x40) != 0 && (*(ushort *)(lVar5 + 8) & 1) != 0) {
        lVar1 = *(long *)(lVar5 + 0x40) + ((ulong)*(byte *)(lVar4 + 0x2e5) & 3) * 0x48;
      }
      uVar3 = (*DAT_04c620e0)(*(undefined8 *)(lVar1 + 8));
      puVar2 = PTR_DAT_04bcf2e8;
      uVar6 = *(undefined8 *)(param_2 + 0xb8);
      uVar7 = uVar7 & 0xffffffff;
      if (*param_3 != -1) {
        (**(code **)PTR_DAT_04bcf2e8)(uVar6,0,(long)*param_3,uVar3,uVar7);
      }
      if (param_3[1] != -1) {
        (**(code **)puVar2)(uVar6,1,(long)param_3[1],uVar3,uVar7);
      }
      if (param_3[2] != -1) {
        (**(code **)puVar2)(uVar6,2,(long)param_3[2],uVar3,uVar7);
      }
      if (param_3[3] != -1) {
                    /* WARNING: Could not recover jumptable at 0x039efdc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)puVar2)(uVar6,5,(long)param_3[3],uVar3,uVar7);
        return;
      }
    }
  }
  return;
}

