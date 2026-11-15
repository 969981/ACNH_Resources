
undefined8 FUN_01f93dc8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined *local_38;
  int local_30;
  int iStack_2c;
  undefined8 local_28;
  undefined8 local_8;
  
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  fVar4 = *(float *)(lVar3 + 0x278);
  fVar5 = *(float *)(lVar3 + 0x280);
  local_8 = 0;
  local_28 = 0;
  local_38 = PTR_DAT_04bb2010 + 0x10;
  local_30 = (int)((float)(int)fVar4 / 5.0) - (uint)(fVar4 < 0.0);
  iStack_2c = (int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0);
  if ((((((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) ||
        (uVar1 = FUN_009493f8(DAT_04cfae30 + 0x28,&local_38,(long)&local_8 + 4,&local_8,
                              (long)&local_28 + 4,&local_28), (uVar1 & 1) == 0)) ||
       ((local_8._4_4_ != 0xc && (local_8._4_4_ != 5)))) ||
      (((int)local_8 != 0xc && ((int)local_8 != 5)))) ||
     ((((local_28._4_4_ != 5 && (local_28._4_4_ != 0xc)) ||
       (((int)local_28 != 0xc && ((int)local_28 != 5)))) ||
      (*(int *)(*(long *)(param_1 + 8) + 0x500) != 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

