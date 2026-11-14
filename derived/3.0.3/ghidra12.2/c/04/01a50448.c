
void FUN_01a50448(short *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 long param_5,float *param_6)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  
  FUN_01a5033c(param_2,param_3);
  puVar3 = PTR_DAT_04bb43c0;
  if (*param_1 != -2) {
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(param_1);
    if (*(long *)puVar3 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((((uVar4 < *(uint *)(lVar5 + 0x1d8)) && (param_6 != (float *)0x0)) && (param_5 != 0)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_58 = 0;
        local_68 = PTR_DAT_04bbc1a0 + 0x10;
        puStack_60 = PTR_DAT_04bb2010 + 0x10;
        local_48 = 0;
        local_50 = puStack_60;
        FUN_0277f02c(param_1,&local_68);
        iVar1 = *(int *)(param_5 + 8);
        iVar2 = *(int *)(param_5 + 0xc);
        param_6[1] = 0.0;
        *param_6 = ((float)((int)local_58 + iVar1) * 5.0 +
                   (float)((int)local_48 + iVar1) * 5.0 + 5.0) * 0.5;
        param_6[2] = ((float)(local_58._4_4_ + iVar2) * 5.0 +
                     (float)(local_48._4_4_ + iVar2) * 5.0 + 5.0) * 0.5;
      }
    }
  }
  return;
}

