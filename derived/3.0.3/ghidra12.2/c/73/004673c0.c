
void FUN_004673c0(long *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong local_38 [3];
  
  FUN_00429460(local_38,*param_1);
  if (1 < local_38[0]) {
    *param_1 = *(long *)(*param_1 + 8);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  uVar1 = FUN_004672e0(param_1,local_38);
  if ((local_38[2] & 1) != 0) {
    FUN_0043dd50(local_38[2] & 0xfffffffffffffffe);
  }
  lVar3 = *param_1;
  puVar2 = (undefined8 *)FUN_00426e90(lVar3,0x40);
  if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
    (*(code *)*puVar2)(uVar1,lVar3,1);
  }
  return;
}

