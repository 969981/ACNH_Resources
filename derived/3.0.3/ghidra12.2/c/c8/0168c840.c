
uint FUN_0168c840(undefined8 param_1,float *param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  undefined *local_38;
  undefined8 local_30;
  undefined1 local_28 [4];
  undefined4 local_24;
  
  if (param_2 == (float *)0x0) {
    uVar2 = 0;
  }
  else {
    local_38 = PTR_DAT_04bb2010 + 0x10;
    local_30 = 0;
    uVar2 = FUN_01688270(param_1,&local_38);
    if ((uVar2 & 1) != 0) {
      *param_2 = (float)(int)local_30 * 5.0 + 5.0;
      param_2[2] = (float)local_30._4_4_ * 5.0 + 5.0;
      if ((*(long *)PTR_DAT_04bb27c8 == 0) ||
         (lVar3 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90), lVar3 == 0)) {
        fVar4 = -500.0;
      }
      else {
        local_28[0] = 0;
        if (DAT_04c487d4 == -1) {
          local_24 = 7;
        }
        else {
          puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
          if (0xff < (uint)(int)DAT_04c487d4) {
            puVar1 = (uint *)PTR_DAT_04bc39f8;
          }
          local_24 = 7;
          if ((*puVar1 & 2) != 0) {
            local_24 = 5;
          }
        }
        fVar4 = (float)FUN_00962700(lVar3,param_2,&local_24,0,local_28);
      }
      param_2[1] = fVar4;
    }
  }
  return uVar2 & 1;
}

