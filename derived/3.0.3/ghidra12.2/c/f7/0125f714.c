
undefined8 FUN_0125f714(float *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_18;
  
  lVar5 = *(long *)PTR_DAT_04bb27a8;
  if (lVar5 == 0) {
    return 0;
  }
  if (*(char *)(lVar5 + 0x4b30) != '\0') {
    uVar1 = *(uint *)(lVar5 + 0x4b34);
    lVar5 = FUN_01260194(0xe7);
    local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar1);
    if ((uVar1 < *(uint *)(lVar5 + 0x420)) &&
       (lVar5 = *(long *)(*(long *)(lVar5 + 0x428) + (long)(int)uVar1 * 8), lVar5 != 0)) {
      plVar6 = (long *)(lVar5 + 0xd0);
      piVar4 = (int *)(**(code **)(*plVar6 + 0xf0))(plVar6);
      iVar2 = *piVar4;
      lVar5 = (**(code **)(*plVar6 + 0xf0))(plVar6);
      local_58 = PTR_DAT_04bbc1a0 + 0x10;
      iVar3 = *(int *)(lVar5 + 4);
      puStack_50 = PTR_DAT_04bb2010 + 0x10;
      local_48 = 0;
      local_38 = 0;
      local_18 = 0xf61f;
      local_40 = puStack_50;
      FUN_0277d4ac(&local_18);
      local_68 = PTR_DAT_04bc35c0 + 0x10;
      local_60 = (undefined4)local_18;
      uStack_5c = local_18._4_4_;
      FUN_0263fe7c(&local_68,&local_58);
      param_1[1] = 0.0;
      *param_1 = ((float)((int)local_48 + iVar2) * 5.0 + (float)((int)local_38 + iVar2) * 5.0 + 5.0)
                 * 0.5;
      param_1[2] = ((float)(local_48._4_4_ + iVar3) * 5.0 +
                   (float)(local_38._4_4_ + iVar3) * 5.0 + 5.0) * 0.5;
      return 1;
    }
  }
  return 0;
}

