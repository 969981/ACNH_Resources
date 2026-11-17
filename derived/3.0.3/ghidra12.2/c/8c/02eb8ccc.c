
void FUN_02eb8ccc(long param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined6 local_70;
  undefined2 uStack_6a;
  undefined6 uStack_68;
  undefined2 local_62;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  ulong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40 [2];
  long local_38;
  
  if (7 < *(uint *)(param_1 + 0x1360)) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x2cb50);
  switch(*(uint *)(param_1 + 0x1360)) {
  default:
    if (*(char *)(param_1 + 0x13fc) != '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x13c0) == 0) {
      return;
    }
    iVar5 = *(int *)(param_1 + 0x13a4);
joined_r0x02eb8de8:
    if (iVar5 == 0) {
      return;
    }
    break;
  case 1:
    if (*(char *)(param_1 + 0x2ce11) == '\0') {
      if (*(int *)(param_1 + 0x17b4) == 0) {
        return;
      }
      iVar5 = *(int *)(param_1 + 0x1798);
      goto joined_r0x02eb8de8;
    }
    if (*(long *)(param_1 + 0x1370) == 0) {
      return;
    }
    break;
  case 2:
    goto switchD_02eb8d1c_caseD_2;
  case 3:
    uVar3 = nn::time::IsValidDate
                      ((uint)*(ushort *)(param_1 + 0x1ea8),(uint)*(byte *)(param_1 + 0x1eaa),
                       (uint)*(byte *)(param_1 + 0x1eab));
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x2ce11) == '\0') {
      if (*(int *)(param_1 + 0x9640) == 0) {
        return;
      }
      iVar5 = *(int *)(param_1 + 0x9624);
      goto joined_r0x02eb8de8;
    }
    if ((DAT_0537d558 == 0) || (*(long *)(DAT_0537d558 + 0x28) == 0)) {
      lVar8 = *(long *)(param_1 + 0x1370);
    }
    else {
      lVar8 = *(long *)(param_1 + 0x1370);
      if (*(int *)(DAT_0537d558 + 0x80) == 1) {
        if (lVar8 == 0) {
          return;
        }
        if (*(int *)(param_1 + 0x139c) == -1) {
          return;
        }
        break;
      }
    }
    if (lVar8 == 0) {
      return;
    }
    if (7 < *(byte *)(param_1 + 0x1368)) {
      return;
    }
    break;
  case 4:
    iVar5 = *(int *)(param_1 + 0x1398);
    if (iVar5 < 0) {
      return;
    }
    goto LAB_02eb8f64;
  case 5:
    if (7 < *(byte *)(param_1 + 0x1368)) {
      return;
    }
    goto switchD_02eb8e48_caseD_5;
  case 6:
    if (*(int *)(param_1 + 0x2c6bc) == 0 || *(int *)(param_1 + 0x2c6a0) == 0) {
      return;
    }
  }
  switch(*(undefined4 *)(param_1 + 0x1360)) {
  case 0:
  case 7:
    lVar8 = param_1 + 0x13a4;
    if (*(char *)(param_1 + 0x13fc) != '\0') {
      lVar8 = 0;
    }
    local_40[0] = 10;
    local_38 = lVar8 + 0x20;
    (**(code **)(*plVar1 + 0x38))(plVar1);
    local_70 = 0;
    uStack_6a = 0;
    uStack_68 = 0;
    local_62 = 0;
    local_78 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_60 = 1;
    uStack_5c = 0;
    local_88 = PTR_DAT_04bc0cd8 + 0x10;
    uStack_80 = 0;
    FUN_02906b00(&local_88,plVar1,local_40);
    iVar5 = *(int *)(lVar8 + 0x34);
    puVar4 = (undefined4 *)(**(code **)(*plVar1 + 0x40))(plVar1);
    uVar6 = 1;
    if (iVar5 == 1) {
      uVar6 = 2;
    }
    break;
  case 1:
    if (*(char *)(param_1 + 0x2ce11) == '\0') {
      lVar8 = 0x1798;
LAB_02eb90bc:
      FUN_01c11cb8(param_1 + 0x2cb50,param_1 + lVar8);
      return;
    }
    goto LAB_02eb8f44;
  default:
    goto switchD_02eb8d1c_caseD_2;
  case 3:
    if (*(char *)(param_1 + 0x2ce11) == '\0') {
      lVar8 = 0x9624;
      goto LAB_02eb90bc;
    }
    if ((DAT_0537d558 != 0) && (*(long *)(DAT_0537d558 + 0x28) != 0)) {
      if (*(int *)(DAT_0537d558 + 0x80) == 1) {
        FUN_01c11a38(param_1 + 0x2cb50,param_1 + 0x139c);
        return;
      }
      goto LAB_02eb8f44;
    }
  case 5:
switchD_02eb8e48_caseD_5:
LAB_02eb8f44:
    FUN_01c11758(param_1 + 0x2cb50,param_1 + 0x1368);
    return;
  case 4:
    iVar5 = *(int *)(param_1 + 0x1398);
LAB_02eb8f64:
    uStack_5e = 0;
    lVar8 = *(long *)PTR_DAT_04bb5030;
    uStack_74 = 0;
    iVar5 = *(int *)(lVar8 + 0xac) + iVar5;
    iVar2 = 0;
    if (*(int *)(lVar8 + 0xa8) <= iVar5) {
      iVar2 = *(int *)(lVar8 + 0xa8);
    }
    iVar5 = *(int *)(lVar8 + 0x94) + *(int *)(*(long *)(lVar8 + 0xa0) + (long)(iVar5 - iVar2) * 4);
    iVar2 = 0;
    if (*(int *)(lVar8 + 0x90) <= iVar5) {
      iVar2 = *(int *)(lVar8 + 0x90);
    }
    puVar7 = (undefined8 *)(*(long *)(lVar8 + 0x88) + (long)(iVar5 - iVar2) * 200);
    local_78 = *(undefined4 *)((long)puVar7 + 0x36);
    uStack_80 = *(undefined8 *)((long)puVar7 + 0x2e);
    local_88 = *(undefined **)((long)puVar7 + 0x26);
    uVar6 = *(undefined4 *)(puVar7 + 4);
    uStack_72 = (undefined2)puVar7[2];
    local_70 = (undefined6)((ulong)puVar7[2] >> 0x10);
    uStack_6a = (undefined2)puVar7[3];
    uStack_68 = (undefined6)((ulong)puVar7[3] >> 0x10);
    local_62 = (undefined2)uVar6;
    uStack_60 = (undefined1)((uint)uVar6 >> 0x10);
    uStack_5f = (undefined1)((uint)uVar6 >> 0x18);
    local_50 = *puVar7;
    local_48 = puVar7[1];
    uStack_5c = *(undefined4 *)(puVar7 + 0x18);
    local_58 = (ulong)*(byte *)((long)puVar7 + 0xc4);
    uVar6 = 1;
    if (*(byte *)((long)puVar7 + 0xc4) == 0) {
      uVar6 = 2;
    }
    FUN_01c120c0(param_1 + 0x2cb50,&local_88,0xb,uVar6);
    return;
  case 6:
    local_40[0] = 10;
    local_38 = param_1 + 0x2c6c0;
    (**(code **)(*plVar1 + 0x38))(plVar1);
    local_70 = 0;
    uStack_6a = 0;
    uStack_68 = 0;
    local_62 = 0;
    local_78 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_60 = 1;
    uStack_5c = 0;
    local_88 = PTR_DAT_04bc0cd8 + 0x10;
    uStack_80 = 0;
    FUN_02906b00(&local_88,plVar1,local_40);
    iVar5 = *(int *)(param_1 + 0x2c6d4);
    puVar4 = (undefined4 *)(**(code **)(*plVar1 + 0x40))(plVar1);
    uVar6 = 1;
    if (iVar5 == 1) {
      uVar6 = 2;
    }
  }
  *puVar4 = uVar6;
switchD_02eb8d1c_caseD_2:
  return;
}

