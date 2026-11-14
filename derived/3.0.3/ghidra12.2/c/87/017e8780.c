
void FUN_017e8780(undefined4 param_1,undefined8 param_2,float *param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined *puStack_50;
  int local_48;
  int iStack_44;
  
  fVar4 = *param_3;
  fVar5 = param_3[2];
  lVar3 = *(long *)PTR_DAT_04bb27c8;
  lVar1 = FUN_00947800(param_2,param_2);
  if (lVar1 != 0) {
    puStack_70 = PTR_DAT_04bb2010 + 0x10;
    local_78 = PTR_DAT_04bbc1a0 + 0x10;
    local_58 = 0;
    local_68 = 0;
    iStack_44 = ((int)((float)(int)fVar5 / 10.0) - (uint)(fVar5 < 0.0)) * 2;
    local_48 = ((int)((float)(int)fVar4 / 10.0) - (uint)(fVar4 < 0.0)) * 2;
    puStack_60 = puStack_70;
    puStack_50 = puStack_70;
    uVar2 = FUN_0096cca0(0,param_1,*(undefined8 *)(lVar3 + 0xa8),lVar1,&puStack_50,&local_78,
                         param_4 & 1);
    if ((uVar2 & 1) != 0) {
      FUN_0096e9e0(*(undefined8 *)(lVar3 + 0xa8),&local_78);
    }
  }
  return;
}

