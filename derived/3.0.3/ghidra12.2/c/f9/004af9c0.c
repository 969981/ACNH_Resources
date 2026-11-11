
undefined8 FUN_004af9c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  size_t sVar5;
  undefined8 uVar6;
  size_t __n;
  ulong *puVar7;
  int iVar8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined1 *local_460;
  undefined8 local_458;
  undefined1 auStack_450 [1024];
  
  puVar3 = PTR_DAT_048607c0;
  local_460 = auStack_450;
  local_458 = 0x8000040000000400;
  iVar8 = -0xb;
  do {
    while( true ) {
      local_480 = *param_3;
      uStack_478 = param_3[1];
      local_470 = param_3[2];
      uStack_468 = param_3[3];
      local_4a0 = *param_3;
      uStack_498 = param_3[1];
      local_490 = param_3[2];
      uStack_488 = param_3[3];
      iVar4 = FUN_0043a0e0(local_460,local_458 & 0xffffffff,(int)local_458 + -1,param_2,&local_4a0);
      if ((-1 < iVar4) && (iVar4 < (int)local_458)) {
        puVar7 = (ulong *)*param_1;
        __n = (size_t)iVar4;
        uVar1 = (long)*puVar7 + __n;
        if (puVar7[1] < uVar1) {
          sVar5 = FUN_004462a0(puVar7,local_460,__n);
        }
        else {
          memcpy((void *)*puVar7,local_460,__n);
          *puVar7 = uVar1;
          sVar5 = __n;
        }
        uVar6 = 0;
        if (sVar5 != __n) {
          uVar6 = 0x80040200;
        }
        uVar2 = local_458._4_4_;
        goto joined_r0x004afb38;
      }
      iVar4 = (int)local_458 * 2;
      if (iVar4 <= (int)(local_458._4_4_ & 0x3fffffff)) break;
      local_460 = (undefined1 *)
                  FUN_00426720(puVar3,iVar4,1,local_460,local_458 & 0xffffffff,(long)&local_458 + 4)
      ;
      if ((int)local_458 != iVar4) goto LAB_004afaa8;
LAB_004afa74:
      iVar8 = iVar8 + 1;
      if (iVar8 == 0) goto LAB_004afab4;
    }
    if ((int)local_458 == iVar4) goto LAB_004afa74;
LAB_004afaa8:
    local_458 = CONCAT44(local_458._4_4_,iVar4);
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0);
LAB_004afab4:
  uVar6 = 0x80040200;
  uVar2 = local_458._4_4_;
joined_r0x004afb38:
  if ((-1 < (long)local_458) && (local_458 = (ulong)uVar2 << 0x20, local_460 != (undefined1 *)0x0))
  {
    FUN_00421f90(puVar3,local_460,1,uVar2 & 0x3fffffff);
  }
  return uVar6;
}

