
undefined8 FUN_0093c0d4(long param_1,float *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  float local_3c;
  float fStack_38;
  float local_34;
  
  if (((DAT_05292338 != 0) && (DAT_05aed670 != 0)) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar2 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar1 = FUN_006bd550(*puVar2,0);
    if (((iVar1 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
       ((*(long *)(DAT_05aed670 + 0x330) != 0 &&
        ((*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) != 0 &&
         (*(long *)(param_1 + 0x1168) != 0)))))) {
      if (DAT_05292338 == 0) {
        fStack_38 = 0.0;
        local_3c = 40.0;
        local_34 = 40.0;
      }
      else {
        local_3c = *(float *)(DAT_05292338 + 0xd74);
        fStack_38 = *(float *)(DAT_05292338 + 0xd78);
        local_34 = *(float *)(DAT_05292338 + 0xd7c);
      }
      fStack_38 = param_2[1] - fStack_38;
      local_3c = *param_2 - local_3c;
      local_34 = param_2[2] - local_34;
      uVar3 = FUN_0097a3f0(*(long *)(param_1 + 0x1168),&local_3c);
      return uVar3;
    }
  }
  return 7;
}

