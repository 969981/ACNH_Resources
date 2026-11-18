
void FUN_03453b14(int *param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  int iVar5;
  float fVar6;
  int local_40;
  int iStack_3c;
  uint local_38;
  undefined1 local_34;
  
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((char)param_1[0xc] == '\0') {
    local_40 = *param_1;
    iVar5 = param_1[1];
    if (local_40 == iVar5) {
      return;
    }
    goto LAB_03453bcc;
  }
  iVar5 = param_1[0xe];
  param_1[1] = iVar5;
  if ((char)param_1[0xf] == '\0') {
    local_40 = *param_1;
    iVar2 = iVar5 - local_40;
    if (iVar2 != 0) goto LAB_03453b58;
    iVar3 = 0;
  }
  else {
    local_40 = param_1[0xd];
    *param_1 = local_40;
    iVar2 = iVar5 - local_40;
    iVar3 = 0;
    if (iVar2 != 0) {
LAB_03453b58:
      iVar3 = -iVar2;
      if (-1 < iVar2) {
        iVar3 = iVar2;
      }
      fVar6 = 0.5;
      if ((float)iVar3 / 15.0 < 0.0) {
        fVar6 = -0.5;
      }
      iVar2 = (int)((float)iVar3 / 15.0 + fVar6);
      if (iVar2 * -0x33333333 + 0x19999999U < 0x33333333) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = -iVar2;
      if (local_40 < iVar5) {
        iVar3 = iVar2;
      }
    }
  }
  param_1[2] = iVar3;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (local_40 == iVar5) {
    return;
  }
LAB_03453bcc:
  iVar2 = param_1[2] + local_40;
  iVar3 = iVar2;
  if (iVar2 <= iVar5) {
    iVar3 = iVar5;
  }
  if (iVar5 <= iVar2) {
    iVar2 = iVar5;
  }
  if (param_1[2] < 1) {
    iVar2 = iVar3;
  }
  local_34 = iVar2 == iVar5;
  *param_1 = iVar2;
  local_38 = (uint)(iVar5 <= local_40);
  plVar4 = (long *)(param_1 + 4);
  iStack_3c = iVar2;
  uVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
  if ((uVar1 & 1) != 0) {
    (**(code **)*plVar4)(plVar4,&local_40);
  }
  if (iVar2 == iVar5) {
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return;
}

