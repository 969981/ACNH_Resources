
void FUN_027c3440(undefined8 *param_1,byte *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined2 uVar6;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  byte local_33;
  undefined1 local_32;
  
  switch(*param_3) {
  case 0:
    if (*(int *)(param_1 + 0x12) == 0) {
      uVar2 = 1;
      if ((((*(long *)PTR_DAT_04bb2118 != 0) && (DAT_05aed670 != 0)) &&
          (*(long *)(DAT_05aed670 + 0x330) != 0)) &&
         ((((*(int *)(*(long *)(DAT_05aed670 + 0x330) + 8) == 4 &&
            (uVar3 = FUN_026c3834(), (uVar3 & 1) == 0)) &&
           ((DAT_055b1af8 == 0 || (*(int *)(DAT_055b1af8 + 0x58) == 0)))) &&
          (uVar3 = FUN_028b8da8(), (uVar3 & 1) != 0)))) {
        uVar2 = FUN_028bc3a0();
        uVar2 = uVar2 ^ 1;
      }
    }
    else {
      uVar2 = 1;
    }
    *param_1 = 0;
    local_3c = 1;
    if ((uVar2 & 1) != 0) {
      local_3c = 2;
    }
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined4 *)((long)param_1 + 0x44) = 0;
    uStack_38 = 0;
    *(undefined2 *)(param_1 + 9) = 0;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
    *(undefined2 *)(param_1 + 10) = 0;
    *(undefined4 *)((long)param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0xb) = 0;
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
    *(undefined2 *)(param_1 + 0xc) = 0;
    *(undefined4 *)((long)param_1 + 100) = 0;
    *(undefined2 *)(param_1 + 0xd) = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined2 *)(param_1 + 7) = 0;
    param_1[6] = 0;
    *(undefined4 *)((long)param_1 + 0x84) = 0;
    *(undefined8 *)((long)param_1 + 0x7c) = 0;
    *(undefined8 *)((long)param_1 + 0x74) = 0;
    *(undefined1 *)(param_1 + 0x1c) = 0;
    iVar1 = DAT_05590f10;
    local_34 = 4;
    local_32 = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    local_33 = *param_2;
    if (-1 < iVar1) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,iVar1,&uStack_38,&local_3c,4,0);
    }
    if ((uVar2 & 1) == 0) {
      if (DAT_0556aa70 != 0) {
        *(uint *)(DAT_0556aa70 + 0x43c) = *(uint *)(DAT_0556aa70 + 0x43c) | 2;
      }
      FUN_03ebb160(param_1 + 0x11,3);
    }
    break;
  case 1:
    if (*(int *)(param_1 + 0x12) != 1) {
      return;
    }
    puVar5 = (undefined8 *)((long)(param_1 + 0x1a) + ((long)(char)*param_2 & 0xffffffffU) * 2);
    if (7 < *param_2) {
      puVar5 = param_1 + 0x1a;
    }
    if (*(char *)((long)puVar5 + 1) != '\0') {
      return;
    }
    uVar6 = 0x101;
    goto LAB_027c3598;
  case 2:
    if (*(int *)(param_1 + 0x12) != 1) {
      return;
    }
    puVar5 = (undefined8 *)((long)(param_1 + 0x1a) + ((long)(char)*param_2 & 0xffffffffU) * 2);
    if (7 < *param_2) {
      puVar5 = param_1 + 0x1a;
    }
    if (*(char *)((long)puVar5 + 1) != '\0') {
      return;
    }
    uVar6 = 0x100;
LAB_027c3598:
    *(undefined2 *)puVar5 = uVar6;
    break;
  case 3:
  case 4:
    if (*(int *)(param_1 + 0x12) == 3) {
      lVar4 = *(long *)PTR_DAT_04bb27f0;
      if (lVar4 != 0) {
        *(uint *)(lVar4 + 0x43c) = *(uint *)(lVar4 + 0x43c) & 0xfffffffd;
      }
      FUN_03ebb160(param_1 + 0x11,0);
      return;
    }
  }
  return;
}

