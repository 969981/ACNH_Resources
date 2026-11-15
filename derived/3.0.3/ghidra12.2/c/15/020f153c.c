
void FUN_020f153c(byte param_1,byte param_2,byte *param_3)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  byte local_40;
  byte local_3f;
  byte local_3e;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  int local_34;
  
  bVar3 = *param_3;
  local_3c = 0;
  local_36 = 0;
  local_3e = bVar3;
  if (7 < bVar3) {
    local_3e = 0xff;
  }
  local_38 = 0xff00;
  if (-1 < DAT_053d14f0) {
    local_40 = param_1;
    local_3f = param_2;
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d14f0,&local_3c,&local_40,3,0);
    bVar3 = *param_3;
  }
  if (bVar3 < 8) {
    return;
  }
  uVar4 = (uint)param_2;
  piVar1 = (int *)(*(long *)PTR_DAT_04bb4128 + 0x344);
  piVar2 = piVar1 + (ulong)uVar4 * 2;
  if (6 < uVar4) {
    piVar2 = piVar1;
  }
  local_34 = *piVar2;
  switch(param_1) {
  case 0:
  case 2:
    local_34 = 2;
    break;
  case 1:
    local_34 = 1;
    break;
  case 3:
    local_34 = 3;
  }
  if (*piVar2 != local_34) {
    piVar2 = piVar1 + (ulong)uVar4 * 2;
    if (6 < uVar4) {
      piVar2 = piVar1;
    }
    *piVar2 = local_34;
  }
  return;
}

