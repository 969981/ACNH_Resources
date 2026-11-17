
void FUN_02ccabdc(long *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 local_38;
  
  local_38 = 0xfffe;
  FUN_0277d4ac(&local_38);
  (**(code **)(*param_1 + 0x3d8))(param_1,&local_38,1);
  param_2[2] = (undefined4)local_38;
  param_2[3] = local_38._4_4_;
  (**(code **)(*param_1 + 0x3d8))(param_1,&local_38,2);
  param_2[4] = (undefined4)local_38;
  param_2[5] = local_38._4_4_;
  (**(code **)(*param_1 + 0x3d8))(param_1,&local_38,0);
  *param_2 = (undefined4)local_38;
  param_2[1] = local_38._4_4_;
  (**(code **)(*param_1 + 0x3d8))(param_1,&local_38,6);
  param_2[10] = (undefined4)local_38;
  param_2[0xb] = local_38._4_4_;
  (**(code **)(*param_1 + 0x3d8))(param_1,&local_38,7);
  param_2[0xc] = (undefined4)local_38;
  param_2[0xd] = local_38._4_4_;
  (**(code **)(*param_1 + 0x3d8))(param_1,&local_38,8);
  param_2[0xe] = (undefined4)local_38;
  param_2[0xf] = local_38._4_4_;
  (**(code **)(*param_1 + 0x3d8))(param_1,&local_38,3);
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_38);
  if (*(long *)puVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      puVar4 = param_2 + 6;
      goto LAB_02ccad70;
    }
  }
  (**(code **)(*param_1 + 0x3d8))(param_1,&local_38,4);
  param_2[6] = (undefined4)local_38;
  param_2[7] = local_38._4_4_;
  (**(code **)(*param_1 + 0x3d8))(param_1,&local_38,5);
  puVar4 = param_2 + 8;
LAB_02ccad70:
  *puVar4 = (undefined4)local_38;
  puVar4[1] = local_38._4_4_;
  uVar3 = (**(code **)(*param_1 + 0x450))(param_1);
  if ((uVar3 & 1) != 0) {
    (**(code **)(*param_1 + 0x3d8))(param_1,&local_38,9);
    param_2[0x10] = (undefined4)local_38;
    param_2[0x11] = local_38._4_4_;
  }
  return;
}

