
void FUN_0073dae4(undefined4 *param_1,long param_2,uint param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *local_138;
  undefined1 *puStack_130;
  undefined4 local_128;
  undefined1 local_124 [255];
  undefined1 local_25;
  
  lVar3 = *(long *)(param_2 + 0x1138);
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0xae) == '\0' || *(char *)(lVar3 + 0xb4) != '\0')) {
    uVar2 = 0;
    uVar4 = 0;
    uVar5 = 0;
    goto LAB_0073dbe0;
  }
  lVar3 = *(long *)(lVar3 + 0x78);
  if (lVar3 == 0) {
LAB_0073dbac:
    pfVar1 = (float *)&DAT_0419b56c;
  }
  else {
    if (((int)param_3 < 0) || (*(int *)(lVar3 + 0x18) <= (int)param_3)) {
      local_25 = 0;
      local_128 = 0x100;
      puStack_130 = local_124;
      local_124[0] = 0;
      local_138 = PTR_DAT_04bb21f8 + 0x10;
      lVar3 = *(long *)(*(long *)(*(long *)(lVar3 + 0x50) + 0x10) + 8);
      FUN_038d1270(&local_138,"%s.as",lVar3 + *(int *)(lVar3 + 0x24) + (long)*(int *)(lVar3 + 8));
      goto LAB_0073dbac;
    }
    if (*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + (ulong)param_3 * 0x10) + 0x28) == 0)
    goto LAB_0073dbac;
    pfVar1 = (float *)FUN_03ec3568();
  }
  uVar2 = (undefined4)(long)(*pfVar1 * 6.8356525e+08);
  uVar4 = (undefined4)(long)(pfVar1[1] * 6.8356525e+08);
  uVar5 = (undefined4)(long)(pfVar1[2] * 6.8356525e+08);
LAB_0073dbe0:
  *param_1 = uVar2;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  return;
}

