
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_032141cc(long param_1,byte *param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined8 local_100;
  undefined1 *local_f8;
  undefined8 *******local_f0;
  undefined8 *******pppppppuStack_e8;
  undefined8 *******local_e0;
  undefined8 *******local_d8;
  undefined8 *******local_d0;
  undefined8 ******local_c8;
  undefined8 *****local_c0;
  undefined8 ****local_b8;
  undefined8 ***local_b0;
  undefined8 **local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [80];
  
  if (*(int *)(param_1 + 0x1c4f0) != 5) {
    if (*(int *)(param_1 + 0x1c4f0) != 4) {
      return 0;
    }
    if (param_3 == 0) {
      return 0;
    }
    bVar6 = *(byte *)(param_1 + 0x1f8);
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    *(undefined4 *)(param_1 + 0x1c4f0) = 5;
    goto LAB_03214228;
  }
  if (param_3 == 1) {
    local_100 = 0;
    local_f8 = (undefined1 *)0x0;
    local_e0 = &local_d8;
    local_d8 = &local_d0;
    local_f0 = &local_e0;
    local_d0 = &local_c8;
    local_c8 = &local_c0;
    local_c0 = &local_b8;
    local_b8 = &local_b0;
    local_b0 = &local_a8;
    local_a8 = &local_a0;
    local_a0 = &local_98;
    local_98 = 0;
    if (auStack_90 != (undefined1 *)0x0) {
      local_100 = 0xa00000000;
      local_f8 = auStack_90;
    }
    pppppppuStack_e8 = local_f0;
    FUN_0321ca40(param_1,&local_100,1);
    uVar1 = (uint)local_100;
  }
  else {
    uVar1 = ((((((((-((int)~*(uint *)(param_1 + 0x1c370) >> 0x1f) -
                   ((int)~*(uint *)(param_1 + 0x1c37c) >> 0x1f)) -
                  ((int)~*(uint *)(param_1 + 0x1c388) >> 0x1f)) -
                 ((int)~*(uint *)(param_1 + 0x1c394) >> 0x1f)) -
                ((int)~*(uint *)(param_1 + 0x1c3a0) >> 0x1f)) -
               ((int)~*(uint *)(param_1 + 0x1c3ac) >> 0x1f)) -
              ((int)~*(uint *)(param_1 + 0x1c3b8) >> 0x1f)) -
             ((int)~*(uint *)(param_1 + 0x1c3c4) >> 0x1f)) -
            ((int)~*(uint *)(param_1 + 0x1c3d0) >> 0x1f)) -
            ((int)~*(uint *)(param_1 + 0x1c3dc) >> 0x1f);
  }
  if (uVar1 != 0) {
    bVar6 = *(byte *)(param_1 + 0x1f8);
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    uVar2 = (ulong)local_100 >> 8;
    local_100 = CONCAT71((int7)uVar2,bVar6);
    if (*(char *)(param_1 + 0x1c4c0) == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0267c230(&local_100);
      if (uVar1 <= uVar3) goto LAB_03214430;
    }
    uVar4 = FUN_026731d0(&local_100);
    if ((uVar4 < uVar1 - uVar3) &&
       (iVar5 = FUN_02679fe0(&local_100,*(undefined4 *)(param_1 + 0x1c4c8),
                             (uint)*(byte *)(param_1 + 0x1c380) + (uint)*(byte *)(param_1 + 0x1c374)
                             + (uint)*(byte *)(param_1 + 0x1c38c) +
                               (uint)*(byte *)(param_1 + 0x1c398) +
                             (uint)*(byte *)(param_1 + 0x1c3a4) + (uint)*(byte *)(param_1 + 0x1c3b0)
                             + (uint)*(byte *)(param_1 + 0x1c3bc) +
                             (uint)*(byte *)(param_1 + 0x1c3c8) + (uint)*(byte *)(param_1 + 0x1c3d4)
                             + (uint)*(byte *)(param_1 + 0x1c3e0)), iVar5 < (int)(uVar1 - uVar3))) {
      bVar6 = *(byte *)(param_1 + 0x1f8);
      uVar7 = 2;
      if (*(char *)(param_1 + 0x1c4c0) != '\0') {
        uVar7 = 3;
      }
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      *(undefined4 *)(param_1 + 0x1c4f0) = uVar7;
LAB_03214228:
      *param_2 = bVar6;
      uVar1 = *(uint *)(param_1 + 0x1c4f0);
      if (5 < uVar1) {
        uVar1 = 0;
      }
      *(undefined8 *)(param_2 + 0x10) = (&DAT_05721af8)[(long)(int)uVar1 * 2];
      *(long *)(param_2 + 0x28) = param_1 + 0x1c4d0;
      return 1;
    }
  }
LAB_03214430:
  iVar5 = *(int *)(param_1 + 0x1c318);
  if (param_3 == 1) {
    if (iVar5 == -1) {
      iVar5 = 5;
LAB_0321447c:
      *(int *)(param_1 + 0x1c318) = iVar5;
      return 0;
    }
  }
  else if (iVar5 == -1) {
    iVar5 = 4;
    goto LAB_0321447c;
  }
  return 0;
}

