
uint FUN_018c2408(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  float fVar4;
  undefined8 local_50;
  float local_48;
  undefined8 local_40;
  float local_38;
  int iStack_34;
  undefined4 local_14;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_04bb4790 + 0x10);
  if (lVar2 == 0) {
    bVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_3 + 0x28);
    if (*(uint *)(*(long *)PTR_DAT_04bb4790 + 8) <= uVar1) {
      uVar1 = 0;
    }
    bVar3 = *(byte *)(lVar2 + (long)(int)uVar1 * 10 + 6) >> 2 & 3;
  }
  local_48 = 0.0;
  local_50 = 0;
  local_14 = 0x28;
  local_40 = &DAT_048f9750;
  local_38 = (float)((int)((float)(int)*(float *)(param_3 + 8) / 5.0) -
                    (uint)(*(float *)(param_3 + 8) < 0.0));
  iStack_34 = (int)((float)(int)*(float *)(param_3 + 0x10) / 5.0) -
              (uint)(*(float *)(param_3 + 0x10) < 0.0);
  uVar1 = FUN_01a1cbf0(&local_14,&local_50,&local_40);
  if ((uVar1 & 1) != 0) {
    fVar4 = (float)FUN_015cb8d4(&local_50,1);
    local_38 = 0.0;
    local_40 = (undefined8 *)0x0;
    local_50._4_4_ = fVar4 + local_50._4_4_;
    FUN_0196ffcc(*(undefined8 *)PTR_DAT_04bb47e0,&local_40,&local_50,bVar3);
    *(undefined4 *)(param_3 + 0x18) = 0;
    *(float *)(param_3 + 8) = (float)local_50 + (float)local_40;
    *(float *)(param_3 + 0xc) = local_50._4_4_ + local_40._4_4_;
    *(float *)(param_3 + 0x10) = local_48 + local_38;
  }
  return uVar1 & 1;
}

