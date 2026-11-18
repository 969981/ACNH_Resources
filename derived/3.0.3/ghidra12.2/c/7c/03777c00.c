
/* WARNING: Removing unreachable block (ram,0x03777d08) */

undefined8 FUN_03777c00(byte *param_1,uint *param_2,uint param_3)

{
  short sVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined *local_78;
  undefined1 *puStack_70;
  undefined4 local_68;
  undefined1 local_64 [7];
  undefined1 local_5d;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar5 = (ulong)*param_1;
  if (((0x22 < uVar5) || ((byte)PTR_DAT_04bc27f0[uVar5] < param_1[1])) ||
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar5 * 4) >> (ulong)(param_1[1] & 0x1f) & 1) == 0)) {
    return 0;
  }
  local_5d = 0;
  local_68 = 8;
  local_64[0] = 0;
  puStack_70 = local_64;
  local_78 = PTR_DAT_04bb3768 + 0x10;
  FUN_038d1270(&local_78,"-----");
  if ((ulong)*param_1 < 0x23) {
    FUN_038d1270(&local_78,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_1 * 8 + 0xb0),
                 param_1[1]);
  }
  sVar1 = FUN_0376baa0(&local_78);
  if (sVar1 == -1) {
    return 0;
  }
  lVar6 = *(long *)PTR_DAT_04bb46b0;
  if (lVar6 == 0) {
    lVar6 = 0;
    lVar2 = lRam0000000000000060;
    if (lRam0000000000000060 == 0) goto LAB_03777d5c;
LAB_03777d7c:
    if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
      lVar2 = *(long *)(lVar6 + 0x60);
      uVar5 = uVar5 & 0xffffffff;
      if (lVar2 == 0) goto LAB_03777dcc;
    }
    plVar3 = *(long **)(lVar2 + 0x20);
    if (plVar3 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar6 + 0x40);
      uStack_50 = *(undefined8 *)(lVar6 + 0x48);
      local_48 = 0x20;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
    }
  }
  else {
    local_58 = CONCAT44(local_58._4_4_,1);
    if (((*(byte *)(lVar6 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar2 = (**(code **)(**(long **)(*(long *)(lVar6 + 0x10) + 0x188) + 0x30))();
    }
    else {
      lVar2 = 0;
    }
    lVar6 = 0;
    if (lVar2 != 0) {
      lVar6 = lVar2 + 0xa8;
    }
    lVar2 = *(long *)(lVar6 + 0x60);
    if (*(long *)(lVar6 + 0x60) != 0) goto LAB_03777d7c;
LAB_03777d5c:
    uVar5 = 0;
  }
LAB_03777dcc:
  if (((*param_2 == 0) || (*param_2 == 1)) || (*param_2 == 2)) {
    if (*param_2 != 0) {
      if (*param_2 == 1) {
        param_3 = param_3 + 9;
      }
      else {
        if (*param_2 != 2) {
          uVar9 = 0;
          goto joined_r0x03777e98;
        }
        param_3 = param_3 + 0xf;
      }
    }
    if (*param_2 < 3) {
      lVar2 = (long)(int)*param_2 * 4;
      iVar7 = *(int *)(&DAT_04199078 + lVar2);
      iVar8 = *(int *)(&DAT_04199084 + lVar2);
    }
    else {
      iVar7 = 0;
      iVar8 = 0;
    }
    uVar9 = 0;
    if (((int)param_3 < iVar7) || (iVar8 <= (int)param_3)) goto joined_r0x03777e98;
    *(short *)(*(long *)(lVar6 + 0x48) + *(long *)(lVar6 + 0x40) + (ulong)param_3 * 2) = sVar1;
  }
  uVar9 = 1;
joined_r0x03777e98:
  if ((uVar5 & 1) == 0) {
    return uVar9;
  }
  if (*(long *)(lVar6 + 0x60) == 0) {
    return uVar9;
  }
  puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x60) + 0x18);
  if (puVar4 == (undefined8 *)0x0) {
    return uVar9;
  }
  (**(code **)*puVar4)();
  return uVar9;
}

