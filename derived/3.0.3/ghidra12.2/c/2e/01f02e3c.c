
void FUN_01f02e3c(long param_1,undefined4 param_2)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  int *piVar4;
  ulong uVar5;
  char cVar6;
  long lVar7;
  int iVar8;
  undefined8 local_50;
  int local_48;
  
  if (*(char *)(param_1 + 0xebd8) != '\0') {
    return;
  }
  iVar8 = *(int *)(param_1 + 0xe7c8);
  lVar7 = *(long *)PTR_DAT_04bb3968;
  piVar4 = (int *)(**(code **)(*(long *)(lVar7 + 0x1608) + 0xf0))(lVar7 + 0x1608);
  if (iVar8 < *piVar4) {
    cVar6 = '\x02';
  }
  else {
    iVar8 = *(int *)(param_1 + 0xe7c8);
    piVar4 = (int *)(**(code **)(*(long *)(lVar7 + 0x15d8) + 0xf0))(lVar7 + 0x15d8);
    cVar6 = iVar8 < *piVar4;
  }
  if (cVar6 == '\x02') {
    lVar7 = *(long *)(param_1 + 0x18);
    piVar4 = (int *)(lVar7 + 0x10);
    piVar1 = piVar4 + (ulong)*(uint *)(lVar7 + 0x294) * 0x20;
    if (4 < *(uint *)(lVar7 + 0x294)) {
      piVar1 = piVar4;
    }
    local_50 = CONCAT44(local_50._4_4_,*piVar1);
    if (*piVar1 == 1) {
      return;
    }
    uVar5 = FUN_02085a50(lVar7,1,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    *(undefined1 *)(lVar7 + 0x801) = 1;
    piVar1 = piVar4 + (ulong)*(uint *)(lVar7 + 0x294) * 0x20;
    if (4 < *(uint *)(lVar7 + 0x294)) {
      piVar1 = piVar4;
    }
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    return;
  }
  if (cVar6 == '\x01') {
    local_48 = 0;
    local_50 = 0;
    FUN_01f03074(param_1,&local_50,param_2);
    lVar7 = *(long *)(param_1 + 0x18);
    piVar4 = (int *)(lVar7 + 0x10);
    piVar1 = piVar4 + (ulong)*(uint *)(lVar7 + 0x294) * 0x20;
    if (4 < *(uint *)(lVar7 + 0x294)) {
      piVar1 = piVar4;
    }
    if (*piVar1 == 2) goto LAB_01f02ff4;
    uVar5 = FUN_02085a50(lVar7,2,0);
    iVar8 = (int)local_50;
    if ((uVar5 & 1) == 0) goto LAB_01f03038;
    *(undefined1 *)(lVar7 + 0x801) = 1;
  }
  else {
    if (cVar6 != '\0') {
      return;
    }
    local_48 = 0;
    local_50 = 0;
    FUN_01f03074(param_1,&local_50,param_2);
    lVar7 = *(long *)(param_1 + 0x18);
    piVar4 = (int *)(lVar7 + 0x10);
    piVar1 = piVar4 + (ulong)*(uint *)(lVar7 + 0x294) * 0x20;
    if (4 < *(uint *)(lVar7 + 0x294)) {
      piVar1 = piVar4;
    }
    if (*piVar1 == 1) {
LAB_01f02ff4:
      iVar8 = (int)local_50;
      goto LAB_01f03038;
    }
    uVar5 = FUN_02085a50(lVar7,1,0);
    iVar8 = (int)local_50;
    if ((uVar5 & 1) == 0) goto LAB_01f03038;
    *(undefined1 *)(lVar7 + 0x801) = 1;
  }
  piVar1 = piVar4 + (ulong)*(uint *)(lVar7 + 0x294) * 0x20;
  if (4 < *(uint *)(lVar7 + 0x294)) {
    piVar1 = piVar4;
  }
  piVar1[3] = (int)local_50;
  piVar1[4] = local_50._4_4_;
  piVar1[5] = local_48;
  iVar8 = (int)local_50;
LAB_01f03038:
  lVar7 = *(long *)(param_1 + 0x18) + 0x10;
  uVar3 = *(uint *)(*(long *)(param_1 + 0x18) + 0x294);
  lVar2 = lVar7 + (ulong)uVar3 * 0x80;
  if (4 < uVar3) {
    lVar2 = lVar7;
  }
  *(int *)(lVar2 + 0xc) = iVar8;
  *(int *)(lVar2 + 0x10) = local_50._4_4_;
  *(int *)(lVar2 + 0x14) = local_48;
  return;
}

