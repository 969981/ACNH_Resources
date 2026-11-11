
undefined8 FUN_004c1a00(int *param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong extraout_x1;
  ulong *puVar7;
  undefined *puVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  int local_80 [2];
  undefined1 local_78;
  int *local_70;
  undefined8 local_68;
  undefined1 auStack_60 [16];
  
  local_70 = param_1;
  FUN_004bdec0(param_2,&local_70);
  if ((extraout_x1 & 1) == 0) {
    return 0x80040200;
  }
  iVar3 = FUN_00426fc0(*(undefined8 *)(param_1 + 0x14));
  if (iVar3 != 0) goto LAB_004c1a50;
  FUN_00427270(*(undefined8 *)(param_1 + 0x14));
  local_70 = (int *)0x0;
  local_68 = -0x8000000000000000;
  FUN_0043d3a0(auStack_60);
  local_80[0] = 0;
  if (0 < param_1[0xc]) {
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 10) + (long)local_80[0] * 8);
      if ((*(int *)(lVar5 + 0x1c) == 3) && (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)) {
        (**(code **)(**(long **)param_1 + 0x38))(*(long **)param_1,lVar5);
        iVar3 = FUN_004c1a00(lVar5,param_2);
        if (iVar3 < 0) {
          FUN_0049ba50(&local_70,local_80);
          FUN_0044e0a0(*(undefined8 *)(param_1 + 0x14),
                       **(ulong **)(*(long *)(param_1 + 10) + (long)local_80[0] * 8) &
                       0xfffffffffffffffe,&DAT_04c20e60);
        }
        else if ((char)param_1[0x26] == '\0') {
          bVar2 = FUN_004c1d60(lVar5);
          *(byte *)(param_1 + 0x26) = bVar2 & 1;
        }
      }
      local_80[0] = local_80[0] + 1;
    } while (local_80[0] < param_1[0xc]);
  }
  if (param_1[0x10] != 0) {
    if (param_1[0x10] < 1) {
      lVar5 = *(long *)(param_1 + 0x14);
LAB_004c1c48:
      puVar8 = &DAT_04c20e60;
    }
    else {
      lVar5 = *(long *)(param_1 + 0xe);
      uVar11 = 0xffffffff;
      uVar10 = 0;
      bVar2 = 0;
      iVar3 = -1;
      do {
        if (*(long *)(lVar5 + uVar10 * 8) != 0) {
          (**(code **)(**(long **)param_1 + 0x38))();
          iVar4 = FUN_004c1a00(*(undefined8 *)(*(long *)(param_1 + 0xe) + uVar10 * 8),param_2);
          if (iVar4 < 0) {
            iVar3 = 0x400;
            bVar2 = 1;
LAB_004c1bf8:
            uVar11 = uVar10 & 0xffffffff;
          }
          else {
            iVar4 = FUN_00426fc0(*(undefined8 *)
                                  (*(long *)(*(long *)(param_1 + 0xe) + uVar10 * 8) + 0x50));
            if (iVar3 < iVar4) {
              iVar3 = FUN_00426fc0(*(undefined8 *)
                                    (*(long *)(*(long *)(param_1 + 0xe) + uVar10 * 8) + 0x50));
              goto LAB_004c1bf8;
            }
          }
          lVar5 = *(long *)(param_1 + 0xe);
          if (*(char *)(*(long *)(lVar5 + uVar10 * 8) + 0x98) != '\0') {
            *(undefined1 *)(param_1 + 0x26) = 1;
          }
        }
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)param_1[0x10]);
      lVar5 = *(long *)(param_1 + 0x14);
      if ((bool)(bVar2 | (int)uVar11 == -1)) goto LAB_004c1c48;
      puVar8 = *(undefined **)(*(long *)(*(long *)(param_1 + 0xe) + (long)(int)uVar11 * 8) + 0x50);
    }
    *(undefined **)(lVar5 + 8) = puVar8;
  }
  FUN_00454f90(local_80);
  lVar5 = FUN_00454fb0(local_80);
  *(undefined4 *)(lVar5 + 0xc) = 8;
  local_78 = 0;
  FUN_00454890(*(undefined8 *)(param_1 + 0x14),local_80);
  if ((param_1[0x10] == 0) || (**(long **)(param_1 + 0xe) == 0)) {
    *(undefined8 *)(*(long *)(param_1 + 0x14) + 8) = 0;
    iVar3 = param_1[0x10];
  }
  else {
    *(undefined8 *)(*(long *)(param_1 + 0x14) + 8) =
         *(undefined8 *)(**(long **)(param_1 + 0xe) + 0x50);
    iVar3 = param_1[0x10];
  }
  if (iVar3 != 0) {
    param_1[0x27] = 0;
  }
  if ((int)local_68 != 0) {
    lVar5 = (long)(int)local_68 << 2;
    piVar9 = local_70;
    do {
      puVar7 = *(ulong **)(*(long *)(param_1 + 10) + (long)*piVar9 * 8);
      FUN_0044e0a0(*(undefined8 *)(param_1 + 0x14),*puVar7 & 0xfffffffffffffffe,
                   *(undefined8 *)(puVar7[2] + 0x50));
      lVar5 = lVar5 + -4;
      piVar9 = piVar9 + 1;
    } while (lVar5 != 0);
  }
  iVar3 = param_1[8];
  plVar6 = (long *)FUN_00426d40(*(undefined8 *)(param_1 + 0x14),0x10);
  *plVar6 = (long)iVar3;
  uVar10 = *(ulong *)(param_1 + 6);
  puVar7 = (ulong *)FUN_00426d40(*(undefined8 *)(param_1 + 0x14),8);
  *puVar7 = uVar10 & 0xfffffffffffffffe;
  FUN_0043d280(auStack_60);
  lVar5 = local_68;
  uVar1 = local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar5) && (local_70 != (int *)0x0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_70,4,uVar1 & 0x3fffffff);
  }
LAB_004c1a50:
  local_70 = param_1;
  lVar5 = FUN_004bde20(param_2,&local_70);
  if (lVar5 != 0) {
    FUN_004be060(param_2,lVar5);
  }
  return 0;
}

