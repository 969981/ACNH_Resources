
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01f9d6fc(long param_1,undefined4 *param_2,long param_3,int param_4,long param_5)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint *puVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint *local_58;
  
  uVar4 = FUN_0277e294(param_2);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (((*(int *)(param_1 + 0xaf88) == 0) && (*(int *)(*(long *)(param_1 + 8) + 0x750) == 0)) &&
     (param_4 != 4)) {
    *(uint *)(param_1 + 0xafb0) = *(uint *)(param_1 + 0xafb0) | 2;
  }
  puVar1 = PTR_DAT_04bb43c0;
  local_58 = (uint *)0x0;
  local_68 = PTR_DAT_04bc0510 + 0x10;
  local_60 = *param_2;
  uStack_5c = param_2[1];
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar1 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_2);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
         (puVar5 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8),
         puVar5 != (uint *)0x0)) {
        local_58 = puVar5;
      }
    }
  }
  iVar3 = FUN_01ae7550(&local_68);
  if ((iVar3 == 0xd) && (iVar3 = FUN_01b10e00(&local_68), iVar3 == 9)) {
    uVar4 = FUN_01f9da7c(param_1,param_3);
    goto joined_r0x01f9da74;
  }
  if (local_58 == (uint *)0x0) goto LAB_01f9da2c;
  uVar2 = *local_58;
  uVar7 = 0;
  if ((uVar2 != 0) && (local_58 != (uint *)(ulong)uVar2)) {
    puVar5 = (uint *)((long)local_58 - (long)(ulong)uVar2);
    uVar7 = 0;
    if (*puVar5 != 0) {
      uVar2 = puVar5[1];
      if ((uVar2 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
        lVar8 = 0xc;
        if (*(char *)((long)puVar5 + 10) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar5 + lVar8 + (ulong)(ushort)puVar5[2] * 8;
        if (lVar8 != 0) {
          uVar7 = 0;
          if ((ulong)uVar2 != 0) {
            uVar7 = (uint)((ulong)((long)local_58 - lVar8) / (ulong)uVar2);
          }
          if (*puVar5 <= uVar7) {
            uVar7 = 0xffffffff;
          }
          if ((uVar7 < DAT_05326d48) &&
             (uVar7 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar7 * 2), uVar7 < 0x52))
          goto LAB_01f9d8e0;
        }
      }
      uVar7 = 0;
    }
  }
LAB_01f9d8e0:
  if (uVar7 - 1 < 9) {
    uVar4 = FUN_01f9db88(param_1,param_2,param_3,param_5 != 0);
    goto joined_r0x01f9da74;
  }
  uVar2 = *local_58;
  uVar6 = 0;
  if ((uVar2 != 0) && (local_58 != (uint *)(ulong)uVar2)) {
    puVar5 = (uint *)((long)local_58 - (long)(ulong)uVar2);
    uVar6 = 0;
    if (*puVar5 != 0) {
      uVar2 = puVar5[1];
      if ((uVar2 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
        lVar8 = 0xc;
        if (*(char *)((long)puVar5 + 10) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar5 + lVar8 + (ulong)(ushort)puVar5[2] * 8;
        if (lVar8 != 0) {
          uVar7 = 0;
          if ((ulong)uVar2 != 0) {
            uVar7 = (uint)((ulong)((long)local_58 - lVar8) / (ulong)uVar2);
          }
          if (*puVar5 <= uVar7) {
            uVar7 = 0xffffffff;
          }
          if ((uVar7 < DAT_05326d48) &&
             (uVar6 = *(ushort *)(DAT_05326d50 + (long)(int)uVar7 * 2), uVar6 < 0x52))
          goto LAB_01f9da30;
        }
      }
LAB_01f9da2c:
      uVar6 = 0;
    }
  }
LAB_01f9da30:
  if ((uVar6 & 0xfffe) == 10) {
    uVar4 = FUN_01f9de30();
  }
  else if (param_5 == 0) {
    uVar4 = FUN_01f9e120(param_1,param_2,param_3);
  }
  else {
    uVar4 = FUN_01f9f0d0();
  }
joined_r0x01f9da74:
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xaf8c) = 2;
  *(undefined4 *)(param_1 + 0xb09c) = 0x1518;
  *(undefined2 *)(param_1 + 0x11fc8) = *(undefined2 *)param_2;
  *(undefined1 *)(param_1 + 0x11fca) = *(undefined1 *)((long)param_2 + 2);
  *(undefined1 *)(param_1 + 0x11fcb) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(param_1 + 0x11fcc) = param_2[1];
  *(undefined4 *)(param_1 + 0x11fe0) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(param_1 + 0x11fe4) = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(param_1 + 0x11ff0) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(param_1 + 0x11ff4) = *(undefined4 *)(param_3 + 0x24);
  return 1;
}

