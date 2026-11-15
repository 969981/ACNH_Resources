
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_024b33f0(float *param_1)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  undefined *local_50;
  int local_48;
  int iStack_44;
  undefined8 local_40;
  float local_38;
  int iStack_34;
  
  local_50 = PTR_DAT_04bb2010 + 0x10;
  local_48 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  fVar3 = (float)local_48 * 0.5;
  iStack_44 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  local_40 = PTR_DAT_04bb2018 + 0x10;
  uVar1 = 0;
  if (fVar3 != (float)(int)fVar3) {
    uVar1 = (uint)(fVar3 < 0.0);
  }
  local_38 = (float)((int)fVar3 - uVar1);
  fVar3 = (float)iStack_44 * 0.5;
  uVar1 = 0;
  if (fVar3 != (float)(int)fVar3) {
    uVar1 = (uint)(fVar3 < 0.0);
  }
  iStack_34 = (int)fVar3 - uVar1;
  uVar1 = FUN_01318220(&local_40);
  if ((uVar1 & 1) == 0) {
    local_38 = 0.0;
    local_40 = (undefined *)0x0;
    local_40._0_4_ = 0x1000;
    local_40._4_4_ = 0;
    local_38 = 0.0;
    if (((DAT_04cfae30 != 0) && (*(long *)(DAT_04cfae30 + 0xa8) != 0)) &&
       (uVar2 = FUN_00949898(DAT_04cfae30 + 0x28,&local_50,&local_40), (uVar2 & 1) != 0)) {
      local_38 = (float)iStack_44 * 5.0 + 2.5;
      local_40 = (undefined *)CONCAT44(local_40._4_4_,(float)local_48 * 5.0 + 2.5);
      if (((DAT_04cfae30 != 0) && (*(long *)(DAT_04cfae30 + 0xa8) != 0)) &&
         (*(char *)(DAT_04cfae30 + 0x11c8) == '\0')) {
        FUN_0093a950(DAT_04cfae30 + 0x28,&local_40,0);
      }
    }
  }
  return uVar1 & 1;
}

