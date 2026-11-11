
void FUN_0044d230(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                 long param_6,uint param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 local_98;
  long local_90;
  ulong local_88;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_44;
  
  FUN_0044d3e0(param_1,param_2,param_3,param_6,param_7 & 1,param_8);
  iVar3 = (int)((ulong)(param_5 - param_4) >> 4);
  lVar4 = *(long *)(*param_1 + 0x20);
  local_44 = 0;
  if (0 < iVar3) {
    if (param_6 == 0) {
      do {
        puVar1 = (undefined8 *)(param_4 + (long)local_44 * 0x10);
        local_58 = *puVar1;
        uStack_50 = puVar1[1];
        local_98 = *(undefined8 *)(lVar4 + (long)local_44 * 8);
        local_90 = 0;
        local_88 = 0;
        iVar2 = FUN_00440780(&local_98,&local_58);
        if ((local_88 & 1) != 0) {
          FUN_0043dd50(local_88 & 0xfffffffffffffffe);
        }
        if (iVar2 < 0) goto LAB_0044d35c;
        local_44 = local_44 + 1;
      } while (local_44 < iVar3);
    }
    else {
      do {
        puVar1 = (undefined8 *)(param_4 + (long)local_44 * 0x10);
        local_58 = *puVar1;
        uStack_50 = puVar1[1];
        local_98 = *(undefined8 *)(lVar4 + (long)local_44 * 8);
        local_90 = param_6;
        local_88 = FUN_00428370(param_6);
        if ((local_88 & 1) != 0) {
          FUN_0043dd30(local_88 & 0xfffffffffffffffe);
        }
        iVar2 = FUN_00440780(&local_98,&local_58);
        if ((local_88 & 1) != 0) {
          FUN_0043dd50(local_88 & 0xfffffffffffffffe);
        }
        if (iVar2 < 0) {
LAB_0044d35c:
          if (1 < DAT_04c6f828) {
            FUN_00444bc0(&local_98,&DAT_04c6f7d8,2);
            lVar4 = FUN_004446b0(&local_98,"Invalid value for element {}: \'{}\'",&DAT_04861850,
                                 &local_44,&local_58);
            *(char **)(lVar4 + 0x28) =
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp"
            ;
            *(undefined8 *)(lVar4 + 0x30) = 0x1a7;
            FUN_00444c00(&local_98);
          }
          FUN_00440b30(param_1,3,1);
          return;
        }
        local_44 = local_44 + 1;
      } while (local_44 < iVar3);
    }
  }
  return;
}

