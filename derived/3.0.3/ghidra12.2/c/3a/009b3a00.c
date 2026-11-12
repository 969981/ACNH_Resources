
void FUN_009b3a00(long param_1)

{
  uint *puVar1;
  char cVar2;
  short sVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 local_24;
  
  lVar4 = DAT_054ee400;
  if (((*(int *)(param_1 + 0xf5b68) == 0) || (DAT_0537d558 == (long *)0x0)) ||
     ((*(int *)(*DAT_0537d558 + 0x508) != 4 &&
      ((*(int *)(DAT_0537f040 + 8) == 0 || (**(char **)(DAT_05358908 + 0x2070) == '\0')))))) {
    iVar5 = *(int *)(param_1 + 0xf5b68);
    if (iVar5 == 2) {
      iVar5 = *(int *)(DAT_05aec868 + 0x32c);
      cVar2 = *(char *)(*(long *)(DAT_05aec868 + 0x330) + 0x104);
      uVar7 = (**(code **)(**(long **)PTR_DAT_04bb2638 + 0x10))();
      if (cVar2 != '\0' || iVar5 != 0) {
        return;
      }
      if ((uVar7 & 1) == 0) {
        return;
      }
      if (DAT_04c487d4 != -1) {
        local_24 = 0x12;
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 0x12 & 1) != 0) {
          return;
        }
      }
      if (DAT_05aed670 == 0) {
        return;
      }
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        return;
      }
      if (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 8) == 4) {
        *(undefined4 *)(param_1 + 0xf5b68) = 3;
        plVar6 = *(long **)(DAT_05aec868 + 0x330);
        *(undefined1 *)((long)plVar6 + 0x104) = 1;
        plVar6[0x21] = param_1 + 0xf5b80;
                    /* WARNING: Could not recover jumptable at 0x009b3c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x18))(plVar6,1,0);
        return;
      }
      return;
    }
    if (iVar5 != 1) {
      if (iVar5 != 0) {
        return;
      }
      if (*(short *)(param_1 + 0xf5b50) != 0) {
        return;
      }
      if ((DAT_04cd19d8 != 0) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) {
        return;
      }
      sVar3 = *(short *)PTR_DAT_04bb6298;
      if (sVar3 != -1) {
        local_24 = 0x12;
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
        if (0xff < (uint)(int)sVar3) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 0x12 & 1) != 0) {
          return;
        }
      }
      if (DAT_054ee400 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0250a5c8(DAT_054ee400);
      }
      if (3 < iVar5) {
        iVar5 = 4;
      }
      if ((iVar5 < 2) && (*(int *)(param_1 + 0xf5b5c) != 0)) {
        return;
      }
      if (lVar4 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0250a5c8(lVar4);
      }
      local_24 = 0x12;
      if (3 < iVar5) {
        iVar5 = 4;
      }
      if (iVar5 < 2) {
        iVar5 = 1;
      }
      uVar7 = FUN_0290cbcc(&local_24);
      if ((uVar7 & 1) != 0) {
        return;
      }
      if (DAT_0537d558 != (long *)0x0) {
        if (*(int *)(*DAT_0537d558 + 0x508) == 4) {
          return;
        }
        if ((*(int *)(DAT_0537f040 + 8) != 0) && (**(char **)(DAT_05358908 + 0x2070) != '\0')) {
          return;
        }
      }
      *(undefined4 *)(param_1 + 0xf5b68) = 1;
      *(int *)(param_1 + 0xf5b6c) = iVar5;
      *(undefined4 *)(param_1 + 0xf5b78) = 0x96;
      return;
    }
    if (*(int *)(param_1 + 0xf5b78) < 1) {
      *(undefined4 *)(param_1 + 0xf5b68) = 2;
      return;
    }
    *(int *)(param_1 + 0xf5b78) = *(int *)(param_1 + 0xf5b78) + -1;
    if ((*(short *)(param_1 + 0xf5b50) == 0) &&
       ((DAT_04cd19d8 == 0 || (*(int *)(DAT_04cd19d8 + 0x15c) == 0)))) {
      if (DAT_04c487d4 != -1) {
        local_24 = 0x12;
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 0x12 & 1) != 0) goto LAB_009b3c2c;
      }
      iVar5 = 0;
      if (DAT_054ee400 != 0) {
        iVar5 = FUN_0250a5c8();
      }
      if (3 < iVar5) {
        iVar5 = 4;
      }
      if (1 < iVar5) {
        return;
      }
      if (*(int *)(param_1 + 0xf5b5c) == 0) {
        return;
      }
    }
  }
LAB_009b3c2c:
  *(undefined4 *)(param_1 + 0xf5b78) = 0;
  *(undefined8 *)(param_1 + 0xf5b68) = 0x100000000;
  return;
}

