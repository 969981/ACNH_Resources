
void FUN_01f7fb6c(long *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 local_18;
  
  if (1 < *(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80)) {
                    /* WARNING: Could not recover jumptable at 0x01f7fbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x110))(param_1);
    return;
  }
  local_18 = 0;
  FUN_01e5a930(0x40000000,param_1[2],0,PTR_DAT_04bb2150,(long)&local_18 + 4,&local_18,
               PTR_DAT_04bc1600,6);
  piVar4 = *(int **)PTR_DAT_04bb47d0;
  if ((piVar4 != (int *)0x0) &&
     ((*piVar4 != 0 || piVar4[2] != 0) && *piVar4 == (int)param_1[0x1134])) {
    *(undefined1 *)(piVar4 + 0x2c) = 1;
  }
  uVar3 = DAT_053e0cf8;
  uVar1 = DAT_053e0cec;
  *(undefined8 *)((long)param_1 + 0xaa04) = DAT_053e0ce4;
  *(undefined8 *)((long)param_1 + 0xaa0c) = uVar1;
  uVar2 = DAT_053e0cf4;
  *(undefined4 *)(param_1 + 0x1543) = uVar3;
  uVar3 = DAT_053e0cfc;
  param_1[0x153f] = 0;
  param_1[0x153e] = 0;
  *(undefined4 *)((long)param_1 + 0xaa14) = uVar2;
  *(undefined4 *)((long)param_1 + 0xaa1c) = uVar3;
  uVar2 = DAT_053e0d00;
  *(undefined1 *)((long)param_1 + 0xaa44) = 0;
  *(undefined4 *)(param_1 + 0x1540) = 3;
  *(undefined4 *)(param_1 + 0x1544) = uVar2;
  return;
}

